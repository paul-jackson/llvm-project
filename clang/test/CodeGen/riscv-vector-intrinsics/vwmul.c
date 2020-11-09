// RUN: %clang_cc1 -triple riscv64-unknown-linux-gnu -target-feature +experimental-v -S -emit-llvm  %s -o - |  FileCheck %s

#include <riscv_vector.h>

vint16mf4_t test_vwmul_vv_i16mf4 (vint8mf8_t op1, vint8mf8_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmul.vv.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmul_vv_i16mf4(op1, op2);
}

vint16mf4_t test_vwmul_vx_i16mf4 (vint8mf8_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmul.vx.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16mf4(op1, op2);
}

vint16mf2_t test_vwmul_vv_i16mf2 (vint8mf4_t op1, vint8mf4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmul.vv.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmul_vv_i16mf2(op1, op2);
}

vint16mf2_t test_vwmul_vx_i16mf2 (vint8mf4_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmul.vx.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16mf2(op1, op2);
}

vint16m1_t test_vwmul_vv_i16m1 (vint8mf2_t op1, vint8mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmul.vv.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmul_vv_i16m1(op1, op2);
}

vint16m1_t test_vwmul_vx_i16m1 (vint8mf2_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmul.vx.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m1(op1, op2);
}

vint16m2_t test_vwmul_vv_i16m2 (vint8m1_t op1, vint8m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmul.vv.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmul_vv_i16m2(op1, op2);
}

vint16m2_t test_vwmul_vx_i16m2 (vint8m1_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmul.vx.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m2(op1, op2);
}

vint16m4_t test_vwmul_vv_i16m4 (vint8m2_t op1, vint8m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmul.vv.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmul_vv_i16m4(op1, op2);
}

vint16m4_t test_vwmul_vx_i16m4 (vint8m2_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmul.vx.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m4(op1, op2);
}

vint16m8_t test_vwmul_vv_i16m8 (vint8m4_t op1, vint8m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmul.vv.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmul_vv_i16m8(op1, op2);
}

vint16m8_t test_vwmul_vx_i16m8 (vint8m4_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmul.vx.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m8(op1, op2);
}

vint32mf2_t test_vwmul_vv_i32mf2 (vint16mf4_t op1, vint16mf4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmul.vv.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmul_vv_i32mf2(op1, op2);
}

vint32mf2_t test_vwmul_vx_i32mf2 (vint16mf4_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmul.vx.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32mf2(op1, op2);
}

vint32m1_t test_vwmul_vv_i32m1 (vint16mf2_t op1, vint16mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmul.vv.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmul_vv_i32m1(op1, op2);
}

vint32m1_t test_vwmul_vx_i32m1 (vint16mf2_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmul.vx.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m1(op1, op2);
}

vint32m2_t test_vwmul_vv_i32m2 (vint16m1_t op1, vint16m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmul.vv.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmul_vv_i32m2(op1, op2);
}

vint32m2_t test_vwmul_vx_i32m2 (vint16m1_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmul.vx.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m2(op1, op2);
}

vint32m4_t test_vwmul_vv_i32m4 (vint16m2_t op1, vint16m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmul.vv.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmul_vv_i32m4(op1, op2);
}

vint32m4_t test_vwmul_vx_i32m4 (vint16m2_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmul.vx.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m4(op1, op2);
}

vint32m8_t test_vwmul_vv_i32m8 (vint16m4_t op1, vint16m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmul.vv.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmul_vv_i32m8(op1, op2);
}

vint32m8_t test_vwmul_vx_i32m8 (vint16m4_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmul.vx.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m8(op1, op2);
}

vint64m1_t test_vwmul_vv_i64m1 (vint32mf2_t op1, vint32mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmul.vv.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmul_vv_i64m1(op1, op2);
}

vint64m1_t test_vwmul_vx_i64m1 (vint32mf2_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmul.vx.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m1(op1, op2);
}

vint64m2_t test_vwmul_vv_i64m2 (vint32m1_t op1, vint32m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmul.vv.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmul_vv_i64m2(op1, op2);
}

vint64m2_t test_vwmul_vx_i64m2 (vint32m1_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmul.vx.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m2(op1, op2);
}

vint64m4_t test_vwmul_vv_i64m4 (vint32m2_t op1, vint32m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmul.vv.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmul_vv_i64m4(op1, op2);
}

vint64m4_t test_vwmul_vx_i64m4 (vint32m2_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmul.vx.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m4(op1, op2);
}

