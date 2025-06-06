/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16mf4_t test_vfmax_vv_f16mf4(vfloat16mf4_t vs2, vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16mf4_t test_vfmax_vf_f16mf4(vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16mf2_t test_vfmax_vv_f16mf2(vfloat16mf2_t vs2, vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16mf2_t test_vfmax_vf_f16mf2(vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16m1_t test_vfmax_vv_f16m1(vfloat16m1_t vs2, vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16m1_t test_vfmax_vf_f16m1(vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16m2_t test_vfmax_vv_f16m2(vfloat16m2_t vs2, vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16m2_t test_vfmax_vf_f16m2(vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16m4_t test_vfmax_vv_f16m4(vfloat16m4_t vs2, vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16m4_t test_vfmax_vf_f16m4(vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16m8_t test_vfmax_vv_f16m8(vfloat16m8_t vs2, vfloat16m8_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat16m8_t test_vfmax_vf_f16m8(vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat32mf2_t test_vfmax_vv_f32mf2(vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat32mf2_t test_vfmax_vf_f32mf2(vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat32m1_t test_vfmax_vv_f32m1(vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat32m1_t test_vfmax_vf_f32m1(vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat32m2_t test_vfmax_vv_f32m2(vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat32m2_t test_vfmax_vf_f32m2(vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat32m4_t test_vfmax_vv_f32m4(vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat32m4_t test_vfmax_vf_f32m4(vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat32m8_t test_vfmax_vv_f32m8(vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat32m8_t test_vfmax_vf_f32m8(vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat64m1_t test_vfmax_vv_f64m1(vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat64m1_t test_vfmax_vf_f64m1(vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat64m2_t test_vfmax_vv_f64m2(vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat64m2_t test_vfmax_vf_f64m2(vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat64m4_t test_vfmax_vv_f64m4(vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat64m4_t test_vfmax_vf_f64m4(vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat64m8_t test_vfmax_vv_f64m8(vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vfmax(vs2, vs1, vl);
}

vfloat64m8_t test_vfmax_vf_f64m8(vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vs2, rs1, vl);
}

vfloat16mf4_t test_vfmax_vv_f16mf4_m(vbool64_t vm, vfloat16mf4_t vs2, vfloat16mf4_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16mf4_t test_vfmax_vf_f16mf4_m(vbool64_t vm, vfloat16mf4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat16mf2_t test_vfmax_vv_f16mf2_m(vbool32_t vm, vfloat16mf2_t vs2, vfloat16mf2_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16mf2_t test_vfmax_vf_f16mf2_m(vbool32_t vm, vfloat16mf2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat16m1_t test_vfmax_vv_f16m1_m(vbool16_t vm, vfloat16m1_t vs2, vfloat16m1_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16m1_t test_vfmax_vf_f16m1_m(vbool16_t vm, vfloat16m1_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat16m2_t test_vfmax_vv_f16m2_m(vbool8_t vm, vfloat16m2_t vs2, vfloat16m2_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16m2_t test_vfmax_vf_f16m2_m(vbool8_t vm, vfloat16m2_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat16m4_t test_vfmax_vv_f16m4_m(vbool4_t vm, vfloat16m4_t vs2, vfloat16m4_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16m4_t test_vfmax_vf_f16m4_m(vbool4_t vm, vfloat16m4_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat16m8_t test_vfmax_vv_f16m8_m(vbool2_t vm, vfloat16m8_t vs2, vfloat16m8_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat16m8_t test_vfmax_vf_f16m8_m(vbool2_t vm, vfloat16m8_t vs2, _Float16 rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat32mf2_t test_vfmax_vv_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, vfloat32mf2_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat32mf2_t test_vfmax_vf_f32mf2_m(vbool64_t vm, vfloat32mf2_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat32m1_t test_vfmax_vv_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfmax_vf_f32m1_m(vbool32_t vm, vfloat32m1_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat32m2_t test_vfmax_vv_f32m2_m(vbool16_t vm, vfloat32m2_t vs2, vfloat32m2_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat32m2_t test_vfmax_vf_f32m2_m(vbool16_t vm, vfloat32m2_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat32m4_t test_vfmax_vv_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, vfloat32m4_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat32m4_t test_vfmax_vf_f32m4_m(vbool8_t vm, vfloat32m4_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat32m8_t test_vfmax_vv_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, vfloat32m8_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat32m8_t test_vfmax_vf_f32m8_m(vbool4_t vm, vfloat32m8_t vs2, float rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat64m1_t test_vfmax_vv_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, vfloat64m1_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat64m1_t test_vfmax_vf_f64m1_m(vbool64_t vm, vfloat64m1_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat64m2_t test_vfmax_vv_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, vfloat64m2_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat64m2_t test_vfmax_vf_f64m2_m(vbool32_t vm, vfloat64m2_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat64m4_t test_vfmax_vv_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, vfloat64m4_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat64m4_t test_vfmax_vf_f64m4_m(vbool16_t vm, vfloat64m4_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}

vfloat64m8_t test_vfmax_vv_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, vfloat64m8_t vs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, vs1, vl);
}

vfloat64m8_t test_vfmax_vf_f64m8_m(vbool8_t vm, vfloat64m8_t vs2, double rs1, size_t vl) {
  return __riscv_vfmax(vm, vs2, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vfmax\.[ivxfswum.]+\s+} 60 } } */
