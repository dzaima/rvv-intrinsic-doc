"""
--------------------------------------------------------------------------------
Copyright 2024 dzaima

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------
"""

import argparse
import sys
import re
from intrinsic_decorator import IntrinsicDecorator
import inst
import bfloat16_inst
import json
from generator import Generator

type_regex = re.compile(r"([ifu]\d+|bf16)m(f?)(\d+)(x(\d+))?")
def type_parts(t):
  parts = re.match(type_regex, t)
  mul = int(parts.group(3))
  if parts.group(1) == "f":
    mul = 1/mul
  count = parts.group(5)
  count = int(count) if count!=None else 1
  return [mul, count]
  
def func_arg_info(func_name):
  res = {
    "vxrm": {"info": "__RISCV_VXRM"},
    "frm": {"info": "__RISCV_FRM"},
  }
  if "_vget_" in func_name or "_vset_" in func_name:
    [st,dt] = func_name.split("_")[-2:]
    [sm, sx] = type_parts(st)
    [dm, dx] = type_parts(dt)
    if sm==dm and sx!=dx:
      res["index"] = {"info": "range: [0;%s]" % int(max(dx/sx, sx/dx) - 1)}
    elif sm!=dm and sx==dx:
      res["index"] = {"info": "range: [0;%s]" % int(max(dm/sm, sm/dm) - 1)}
    else:
      raise Exception('unexpected types for '+func_name)
  
  
  return res

class JsonGenerator(Generator):
  def __init__(self, f, pretty):
    super().__init__()
    self.pretty = pretty
    self.has_tail_policy = True
    self.has_both_policies = True
    self.fd = f
    self.any_element = False
  
    
  
  def proc_arg(self, arg_info, item):
    (n, t) = item
    res = {"type": t, "name": n}
    if n in arg_info:
      res["info"] = arg_info[n]["info"]
    return res
  
  def func(self, inst_info, name, return_type, **kwargs):
    self.generated_functions_set.add(name)
    
    name_full = Generator.func_name(name)
    
    # self.curr_intrinsics.append((inst_info, name, return_type, kwargs))
    suffix = self.curr_decorator.func_suffix
    if not name_full.endswith(suffix):
      raise Exception(F"Expected {name_full} to end with {suffix}")
    name_base = name_full if len(suffix)==0 else name_full[:-len(suffix)]
    
    arg_info = func_arg_info(name_base)
    obj = {
      "ret": {"type": return_type},
      "name": name_full,
      "args": [self.proc_arg(arg_info, x) for x in list(kwargs.items())],
      "desc": self.curr_desc,
      "categories": [self.curr_category],
      "policies": [],
      "implDesc": self.curr_link,
    }
    if Generator.is_support_overloaded(name, **kwargs):
      obj["overloaded"] = Generator.get_overloaded_op_name(name)
    
    if name_base in self.curr_intrinsic_map:
      base = self.curr_intrinsic_map[name_base]
      def compress_arg(a):
        for i in range(len(base["args"])):
          p = base["args"][i]
          if p == a:
            return i
          if a["name"]=="mask" and a["type"].startswith("vbool"):
            return a["type"]
          if a["name"].startswith("maskedoff") and not a["type"].startswith("vbool"):
            return a["type"]
        return a
      if obj["ret"] != base["ret"]:
        raise Exception(F"Variation return type not equal to base for {name_full}")
      base["policies"].append({
        "s": suffix,
        "a": list(map(compress_arg, obj["args"]))
      });
      return
    else:
      self.curr_intrinsic_map[name_base] = obj
    
  @staticmethod
  def cleanup_title(title):
    return title.replace("`","").replace(" Functions", "")
  
  def gen_prologue(self):
    pass
  def inst_group_prologue(self):
    pass
  def inst_group_epilogue(self):
    pass

  def start_group(self, group_name):
    self.curr_group = JsonGenerator.cleanup_title(group_name);
  
  def section_comment(self, comment):
    self.curr_category = self.curr_category0 + "|" + comment
    self.curr_desc = comment
  
  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list, description=None, required_ext_list=None):
    if len(decorator_list)>0:
      decorator_list = sorted(decorator_list, key=lambda d: len(d.func_suffix) + (99 if "rm" in d.func_suffix else 0)) # put no-policy version first, and no-rm version very first
    
    self.curr_link = link
    self.curr_desc = JsonGenerator.cleanup_title(title)
    self.curr_category0 = self.curr_group + "|" + self.curr_desc
    self.curr_category = self.curr_category0
    self.curr_policies = decorator_list
    self.curr_decorator = IntrinsicDecorator()
    self.curr_intrinsic_map = {}
    
    
    template.render(
        G=self,
        op_list=op_list,
        type_list=type_list,
        sew_list=sew_list,
        lmul_list=lmul_list,
        decorator_list=decorator_list,
        description=None)
    
    for (k, obj) in self.curr_intrinsic_map.items():
      if (self.any_element):
        self.fd.write(",")
      else:
        self.any_element = True
      
      if self.pretty:
        self.fd.write("\n");
        self.fd.write(json.dumps(obj, indent=2))
      else:
        self.fd.write(json.dumps(obj, separators=(",", ":")))

  def decorator_group(self, decorator):
    self.curr_decorator = decorator


def main():
  parser = argparse.ArgumentParser()
  parser.add_argument("--pretty", action='store_true')
  parser.add_argument("--out")
  args = parser.parse_args()
  
  with open(args.out, "w", encoding="utf-8") as f:
    g = JsonGenerator(f, args.pretty)
    f.write("[")
    inst.gen(g)
    bfloat16_inst.gen(g)
    f.write("]")
    g.report_summary()


if __name__ == "__main__":
  if not (sys.version_info.major == 3 and sys.version_info.minor >= 6):
    print("This script requires Python 3.6 or higher!")
    sys.exit(1)
  main()