vint64m8_t test_vwmul_vv_i64m8 (vint32m4_t op1, vint32m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmul.vv.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmul_vv_i64m8(op1, op2);
}

vint64m8_t test_vwmul_vx_i64m8 (vint32m4_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmul.vx.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m8(op1, op2);
}

vuint16mf4_t test_vwmulu_vv_u16mf4 (vuint8mf8_t op1, vuint8mf8_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulu.vv.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmulu_vv_u16mf4(op1, op2);
}

vuint16mf4_t test_vwmulu_vx_u16mf4 (vuint8mf8_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulu.vx.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16mf4(op1, op2);
}

vuint16mf2_t test_vwmulu_vv_u16mf2 (vuint8mf4_t op1, vuint8mf4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulu.vv.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmulu_vv_u16mf2(op1, op2);
}

vuint16mf2_t test_vwmulu_vx_u16mf2 (vuint8mf4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulu.vx.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16mf2(op1, op2);
}

vuint16m1_t test_vwmulu_vv_u16m1 (vuint8mf2_t op1, vuint8mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulu.vv.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmulu_vv_u16m1(op1, op2);
}

vuint16m1_t test_vwmulu_vx_u16m1 (vuint8mf2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulu.vx.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m1(op1, op2);
}

vuint16m2_t test_vwmulu_vv_u16m2 (vuint8m1_t op1, vuint8m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulu.vv.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmulu_vv_u16m2(op1, op2);
}

vuint16m2_t test_vwmulu_vx_u16m2 (vuint8m1_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulu.vx.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m2(op1, op2);
}

vuint16m4_t test_vwmulu_vv_u16m4 (vuint8m2_t op1, vuint8m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulu.vv.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmulu_vv_u16m4(op1, op2);
}

vuint16m4_t test_vwmulu_vx_u16m4 (vuint8m2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulu.vx.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m4(op1, op2);
}

vuint16m8_t test_vwmulu_vv_u16m8 (vuint8m4_t op1, vuint8m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulu.vv.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmulu_vv_u16m8(op1, op2);
}

vuint16m8_t test_vwmulu_vx_u16m8 (vuint8m4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulu.vx.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m8(op1, op2);
}

vuint32mf2_t test_vwmulu_vv_u32mf2 (vuint16mf4_t op1, vuint16mf4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulu.vv.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmulu_vv_u32mf2(op1, op2);
}

vuint32mf2_t test_vwmulu_vx_u32mf2 (vuint16mf4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulu.vx.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32mf2(op1, op2);
}

vuint32m1_t test_vwmulu_vv_u32m1 (vuint16mf2_t op1, vuint16mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulu.vv.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmulu_vv_u32m1(op1, op2);
}

vuint32m1_t test_vwmulu_vx_u32m1 (vuint16mf2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulu.vx.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m1(op1, op2);
}

vuint32m2_t test_vwmulu_vv_u32m2 (vuint16m1_t op1, vuint16m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulu.vv.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmulu_vv_u32m2(op1, op2);
}

vuint32m2_t test_vwmulu_vx_u32m2 (vuint16m1_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulu.vx.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m2(op1, op2);
}

vuint32m4_t test_vwmulu_vv_u32m4 (vuint16m2_t op1, vuint16m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulu.vv.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmulu_vv_u32m4(op1, op2);
}

vuint32m4_t test_vwmulu_vx_u32m4 (vuint16m2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulu.vx.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m4(op1, op2);
}

vuint32m8_t test_vwmulu_vv_u32m8 (vuint16m4_t op1, vuint16m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulu.vv.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmulu_vv_u32m8(op1, op2);
}

vuint32m8_t test_vwmulu_vx_u32m8 (vuint16m4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulu.vx.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m8(op1, op2);
}

vuint64m1_t test_vwmulu_vv_u64m1 (vuint32mf2_t op1, vuint32mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulu.vv.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmulu_vv_u64m1(op1, op2);
}

vuint64m1_t test_vwmulu_vx_u64m1 (vuint32mf2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulu.vx.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m1(op1, op2);
}

vuint64m2_t test_vwmulu_vv_u64m2 (vuint32m1_t op1, vuint32m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulu.vv.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmulu_vv_u64m2(op1, op2);
}

vuint64m2_t test_vwmulu_vx_u64m2 (vuint32m1_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulu.vx.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m2(op1, op2);
}

vuint64m4_t test_vwmulu_vv_u64m4 (vuint32m2_t op1, vuint32m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulu.vv.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmulu_vv_u64m4(op1, op2);
}

