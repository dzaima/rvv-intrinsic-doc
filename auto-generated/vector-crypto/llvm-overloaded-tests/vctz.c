// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone \
// RUN:   -target-feature +zvbb \
// RUN:   -target-feature +zve64x \
// RUN:   -target-feature +experimental \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8mf8_t test_vctz_v_u8mf8(vuint8mf8_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8mf4_t test_vctz_v_u8mf4(vuint8mf4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8mf2_t test_vctz_v_u8mf2(vuint8mf2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8m1_t test_vctz_v_u8m1(vuint8m1_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8m2_t test_vctz_v_u8m2(vuint8m2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8m4_t test_vctz_v_u8m4(vuint8m4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8m8_t test_vctz_v_u8m8(vuint8m8_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16mf4_t test_vctz_v_u16mf4(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16mf2_t test_vctz_v_u16mf2(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16m1_t test_vctz_v_u16m1(vuint16m1_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16m2_t test_vctz_v_u16m2(vuint16m2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16m4_t test_vctz_v_u16m4(vuint16m4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint16m8_t test_vctz_v_u16m8(vuint16m8_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint32mf2_t test_vctz_v_u32mf2(vuint32mf2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint32m1_t test_vctz_v_u32m1(vuint32m1_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint32m2_t test_vctz_v_u32m2(vuint32m2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint32m4_t test_vctz_v_u32m4(vuint32m4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint32m8_t test_vctz_v_u32m8(vuint32m8_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint64m1_t test_vctz_v_u64m1(vuint64m1_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint64m2_t test_vctz_v_u64m2(vuint64m2_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint64m4_t test_vctz_v_u64m4(vuint64m4_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint64m8_t test_vctz_v_u64m8(vuint64m8_t vs2, size_t vl) {
  return __riscv_vctz(vs2, vl);
}

vuint8mf8_t test_vctz_v_u8mf8_m(vbool64_t vm, vuint8mf8_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8mf4_t test_vctz_v_u8mf4_m(vbool32_t vm, vuint8mf4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8mf2_t test_vctz_v_u8mf2_m(vbool16_t vm, vuint8mf2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8m1_t test_vctz_v_u8m1_m(vbool8_t vm, vuint8m1_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8m2_t test_vctz_v_u8m2_m(vbool4_t vm, vuint8m2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8m4_t test_vctz_v_u8m4_m(vbool2_t vm, vuint8m4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint8m8_t test_vctz_v_u8m8_m(vbool1_t vm, vuint8m8_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16mf4_t test_vctz_v_u16mf4_m(vbool64_t vm, vuint16mf4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16mf2_t test_vctz_v_u16mf2_m(vbool32_t vm, vuint16mf2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16m1_t test_vctz_v_u16m1_m(vbool16_t vm, vuint16m1_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16m2_t test_vctz_v_u16m2_m(vbool8_t vm, vuint16m2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16m4_t test_vctz_v_u16m4_m(vbool4_t vm, vuint16m4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint16m8_t test_vctz_v_u16m8_m(vbool2_t vm, vuint16m8_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint32mf2_t test_vctz_v_u32mf2_m(vbool64_t vm, vuint32mf2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint32m1_t test_vctz_v_u32m1_m(vbool32_t vm, vuint32m1_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint32m2_t test_vctz_v_u32m2_m(vbool16_t vm, vuint32m2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint32m4_t test_vctz_v_u32m4_m(vbool8_t vm, vuint32m4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint32m8_t test_vctz_v_u32m8_m(vbool4_t vm, vuint32m8_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint64m1_t test_vctz_v_u64m1_m(vbool64_t vm, vuint64m1_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint64m2_t test_vctz_v_u64m2_m(vbool32_t vm, vuint64m2_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint64m4_t test_vctz_v_u64m4_m(vbool16_t vm, vuint64m4_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}

vuint64m8_t test_vctz_v_u64m8_m(vbool8_t vm, vuint64m8_t vs2, size_t vl) {
  return __riscv_vctz(vm, vs2, vl);
}
