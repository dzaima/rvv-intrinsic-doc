// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvfbfmin \
// RUN:   -target-feature +zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4x8_t test_vlseg8e16ff_v_bf16mf4x8(const __bf16 *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16mf4x8(rs1, new_vl, vl);
}

vbfloat16mf2x8_t test_vlseg8e16ff_v_bf16mf2x8(const __bf16 *rs1, size_t *new_vl,
                                              size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16mf2x8(rs1, new_vl, vl);
}

vbfloat16m1x8_t test_vlseg8e16ff_v_bf16m1x8(const __bf16 *rs1, size_t *new_vl,
                                            size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16m1x8(rs1, new_vl, vl);
}

vbfloat16mf4x8_t test_vlseg8e16ff_v_bf16mf4x8_m(vbool64_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16mf4x8_m(vm, rs1, new_vl, vl);
}

vbfloat16mf2x8_t test_vlseg8e16ff_v_bf16mf2x8_m(vbool32_t vm, const __bf16 *rs1,
                                                size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16mf2x8_m(vm, rs1, new_vl, vl);
}

vbfloat16m1x8_t test_vlseg8e16ff_v_bf16m1x8_m(vbool16_t vm, const __bf16 *rs1,
                                              size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e16ff_v_bf16m1x8_m(vm, rs1, new_vl, vl);
}