vuint64m4_t test_vwmulu_vx_u64m4 (vuint32m2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulu.vx.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m4(op1, op2);
}

vuint64m8_t test_vwmulu_vv_u64m8 (vuint32m4_t op1, vuint32m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulu.vv.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmulu_vv_u64m8(op1, op2);
}

vuint64m8_t test_vwmulu_vx_u64m8 (vuint32m4_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulu.vx.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m8(op1, op2);
}

vint16mf4_t test_vwmulsu_vv_i16mf4 (vint8mf8_t op1, vuint8mf8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulsu.vv.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmulsu_vv_i16mf4(op1, op2);
}

vint16mf4_t test_vwmulsu_vx_i16mf4 (vint8mf8_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16mf4
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulsu.vx.nxv1i16{{.*}}(<vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16mf4(op1, op2);
}

vint16mf2_t test_vwmulsu_vv_i16mf2 (vint8mf4_t op1, vuint8mf4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulsu.vv.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmulsu_vv_i16mf2(op1, op2);
}

vint16mf2_t test_vwmulsu_vx_i16mf2 (vint8mf4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16mf2
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulsu.vx.nxv2i16{{.*}}(<vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16mf2(op1, op2);
}

vint16m1_t test_vwmulsu_vv_i16m1 (vint8mf2_t op1, vuint8mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulsu.vv.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmulsu_vv_i16m1(op1, op2);
}

vint16m1_t test_vwmulsu_vx_i16m1 (vint8mf2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m1
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulsu.vx.nxv4i16{{.*}}(<vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m1(op1, op2);
}

vint16m2_t test_vwmulsu_vv_i16m2 (vint8m1_t op1, vuint8m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulsu.vv.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmulsu_vv_i16m2(op1, op2);
}

vint16m2_t test_vwmulsu_vx_i16m2 (vint8m1_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m2
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulsu.vx.nxv8i16{{.*}}(<vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m2(op1, op2);
}

vint16m4_t test_vwmulsu_vv_i16m4 (vint8m2_t op1, vuint8m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulsu.vv.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmulsu_vv_i16m4(op1, op2);
}

vint16m4_t test_vwmulsu_vx_i16m4 (vint8m2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m4
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulsu.vx.nxv16i16{{.*}}(<vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m4(op1, op2);
}

vint16m8_t test_vwmulsu_vv_i16m8 (vint8m4_t op1, vuint8m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulsu.vv.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmulsu_vv_i16m8(op1, op2);
}

vint16m8_t test_vwmulsu_vx_i16m8 (vint8m4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m8
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulsu.vx.nxv32i16{{.*}}(<vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m8(op1, op2);
}

vint32mf2_t test_vwmulsu_vv_i32mf2 (vint16mf4_t op1, vuint16mf4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulsu.vv.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmulsu_vv_i32mf2(op1, op2);
}

vint32mf2_t test_vwmulsu_vx_i32mf2 (vint16mf4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32mf2
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulsu.vx.nxv1i32{{.*}}(<vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32mf2(op1, op2);
}

vint32m1_t test_vwmulsu_vv_i32m1 (vint16mf2_t op1, vuint16mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulsu.vv.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmulsu_vv_i32m1(op1, op2);
}

vint32m1_t test_vwmulsu_vx_i32m1 (vint16mf2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m1
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulsu.vx.nxv2i32{{.*}}(<vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m1(op1, op2);
}

vint32m2_t test_vwmulsu_vv_i32m2 (vint16m1_t op1, vuint16m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulsu.vv.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmulsu_vv_i32m2(op1, op2);
}

vint32m2_t test_vwmulsu_vx_i32m2 (vint16m1_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m2
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulsu.vx.nxv4i32{{.*}}(<vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m2(op1, op2);
}

vint32m4_t test_vwmulsu_vv_i32m4 (vint16m2_t op1, vuint16m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulsu.vv.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmulsu_vv_i32m4(op1, op2);
}

vint32m4_t test_vwmulsu_vx_i32m4 (vint16m2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m4
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulsu.vx.nxv8i32{{.*}}(<vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m4(op1, op2);
}

vint32m8_t test_vwmulsu_vv_i32m8 (vint16m4_t op1, vuint16m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulsu.vv.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmulsu_vv_i32m8(op1, op2);
}

vint32m8_t test_vwmulsu_vx_i32m8 (vint16m4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m8
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulsu.vx.nxv16i32{{.*}}(<vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m8(op1, op2);
}

vint64m1_t test_vwmulsu_vv_i64m1 (vint32mf2_t op1, vuint32mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulsu.vv.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmulsu_vv_i64m1(op1, op2);
}

vint64m1_t test_vwmulsu_vx_i64m1 (vint32mf2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m1
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulsu.vx.nxv1i64{{.*}}(<vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m1(op1, op2);
}

vint64m2_t test_vwmulsu_vv_i64m2 (vint32m1_t op1, vuint32m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulsu.vv.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmulsu_vv_i64m2(op1, op2);
}

vint64m2_t test_vwmulsu_vx_i64m2 (vint32m1_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m2
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulsu.vx.nxv2i64{{.*}}(<vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m2(op1, op2);
}

vint64m4_t test_vwmulsu_vv_i64m4 (vint32m2_t op1, vuint32m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulsu.vv.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmulsu_vv_i64m4(op1, op2);
}

vint64m4_t test_vwmulsu_vx_i64m4 (vint32m2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m4
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulsu.vx.nxv4i64{{.*}}(<vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m4(op1, op2);
}

vint64m8_t test_vwmulsu_vv_i64m8 (vint32m4_t op1, vuint32m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulsu.vv.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmulsu_vv_i64m8(op1, op2);
}

vint64m8_t test_vwmulsu_vx_i64m8 (vint32m4_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m8
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulsu.vx.nxv8i64{{.*}}(<vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m8(op1, op2);
}

vint16mf4_t test_vwmul_vv_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, vint8mf8_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmul.vv.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmul_vv_i16mf4_m(mask, maskedoff, op1, op2);
}

vint16mf4_t test_vwmul_vx_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmul.vx.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16mf4_m(mask, maskedoff, op1, op2);
}

vint16mf2_t test_vwmul_vv_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, vint8mf4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmul.vv.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmul_vv_i16mf2_m(mask, maskedoff, op1, op2);
}

vint16mf2_t test_vwmul_vx_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmul.vx.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16mf2_m(mask, maskedoff, op1, op2);
}

vint16m1_t test_vwmul_vv_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vint8mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmul.vv.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmul_vv_i16m1_m(mask, maskedoff, op1, op2);
}

vint16m1_t test_vwmul_vx_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmul.vx.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m1_m(mask, maskedoff, op1, op2);
}

vint16m2_t test_vwmul_vv_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, vint8m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmul.vv.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmul_vv_i16m2_m(mask, maskedoff, op1, op2);
}

vint16m2_t test_vwmul_vx_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmul.vx.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m2_m(mask, maskedoff, op1, op2);
}

vint16m4_t test_vwmul_vv_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, vint8m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmul.vv.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmul_vv_i16m4_m(mask, maskedoff, op1, op2);
}

vint16m4_t test_vwmul_vx_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmul.vx.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m4_m(mask, maskedoff, op1, op2);
}

vint16m8_t test_vwmul_vv_i16m8_m (vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, vint8m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmul.vv.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmul_vv_i16m8_m(mask, maskedoff, op1, op2);
}

vint16m8_t test_vwmul_vx_i16m8_m (vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, int8_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmul.vx.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmul_vx_i16m8_m(mask, maskedoff, op1, op2);
}

vint32mf2_t test_vwmul_vv_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, vint16mf4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmul.vv.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmul_vv_i32mf2_m(mask, maskedoff, op1, op2);
}

vint32mf2_t test_vwmul_vx_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmul.vx.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32mf2_m(mask, maskedoff, op1, op2);
}

vint32m1_t test_vwmul_vv_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vint16mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmul.vv.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmul_vv_i32m1_m(mask, maskedoff, op1, op2);
}

vint32m1_t test_vwmul_vx_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmul.vx.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m1_m(mask, maskedoff, op1, op2);
}

vint32m2_t test_vwmul_vv_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, vint16m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmul.vv.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmul_vv_i32m2_m(mask, maskedoff, op1, op2);
}

