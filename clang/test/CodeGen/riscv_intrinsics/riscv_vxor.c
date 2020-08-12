// RUN: %clang --target=riscv64-unknown-linux-elf -S -emit-llvm  %s -o - |  FileCheck %s
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>


vint8m1_t  __attribute__((noinline)) testxor8(vint8m1_t value1, vint8m1_t value2) {
  return vxor_vv_i8m1(value1, value2);
}
//CHECK: %4 = call <vscale x 8 x i8> @llvm.riscv.vxor.vv.nxv8i8(<vscale x 8 x i8> %2, <vscale x 8 x i8> %3) #2

vint16m1_t  __attribute__((noinline)) testxor16(vint16m1_t value1, vint16m1_t value2) {
  return vxor_vv_i16m1(value1, value2);
}
//CHECK: %4 = call <vscale x 4 x i16> @llvm.riscv.vxor.vv.nxv4i16(<vscale x 4 x i16> %2, <vscale x 4 x i16> %3) #2

vint32m1_t  __attribute__((noinline)) testxor32(vint32m1_t value1, vint32m1_t value2) {
  return vxor_vv_i32m1(value1, value2);
}
//CHECK: %4 = call <vscale x 2 x i32> @llvm.riscv.vxor.vv.nxv2i32(<vscale x 2 x i32> %2, <vscale x 2 x i32> %3) #2

vint64m1_t  __attribute__((noinline)) testxor64(vint64m1_t value1, vint64m1_t value2) {
  return vxor_vv_i64m1(value1, value2);
}
//CHECK: %4 = call <vscale x 1 x i64> @llvm.riscv.vxor.vv.nxv1i64(<vscale x 1 x i64> %2, <vscale x 1 x i64> %3) #2


