; RUN: llc -mtriple=riscv64 -mattr=+experimental-v < %s \
; RUN:   | FileCheck -check-prefix=CHECK %s

declare <vscale x 1 x i16> @llvm.riscv.vwadd.wx.i16mf4(<vscale x 1 x i16>, i8);
define <vscale x 1 x i16> @vwadd_wx_i16mf4(<vscale x 1 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16mf4
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i16> @llvm.riscv.vwadd.wx.i16mf4(<vscale x 1 x i16> %0, i8 %1)
  ret <vscale x 1 x i16> %a
}

declare <vscale x 2 x i16> @llvm.riscv.vwadd.wx.i16mf2(<vscale x 2 x i16>, i8);
define <vscale x 2 x i16> @vwadd_wx_i16mf2(<vscale x 2 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16mf2
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i16> @llvm.riscv.vwadd.wx.i16mf2(<vscale x 2 x i16> %0, i8 %1)
  ret <vscale x 2 x i16> %a
}

declare <vscale x 4 x i16> @llvm.riscv.vwadd.wx.i16m1(<vscale x 4 x i16>, i8);
define <vscale x 4 x i16> @vwadd_wx_i16m1(<vscale x 4 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m1
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i16> @llvm.riscv.vwadd.wx.i16m1(<vscale x 4 x i16> %0, i8 %1)
  ret <vscale x 4 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.vwadd.wx.i16m2(<vscale x 8 x i16>, i8);
define <vscale x 8 x i16> @vwadd_wx_i16m2(<vscale x 8 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m2
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i16> @llvm.riscv.vwadd.wx.i16m2(<vscale x 8 x i16> %0, i8 %1)
  ret <vscale x 8 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.vwadd.wx.i16m4(<vscale x 16 x i16>, i8);
define <vscale x 16 x i16> @vwadd_wx_i16m4(<vscale x 16 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m4
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 16 x i16> @llvm.riscv.vwadd.wx.i16m4(<vscale x 16 x i16> %0, i8 %1)
  ret <vscale x 16 x i16> %a
}

declare <vscale x 32 x i16> @llvm.riscv.vwadd.wx.i16m8(<vscale x 32 x i16>, i8);
define <vscale x 32 x i16> @vwadd_wx_i16m8(<vscale x 32 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m8
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 32 x i16> @llvm.riscv.vwadd.wx.i16m8(<vscale x 32 x i16> %0, i8 %1)
  ret <vscale x 32 x i16> %a
}

declare <vscale x 1 x i32> @llvm.riscv.vwadd.wx.i32mf2(<vscale x 1 x i32>, i16);
define <vscale x 1 x i32> @vwadd_wx_i32mf2(<vscale x 1 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32mf2
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i32> @llvm.riscv.vwadd.wx.i32mf2(<vscale x 1 x i32> %0, i16 %1)
  ret <vscale x 1 x i32> %a
}

declare <vscale x 2 x i32> @llvm.riscv.vwadd.wx.i32m1(<vscale x 2 x i32>, i16);
define <vscale x 2 x i32> @vwadd_wx_i32m1(<vscale x 2 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m1
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i32> @llvm.riscv.vwadd.wx.i32m1(<vscale x 2 x i32> %0, i16 %1)
  ret <vscale x 2 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.vwadd.wx.i32m2(<vscale x 4 x i32>, i16);
define <vscale x 4 x i32> @vwadd_wx_i32m2(<vscale x 4 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m2
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i32> @llvm.riscv.vwadd.wx.i32m2(<vscale x 4 x i32> %0, i16 %1)
  ret <vscale x 4 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.vwadd.wx.i32m4(<vscale x 8 x i32>, i16);
define <vscale x 8 x i32> @vwadd_wx_i32m4(<vscale x 8 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m4
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i32> @llvm.riscv.vwadd.wx.i32m4(<vscale x 8 x i32> %0, i16 %1)
  ret <vscale x 8 x i32> %a
}

declare <vscale x 16 x i32> @llvm.riscv.vwadd.wx.i32m8(<vscale x 16 x i32>, i16);
define <vscale x 16 x i32> @vwadd_wx_i32m8(<vscale x 16 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m8
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 16 x i32> @llvm.riscv.vwadd.wx.i32m8(<vscale x 16 x i32> %0, i16 %1)
  ret <vscale x 16 x i32> %a
}

declare <vscale x 1 x i64> @llvm.riscv.vwadd.wx.i64m1(<vscale x 1 x i64>, i32);
define <vscale x 1 x i64> @vwadd_wx_i64m1(<vscale x 1 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m1
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i64> @llvm.riscv.vwadd.wx.i64m1(<vscale x 1 x i64> %0, i32 %1)
  ret <vscale x 1 x i64> %a
}

declare <vscale x 2 x i64> @llvm.riscv.vwadd.wx.i64m2(<vscale x 2 x i64>, i32);
define <vscale x 2 x i64> @vwadd_wx_i64m2(<vscale x 2 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m2
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i64> @llvm.riscv.vwadd.wx.i64m2(<vscale x 2 x i64> %0, i32 %1)
  ret <vscale x 2 x i64> %a
}

declare <vscale x 4 x i64> @llvm.riscv.vwadd.wx.i64m4(<vscale x 4 x i64>, i32);
define <vscale x 4 x i64> @vwadd_wx_i64m4(<vscale x 4 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m4
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i64> @llvm.riscv.vwadd.wx.i64m4(<vscale x 4 x i64> %0, i32 %1)
  ret <vscale x 4 x i64> %a
}

declare <vscale x 8 x i64> @llvm.riscv.vwadd.wx.i64m8(<vscale x 8 x i64>, i32);
define <vscale x 8 x i64> @vwadd_wx_i64m8(<vscale x 8 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m8
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i64> @llvm.riscv.vwadd.wx.i64m8(<vscale x 8 x i64> %0, i32 %1)
  ret <vscale x 8 x i64> %a
}

declare <vscale x 1 x i16> @llvm.riscv.vwadd.wx.mask.i16mf4(<vscale x 1 x i1>, <vscale x 1 x i16>, <vscale x 1 x i16>, i8);
define <vscale x 1 x i16> @vwadd_wx_i16mf4_m(<vscale x 1 x i1> %0, <vscale x 1 x i16> %1, <vscale x 1 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16mf4_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i16> @llvm.riscv.vwadd.wx.mask.i16mf4(<vscale x 1 x i1> %0, <vscale x 1 x i16> %1, <vscale x 1 x i16> %2, i8 %3)
  ret <vscale x 1 x i16> %a
}

declare <vscale x 2 x i16> @llvm.riscv.vwadd.wx.mask.i16mf2(<vscale x 2 x i1>, <vscale x 2 x i16>, <vscale x 2 x i16>, i8);
define <vscale x 2 x i16> @vwadd_wx_i16mf2_m(<vscale x 2 x i1> %0, <vscale x 2 x i16> %1, <vscale x 2 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16mf2_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i16> @llvm.riscv.vwadd.wx.mask.i16mf2(<vscale x 2 x i1> %0, <vscale x 2 x i16> %1, <vscale x 2 x i16> %2, i8 %3)
  ret <vscale x 2 x i16> %a
}

declare <vscale x 4 x i16> @llvm.riscv.vwadd.wx.mask.i16m1(<vscale x 4 x i1>, <vscale x 4 x i16>, <vscale x 4 x i16>, i8);
define <vscale x 4 x i16> @vwadd_wx_i16m1_m(<vscale x 4 x i1> %0, <vscale x 4 x i16> %1, <vscale x 4 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m1_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i16> @llvm.riscv.vwadd.wx.mask.i16m1(<vscale x 4 x i1> %0, <vscale x 4 x i16> %1, <vscale x 4 x i16> %2, i8 %3)
  ret <vscale x 4 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.vwadd.wx.mask.i16m2(<vscale x 8 x i1>, <vscale x 8 x i16>, <vscale x 8 x i16>, i8);
define <vscale x 8 x i16> @vwadd_wx_i16m2_m(<vscale x 8 x i1> %0, <vscale x 8 x i16> %1, <vscale x 8 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m2_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i16> @llvm.riscv.vwadd.wx.mask.i16m2(<vscale x 8 x i1> %0, <vscale x 8 x i16> %1, <vscale x 8 x i16> %2, i8 %3)
  ret <vscale x 8 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.vwadd.wx.mask.i16m4(<vscale x 16 x i1>, <vscale x 16 x i16>, <vscale x 16 x i16>, i8);
define <vscale x 16 x i16> @vwadd_wx_i16m4_m(<vscale x 16 x i1> %0, <vscale x 16 x i16> %1, <vscale x 16 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m4_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 16 x i16> @llvm.riscv.vwadd.wx.mask.i16m4(<vscale x 16 x i1> %0, <vscale x 16 x i16> %1, <vscale x 16 x i16> %2, i8 %3)
  ret <vscale x 16 x i16> %a
}

declare <vscale x 32 x i16> @llvm.riscv.vwadd.wx.mask.i16m8(<vscale x 32 x i1>, <vscale x 32 x i16>, <vscale x 32 x i16>, i8);
define <vscale x 32 x i16> @vwadd_wx_i16m8_m(<vscale x 32 x i1> %0, <vscale x 32 x i16> %1, <vscale x 32 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i16m8_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 32 x i16> @llvm.riscv.vwadd.wx.mask.i16m8(<vscale x 32 x i1> %0, <vscale x 32 x i16> %1, <vscale x 32 x i16> %2, i8 %3)
  ret <vscale x 32 x i16> %a
}

declare <vscale x 1 x i32> @llvm.riscv.vwadd.wx.mask.i32mf2(<vscale x 1 x i1>, <vscale x 1 x i32>, <vscale x 1 x i32>, i16);
define <vscale x 1 x i32> @vwadd_wx_i32mf2_m(<vscale x 1 x i1> %0, <vscale x 1 x i32> %1, <vscale x 1 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32mf2_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i32> @llvm.riscv.vwadd.wx.mask.i32mf2(<vscale x 1 x i1> %0, <vscale x 1 x i32> %1, <vscale x 1 x i32> %2, i16 %3)
  ret <vscale x 1 x i32> %a
}

declare <vscale x 2 x i32> @llvm.riscv.vwadd.wx.mask.i32m1(<vscale x 2 x i1>, <vscale x 2 x i32>, <vscale x 2 x i32>, i16);
define <vscale x 2 x i32> @vwadd_wx_i32m1_m(<vscale x 2 x i1> %0, <vscale x 2 x i32> %1, <vscale x 2 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m1_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i32> @llvm.riscv.vwadd.wx.mask.i32m1(<vscale x 2 x i1> %0, <vscale x 2 x i32> %1, <vscale x 2 x i32> %2, i16 %3)
  ret <vscale x 2 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.vwadd.wx.mask.i32m2(<vscale x 4 x i1>, <vscale x 4 x i32>, <vscale x 4 x i32>, i16);
define <vscale x 4 x i32> @vwadd_wx_i32m2_m(<vscale x 4 x i1> %0, <vscale x 4 x i32> %1, <vscale x 4 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m2_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i32> @llvm.riscv.vwadd.wx.mask.i32m2(<vscale x 4 x i1> %0, <vscale x 4 x i32> %1, <vscale x 4 x i32> %2, i16 %3)
  ret <vscale x 4 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.vwadd.wx.mask.i32m4(<vscale x 8 x i1>, <vscale x 8 x i32>, <vscale x 8 x i32>, i16);
define <vscale x 8 x i32> @vwadd_wx_i32m4_m(<vscale x 8 x i1> %0, <vscale x 8 x i32> %1, <vscale x 8 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m4_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i32> @llvm.riscv.vwadd.wx.mask.i32m4(<vscale x 8 x i1> %0, <vscale x 8 x i32> %1, <vscale x 8 x i32> %2, i16 %3)
  ret <vscale x 8 x i32> %a
}

declare <vscale x 16 x i32> @llvm.riscv.vwadd.wx.mask.i32m8(<vscale x 16 x i1>, <vscale x 16 x i32>, <vscale x 16 x i32>, i16);
define <vscale x 16 x i32> @vwadd_wx_i32m8_m(<vscale x 16 x i1> %0, <vscale x 16 x i32> %1, <vscale x 16 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i32m8_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 16 x i32> @llvm.riscv.vwadd.wx.mask.i32m8(<vscale x 16 x i1> %0, <vscale x 16 x i32> %1, <vscale x 16 x i32> %2, i16 %3)
  ret <vscale x 16 x i32> %a
}

declare <vscale x 1 x i64> @llvm.riscv.vwadd.wx.mask.i64m1(<vscale x 1 x i1>, <vscale x 1 x i64>, <vscale x 1 x i64>, i32);
define <vscale x 1 x i64> @vwadd_wx_i64m1_m(<vscale x 1 x i1> %0, <vscale x 1 x i64> %1, <vscale x 1 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m1_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i64> @llvm.riscv.vwadd.wx.mask.i64m1(<vscale x 1 x i1> %0, <vscale x 1 x i64> %1, <vscale x 1 x i64> %2, i32 %3)
  ret <vscale x 1 x i64> %a
}

declare <vscale x 2 x i64> @llvm.riscv.vwadd.wx.mask.i64m2(<vscale x 2 x i1>, <vscale x 2 x i64>, <vscale x 2 x i64>, i32);
define <vscale x 2 x i64> @vwadd_wx_i64m2_m(<vscale x 2 x i1> %0, <vscale x 2 x i64> %1, <vscale x 2 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m2_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i64> @llvm.riscv.vwadd.wx.mask.i64m2(<vscale x 2 x i1> %0, <vscale x 2 x i64> %1, <vscale x 2 x i64> %2, i32 %3)
  ret <vscale x 2 x i64> %a
}

declare <vscale x 4 x i64> @llvm.riscv.vwadd.wx.mask.i64m4(<vscale x 4 x i1>, <vscale x 4 x i64>, <vscale x 4 x i64>, i32);
define <vscale x 4 x i64> @vwadd_wx_i64m4_m(<vscale x 4 x i1> %0, <vscale x 4 x i64> %1, <vscale x 4 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m4_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i64> @llvm.riscv.vwadd.wx.mask.i64m4(<vscale x 4 x i1> %0, <vscale x 4 x i64> %1, <vscale x 4 x i64> %2, i32 %3)
  ret <vscale x 4 x i64> %a
}

declare <vscale x 8 x i64> @llvm.riscv.vwadd.wx.mask.i64m8(<vscale x 8 x i1>, <vscale x 8 x i64>, <vscale x 8 x i64>, i32);
define <vscale x 8 x i64> @vwadd_wx_i64m8_m(<vscale x 8 x i1> %0, <vscale x 8 x i64> %1, <vscale x 8 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwadd_wx_i64m8_m
  ; CHECK: vwadd.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i64> @llvm.riscv.vwadd.wx.mask.i64m8(<vscale x 8 x i1> %0, <vscale x 8 x i64> %1, <vscale x 8 x i64> %2, i32 %3)
  ret <vscale x 8 x i64> %a
}