vint32m2_t test_vwmul_vx_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmul.vx.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m2_m(mask, maskedoff, op1, op2);
}

vint32m4_t test_vwmul_vv_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, vint16m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmul.vv.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmul_vv_i32m4_m(mask, maskedoff, op1, op2);
}

vint32m4_t test_vwmul_vx_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmul.vx.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m4_m(mask, maskedoff, op1, op2);
}

vint32m8_t test_vwmul_vv_i32m8_m (vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, vint16m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmul.vv.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmul_vv_i32m8_m(mask, maskedoff, op1, op2);
}

vint32m8_t test_vwmul_vx_i32m8_m (vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, int16_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmul.vx.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmul_vx_i32m8_m(mask, maskedoff, op1, op2);
}

vint64m1_t test_vwmul_vv_i64m1_m (vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vint32mf2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmul.vv.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmul_vv_i64m1_m(mask, maskedoff, op1, op2);
}

vint64m1_t test_vwmul_vx_i64m1_m (vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmul.vx.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m1_m(mask, maskedoff, op1, op2);
}

vint64m2_t test_vwmul_vv_i64m2_m (vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, vint32m1_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmul.vv.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmul_vv_i64m2_m(mask, maskedoff, op1, op2);
}

vint64m2_t test_vwmul_vx_i64m2_m (vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmul.vx.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m2_m(mask, maskedoff, op1, op2);
}

