#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1_t test_vle64ff_v_f64m1_tu(vfloat64m1_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_tu(vfloat64m2_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_tu(vfloat64m4_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_tu(vfloat64m8_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_tu(vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_tu(vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_tu(vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_tu(vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_tu(vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_tu(vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_tu(vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_tu(vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tu(maskedoff, base, new_vl, vl);
}

vfloat64m1_t test_vle64ff_v_f64m1_tuma(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_tuma(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_tuma(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_tuma(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tuma(mask, maskedoff, base, new_vl, vl);
}

vfloat64m1_t test_vle64ff_v_f64m1_tumu(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_tumu(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_tumu(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_tumu(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tumu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m1_t test_vle64ff_v_f64m1_tamu(vbool64_t mask, vfloat64m1_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m2_t test_vle64ff_v_f64m2_tamu(vbool32_t mask, vfloat64m2_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m4_t test_vle64ff_v_f64m4_tamu(vbool16_t mask, vfloat64m4_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vfloat64m8_t test_vle64ff_v_f64m8_tamu(vbool8_t mask, vfloat64m8_t maskedoff, const float64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint64m1_t test_vle64ff_v_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint64m2_t test_vle64ff_v_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint64m4_t test_vle64ff_v_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vint64m8_t test_vle64ff_v_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, const int64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint64m1_t test_vle64ff_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint64m2_t test_vle64ff_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint64m4_t test_vle64ff_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

vuint64m8_t test_vle64ff_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, const uint64_t *base, size_t *new_vl, size_t vl) {
  return vle64ff_tamu(mask, maskedoff, base, new_vl, vl);
}

