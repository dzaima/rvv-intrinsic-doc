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

Template for rendering segment store instructions to their corresponding
intrinsics.
"""

#pylint: disable=relative-beyond-top-level
from utils import prod
from utils import seg_constraint
from utils import TypeHelper
from utils import get_string_lmul
from utils import seg_arg
import collections
from enums import InstInfo
from enums import InstType
from enums import MemType
from generator import CompatibleHeaderGenerator


def render(G,
           op_list,
           type_list,
           sew_list,
           lmul_list,
           decorator_list,
           description,
           required_ext_list=None):
  #pylint: disable=invalid-name
  # FIXME: Renaming 'G' to 'g' all in once later.
  G.emit_function_group_description(description)
  G.inst_group_prologue()
  nf_list = range(2, 9)
  for decorator in decorator_list:
    decorator.write_text_header(G)
    for args in prod(
        constraint=seg_constraint,
        OP=op_list,
        TYPE=type_list,
        SEW=sew_list,
        EEW=sew_list,
        LMUL=lmul_list,
        NF=nf_list):
      assert args["OP"] is not None
      op = args["OP"]
      nf = str(args["NF"])
      sew = args["SEW"]
      eew = args["EEW"]

      if op not in ["vsoxseg", "vsuxseg"] and sew != eew:
        continue

      type_helper = TypeHelper(**args)

      extra_addr_args = collections.OrderedDict()
      inst_type = InstType.VX
      if op in ["vssseg"]:
        extra_addr_args["bstride"] = "ptrdiff_t"
        inst_type = InstType.VXX

      if op in ["vsoxseg", "vsuxseg"]:
        elmul = type_helper.get_elmul(eew, sew)
        if elmul == 0:
          continue
        elmul_str = get_string_lmul(elmul, 1)
        extra_addr_args["bindex"] = f"vuint{eew}m{elmul_str}_t"
        args["OP"] = op + nf + "ei" + str(eew)
        inst_type = InstType.VV
      else:
        args["OP"] = op + nf + "e" + str(eew)

      inst_info = InstInfo.get(
          args,
          decorator,
          inst_type,
          MemType.STORE,
          required_ext=required_ext_list)
      # Legacy non-tuple-type variant for the compatible header
      if isinstance(G, CompatibleHeaderGenerator):
        G.func(
            inst_info,
            name="{OP}_v_{TYPE}{SEW}m{LMUL}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.void,
            **decorator.mask_args(type_helper.m, type_helper.v, int(nf)),
            base=f"{type_helper.s} *",
            **extra_addr_args,
            **seg_arg(type_helper.v, int(nf)),
            vl=type_helper.size_t)

      # Tuple type segment store is supported for v1.0 or newer. The current
      # compatible header targets v0.10 to v0.11.
      if not isinstance(G, CompatibleHeaderGenerator):
        G.func(
            inst_info,
            name="{OP}_v_{TYPE}{SEW}m{LMUL}x{NF}".format_map(args) +
            decorator.func_suffix,
            return_type=type_helper.void,
            **decorator.mask_args(
                type_helper.m,
                type_helper.v,
                int(nf),
                is_seg_load_store_tuple_type=True),
            base=f"{type_helper.s} *",
            **extra_addr_args,
            **seg_arg(
                type_helper.v, int(nf), is_seg_load_store_tuple_type=True),
            vl=type_helper.size_t)

  G.inst_group_epilogue()