vint64m4_t test_vwmul_vv_i64m4_m (vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, vint32m2_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmul.vv.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmul_vv_i64m4_m(mask, maskedoff, op1, op2);
}

vint64m4_t test_vwmul_vx_i64m4_m (vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmul.vx.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m4_m(mask, maskedoff, op1, op2);
}

vint64m8_t test_vwmul_vv_i64m8_m (vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, vint32m4_t op2) {
  // CHECK-LABEL: test_vwmul_vv_i64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmul.vv.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmul_vv_i64m8_m(mask, maskedoff, op1, op2);
}

vint64m8_t test_vwmul_vx_i64m8_m (vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, int32_t op2) {
  // CHECK-LABEL: test_vwmul_vx_i64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmul.vx.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmul_vx_i64m8_m(mask, maskedoff, op1, op2);
}

vuint16mf4_t test_vwmulu_vv_u16mf4_m (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, vuint8mf8_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulu.vv.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmulu_vv_u16mf4_m(mask, maskedoff, op1, op2);
}

vuint16mf4_t test_vwmulu_vx_u16mf4_m (vbool64_t mask, vuint16mf4_t maskedoff, vuint8mf8_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulu.vx.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16mf4_m(mask, maskedoff, op1, op2);
}

vuint16mf2_t test_vwmulu_vv_u16mf2_m (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, vuint8mf4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulu.vv.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmulu_vv_u16mf2_m(mask, maskedoff, op1, op2);
}

vuint16mf2_t test_vwmulu_vx_u16mf2_m (vbool32_t mask, vuint16mf2_t maskedoff, vuint8mf4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulu.vx.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16mf2_m(mask, maskedoff, op1, op2);
}

vuint16m1_t test_vwmulu_vv_u16m1_m (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, vuint8mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulu.vv.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmulu_vv_u16m1_m(mask, maskedoff, op1, op2);
}

vuint16m1_t test_vwmulu_vx_u16m1_m (vbool16_t mask, vuint16m1_t maskedoff, vuint8mf2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulu.vx.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m1_m(mask, maskedoff, op1, op2);
}

vuint16m2_t test_vwmulu_vv_u16m2_m (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, vuint8m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulu.vv.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmulu_vv_u16m2_m(mask, maskedoff, op1, op2);
}

vuint16m2_t test_vwmulu_vx_u16m2_m (vbool8_t mask, vuint16m2_t maskedoff, vuint8m1_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulu.vx.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m2_m(mask, maskedoff, op1, op2);
}

vuint16m4_t test_vwmulu_vv_u16m4_m (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, vuint8m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulu.vv.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmulu_vv_u16m4_m(mask, maskedoff, op1, op2);
}

vuint16m4_t test_vwmulu_vx_u16m4_m (vbool4_t mask, vuint16m4_t maskedoff, vuint8m2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulu.vx.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m4_m(mask, maskedoff, op1, op2);
}

vuint16m8_t test_vwmulu_vv_u16m8_m (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, vuint8m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulu.vv.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmulu_vv_u16m8_m(mask, maskedoff, op1, op2);
}

vuint16m8_t test_vwmulu_vx_u16m8_m (vbool2_t mask, vuint16m8_t maskedoff, vuint8m4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulu.vx.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulu_vx_u16m8_m(mask, maskedoff, op1, op2);
}

vuint32mf2_t test_vwmulu_vv_u32mf2_m (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, vuint16mf4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulu.vv.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmulu_vv_u32mf2_m(mask, maskedoff, op1, op2);
}

