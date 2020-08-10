// RUN: %clang_cc1 -triple riscv64 -emit-llvm %s -o - |  FileCheck %s
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#define _E8 0
#define _M1 0

static __attribute__((always_inline))
size_t vsetvl_e8m1(size_t avl) {
  return __builtin_riscv_vsetvl(avl, _E8 | _M1);
}

size_t  __attribute__((noinline)) testadd(size_t rvl) {
   return vsetvl_e8m1(rvl);
}
// CHECK: declare i64 @llvm.riscv.vsetvl.i64(i64, i64)

