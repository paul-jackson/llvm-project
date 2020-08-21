// RUN: %clang --target=riscv64-unknown-linux-elf -S -emit-llvm  %s -o - |  FileCheck %s
#include <stdbool.h>
#include <stddef.h>
#include <riscv_vector.h>


vint16m1_t __attribute__((noinline)) testvredsum_vs_i16m1_i16m1( vint16m1_t dst, vint16m1_t vector, vint16m1_t scalar) {
  return vredsum_vs_i16m1_i16m1(dst, vector, scalar);
}

vint16m1_t __attribute__((noinline)) testvredmin_vs_i16m1_i16m1 ( vint16m1_t dst, vint16m1_t vector, vint16m1_t scalar) {
  return vredmin_vs_i16m1_i16m1 (dst, vector, scalar);
}

vint16m1_t __attribute__((noinline)) testvredmax_vs_i16m1_i16m1 ( vint16m1_t dst, vint16m1_t vector, vint16m1_t scalar) {
  return vredmax_vs_i16m1_i16m1 (dst, vector, scalar);
}

//CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vredsum.vs.nxv4i16.nxv4i16.nxv4i16(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}) #{{.*}}
//CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vredmin.vs.nxv4i16.nxv4i16.nxv4i16(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}) #{{.*}}
//CHECK: %{{.*}} = call <vscale x 4 x i16> @llvm.riscv.vredmax.vs.nxv4i16.nxv4i16.nxv4i16(<vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}, <vscale x 4 x i16> %{{.*}}) #{{.*}}
