// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tu(vfloat16mf4x7_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tu(vd, rs1, rs2, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tu(vfloat16mf2x7_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tu(vd, rs1, rs2, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tu(vfloat16m1x7_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tu(vd, rs1, rs2, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tu(vint16mf4x7_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tu(vd, rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tu(vint16mf2x7_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tu(vd, rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tu(vint16m1x7_t vd, const int16_t *rs1,
                                          ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tu(vd, rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tu(vuint16mf4x7_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tu(vd, rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tu(vuint16mf2x7_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tu(vd, rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tu(vuint16m1x7_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tu(vd, rs1, rs2, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tum(vbool64_t vm, vfloat16mf4x7_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tum(vbool32_t vm, vfloat16mf2x7_t vd,
                                               const _Float16 *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tum(vbool16_t vm, vfloat16m1x7_t vd,
                                             const _Float16 *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tum(vbool64_t vm, vint16mf4x7_t vd,
                                             const int16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tum(vbool32_t vm, vint16mf2x7_t vd,
                                             const int16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tum(vbool16_t vm, vint16m1x7_t vd,
                                           const int16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tum(vbool64_t vm, vuint16mf4x7_t vd,
                                              const uint16_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tum(vbool32_t vm, vuint16mf2x7_t vd,
                                              const uint16_t *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tum(vbool16_t vm, vuint16m1x7_t vd,
                                            const uint16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_tumu(vbool64_t vm,
                                                vfloat16mf4x7_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_tumu(vbool32_t vm,
                                                vfloat16mf2x7_t vd,
                                                const _Float16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_tumu(vbool16_t vm, vfloat16m1x7_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_tumu(vbool64_t vm, vint16mf4x7_t vd,
                                              const int16_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_tumu(vbool32_t vm, vint16mf2x7_t vd,
                                              const int16_t *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_tumu(vbool16_t vm, vint16m1x7_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_tumu(vbool64_t vm, vuint16mf4x7_t vd,
                                               const uint16_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_tumu(vbool32_t vm, vuint16mf2x7_t vd,
                                               const uint16_t *rs1,
                                               ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_tumu(vbool16_t vm, vuint16m1x7_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4x7_t test_vlsseg7e16_v_f16mf4x7_mu(vbool64_t vm, vfloat16mf4x7_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf4x7_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2x7_t test_vlsseg7e16_v_f16mf2x7_mu(vbool32_t vm, vfloat16mf2x7_t vd,
                                              const _Float16 *rs1,
                                              ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg7e16_v_f16mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1x7_t test_vlsseg7e16_v_f16m1x7_mu(vbool16_t vm, vfloat16m1x7_t vd,
                                            const _Float16 *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_f16m1x7_mu(vm, vd, rs1, rs2, vl);
}

vint16mf4x7_t test_vlsseg7e16_v_i16mf4x7_mu(vbool64_t vm, vint16mf4x7_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf4x7_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2x7_t test_vlsseg7e16_v_i16mf2x7_mu(vbool32_t vm, vint16mf2x7_t vd,
                                            const int16_t *rs1, ptrdiff_t rs2,
                                            size_t vl) {
  return __riscv_vlsseg7e16_v_i16mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vint16m1x7_t test_vlsseg7e16_v_i16m1x7_mu(vbool16_t vm, vint16m1x7_t vd,
                                          const int16_t *rs1, ptrdiff_t rs2,
                                          size_t vl) {
  return __riscv_vlsseg7e16_v_i16m1x7_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4x7_t test_vlsseg7e16_v_u16mf4x7_mu(vbool64_t vm, vuint16mf4x7_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf4x7_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2x7_t test_vlsseg7e16_v_u16mf2x7_mu(vbool32_t vm, vuint16mf2x7_t vd,
                                             const uint16_t *rs1, ptrdiff_t rs2,
                                             size_t vl) {
  return __riscv_vlsseg7e16_v_u16mf2x7_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1x7_t test_vlsseg7e16_v_u16m1x7_mu(vbool16_t vm, vuint16m1x7_t vd,
                                           const uint16_t *rs1, ptrdiff_t rs2,
                                           size_t vl) {
  return __riscv_vlsseg7e16_v_u16m1x7_mu(vm, vd, rs1, rs2, vl);
}
