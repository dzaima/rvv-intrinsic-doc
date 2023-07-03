#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint8mf8_t test_vasubu_vv_u8mf8_rm(vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rm(vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rm(vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rm(vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rm(vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rm(vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rm(vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rm(vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rm(vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rm(vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rm(vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rm(vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rm(vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rm(vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rm(vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rm(vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rm(vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rm(vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rm(vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rm(vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rm(vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rm(vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rm(vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rm(vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rm(vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rm(vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rm(vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rm(vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rm(vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rm(vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rm(vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rm(vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rm(vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rm(vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rm(vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rm(vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rm(vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rm(vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rm(vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rm(vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rm(vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rm(vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rm(vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rm(vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vasubu_vv_u8mf8_rm_m(vbool64_t mask, vuint8mf8_t op1, vuint8mf8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vasubu_vx_u8mf8_rm_m(vbool64_t mask, vuint8mf8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vasubu_vv_u8mf4_rm_m(vbool32_t mask, vuint8mf4_t op1, vuint8mf4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vasubu_vx_u8mf4_rm_m(vbool32_t mask, vuint8mf4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vasubu_vv_u8mf2_rm_m(vbool16_t mask, vuint8mf2_t op1, vuint8mf2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vasubu_vx_u8mf2_rm_m(vbool16_t mask, vuint8mf2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vasubu_vv_u8m1_rm_m(vbool8_t mask, vuint8m1_t op1, vuint8m1_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vasubu_vx_u8m1_rm_m(vbool8_t mask, vuint8m1_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vasubu_vv_u8m2_rm_m(vbool4_t mask, vuint8m2_t op1, vuint8m2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vasubu_vx_u8m2_rm_m(vbool4_t mask, vuint8m2_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vasubu_vv_u8m4_rm_m(vbool2_t mask, vuint8m4_t op1, vuint8m4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vasubu_vx_u8m4_rm_m(vbool2_t mask, vuint8m4_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m8_t test_vasubu_vv_u8m8_rm_m(vbool1_t mask, vuint8m8_t op1, vuint8m8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint8m8_t test_vasubu_vx_u8m8_rm_m(vbool1_t mask, vuint8m8_t op1, uint8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vasubu_vv_u16mf4_rm_m(vbool64_t mask, vuint16mf4_t op1, vuint16mf4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vasubu_vx_u16mf4_rm_m(vbool64_t mask, vuint16mf4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vasubu_vv_u16mf2_rm_m(vbool32_t mask, vuint16mf2_t op1, vuint16mf2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vasubu_vx_u16mf2_rm_m(vbool32_t mask, vuint16mf2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vasubu_vv_u16m1_rm_m(vbool16_t mask, vuint16m1_t op1, vuint16m1_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vasubu_vx_u16m1_rm_m(vbool16_t mask, vuint16m1_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vasubu_vv_u16m2_rm_m(vbool8_t mask, vuint16m2_t op1, vuint16m2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vasubu_vx_u16m2_rm_m(vbool8_t mask, vuint16m2_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vasubu_vv_u16m4_rm_m(vbool4_t mask, vuint16m4_t op1, vuint16m4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vasubu_vx_u16m4_rm_m(vbool4_t mask, vuint16m4_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m8_t test_vasubu_vv_u16m8_rm_m(vbool2_t mask, vuint16m8_t op1, vuint16m8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint16m8_t test_vasubu_vx_u16m8_rm_m(vbool2_t mask, vuint16m8_t op1, uint16_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vasubu_vv_u32mf2_rm_m(vbool64_t mask, vuint32mf2_t op1, vuint32mf2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vasubu_vx_u32mf2_rm_m(vbool64_t mask, vuint32mf2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vasubu_vv_u32m1_rm_m(vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vasubu_vx_u32m1_rm_m(vbool32_t mask, vuint32m1_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vasubu_vv_u32m2_rm_m(vbool16_t mask, vuint32m2_t op1, vuint32m2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vasubu_vx_u32m2_rm_m(vbool16_t mask, vuint32m2_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vasubu_vv_u32m4_rm_m(vbool8_t mask, vuint32m4_t op1, vuint32m4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vasubu_vx_u32m4_rm_m(vbool8_t mask, vuint32m4_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m8_t test_vasubu_vv_u32m8_rm_m(vbool4_t mask, vuint32m8_t op1, vuint32m8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint32m8_t test_vasubu_vx_u32m8_rm_m(vbool4_t mask, vuint32m8_t op1, uint32_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m1_t test_vasubu_vv_u64m1_rm_m(vbool64_t mask, vuint64m1_t op1, vuint64m1_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m1_t test_vasubu_vx_u64m1_rm_m(vbool64_t mask, vuint64m1_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m2_t test_vasubu_vv_u64m2_rm_m(vbool32_t mask, vuint64m2_t op1, vuint64m2_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m2_t test_vasubu_vx_u64m2_rm_m(vbool32_t mask, vuint64m2_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m4_t test_vasubu_vv_u64m4_rm_m(vbool16_t mask, vuint64m4_t op1, vuint64m4_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m4_t test_vasubu_vx_u64m4_rm_m(vbool16_t mask, vuint64m4_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m8_t test_vasubu_vv_u64m8_rm_m(vbool8_t mask, vuint64m8_t op1, vuint64m8_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

vuint64m8_t test_vasubu_vx_u64m8_rm_m(vbool8_t mask, vuint64m8_t op1, uint64_t op2, size_t vl) {
  return __riscv_vasubu(mask, op1, op2, __RISCV_VXRM_RNU, vl);
}