vuint32mf2_t test_vwmulu_vx_u32mf2_m (vbool64_t mask, vuint32mf2_t maskedoff, vuint16mf4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulu.vx.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32mf2_m(mask, maskedoff, op1, op2);
}

vuint32m1_t test_vwmulu_vv_u32m1_m (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, vuint16mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulu.vv.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmulu_vv_u32m1_m(mask, maskedoff, op1, op2);
}

vuint32m1_t test_vwmulu_vx_u32m1_m (vbool32_t mask, vuint32m1_t maskedoff, vuint16mf2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulu.vx.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m1_m(mask, maskedoff, op1, op2);
}

vuint32m2_t test_vwmulu_vv_u32m2_m (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, vuint16m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulu.vv.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmulu_vv_u32m2_m(mask, maskedoff, op1, op2);
}

vuint32m2_t test_vwmulu_vx_u32m2_m (vbool16_t mask, vuint32m2_t maskedoff, vuint16m1_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulu.vx.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m2_m(mask, maskedoff, op1, op2);
}

vuint32m4_t test_vwmulu_vv_u32m4_m (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, vuint16m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulu.vv.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmulu_vv_u32m4_m(mask, maskedoff, op1, op2);
}

vuint32m4_t test_vwmulu_vx_u32m4_m (vbool8_t mask, vuint32m4_t maskedoff, vuint16m2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulu.vx.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m4_m(mask, maskedoff, op1, op2);
}

vuint32m8_t test_vwmulu_vv_u32m8_m (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, vuint16m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulu.vv.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmulu_vv_u32m8_m(mask, maskedoff, op1, op2);
}

vuint32m8_t test_vwmulu_vx_u32m8_m (vbool4_t mask, vuint32m8_t maskedoff, vuint16m4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulu.vx.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulu_vx_u32m8_m(mask, maskedoff, op1, op2);
}

vuint64m1_t test_vwmulu_vv_u64m1_m (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, vuint32mf2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulu.vv.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmulu_vv_u64m1_m(mask, maskedoff, op1, op2);
}

vuint64m1_t test_vwmulu_vx_u64m1_m (vbool64_t mask, vuint64m1_t maskedoff, vuint32mf2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulu.vx.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m1_m(mask, maskedoff, op1, op2);
}

vuint64m2_t test_vwmulu_vv_u64m2_m (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, vuint32m1_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulu.vv.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmulu_vv_u64m2_m(mask, maskedoff, op1, op2);
}

vuint64m2_t test_vwmulu_vx_u64m2_m (vbool32_t mask, vuint64m2_t maskedoff, vuint32m1_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulu.vx.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m2_m(mask, maskedoff, op1, op2);
}

vuint64m4_t test_vwmulu_vv_u64m4_m (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, vuint32m2_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulu.vv.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmulu_vv_u64m4_m(mask, maskedoff, op1, op2);
}

vuint64m4_t test_vwmulu_vx_u64m4_m (vbool16_t mask, vuint64m4_t maskedoff, vuint32m2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulu.vx.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m4_m(mask, maskedoff, op1, op2);
}

vuint64m8_t test_vwmulu_vv_u64m8_m (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, vuint32m4_t op2) {
  // CHECK-LABEL: test_vwmulu_vv_u64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulu.vv.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmulu_vv_u64m8_m(mask, maskedoff, op1, op2);
}

vuint64m8_t test_vwmulu_vx_u64m8_m (vbool8_t mask, vuint64m8_t maskedoff, vuint32m4_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulu_vx_u64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulu.vx.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulu_vx_u64m8_m(mask, maskedoff, op1, op2);
}

vint16mf4_t test_vwmulsu_vv_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, vuint8mf8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, <vscale x 1 x i8> %{{.*}})
  return vwmulsu_vv_i16mf4_m(mask, maskedoff, op1, op2);
}

vint16mf4_t test_vwmulsu_vx_i16mf4_m (vbool64_t mask, vint16mf4_t maskedoff, vint8mf8_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16mf4_m
  // CHECK: %{{.*}} = call <vscale x 1 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv1i16{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16mf4_m(mask, maskedoff, op1, op2);
}

vint16mf2_t test_vwmulsu_vv_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, vuint8mf4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, <vscale x 2 x i8> %{{.*}})
  return vwmulsu_vv_i16mf2_m(mask, maskedoff, op1, op2);
}

