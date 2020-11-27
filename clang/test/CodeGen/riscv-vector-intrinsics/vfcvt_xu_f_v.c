// RUN: %clang_cc1 -triple riscv64-unknown-linux-gnu -target-feature +experimental-v -fallow-half-arguments-and-returns -fnative-half-type -S -emit-llvm  %s -o - |  FileCheck %s

#include <riscv_vector.h>

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4 (vfloat16mf4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i16{{.*}}(<vscale x 1 x half> %{{.*}})
  return vfcvt_xu_f_v_u16mf4(src);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2 (vfloat16mf2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i16{{.*}}(<vscale x 2 x half> %{{.*}})
  return vfcvt_xu_f_v_u16mf2(src);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1 (vfloat16m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i16{{.*}}(<vscale x 4 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m1(src);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2 (vfloat16m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i16{{.*}}(<vscale x 8 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m2(src);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4 (vfloat16m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv16i16{{.*}}(<vscale x 16 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m4(src);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8 (vfloat16m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv32i16{{.*}}(<vscale x 32 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m8(src);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i32{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfcvt_xu_f_v_u32mf2(src);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i32{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m1(src);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i32{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m2(src);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i32{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m4(src);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv16i32{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m8(src);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i64{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m1(src);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i64{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m2(src);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i64{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m4(src);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i64{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m8(src);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_m (vbool64_t mask, vuint16mf4_t maskedoff, vfloat16mf4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x half> %{{.*}})
  return vfcvt_xu_f_v_u16mf4_m(mask, maskedoff, src);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_m (vbool32_t mask, vuint16mf2_t maskedoff, vfloat16mf2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x half> %{{.*}})
  return vfcvt_xu_f_v_u16mf2_m(mask, maskedoff, src);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_m (vbool16_t mask, vuint16m1_t maskedoff, vfloat16m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m1_m(mask, maskedoff, src);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_m (vbool8_t mask, vuint16m2_t maskedoff, vfloat16m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m2_m(mask, maskedoff, src);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_m (vbool4_t mask, vuint16m4_t maskedoff, vfloat16m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m4_m(mask, maskedoff, src);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_m (vbool2_t mask, vuint16m8_t maskedoff, vfloat16m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x half> %{{.*}})
  return vfcvt_xu_f_v_u16m8_m(mask, maskedoff, src);
}

vuint32mf2_t test_vfcvt_xu_f_v_u32mf2_m (vbool64_t mask, vuint32mf2_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfcvt_xu_f_v_u32mf2_m(mask, maskedoff, src);
}

vuint32m1_t test_vfcvt_xu_f_v_u32m1_m (vbool32_t mask, vuint32m1_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m1_m(mask, maskedoff, src);
}

vuint32m2_t test_vfcvt_xu_f_v_u32m2_m (vbool16_t mask, vuint32m2_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m2_m(mask, maskedoff, src);
}

vuint32m4_t test_vfcvt_xu_f_v_u32m4_m (vbool8_t mask, vuint32m4_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m4_m(mask, maskedoff, src);
}

vuint32m8_t test_vfcvt_xu_f_v_u32m8_m (vbool4_t mask, vuint32m8_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfcvt_xu_f_v_u32m8_m(mask, maskedoff, src);
}

vuint64m1_t test_vfcvt_xu_f_v_u64m1_m (vbool64_t mask, vuint64m1_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m1_m(mask, maskedoff, src);
}

vuint64m2_t test_vfcvt_xu_f_v_u64m2_m (vbool32_t mask, vuint64m2_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m2_m(mask, maskedoff, src);
}

vuint64m4_t test_vfcvt_xu_f_v_u64m4_m (vbool16_t mask, vuint64m4_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m4_m(mask, maskedoff, src);
}

vuint64m8_t test_vfcvt_xu_f_v_u64m8_m (vbool8_t mask, vuint64m8_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfcvt_xu_f_v_u64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vfcvt.xu.f.v.{{.*}}nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfcvt_xu_f_v_u64m8_m(mask, maskedoff, src);
}

