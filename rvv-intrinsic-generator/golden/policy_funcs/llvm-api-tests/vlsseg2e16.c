// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vlsseg2e16_v_f16mf4_tu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tu(vfloat16m1_t *v0, vfloat16m1_t *v1, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tu(vfloat16m2_t *v0, vfloat16m2_t *v1, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tu(vfloat16m4_t *v0, vfloat16m4_t *v1, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tu(vint16mf4_t *v0, vint16mf4_t *v1, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tu(vint16mf2_t *v0, vint16mf2_t *v1, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tu(vint16m1_t *v0, vint16m1_t *v1, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tu(vint16m2_t *v0, vint16m2_t *v1, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tu(vint16m4_t *v0, vint16m4_t *v1, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tu(vuint16mf4_t *v0, vuint16mf4_t *v1, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tu(vuint16mf2_t *v0, vuint16mf2_t *v1, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tu(vuint16m1_t *v0, vuint16m1_t *v1, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tu(vuint16m2_t *v0, vuint16m2_t *v1, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tu(vuint16m4_t *v0, vuint16m4_t *v1, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_tu(v0, v1, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_ta(vfloat16mf4_t *v0, vfloat16mf4_t *v1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_ta(vfloat16mf2_t *v0, vfloat16mf2_t *v1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_ta(vfloat16m1_t *v0, vfloat16m1_t *v1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_ta(vfloat16m2_t *v0, vfloat16m2_t *v1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_ta(vfloat16m4_t *v0, vfloat16m4_t *v1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_ta(vint16mf4_t *v0, vint16mf4_t *v1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_ta(vint16mf2_t *v0, vint16mf2_t *v1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_ta(vint16m1_t *v0, vint16m1_t *v1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_ta(vint16m2_t *v0, vint16m2_t *v1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_ta(vint16m4_t *v0, vint16m4_t *v1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_ta(vuint16mf4_t *v0, vuint16mf4_t *v1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_ta(vuint16mf2_t *v0, vuint16mf2_t *v1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_ta(vuint16m1_t *v0, vuint16m1_t *v1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_ta(vuint16m2_t *v0, vuint16m2_t *v1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_ta(vuint16m4_t *v0, vuint16m4_t *v1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_ta(v0, v1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tuma(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tuma(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tuma(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tuma(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tuma(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tuma(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tuma(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tuma(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tuma(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tuma(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tuma(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tuma(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tuma(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tuma(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tuma(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_tuma(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tumu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tumu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tumu(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tumu(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tumu(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tumu(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tumu(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tumu(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tumu(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tumu(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tumu(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tumu(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tumu(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tumu(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tumu(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_tumu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tama(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tama(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tama(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tama(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tama(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tama(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tama(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tama(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tama(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tama(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tama(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tama(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tama(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tama(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tama(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_tama(v0, v1, mask, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf4_tamu(vfloat16mf4_t *v0, vfloat16mf4_t *v1, vbool64_t mask, vfloat16mf4_t maskedoff0, vfloat16mf4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16mf2_tamu(vfloat16mf2_t *v0, vfloat16mf2_t *v1, vbool32_t mask, vfloat16mf2_t maskedoff0, vfloat16mf2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16mf2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m1_tamu(vfloat16m1_t *v0, vfloat16m1_t *v1, vbool16_t mask, vfloat16m1_t maskedoff0, vfloat16m1_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m1_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m2_tamu(vfloat16m2_t *v0, vfloat16m2_t *v1, vbool8_t mask, vfloat16m2_t maskedoff0, vfloat16m2_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_f16m4_tamu(vfloat16m4_t *v0, vfloat16m4_t *v1, vbool4_t mask, vfloat16m4_t maskedoff0, vfloat16m4_t maskedoff1, const _Float16 *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_f16m4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf4_tamu(vint16mf4_t *v0, vint16mf4_t *v1, vbool64_t mask, vint16mf4_t maskedoff0, vint16mf4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16mf2_tamu(vint16mf2_t *v0, vint16mf2_t *v1, vbool32_t mask, vint16mf2_t maskedoff0, vint16mf2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16mf2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m1_tamu(vint16m1_t *v0, vint16m1_t *v1, vbool16_t mask, vint16m1_t maskedoff0, vint16m1_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m1_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m2_tamu(vint16m2_t *v0, vint16m2_t *v1, vbool8_t mask, vint16m2_t maskedoff0, vint16m2_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_i16m4_tamu(vint16m4_t *v0, vint16m4_t *v1, vbool4_t mask, vint16m4_t maskedoff0, vint16m4_t maskedoff1, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_i16m4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf4_tamu(vuint16mf4_t *v0, vuint16mf4_t *v1, vbool64_t mask, vuint16mf4_t maskedoff0, vuint16mf4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16mf2_tamu(vuint16mf2_t *v0, vuint16mf2_t *v1, vbool32_t mask, vuint16mf2_t maskedoff0, vuint16mf2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16mf2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m1_tamu(vuint16m1_t *v0, vuint16m1_t *v1, vbool16_t mask, vuint16m1_t maskedoff0, vuint16m1_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m1_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m2_tamu(vuint16m2_t *v0, vuint16m2_t *v1, vbool8_t mask, vuint16m2_t maskedoff0, vuint16m2_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m2_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

void test_vlsseg2e16_v_u16m4_tamu(vuint16m4_t *v0, vuint16m4_t *v1, vbool4_t mask, vuint16m4_t maskedoff0, vuint16m4_t maskedoff1, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return vlsseg2e16_v_u16m4_tamu(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}