vint16mf2_t test_vwmulsu_vx_i16mf2_m (vbool32_t mask, vint16mf2_t maskedoff, vint8mf4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16mf2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv2i16{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16mf2_m(mask, maskedoff, op1, op2);
}

vint16m1_t test_vwmulsu_vv_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, vuint8mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, <vscale x 4 x i8> %{{.*}})
  return vwmulsu_vv_i16m1_m(mask, maskedoff, op1, op2);
}

vint16m1_t test_vwmulsu_vx_i16m1_m (vbool16_t mask, vint16m1_t maskedoff, vint8mf2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m1_m
  // CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv4i16{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m1_m(mask, maskedoff, op1, op2);
}

vint16m2_t test_vwmulsu_vv_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, vuint8m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, <vscale x 8 x i8> %{{.*}})
  return vwmulsu_vv_i16m2_m(mask, maskedoff, op1, op2);
}

vint16m2_t test_vwmulsu_vx_i16m2_m (vbool8_t mask, vint16m2_t maskedoff, vint8m1_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m2_m
  // CHECK: %{{.*}} = call <vscale x 8 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv8i16{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m2_m(mask, maskedoff, op1, op2);
}

vint16m4_t test_vwmulsu_vv_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, vuint8m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, <vscale x 16 x i8> %{{.*}})
  return vwmulsu_vv_i16m4_m(mask, maskedoff, op1, op2);
}

vint16m4_t test_vwmulsu_vx_i16m4_m (vbool4_t mask, vint16m4_t maskedoff, vint8m2_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m4_m
  // CHECK: %{{.*}} = call <vscale x 16 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv16i16{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m4_m(mask, maskedoff, op1, op2);
}

vint16m8_t test_vwmulsu_vv_i16m8_m (vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, vuint8m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulsu.vv.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, <vscale x 32 x i8> %{{.*}})
  return vwmulsu_vv_i16m8_m(mask, maskedoff, op1, op2);
}

vint16m8_t test_vwmulsu_vx_i16m8_m (vbool2_t mask, vint16m8_t maskedoff, vint8m4_t op1, uint8_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i16m8_m
  // CHECK: %{{.*}} = call <vscale x 32 x i16> @llvm.riscv.vwmulsu.vx.mask.nxv32i16{{.*}}(<vscale x 32 x i1> %{{.*}}, <vscale x 32 x i16> %{{.*}}, <vscale x 32 x i8> %{{.*}}, i8 %{{.*}})
  return vwmulsu_vx_i16m8_m(mask, maskedoff, op1, op2);
}

vint32mf2_t test_vwmulsu_vv_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, vuint16mf4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulsu.vv.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, <vscale x 1 x i16> %{{.*}})
  return vwmulsu_vv_i32mf2_m(mask, maskedoff, op1, op2);
}

vint32mf2_t test_vwmulsu_vx_i32mf2_m (vbool64_t mask, vint32mf2_t maskedoff, vint16mf4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32mf2_m
  // CHECK: %{{.*}} = call <vscale x 1 x i32> @llvm.riscv.vwmulsu.vx.mask.nxv1i32{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32mf2_m(mask, maskedoff, op1, op2);
}

vint32m1_t test_vwmulsu_vv_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, vuint16mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulsu.vv.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, <vscale x 2 x i16> %{{.*}})
  return vwmulsu_vv_i32m1_m(mask, maskedoff, op1, op2);
}

vint32m1_t test_vwmulsu_vx_i32m1_m (vbool32_t mask, vint32m1_t maskedoff, vint16mf2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m1_m
  // CHECK: %{{.*}} = call <vscale x 2 x i32> @llvm.riscv.vwmulsu.vx.mask.nxv2i32{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m1_m(mask, maskedoff, op1, op2);
}

vint32m2_t test_vwmulsu_vv_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, vuint16m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulsu.vv.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}})
  return vwmulsu_vv_i32m2_m(mask, maskedoff, op1, op2);
}

vint32m2_t test_vwmulsu_vx_i32m2_m (vbool16_t mask, vint32m2_t maskedoff, vint16m1_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m2_m
  // CHECK: %{{.*}} = call <vscale x 4 x i32> @llvm.riscv.vwmulsu.vx.mask.nxv4i32{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m2_m(mask, maskedoff, op1, op2);
}

vint32m4_t test_vwmulsu_vv_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, vuint16m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulsu.vv.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, <vscale x 8 x i16> %{{.*}})
  return vwmulsu_vv_i32m4_m(mask, maskedoff, op1, op2);
}

