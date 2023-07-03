#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vint8mf8_t test_vaadd_vv_i8mf8_rm_tu(vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rm_tu(vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rm_tu(vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rm_tu(vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rm_tu(vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rm_tu(vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rm_tu(vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rm_tu(vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rm_tu(vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rm_tu(vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rm_tu(vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rm_tu(vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rm_tu(vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rm_tu(vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rm_tu(vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rm_tu(vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rm_tu(vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rm_tu(vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rm_tu(vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rm_tu(vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rm_tu(vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rm_tu(vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rm_tu(vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rm_tu(vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rm_tu(vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rm_tu(vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rm_tu(vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rm_tu(vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rm_tu(vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rm_tu(vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rm_tu(vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rm_tu(vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rm_tu(vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rm_tu(vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rm_tu(vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rm_tu(vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rm_tu(vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rm_tu(vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rm_tu(vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rm_tu(vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rm_tu(vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rm_tu(vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rm_tu(vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rm_tu(vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tu(maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rm_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rm_tum(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rm_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rm_tum(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rm_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rm_tum(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rm_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rm_tum(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rm_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rm_tum(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rm_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rm_tum(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rm_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rm_tum(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rm_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rm_tum(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rm_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rm_tum(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rm_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rm_tum(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rm_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rm_tum(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rm_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rm_tum(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rm_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rm_tum(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rm_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rm_tum(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rm_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rm_tum(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rm_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rm_tum(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rm_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rm_tum(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rm_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rm_tum(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rm_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rm_tum(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rm_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rm_tum(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rm_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rm_tum(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rm_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rm_tum(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tum(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rm_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rm_tumu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rm_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rm_tumu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rm_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rm_tumu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rm_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rm_tumu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rm_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rm_tumu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rm_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rm_tumu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rm_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rm_tumu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rm_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rm_tumu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rm_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rm_tumu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rm_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rm_tumu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rm_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rm_tumu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rm_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rm_tumu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rm_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rm_tumu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rm_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rm_tumu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rm_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rm_tumu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rm_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rm_tumu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rm_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rm_tumu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rm_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rm_tumu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rm_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rm_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rm_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rm_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rm_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rm_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rm_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rm_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_tumu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vv_i8mf8_rm_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vaadd_vx_i8mf8_rm_mu(vbool64_t mask, vint8mf8_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vv_i8mf4_rm_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vaadd_vx_i8mf4_rm_mu(vbool32_t mask, vint8mf4_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vv_i8mf2_rm_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vaadd_vx_i8mf2_rm_mu(vbool16_t mask, vint8mf2_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vv_i8m1_rm_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vaadd_vx_i8m1_rm_mu(vbool8_t mask, vint8m1_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vv_i8m2_rm_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vaadd_vx_i8m2_rm_mu(vbool4_t mask, vint8m2_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vv_i8m4_rm_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vaadd_vx_i8m4_rm_mu(vbool2_t mask, vint8m4_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vv_i8m8_rm_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vaadd_vx_i8m8_rm_mu(vbool1_t mask, vint8m8_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vv_i16mf4_rm_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vaadd_vx_i16mf4_rm_mu(vbool64_t mask, vint16mf4_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vv_i16mf2_rm_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vaadd_vx_i16mf2_rm_mu(vbool32_t mask, vint16mf2_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vv_i16m1_rm_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vaadd_vx_i16m1_rm_mu(vbool16_t mask, vint16m1_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vv_i16m2_rm_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vaadd_vx_i16m2_rm_mu(vbool8_t mask, vint16m2_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vv_i16m4_rm_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vaadd_vx_i16m4_rm_mu(vbool4_t mask, vint16m4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vv_i16m8_rm_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vaadd_vx_i16m8_rm_mu(vbool2_t mask, vint16m8_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vv_i32mf2_rm_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vaadd_vx_i32mf2_rm_mu(vbool64_t mask, vint32mf2_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vv_i32m1_rm_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vaadd_vx_i32m1_rm_mu(vbool32_t mask, vint32m1_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vv_i32m2_rm_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vaadd_vx_i32m2_rm_mu(vbool16_t mask, vint32m2_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vv_i32m4_rm_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vaadd_vx_i32m4_rm_mu(vbool8_t mask, vint32m4_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vv_i32m8_rm_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vaadd_vx_i32m8_rm_mu(vbool4_t mask, vint32m8_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vv_i64m1_rm_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vaadd_vx_i64m1_rm_mu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vv_i64m2_rm_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vaadd_vx_i64m2_rm_mu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vv_i64m4_rm_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vaadd_vx_i64m4_rm_mu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vv_i64m8_rm_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vaadd_vx_i64m8_rm_mu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl) {
  return __riscv_vaadd_mu(mask, maskedoff, op1, op2, __RISCV_VXRM_RNU, vl);
}

