// RUN: %clang_cc1 -triple riscv64-unknown-linux-gnu -target-feature +experimental-v -S -emit-llvm  %s -o - |  FileCheck %s

#include <riscv_vector.h>

vint16mf4_t test_vfncvt_x_f_w_i16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv1i16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_x_f_w_i16mf4(src);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv1i16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16mf4(src);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv2i16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_x_f_w_i16mf2(src);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv2i16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16mf2(src);
}

vint16m1_t test_vfncvt_x_f_w_i16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv4i16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_x_f_w_i16m1(src);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv4i16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m1(src);
}

vint16m2_t test_vfncvt_x_f_w_i16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv8i16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_x_f_w_i16m2(src);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv8i16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m2(src);
}

vint16m4_t test_vfncvt_x_f_w_i16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv16i16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_x_f_w_i16m4(src);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv16i16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m4(src);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv1i16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_xu_f_w_u16mf4(src);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv1i16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16mf4(src);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv2i16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_xu_f_w_u16mf2(src);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv2i16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16mf2(src);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv4i16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m1(src);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv4i16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m1(src);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv8i16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m2(src);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv8i16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m2(src);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv16i16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m4(src);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv16i16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m4(src);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4 (vint32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i32> %{{.*}})
  return vfncvt_f_x_w_f16mf4(src);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2 (vint32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i32> %{{.*}})
  return vfncvt_f_x_w_f16mf2(src);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1 (vint32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m1
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m1(src);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2 (vint32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m2
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m2(src);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4 (vint32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m4
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m4(src);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4 (vuint32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16mf4(src);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2 (vuint32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16mf2(src);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1 (vuint32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m1
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m1(src);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2 (vuint32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m2
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m2(src);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4 (vuint32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m4
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m4(src);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv1f16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_f_f_w_f16mf4(src);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4 (vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv1f16{{.*}}(<vscale x 1 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16mf4(src);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv2f16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_f_f_w_f16mf2(src);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2 (vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv2f16{{.*}}(<vscale x 2 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16mf2(src);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m1
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv4f16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_f_f_w_f16m1(src);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1 (vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m1
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv4f16{{.*}}(<vscale x 4 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m1(src);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m2
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv8f16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_f_f_w_f16m2(src);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2 (vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m2
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv8f16{{.*}}(<vscale x 8 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m2(src);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m4
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv16f16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_f_f_w_f16m4(src);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4 (vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m4
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv16f16{{.*}}(<vscale x 16 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m4(src);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv1i32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_x_f_w_i32mf2(src);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv1i32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32mf2(src);
}

vint32m1_t test_vfncvt_x_f_w_i32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv2i32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_x_f_w_i32m1(src);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv2i32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m1(src);
}

vint32m2_t test_vfncvt_x_f_w_i32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv4i32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_x_f_w_i32m2(src);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv4i32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m2(src);
}

vint32m4_t test_vfncvt_x_f_w_i32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.x.f.w.{{.*}}nxv8i32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_x_f_w_i32m4(src);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.{{.*}}nxv8i32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m4(src);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv1i32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_xu_f_w_u32mf2(src);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv1i32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32mf2(src);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv2i32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m1(src);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv2i32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m1(src);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv4i32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m2(src);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv4i32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m2(src);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.xu.f.w.{{.*}}nxv8i32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m4(src);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.{{.*}}nxv8i32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m4(src);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2 (vint64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i64> %{{.*}})
  return vfncvt_f_x_w_f32mf2(src);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1 (vint64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m1
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m1(src);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2 (vint64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m2
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m2(src);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4 (vint64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m4
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.x.w.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m4(src);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2 (vuint64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32mf2(src);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1 (vuint64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m1
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m1(src);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2 (vuint64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m2
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m2(src);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4 (vuint64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m4
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.xu.w.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m4(src);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv1f32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_f_f_w_f32mf2(src);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2 (vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv1f32{{.*}}(<vscale x 1 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32mf2(src);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m1
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv2f32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_f_f_w_f32m1(src);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1 (vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m1
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv2f32{{.*}}(<vscale x 2 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m1(src);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m2
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv4f32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_f_f_w_f32m2(src);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2 (vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m2
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv4f32{{.*}}(<vscale x 4 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m2(src);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m4
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.f.w.{{.*}}nxv8f32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_f_f_w_f32m4(src);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4 (vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m4
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.rod.f.f.w.{{.*}}nxv8f32{{.*}}(<vscale x 8 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m4(src);
}

vint16mf4_t test_vfncvt_x_f_w_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_x_f_w_i16mf4_m(mask, maskedoff, src);
}

vint16mf4_t test_vfncvt_rtz_x_f_w_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16mf4_m(mask, maskedoff, src);
}

vint16mf2_t test_vfncvt_x_f_w_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_x_f_w_i16mf2_m(mask, maskedoff, src);
}

vint16mf2_t test_vfncvt_rtz_x_f_w_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16mf2_m(mask, maskedoff, src);
}

vint16m1_t test_vfncvt_x_f_w_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_x_f_w_i16m1_m(mask, maskedoff, src);
}

vint16m1_t test_vfncvt_rtz_x_f_w_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m1_m(mask, maskedoff, src);
}

vint16m2_t test_vfncvt_x_f_w_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_x_f_w_i16m2_m(mask, maskedoff, src);
}

vint16m2_t test_vfncvt_rtz_x_f_w_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m2_m(mask, maskedoff, src);
}

vint16m4_t test_vfncvt_x_f_w_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_x_f_w_i16m4_m(mask, maskedoff, src);
}

vint16m4_t test_vfncvt_rtz_x_f_w_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_rtz_x_f_w_i16m4_m(mask, maskedoff, src);
}

vuint16mf4_t test_vfncvt_xu_f_w_u16mf4_m (vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_xu_f_w_u16mf4_m(mask, maskedoff, src);
}

vuint16mf4_t test_vfncvt_rtz_xu_f_w_u16mf4_m (vbool64_t mask, vuint16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16mf4_m(mask, maskedoff, src);
}

vuint16mf2_t test_vfncvt_xu_f_w_u16mf2_m (vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_xu_f_w_u16mf2_m(mask, maskedoff, src);
}

vuint16mf2_t test_vfncvt_rtz_xu_f_w_u16mf2_m (vbool32_t mask, vuint16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16mf2_m(mask, maskedoff, src);
}

vuint16m1_t test_vfncvt_xu_f_w_u16m1_m (vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m1_m(mask, maskedoff, src);
}

vuint16m1_t test_vfncvt_rtz_xu_f_w_u16m1_m (vbool16_t mask, vuint16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m1_m(mask, maskedoff, src);
}

vuint16m2_t test_vfncvt_xu_f_w_u16m2_m (vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m2_m(mask, maskedoff, src);
}

vuint16m2_t test_vfncvt_rtz_xu_f_w_u16m2_m (vbool8_t mask, vuint16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m2_m(mask, maskedoff, src);
}

vuint16m4_t test_vfncvt_xu_f_w_u16m4_m (vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_xu_f_w_u16m4_m(mask, maskedoff, src);
}

vuint16m4_t test_vfncvt_rtz_xu_f_w_u16m4_m (vbool4_t mask, vuint16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_rtz_xu_f_w_u16m4_m(mask, maskedoff, src);
}

vfloat16mf4_t test_vfncvt_f_x_w_f16mf4_m (vbool64_t mask, vfloat16mf4_t maskedoff, vint32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x half> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vfncvt_f_x_w_f16mf4_m(mask, maskedoff, src);
}

vfloat16mf2_t test_vfncvt_f_x_w_f16mf2_m (vbool32_t mask, vfloat16mf2_t maskedoff, vint32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x half> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vfncvt_f_x_w_f16mf2_m(mask, maskedoff, src);
}

vfloat16m1_t test_vfncvt_f_x_w_f16m1_m (vbool16_t mask, vfloat16m1_t maskedoff, vint32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x half> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m1_m(mask, maskedoff, src);
}

vfloat16m2_t test_vfncvt_f_x_w_f16m2_m (vbool8_t mask, vfloat16m2_t maskedoff, vint32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x half> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m2_m(mask, maskedoff, src);
}

vfloat16m4_t test_vfncvt_f_x_w_f16m4_m (vbool4_t mask, vfloat16m4_t maskedoff, vint32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x half> %{{.*}}, <vscale x 16 x i32> %{{.*}})
  return vfncvt_f_x_w_f16m4_m(mask, maskedoff, src);
}

vfloat16mf4_t test_vfncvt_f_xu_w_f16mf4_m (vbool64_t mask, vfloat16mf4_t maskedoff, vuint32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x half> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16mf4_m(mask, maskedoff, src);
}

vfloat16mf2_t test_vfncvt_f_xu_w_f16mf2_m (vbool32_t mask, vfloat16mf2_t maskedoff, vuint32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x half> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16mf2_m(mask, maskedoff, src);
}

vfloat16m1_t test_vfncvt_f_xu_w_f16m1_m (vbool16_t mask, vfloat16m1_t maskedoff, vuint32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x half> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m1_m(mask, maskedoff, src);
}

vfloat16m2_t test_vfncvt_f_xu_w_f16m2_m (vbool8_t mask, vfloat16m2_t maskedoff, vuint32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x half> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m2_m(mask, maskedoff, src);
}

vfloat16m4_t test_vfncvt_f_xu_w_f16m4_m (vbool4_t mask, vfloat16m4_t maskedoff, vuint32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x half> %{{.*}}, <vscale x 16 x i32> %{{.*}})
  return vfncvt_f_xu_w_f16m4_m(mask, maskedoff, src);
}

vfloat16mf4_t test_vfncvt_f_f_w_f16mf4_m (vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x half> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_f_f_w_f16mf4_m(mask, maskedoff, src);
}

vfloat16mf4_t test_vfncvt_rod_f_f_w_f16mf4_m (vbool64_t mask, vfloat16mf4_t maskedoff, vfloat32mf2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x half> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv1f16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x half> %{{.*}}, <vscale x 1 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16mf4_m(mask, maskedoff, src);
}

vfloat16mf2_t test_vfncvt_f_f_w_f16mf2_m (vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x half> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_f_f_w_f16mf2_m(mask, maskedoff, src);
}

vfloat16mf2_t test_vfncvt_rod_f_f_w_f16mf2_m (vbool32_t mask, vfloat16mf2_t maskedoff, vfloat32m1_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x half> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv2f16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x half> %{{.*}}, <vscale x 2 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16mf2_m(mask, maskedoff, src);
}

vfloat16m1_t test_vfncvt_f_f_w_f16m1_m (vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x half> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_f_f_w_f16m1_m(mask, maskedoff, src);
}

vfloat16m1_t test_vfncvt_rod_f_f_w_f16m1_m (vbool16_t mask, vfloat16m1_t maskedoff, vfloat32m2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x half> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv4f16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x half> %{{.*}}, <vscale x 4 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m1_m(mask, maskedoff, src);
}

vfloat16m2_t test_vfncvt_f_f_w_f16m2_m (vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x half> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_f_f_w_f16m2_m(mask, maskedoff, src);
}

vfloat16m2_t test_vfncvt_rod_f_f_w_f16m2_m (vbool8_t mask, vfloat16m2_t maskedoff, vfloat32m4_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x half> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv8f16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x half> %{{.*}}, <vscale x 8 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m2_m(mask, maskedoff, src);
}

vfloat16m4_t test_vfncvt_f_f_w_f16m4_m (vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x half> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_f_f_w_f16m4_m(mask, maskedoff, src);
}

vfloat16m4_t test_vfncvt_rod_f_f_w_f16m4_m (vbool4_t mask, vfloat16m4_t maskedoff, vfloat32m8_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x half> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv16f16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x half> %{{.*}}, <vscale x 16 x float> %{{.*}})
  return vfncvt_rod_f_f_w_f16m4_m(mask, maskedoff, src);
}

vint32mf2_t test_vfncvt_x_f_w_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_x_f_w_i32mf2_m(mask, maskedoff, src);
}

vint32mf2_t test_vfncvt_rtz_x_f_w_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32mf2_m(mask, maskedoff, src);
}

vint32m1_t test_vfncvt_x_f_w_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_x_f_w_i32m1_m(mask, maskedoff, src);
}

vint32m1_t test_vfncvt_rtz_x_f_w_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m1_m(mask, maskedoff, src);
}

vint32m2_t test_vfncvt_x_f_w_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_x_f_w_i32m2_m(mask, maskedoff, src);
}

vint32m2_t test_vfncvt_rtz_x_f_w_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m2_m(mask, maskedoff, src);
}

vint32m4_t test_vfncvt_x_f_w_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_x_f_w_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.x.f.w.mask.{{.*}}nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_x_f_w_i32m4_m(mask, maskedoff, src);
}

vint32m4_t test_vfncvt_rtz_x_f_w_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_x_f_w_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.rtz.x.f.w.mask.{{.*}}nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_rtz_x_f_w_i32m4_m(mask, maskedoff, src);
}

vuint32mf2_t test_vfncvt_xu_f_w_u32mf2_m (vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_xu_f_w_u32mf2_m(mask, maskedoff, src);
}

vuint32mf2_t test_vfncvt_rtz_xu_f_w_u32mf2_m (vbool64_t mask, vuint32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32mf2_m(mask, maskedoff, src);
}

vuint32m1_t test_vfncvt_xu_f_w_u32m1_m (vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m1_m(mask, maskedoff, src);
}

vuint32m1_t test_vfncvt_rtz_xu_f_w_u32m1_m (vbool32_t mask, vuint32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m1_m(mask, maskedoff, src);
}

vuint32m2_t test_vfncvt_xu_f_w_u32m2_m (vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m2_m(mask, maskedoff, src);
}

vuint32m2_t test_vfncvt_rtz_xu_f_w_u32m2_m (vbool16_t mask, vuint32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m2_m(mask, maskedoff, src);
}

vuint32m4_t test_vfncvt_xu_f_w_u32m4_m (vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_xu_f_w_u32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.xu.f.w.mask.{{.*}}nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_xu_f_w_u32m4_m(mask, maskedoff, src);
}

vuint32m4_t test_vfncvt_rtz_xu_f_w_u32m4_m (vbool8_t mask, vuint32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rtz_xu_f_w_u32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vfncvt.rtz.xu.f.w.mask.{{.*}}nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_rtz_xu_f_w_u32m4_m(mask, maskedoff, src);
}

vfloat32mf2_t test_vfncvt_f_x_w_f32mf2_m (vbool64_t mask, vfloat32mf2_t maskedoff, vint64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x float> %{{.*}}, <vscale x 1 x i64> %{{.*}})
  return vfncvt_f_x_w_f32mf2_m(mask, maskedoff, src);
}

vfloat32m1_t test_vfncvt_f_x_w_f32m1_m (vbool32_t mask, vfloat32m1_t maskedoff, vint64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x float> %{{.*}}, <vscale x 2 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m1_m(mask, maskedoff, src);
}

vfloat32m2_t test_vfncvt_f_x_w_f32m2_m (vbool16_t mask, vfloat32m2_t maskedoff, vint64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x float> %{{.*}}, <vscale x 4 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m2_m(mask, maskedoff, src);
}

vfloat32m4_t test_vfncvt_f_x_w_f32m4_m (vbool8_t mask, vfloat32m4_t maskedoff, vint64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_x_w_f32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.x.w.mask.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x float> %{{.*}}, <vscale x 8 x i64> %{{.*}})
  return vfncvt_f_x_w_f32m4_m(mask, maskedoff, src);
}

vfloat32mf2_t test_vfncvt_f_xu_w_f32mf2_m (vbool64_t mask, vfloat32mf2_t maskedoff, vuint64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x float> %{{.*}}, <vscale x 1 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32mf2_m(mask, maskedoff, src);
}

vfloat32m1_t test_vfncvt_f_xu_w_f32m1_m (vbool32_t mask, vfloat32m1_t maskedoff, vuint64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x float> %{{.*}}, <vscale x 2 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m1_m(mask, maskedoff, src);
}

vfloat32m2_t test_vfncvt_f_xu_w_f32m2_m (vbool16_t mask, vfloat32m2_t maskedoff, vuint64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x float> %{{.*}}, <vscale x 4 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m2_m(mask, maskedoff, src);
}

vfloat32m4_t test_vfncvt_f_xu_w_f32m4_m (vbool8_t mask, vfloat32m4_t maskedoff, vuint64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_xu_w_f32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.xu.w.mask.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x float> %{{.*}}, <vscale x 8 x i64> %{{.*}})
  return vfncvt_f_xu_w_f32m4_m(mask, maskedoff, src);
}

vfloat32mf2_t test_vfncvt_f_f_w_f32mf2_m (vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x float> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_f_f_w_f32mf2_m(mask, maskedoff, src);
}

vfloat32mf2_t test_vfncvt_rod_f_f_w_f32mf2_m (vbool64_t mask, vfloat32mf2_t maskedoff, vfloat64m1_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x float> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv1f32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x float> %{{.*}}, <vscale x 1 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32mf2_m(mask, maskedoff, src);
}

vfloat32m1_t test_vfncvt_f_f_w_f32m1_m (vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x float> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_f_f_w_f32m1_m(mask, maskedoff, src);
}

vfloat32m1_t test_vfncvt_rod_f_f_w_f32m1_m (vbool32_t mask, vfloat32m1_t maskedoff, vfloat64m2_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x float> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv2f32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x float> %{{.*}}, <vscale x 2 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m1_m(mask, maskedoff, src);
}

vfloat32m2_t test_vfncvt_f_f_w_f32m2_m (vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x float> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_f_f_w_f32m2_m(mask, maskedoff, src);
}

vfloat32m2_t test_vfncvt_rod_f_f_w_f32m2_m (vbool16_t mask, vfloat32m2_t maskedoff, vfloat64m4_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x float> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv4f32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x float> %{{.*}}, <vscale x 4 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m2_m(mask, maskedoff, src);
}

vfloat32m4_t test_vfncvt_f_f_w_f32m4_m (vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_f_f_w_f32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.f.f.w.mask.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x float> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_f_f_w_f32m4_m(mask, maskedoff, src);
}

vfloat32m4_t test_vfncvt_rod_f_f_w_f32m4_m (vbool8_t mask, vfloat32m4_t maskedoff, vfloat64m8_t src) {
  // CHECK-LABEL: test_vfncvt_rod_f_f_w_f32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x float> @llvm.riscv.vfncvt.rod.f.f.w.mask.{{.*}}nxv8f32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x float> %{{.*}}, <vscale x 8 x double> %{{.*}})
  return vfncvt_rod_f_f_w_f32m4_m(mask, maskedoff, src);
}

