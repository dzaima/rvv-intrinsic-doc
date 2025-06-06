// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vssseg6e16_v_f16mf4x6(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf4x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_f16mf2x6(_Float16 *rs1, ptrdiff_t rs2,
                                vfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf2x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_f16m1x6(_Float16 *rs1, ptrdiff_t rs2, vfloat16m1x6_t vs3,
                               size_t vl) {
  return __riscv_vssseg6e16_v_f16m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16mf4x6(int16_t *rs1, ptrdiff_t rs2, vint16mf4x6_t vs3,
                                size_t vl) {
  return __riscv_vssseg6e16_v_i16mf4x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16mf2x6(int16_t *rs1, ptrdiff_t rs2, vint16mf2x6_t vs3,
                                size_t vl) {
  return __riscv_vssseg6e16_v_i16mf2x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16m1x6(int16_t *rs1, ptrdiff_t rs2, vint16m1x6_t vs3,
                               size_t vl) {
  return __riscv_vssseg6e16_v_i16m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16mf4x6(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf4x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16mf2x6(uint16_t *rs1, ptrdiff_t rs2,
                                vuint16mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf2x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16m1x6(uint16_t *rs1, ptrdiff_t rs2, vuint16m1x6_t vs3,
                               size_t vl) {
  return __riscv_vssseg6e16_v_u16m1x6(rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_f16mf4x6_m(vbool64_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf4x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_f16mf2x6_m(vbool32_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                  vfloat16mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf2x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_f16m1x6_m(vbool16_t vm, _Float16 *rs1, ptrdiff_t rs2,
                                 vfloat16m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_f16m1x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16mf4x6_m(vbool64_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf4x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16mf2x6_m(vbool32_t vm, int16_t *rs1, ptrdiff_t rs2,
                                  vint16mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf2x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_i16m1x6_m(vbool16_t vm, int16_t *rs1, ptrdiff_t rs2,
                                 vint16m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_i16m1x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16mf4x6_m(vbool64_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf4x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf4x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16mf2x6_m(vbool32_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                  vuint16mf2x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf2x6_m(vm, rs1, rs2, vs3, vl);
}

void test_vssseg6e16_v_u16m1x6_m(vbool16_t vm, uint16_t *rs1, ptrdiff_t rs2,
                                 vuint16m1x6_t vs3, size_t vl) {
  return __riscv_vssseg6e16_v_u16m1x6_m(vm, rs1, rs2, vs3, vl);
}