vint32m4_t test_vwmulsu_vx_i32m4_m (vbool8_t mask, vint32m4_t maskedoff, vint16m2_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m4_m
  // CHECK: %{{.*}} = call <vscale x 8 x i32> @llvm.riscv.vwmulsu.vx.mask.nxv8i32{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m4_m(mask, maskedoff, op1, op2);
}

vint32m8_t test_vwmulsu_vv_i32m8_m (vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, vuint16m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulsu.vv.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, <vscale x 16 x i16> %{{.*}})
  return vwmulsu_vv_i32m8_m(mask, maskedoff, op1, op2);
}

vint32m8_t test_vwmulsu_vx_i32m8_m (vbool4_t mask, vint32m8_t maskedoff, vint16m4_t op1, uint16_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i32m8_m
  // CHECK: %{{.*}} = call <vscale x 16 x i32> @llvm.riscv.vwmulsu.vx.mask.nxv16i32{{.*}}(<vscale x 16 x i1> %{{.*}}, <vscale x 16 x i32> %{{.*}}, <vscale x 16 x i16> %{{.*}}, i16 %{{.*}})
  return vwmulsu_vx_i32m8_m(mask, maskedoff, op1, op2);
}

vint64m1_t test_vwmulsu_vv_i64m1_m (vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, vuint32mf2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulsu.vv.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, <vscale x 1 x i32> %{{.*}})
  return vwmulsu_vv_i64m1_m(mask, maskedoff, op1, op2);
}

vint64m1_t test_vwmulsu_vx_i64m1_m (vbool64_t mask, vint64m1_t maskedoff, vint32mf2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m1_m
  // CHECK: %{{.*}} = call <vscale x 1 x i64> @llvm.riscv.vwmulsu.vx.mask.nxv1i64{{.*}}(<vscale x 1 x i1> %{{.*}}, <vscale x 1 x i64> %{{.*}}, <vscale x 1 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m1_m(mask, maskedoff, op1, op2);
}

vint64m2_t test_vwmulsu_vv_i64m2_m (vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, vuint32m1_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulsu.vv.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, <vscale x 2 x i32> %{{.*}})
  return vwmulsu_vv_i64m2_m(mask, maskedoff, op1, op2);
}

vint64m2_t test_vwmulsu_vx_i64m2_m (vbool32_t mask, vint64m2_t maskedoff, vint32m1_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m2_m
  // CHECK: %{{.*}} = call <vscale x 2 x i64> @llvm.riscv.vwmulsu.vx.mask.nxv2i64{{.*}}(<vscale x 2 x i1> %{{.*}}, <vscale x 2 x i64> %{{.*}}, <vscale x 2 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m2_m(mask, maskedoff, op1, op2);
}

vint64m4_t test_vwmulsu_vv_i64m4_m (vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, vuint32m2_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulsu.vv.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, <vscale x 4 x i32> %{{.*}})
  return vwmulsu_vv_i64m4_m(mask, maskedoff, op1, op2);
}

vint64m4_t test_vwmulsu_vx_i64m4_m (vbool16_t mask, vint64m4_t maskedoff, vint32m2_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m4_m
  // CHECK: %{{.*}} = call <vscale x 4 x i64> @llvm.riscv.vwmulsu.vx.mask.nxv4i64{{.*}}(<vscale x 4 x i1> %{{.*}}, <vscale x 4 x i64> %{{.*}}, <vscale x 4 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m4_m(mask, maskedoff, op1, op2);
}

vint64m8_t test_vwmulsu_vv_i64m8_m (vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, vuint32m4_t op2) {
  // CHECK-LABEL: test_vwmulsu_vv_i64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulsu.vv.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, <vscale x 8 x i32> %{{.*}})
  return vwmulsu_vv_i64m8_m(mask, maskedoff, op1, op2);
}

vint64m8_t test_vwmulsu_vx_i64m8_m (vbool8_t mask, vint64m8_t maskedoff, vint32m4_t op1, uint32_t op2) {
  // CHECK-LABEL: test_vwmulsu_vx_i64m8_m
  // CHECK: %{{.*}} = call <vscale x 8 x i64> @llvm.riscv.vwmulsu.vx.mask.nxv8i64{{.*}}(<vscale x 8 x i1> %{{.*}}, <vscale x 8 x i64> %{{.*}}, <vscale x 8 x i32> %{{.*}}, i32 %{{.*}})
  return vwmulsu_vx_i64m8_m(mask, maskedoff, op1, op2);
}

