// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16m1_t test_vget_v_f16m2_f16m1(vfloat16m2_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m4_f16m1(vfloat16m4_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m8_f16m1(vfloat16m8_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m2_t test_vget_v_f16m4_f16m2(vfloat16m4_t src, size_t index) {
  return __riscv_vget_f16m2(src, 0);
}

vfloat16m2_t test_vget_v_f16m8_f16m2(vfloat16m8_t src, size_t index) {
  return __riscv_vget_f16m2(src, 0);
}

vfloat16m4_t test_vget_v_f16m8_f16m4(vfloat16m8_t src, size_t index) {
  return __riscv_vget_f16m4(src, 0);
}

vfloat32m1_t test_vget_v_f32m2_f32m1(vfloat32m2_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m4_f32m1(vfloat32m4_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m8_f32m1(vfloat32m8_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m2_t test_vget_v_f32m4_f32m2(vfloat32m4_t src, size_t index) {
  return __riscv_vget_f32m2(src, 0);
}

vfloat32m2_t test_vget_v_f32m8_f32m2(vfloat32m8_t src, size_t index) {
  return __riscv_vget_f32m2(src, 0);
}

vfloat32m4_t test_vget_v_f32m8_f32m4(vfloat32m8_t src, size_t index) {
  return __riscv_vget_f32m4(src, 0);
}

vfloat64m1_t test_vget_v_f64m2_f64m1(vfloat64m2_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m4_f64m1(vfloat64m4_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m8_f64m1(vfloat64m8_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m2_t test_vget_v_f64m4_f64m2(vfloat64m4_t src, size_t index) {
  return __riscv_vget_f64m2(src, 0);
}

vfloat64m2_t test_vget_v_f64m8_f64m2(vfloat64m8_t src, size_t index) {
  return __riscv_vget_f64m2(src, 0);
}

vfloat64m4_t test_vget_v_f64m8_f64m4(vfloat64m8_t src, size_t index) {
  return __riscv_vget_f64m4(src, 0);
}

vint8m1_t test_vget_v_i8m2_i8m1(vint8m2_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m4_i8m1(vint8m4_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m8_i8m1(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m2_t test_vget_v_i8m4_i8m2(vint8m4_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m8_i8m2(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m4_t test_vget_v_i8m8_i8m4(vint8m8_t src, size_t index) {
  return __riscv_vget_i8m4(src, 0);
}

vint16m1_t test_vget_v_i16m2_i16m1(vint16m2_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m4_i16m1(vint16m4_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m8_i16m1(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m2_t test_vget_v_i16m4_i16m2(vint16m4_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m8_i16m2(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m4_t test_vget_v_i16m8_i16m4(vint16m8_t src, size_t index) {
  return __riscv_vget_i16m4(src, 0);
}

vint32m1_t test_vget_v_i32m2_i32m1(vint32m2_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m4_i32m1(vint32m4_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m8_i32m1(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m2_t test_vget_v_i32m4_i32m2(vint32m4_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m8_i32m2(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m4_t test_vget_v_i32m8_i32m4(vint32m8_t src, size_t index) {
  return __riscv_vget_i32m4(src, 0);
}

vint64m1_t test_vget_v_i64m2_i64m1(vint64m2_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m4_i64m1(vint64m4_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m8_i64m1(vint64m8_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m2_t test_vget_v_i64m4_i64m2(vint64m4_t src, size_t index) {
  return __riscv_vget_i64m2(src, 0);
}

vint64m2_t test_vget_v_i64m8_i64m2(vint64m8_t src, size_t index) {
  return __riscv_vget_i64m2(src, 0);
}

vint64m4_t test_vget_v_i64m8_i64m4(vint64m8_t src, size_t index) {
  return __riscv_vget_i64m4(src, 0);
}

vuint8m1_t test_vget_v_u8m2_u8m1(vuint8m2_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m4_u8m1(vuint8m4_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m8_u8m1(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m2_t test_vget_v_u8m4_u8m2(vuint8m4_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m8_u8m2(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m4_t test_vget_v_u8m8_u8m4(vuint8m8_t src, size_t index) {
  return __riscv_vget_u8m4(src, 0);
}

vuint16m1_t test_vget_v_u16m2_u16m1(vuint16m2_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m4_u16m1(vuint16m4_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m8_u16m1(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m2_t test_vget_v_u16m4_u16m2(vuint16m4_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m8_u16m2(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m4_t test_vget_v_u16m8_u16m4(vuint16m8_t src, size_t index) {
  return __riscv_vget_u16m4(src, 0);
}

vuint32m1_t test_vget_v_u32m2_u32m1(vuint32m2_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m4_u32m1(vuint32m4_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m8_u32m1(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m2_t test_vget_v_u32m4_u32m2(vuint32m4_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m8_u32m2(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m4_t test_vget_v_u32m8_u32m4(vuint32m8_t src, size_t index) {
  return __riscv_vget_u32m4(src, 0);
}

vuint64m1_t test_vget_v_u64m2_u64m1(vuint64m2_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m4_u64m1(vuint64m4_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m8_u64m1(vuint64m8_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m2_t test_vget_v_u64m4_u64m2(vuint64m4_t src, size_t index) {
  return __riscv_vget_u64m2(src, 0);
}

vuint64m2_t test_vget_v_u64m8_u64m2(vuint64m8_t src, size_t index) {
  return __riscv_vget_u64m2(src, 0);
}

vuint64m4_t test_vget_v_u64m8_u64m4(vuint64m8_t src, size_t index) {
  return __riscv_vget_u64m4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x2_f16mf4(vfloat16mf4x2_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x3_f16mf4(vfloat16mf4x3_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x4_f16mf4(vfloat16mf4x4_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x5_f16mf4(vfloat16mf4x5_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x6_f16mf4(vfloat16mf4x6_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x7_f16mf4(vfloat16mf4x7_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf4_t test_vget_v_f16mf4x8_f16mf4(vfloat16mf4x8_t src, size_t index) {
  return __riscv_vget_f16mf4(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x2_f16mf2(vfloat16mf2x2_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x3_f16mf2(vfloat16mf2x3_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x4_f16mf2(vfloat16mf2x4_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x5_f16mf2(vfloat16mf2x5_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x6_f16mf2(vfloat16mf2x6_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x7_f16mf2(vfloat16mf2x7_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16mf2_t test_vget_v_f16mf2x8_f16mf2(vfloat16mf2x8_t src, size_t index) {
  return __riscv_vget_f16mf2(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x2_f16m1(vfloat16m1x2_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x3_f16m1(vfloat16m1x3_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x4_f16m1(vfloat16m1x4_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x5_f16m1(vfloat16m1x5_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x6_f16m1(vfloat16m1x6_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x7_f16m1(vfloat16m1x7_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m1_t test_vget_v_f16m1x8_f16m1(vfloat16m1x8_t src, size_t index) {
  return __riscv_vget_f16m1(src, 0);
}

vfloat16m2_t test_vget_v_f16m2x2_f16m2(vfloat16m2x2_t src, size_t index) {
  return __riscv_vget_f16m2(src, 0);
}

vfloat16m2_t test_vget_v_f16m2x3_f16m2(vfloat16m2x3_t src, size_t index) {
  return __riscv_vget_f16m2(src, 0);
}

vfloat16m2_t test_vget_v_f16m2x4_f16m2(vfloat16m2x4_t src, size_t index) {
  return __riscv_vget_f16m2(src, 0);
}

vfloat16m4_t test_vget_v_f16m4x2_f16m4(vfloat16m4x2_t src, size_t index) {
  return __riscv_vget_f16m4(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x2_f32mf2(vfloat32mf2x2_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x3_f32mf2(vfloat32mf2x3_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x4_f32mf2(vfloat32mf2x4_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x5_f32mf2(vfloat32mf2x5_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x6_f32mf2(vfloat32mf2x6_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x7_f32mf2(vfloat32mf2x7_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32mf2_t test_vget_v_f32mf2x8_f32mf2(vfloat32mf2x8_t src, size_t index) {
  return __riscv_vget_f32mf2(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x2_f32m1(vfloat32m1x2_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x3_f32m1(vfloat32m1x3_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x4_f32m1(vfloat32m1x4_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x5_f32m1(vfloat32m1x5_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x6_f32m1(vfloat32m1x6_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x7_f32m1(vfloat32m1x7_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m1_t test_vget_v_f32m1x8_f32m1(vfloat32m1x8_t src, size_t index) {
  return __riscv_vget_f32m1(src, 0);
}

vfloat32m2_t test_vget_v_f32m2x2_f32m2(vfloat32m2x2_t src, size_t index) {
  return __riscv_vget_f32m2(src, 0);
}

vfloat32m2_t test_vget_v_f32m2x3_f32m2(vfloat32m2x3_t src, size_t index) {
  return __riscv_vget_f32m2(src, 0);
}

vfloat32m2_t test_vget_v_f32m2x4_f32m2(vfloat32m2x4_t src, size_t index) {
  return __riscv_vget_f32m2(src, 0);
}

vfloat32m4_t test_vget_v_f32m4x2_f32m4(vfloat32m4x2_t src, size_t index) {
  return __riscv_vget_f32m4(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x2_f64m1(vfloat64m1x2_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x3_f64m1(vfloat64m1x3_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x4_f64m1(vfloat64m1x4_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x5_f64m1(vfloat64m1x5_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x6_f64m1(vfloat64m1x6_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x7_f64m1(vfloat64m1x7_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m1_t test_vget_v_f64m1x8_f64m1(vfloat64m1x8_t src, size_t index) {
  return __riscv_vget_f64m1(src, 0);
}

vfloat64m2_t test_vget_v_f64m2x2_f64m2(vfloat64m2x2_t src, size_t index) {
  return __riscv_vget_f64m2(src, 0);
}

vfloat64m2_t test_vget_v_f64m2x3_f64m2(vfloat64m2x3_t src, size_t index) {
  return __riscv_vget_f64m2(src, 0);
}

vfloat64m2_t test_vget_v_f64m2x4_f64m2(vfloat64m2x4_t src, size_t index) {
  return __riscv_vget_f64m2(src, 0);
}

vfloat64m4_t test_vget_v_f64m4x2_f64m4(vfloat64m4x2_t src, size_t index) {
  return __riscv_vget_f64m4(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x2_i8mf8(vint8mf8x2_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x3_i8mf8(vint8mf8x3_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x4_i8mf8(vint8mf8x4_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x5_i8mf8(vint8mf8x5_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x6_i8mf8(vint8mf8x6_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x7_i8mf8(vint8mf8x7_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf8_t test_vget_v_i8mf8x8_i8mf8(vint8mf8x8_t src, size_t index) {
  return __riscv_vget_i8mf8(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x2_i8mf4(vint8mf4x2_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x3_i8mf4(vint8mf4x3_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x4_i8mf4(vint8mf4x4_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x5_i8mf4(vint8mf4x5_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x6_i8mf4(vint8mf4x6_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x7_i8mf4(vint8mf4x7_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf4_t test_vget_v_i8mf4x8_i8mf4(vint8mf4x8_t src, size_t index) {
  return __riscv_vget_i8mf4(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x2_i8mf2(vint8mf2x2_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x3_i8mf2(vint8mf2x3_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x4_i8mf2(vint8mf2x4_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x5_i8mf2(vint8mf2x5_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x6_i8mf2(vint8mf2x6_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x7_i8mf2(vint8mf2x7_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8mf2_t test_vget_v_i8mf2x8_i8mf2(vint8mf2x8_t src, size_t index) {
  return __riscv_vget_i8mf2(src, 0);
}

vint8m1_t test_vget_v_i8m1x2_i8m1(vint8m1x2_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x3_i8m1(vint8m1x3_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x4_i8m1(vint8m1x4_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x5_i8m1(vint8m1x5_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x6_i8m1(vint8m1x6_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x7_i8m1(vint8m1x7_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m1_t test_vget_v_i8m1x8_i8m1(vint8m1x8_t src, size_t index) {
  return __riscv_vget_i8m1(src, 0);
}

vint8m2_t test_vget_v_i8m2x2_i8m2(vint8m2x2_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m2x3_i8m2(vint8m2x3_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m2_t test_vget_v_i8m2x4_i8m2(vint8m2x4_t src, size_t index) {
  return __riscv_vget_i8m2(src, 0);
}

vint8m4_t test_vget_v_i8m4x2_i8m4(vint8m4x2_t src, size_t index) {
  return __riscv_vget_i8m4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x2_i16mf4(vint16mf4x2_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x3_i16mf4(vint16mf4x3_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x4_i16mf4(vint16mf4x4_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x5_i16mf4(vint16mf4x5_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x6_i16mf4(vint16mf4x6_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x7_i16mf4(vint16mf4x7_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf4_t test_vget_v_i16mf4x8_i16mf4(vint16mf4x8_t src, size_t index) {
  return __riscv_vget_i16mf4(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x2_i16mf2(vint16mf2x2_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x3_i16mf2(vint16mf2x3_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x4_i16mf2(vint16mf2x4_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x5_i16mf2(vint16mf2x5_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x6_i16mf2(vint16mf2x6_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x7_i16mf2(vint16mf2x7_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16mf2_t test_vget_v_i16mf2x8_i16mf2(vint16mf2x8_t src, size_t index) {
  return __riscv_vget_i16mf2(src, 0);
}

vint16m1_t test_vget_v_i16m1x2_i16m1(vint16m1x2_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x3_i16m1(vint16m1x3_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x4_i16m1(vint16m1x4_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x5_i16m1(vint16m1x5_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x6_i16m1(vint16m1x6_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x7_i16m1(vint16m1x7_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m1_t test_vget_v_i16m1x8_i16m1(vint16m1x8_t src, size_t index) {
  return __riscv_vget_i16m1(src, 0);
}

vint16m2_t test_vget_v_i16m2x2_i16m2(vint16m2x2_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m2x3_i16m2(vint16m2x3_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m2_t test_vget_v_i16m2x4_i16m2(vint16m2x4_t src, size_t index) {
  return __riscv_vget_i16m2(src, 0);
}

vint16m4_t test_vget_v_i16m4x2_i16m4(vint16m4x2_t src, size_t index) {
  return __riscv_vget_i16m4(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x2_i32mf2(vint32mf2x2_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x3_i32mf2(vint32mf2x3_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x4_i32mf2(vint32mf2x4_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x5_i32mf2(vint32mf2x5_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x6_i32mf2(vint32mf2x6_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x7_i32mf2(vint32mf2x7_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32mf2_t test_vget_v_i32mf2x8_i32mf2(vint32mf2x8_t src, size_t index) {
  return __riscv_vget_i32mf2(src, 0);
}

vint32m1_t test_vget_v_i32m1x2_i32m1(vint32m1x2_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x3_i32m1(vint32m1x3_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x4_i32m1(vint32m1x4_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x5_i32m1(vint32m1x5_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x6_i32m1(vint32m1x6_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x7_i32m1(vint32m1x7_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m1_t test_vget_v_i32m1x8_i32m1(vint32m1x8_t src, size_t index) {
  return __riscv_vget_i32m1(src, 0);
}

vint32m2_t test_vget_v_i32m2x2_i32m2(vint32m2x2_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m2x3_i32m2(vint32m2x3_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m2_t test_vget_v_i32m2x4_i32m2(vint32m2x4_t src, size_t index) {
  return __riscv_vget_i32m2(src, 0);
}

vint32m4_t test_vget_v_i32m4x2_i32m4(vint32m4x2_t src, size_t index) {
  return __riscv_vget_i32m4(src, 0);
}

vint64m1_t test_vget_v_i64m1x2_i64m1(vint64m1x2_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x3_i64m1(vint64m1x3_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x4_i64m1(vint64m1x4_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x5_i64m1(vint64m1x5_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x6_i64m1(vint64m1x6_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x7_i64m1(vint64m1x7_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m1_t test_vget_v_i64m1x8_i64m1(vint64m1x8_t src, size_t index) {
  return __riscv_vget_i64m1(src, 0);
}

vint64m2_t test_vget_v_i64m2x2_i64m2(vint64m2x2_t src, size_t index) {
  return __riscv_vget_i64m2(src, 0);
}

vint64m2_t test_vget_v_i64m2x3_i64m2(vint64m2x3_t src, size_t index) {
  return __riscv_vget_i64m2(src, 0);
}

vint64m2_t test_vget_v_i64m2x4_i64m2(vint64m2x4_t src, size_t index) {
  return __riscv_vget_i64m2(src, 0);
}

vint64m4_t test_vget_v_i64m4x2_i64m4(vint64m4x2_t src, size_t index) {
  return __riscv_vget_i64m4(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x2_u8mf8(vuint8mf8x2_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x3_u8mf8(vuint8mf8x3_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x4_u8mf8(vuint8mf8x4_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x5_u8mf8(vuint8mf8x5_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x6_u8mf8(vuint8mf8x6_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x7_u8mf8(vuint8mf8x7_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf8_t test_vget_v_u8mf8x8_u8mf8(vuint8mf8x8_t src, size_t index) {
  return __riscv_vget_u8mf8(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x2_u8mf4(vuint8mf4x2_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x3_u8mf4(vuint8mf4x3_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x4_u8mf4(vuint8mf4x4_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x5_u8mf4(vuint8mf4x5_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x6_u8mf4(vuint8mf4x6_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x7_u8mf4(vuint8mf4x7_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf4_t test_vget_v_u8mf4x8_u8mf4(vuint8mf4x8_t src, size_t index) {
  return __riscv_vget_u8mf4(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x2_u8mf2(vuint8mf2x2_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x3_u8mf2(vuint8mf2x3_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x4_u8mf2(vuint8mf2x4_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x5_u8mf2(vuint8mf2x5_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x6_u8mf2(vuint8mf2x6_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x7_u8mf2(vuint8mf2x7_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8mf2_t test_vget_v_u8mf2x8_u8mf2(vuint8mf2x8_t src, size_t index) {
  return __riscv_vget_u8mf2(src, 0);
}

vuint8m1_t test_vget_v_u8m1x2_u8m1(vuint8m1x2_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x3_u8m1(vuint8m1x3_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x4_u8m1(vuint8m1x4_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x5_u8m1(vuint8m1x5_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x6_u8m1(vuint8m1x6_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x7_u8m1(vuint8m1x7_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m1_t test_vget_v_u8m1x8_u8m1(vuint8m1x8_t src, size_t index) {
  return __riscv_vget_u8m1(src, 0);
}

vuint8m2_t test_vget_v_u8m2x2_u8m2(vuint8m2x2_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m2x3_u8m2(vuint8m2x3_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m2_t test_vget_v_u8m2x4_u8m2(vuint8m2x4_t src, size_t index) {
  return __riscv_vget_u8m2(src, 0);
}

vuint8m4_t test_vget_v_u8m4x2_u8m4(vuint8m4x2_t src, size_t index) {
  return __riscv_vget_u8m4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x2_u16mf4(vuint16mf4x2_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x3_u16mf4(vuint16mf4x3_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x4_u16mf4(vuint16mf4x4_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x5_u16mf4(vuint16mf4x5_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x6_u16mf4(vuint16mf4x6_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x7_u16mf4(vuint16mf4x7_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf4_t test_vget_v_u16mf4x8_u16mf4(vuint16mf4x8_t src, size_t index) {
  return __riscv_vget_u16mf4(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x2_u16mf2(vuint16mf2x2_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x3_u16mf2(vuint16mf2x3_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x4_u16mf2(vuint16mf2x4_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x5_u16mf2(vuint16mf2x5_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x6_u16mf2(vuint16mf2x6_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x7_u16mf2(vuint16mf2x7_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16mf2_t test_vget_v_u16mf2x8_u16mf2(vuint16mf2x8_t src, size_t index) {
  return __riscv_vget_u16mf2(src, 0);
}

vuint16m1_t test_vget_v_u16m1x2_u16m1(vuint16m1x2_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x3_u16m1(vuint16m1x3_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x4_u16m1(vuint16m1x4_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x5_u16m1(vuint16m1x5_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x6_u16m1(vuint16m1x6_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x7_u16m1(vuint16m1x7_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m1_t test_vget_v_u16m1x8_u16m1(vuint16m1x8_t src, size_t index) {
  return __riscv_vget_u16m1(src, 0);
}

vuint16m2_t test_vget_v_u16m2x2_u16m2(vuint16m2x2_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m2x3_u16m2(vuint16m2x3_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m2_t test_vget_v_u16m2x4_u16m2(vuint16m2x4_t src, size_t index) {
  return __riscv_vget_u16m2(src, 0);
}

vuint16m4_t test_vget_v_u16m4x2_u16m4(vuint16m4x2_t src, size_t index) {
  return __riscv_vget_u16m4(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x2_u32mf2(vuint32mf2x2_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x3_u32mf2(vuint32mf2x3_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x4_u32mf2(vuint32mf2x4_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x5_u32mf2(vuint32mf2x5_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x6_u32mf2(vuint32mf2x6_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x7_u32mf2(vuint32mf2x7_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32mf2_t test_vget_v_u32mf2x8_u32mf2(vuint32mf2x8_t src, size_t index) {
  return __riscv_vget_u32mf2(src, 0);
}

vuint32m1_t test_vget_v_u32m1x2_u32m1(vuint32m1x2_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x3_u32m1(vuint32m1x3_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x4_u32m1(vuint32m1x4_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x5_u32m1(vuint32m1x5_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x6_u32m1(vuint32m1x6_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x7_u32m1(vuint32m1x7_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m1_t test_vget_v_u32m1x8_u32m1(vuint32m1x8_t src, size_t index) {
  return __riscv_vget_u32m1(src, 0);
}

vuint32m2_t test_vget_v_u32m2x2_u32m2(vuint32m2x2_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m2x3_u32m2(vuint32m2x3_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m2_t test_vget_v_u32m2x4_u32m2(vuint32m2x4_t src, size_t index) {
  return __riscv_vget_u32m2(src, 0);
}

vuint32m4_t test_vget_v_u32m4x2_u32m4(vuint32m4x2_t src, size_t index) {
  return __riscv_vget_u32m4(src, 0);
}

vuint64m1_t test_vget_v_u64m1x2_u64m1(vuint64m1x2_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x3_u64m1(vuint64m1x3_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x4_u64m1(vuint64m1x4_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x5_u64m1(vuint64m1x5_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x6_u64m1(vuint64m1x6_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x7_u64m1(vuint64m1x7_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m1_t test_vget_v_u64m1x8_u64m1(vuint64m1x8_t src, size_t index) {
  return __riscv_vget_u64m1(src, 0);
}

vuint64m2_t test_vget_v_u64m2x2_u64m2(vuint64m2x2_t src, size_t index) {
  return __riscv_vget_u64m2(src, 0);
}

vuint64m2_t test_vget_v_u64m2x3_u64m2(vuint64m2x3_t src, size_t index) {
  return __riscv_vget_u64m2(src, 0);
}

vuint64m2_t test_vget_v_u64m2x4_u64m2(vuint64m2x4_t src, size_t index) {
  return __riscv_vget_u64m2(src, 0);
}

vuint64m4_t test_vget_v_u64m4x2_u64m4(vuint64m4x2_t src, size_t index) {
  return __riscv_vget_u64m4(src, 0);
}
