"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

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

import sys
import re
from intrinsic_decorator import IntrinsicDecorator
import inst
import json
from generator import Generator

type_regex = re.compile(r"[ifu]\d+m(f?)(\d+)(x(\d+))?")
def type_parts(t):
  parts = re.match(type_regex, t)
  mul = int(parts.group(2))
  if parts.group(1) == "f":
    mul = 1/mul
  count = parts.group(4)
  count = int(count) if count!=None else 1
  return [mul, count]
  
def func_arg_info(func_name):
  res = {
    "vxrm": {"info": "range: [0;3]"}, # TODO replace with more proper note
    "frm": {"info": "range: [0;4]; __RISCV_FRM"},
  }
  if "_vget_" in func_name or "_vset_" in func_name:
    [st,dt] = func_name.split("_")[-2:]
    [sm, sx] = type_parts(st)
    [dm, dx] = type_parts(dt)
    if sm==dm and sx!=dx and dx==1: # TODO remove 'and dx==1'
      res["index"] = {"info": "range: [0;%s]" % int(max(dx/sx, sx/dx) - 1)}
    elif sm!=dm and sx==dx:
      res["index"] = {"info": "range: [0;%s]" % int(max(dm/sm, sm/dm) - 1)}
    else:
      pass # raise Exception('unexpected types for '+func_name) # TODO uncomment when above TODO is completed
  
  
  return res

class JsonGenerator(Generator):
  def __init__(self, f):
    super().__init__()
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
      "archs": ["rvv"],
      "desc": self.curr_desc,
      "categories": [self.curr_category],
      # "policies": [],
      "implDesc": self.curr_link,
    }
    if Generator.is_support_overloaded(name, **kwargs):
      obj["overloaded"] = Generator.get_overloaded_op_name(name)
    
    if name_base in self.curr_intrinsic_map:
      # self.curr_intrinsic_map[name_base]["policies"].append(suffix);
      return
    else:
      self.curr_intrinsic_map[name_base] = obj
    
  @staticmethod
  def cleanup_title(title):
    return title.replace("`","").replace(" Functions", "")
  
  def start_group(self, group_name):
    self.curr_group = JsonGenerator.cleanup_title(group_name);
    super().start_group(group_name)
  
  def section_comment(self, comment):
    self.curr_category = self.curr_category0 + "|" + comment
    self.curr_desc = comment
  
  def function_group(self, template, title, link, op_list, type_list, sew_list,
                     lmul_list, decorator_list):
    if len(decorator_list)>0:
      decorator_list = sorted(decorator_list, key=lambda d: len(d.func_suffix)) # put no-policy version first
    
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
        decorator_list=decorator_list)
    
    for (k, obj) in self.curr_intrinsic_map.items():
      if (self.any_element):
        self.fd.write(",")
      else:
        self.any_element = True
      self.fd.write(json.dumps(obj, separators=(",", ":")))
      # self.fd.write(json.dumps(obj, indent=2))
      # self.fd.write(",\n");

  def decorator_group(self, decorator):
    self.curr_decorator = decorator


def main():
  with open(sys.argv[1], "w", encoding="utf-8") as f:
    g = JsonGenerator(f)
    f.write("[")
    inst.gen(g)
    f.write("]")
    g.report_summary()


if __name__ == "__main__":
  if not (sys.version_info.major == 3 and sys.version_info.minor >= 6):
    print("This script requires Python 3.6 or higher!")
    sys.exit(1)
  main()
