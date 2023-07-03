#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vnclipu_wv_u8mf8_rm(vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm(vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf8_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm(vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm(vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm(vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm(vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm(vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm(vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm(vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm(vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm(vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm(vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm(vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm(vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16mf4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm(vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm(vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm(vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm(vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm(vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm(vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm(vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm(vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm(vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm(vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32mf2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm(vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm(vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m1_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm(vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm(vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m2_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm(vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm(vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m4_rm(op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_rm_m(vbool64_t mask, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm_m(vbool64_t mask, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf8_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm_m(vbool32_t mask, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm_m(vbool32_t mask, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm_m(vbool16_t mask, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm_m(vbool16_t mask, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm_m(vbool8_t mask, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm_m(vbool8_t mask, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm_m(vbool4_t mask, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm_m(vbool4_t mask, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm_m(vbool2_t mask, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u8m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm_m(vbool2_t mask, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u8m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm_m(vbool64_t mask, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm_m(vbool64_t mask, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16mf4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm_m(vbool32_t mask, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm_m(vbool32_t mask, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm_m(vbool16_t mask, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm_m(vbool16_t mask, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm_m(vbool8_t mask, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm_m(vbool8_t mask, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm_m(vbool4_t mask, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u16m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm_m(vbool4_t mask, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u16m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm_m(vbool64_t mask, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm_m(vbool64_t mask, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32mf2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm_m(vbool32_t mask, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm_m(vbool32_t mask, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m1_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm_m(vbool16_t mask, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm_m(vbool16_t mask, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m2_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm_m(vbool8_t mask, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_wv_u32m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm_m(vbool8_t mask, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_wx_u32m4_rm_m(mask, op1, shift, __RISCV_VXRM_RNU, vl);
}

