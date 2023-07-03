// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint8mf8_t test_vssra_vv_i8mf8_rm(vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rm(vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rm(vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rm(vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rm(vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rm(vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vssra_vv_i8m1_rm(vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vssra_vx_i8m1_rm(vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vssra_vv_i8m2_rm(vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vssra_vx_i8m2_rm(vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vssra_vv_i8m4_rm(vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vssra_vx_i8m4_rm(vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vssra_vv_i8m8_rm(vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vssra_vx_i8m8_rm(vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rm(vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra_vv_i16mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rm(vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rm(vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i16mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rm(vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vssra_vv_i16m1_rm(vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vssra_vx_i16m1_rm(vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vssra_vv_i16m2_rm(vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vssra_vx_i16m2_rm(vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vssra_vv_i16m4_rm(vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vssra_vx_i16m4_rm(vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vssra_vv_i16m8_rm(vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vssra_vx_i16m8_rm(vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rm(vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i32mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rm(vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vssra_vv_i32m1_rm(vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vssra_vx_i32m1_rm(vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vssra_vv_i32m2_rm(vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vssra_vx_i32m2_rm(vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vssra_vv_i32m4_rm(vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vssra_vx_i32m4_rm(vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vssra_vv_i32m8_rm(vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vssra_vx_i32m8_rm(vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vssra_vv_i64m1_rm(vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vssra_vx_i64m1_rm(vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vssra_vv_i64m2_rm(vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vssra_vx_i64m2_rm(vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vssra_vv_i64m4_rm(vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vssra_vx_i64m4_rm(vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vssra_vv_i64m8_rm(vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vssra_vx_i64m8_rm(vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vssra_vv_i8mf8_rm_m(vbool64_t mask, vint8mf8_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vssra_vx_i8mf8_rm_m(vbool64_t mask, vint8mf8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vssra_vv_i8mf4_rm_m(vbool32_t mask, vint8mf4_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vssra_vx_i8mf4_rm_m(vbool32_t mask, vint8mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vssra_vv_i8mf2_rm_m(vbool16_t mask, vint8mf2_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i8mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vssra_vx_i8mf2_rm_m(vbool16_t mask, vint8mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vssra_vv_i8m1_rm_m(vbool8_t mask, vint8m1_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vssra_vx_i8m1_rm_m(vbool8_t mask, vint8m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vssra_vv_i8m2_rm_m(vbool4_t mask, vint8m2_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vssra_vx_i8m2_rm_m(vbool4_t mask, vint8m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vssra_vv_i8m4_rm_m(vbool2_t mask, vint8m4_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vssra_vx_i8m4_rm_m(vbool2_t mask, vint8m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vssra_vv_i8m8_rm_m(vbool1_t mask, vint8m8_t op1, vuint8m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i8m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint8m8_t test_vssra_vx_i8m8_rm_m(vbool1_t mask, vint8m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i8m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vssra_vv_i16mf4_rm_m(vbool64_t mask, vint16mf4_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vssra_vv_i16mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vssra_vx_i16mf4_rm_m(vbool64_t mask, vint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vssra_vv_i16mf2_rm_m(vbool32_t mask, vint16mf2_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i16mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vssra_vx_i16mf2_rm_m(vbool32_t mask, vint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vssra_vv_i16m1_rm_m(vbool16_t mask, vint16m1_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vssra_vx_i16m1_rm_m(vbool16_t mask, vint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vssra_vv_i16m2_rm_m(vbool8_t mask, vint16m2_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vssra_vx_i16m2_rm_m(vbool8_t mask, vint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vssra_vv_i16m4_rm_m(vbool4_t mask, vint16m4_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vssra_vx_i16m4_rm_m(vbool4_t mask, vint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vssra_vv_i16m8_rm_m(vbool2_t mask, vint16m8_t op1, vuint16m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i16m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint16m8_t test_vssra_vx_i16m8_rm_m(vbool2_t mask, vint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i16m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vssra_vv_i32mf2_rm_m(vbool64_t mask, vint32mf2_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vssra_vv_i32mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vssra_vx_i32mf2_rm_m(vbool64_t mask, vint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vssra_vv_i32m1_rm_m(vbool32_t mask, vint32m1_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vssra_vx_i32m1_rm_m(vbool32_t mask, vint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vssra_vv_i32m2_rm_m(vbool16_t mask, vint32m2_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vssra_vx_i32m2_rm_m(vbool16_t mask, vint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vssra_vv_i32m4_rm_m(vbool8_t mask, vint32m4_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vssra_vx_i32m4_rm_m(vbool8_t mask, vint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vssra_vv_i32m8_rm_m(vbool4_t mask, vint32m8_t op1, vuint32m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i32m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint32m8_t test_vssra_vx_i32m8_rm_m(vbool4_t mask, vint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i32m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vssra_vv_i64m1_rm_m(vbool64_t mask, vint64m1_t op1, vuint64m1_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m1_t test_vssra_vx_i64m1_rm_m(vbool64_t mask, vint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vssra_vv_i64m2_rm_m(vbool32_t mask, vint64m2_t op1, vuint64m2_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m2_t test_vssra_vx_i64m2_rm_m(vbool32_t mask, vint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vssra_vv_i64m4_rm_m(vbool16_t mask, vint64m4_t op1, vuint64m4_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m4_t test_vssra_vx_i64m4_rm_m(vbool16_t mask, vint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vssra_vv_i64m8_rm_m(vbool8_t mask, vint64m8_t op1, vuint64m8_t shift, size_t vl) {
  return __riscv_vssra_vv_i64m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vint64m8_t test_vssra_vx_i64m8_rm_m(vbool8_t mask, vint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vssra_vx_i64m8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

