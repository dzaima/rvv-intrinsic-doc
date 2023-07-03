#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vnclipu_wv_u8mf8_rm_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm_tu(vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm_tu(vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm_tu(vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm_tu(vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm_tu(vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm_tu(vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm_tu(vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm_tu(vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm_tu(vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm_tu(vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm_tu(vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm_tu(vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm_tu(vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm_tu(vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm_tu(vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm_tu(vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm_tu(vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm_tu(vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm_tu(vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm_tu(vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm_tu(vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm_tu(vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm_tu(vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm_tu(vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm_tu(vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm_tu(vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm_tu(vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tu(maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_rm_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm_tum(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm_tum(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm_tum(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm_tum(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm_tum(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm_tum(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm_tum(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm_tum(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm_tum(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm_tum(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm_tum(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm_tum(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm_tum(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm_tum(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm_tum(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tum(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_rm_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm_tumu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm_tumu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm_tumu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm_tumu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm_tumu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm_tumu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm_tumu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm_tumu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm_tumu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm_tumu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm_tumu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm_tumu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm_tumu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm_tumu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm_tumu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_tumu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_rm_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, vuint8mf8_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_rm_mu(vbool64_t mask, vuint8mf8_t maskedoff, vuint16mf4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_rm_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, vuint8mf4_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_rm_mu(vbool32_t mask, vuint8mf4_t maskedoff, vuint16mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_rm_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, vuint8mf2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_rm_mu(vbool16_t mask, vuint8mf2_t maskedoff, vuint16m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_rm_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, vuint8m1_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_rm_mu(vbool8_t mask, vuint8m1_t maskedoff, vuint16m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_rm_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, vuint8m2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_rm_mu(vbool4_t mask, vuint8m2_t maskedoff, vuint16m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_rm_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, vuint8m4_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_rm_mu(vbool2_t mask, vuint8m4_t maskedoff, vuint16m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_rm_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, vuint16mf4_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_rm_mu(vbool64_t mask, vuint16mf4_t maskedoff, vuint32mf2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_rm_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, vuint16mf2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_rm_mu(vbool32_t mask, vuint16mf2_t maskedoff, vuint32m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_rm_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, vuint16m1_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_rm_mu(vbool16_t mask, vuint16m1_t maskedoff, vuint32m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_rm_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, vuint16m2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_rm_mu(vbool8_t mask, vuint16m2_t maskedoff, vuint32m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_rm_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, vuint16m4_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_rm_mu(vbool4_t mask, vuint16m4_t maskedoff, vuint32m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_rm_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, vuint32mf2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_rm_mu(vbool64_t mask, vuint32mf2_t maskedoff, vuint64m1_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_rm_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, vuint32m1_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_rm_mu(vbool32_t mask, vuint32m1_t maskedoff, vuint64m2_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_rm_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, vuint32m2_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_rm_mu(vbool16_t mask, vuint32m2_t maskedoff, vuint64m4_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_rm_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, vuint32m4_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_rm_mu(vbool8_t mask, vuint32m4_t maskedoff, vuint64m8_t op1, size_t shift, size_t vl) {
  return __riscv_vnclipu_mu(mask, maskedoff, op1, shift, __RISCV_VXRM_RNU, vl);
}

