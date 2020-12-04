; RUN: llc -mtriple=riscv64 -mattr=+experimental-v < %s \
; RUN:   | FileCheck -check-prefix=CHECK %s

declare <vscale x 1 x i16> @llvm.riscv.vwaddu.wx.u16mf4(<vscale x 1 x i16>, i8);
define <vscale x 1 x i16> @vwaddu_wx_u16mf4(<vscale x 1 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16mf4
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i16> @llvm.riscv.vwaddu.wx.u16mf4(<vscale x 1 x i16> %0, i8 %1)
  ret <vscale x 1 x i16> %a
}

declare <vscale x 2 x i16> @llvm.riscv.vwaddu.wx.u16mf2(<vscale x 2 x i16>, i8);
define <vscale x 2 x i16> @vwaddu_wx_u16mf2(<vscale x 2 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16mf2
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i16> @llvm.riscv.vwaddu.wx.u16mf2(<vscale x 2 x i16> %0, i8 %1)
  ret <vscale x 2 x i16> %a
}

declare <vscale x 4 x i16> @llvm.riscv.vwaddu.wx.u16m1(<vscale x 4 x i16>, i8);
define <vscale x 4 x i16> @vwaddu_wx_u16m1(<vscale x 4 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m1
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i16> @llvm.riscv.vwaddu.wx.u16m1(<vscale x 4 x i16> %0, i8 %1)
  ret <vscale x 4 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.vwaddu.wx.u16m2(<vscale x 8 x i16>, i8);
define <vscale x 8 x i16> @vwaddu_wx_u16m2(<vscale x 8 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m2
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i16> @llvm.riscv.vwaddu.wx.u16m2(<vscale x 8 x i16> %0, i8 %1)
  ret <vscale x 8 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.vwaddu.wx.u16m4(<vscale x 16 x i16>, i8);
define <vscale x 16 x i16> @vwaddu_wx_u16m4(<vscale x 16 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m4
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 16 x i16> @llvm.riscv.vwaddu.wx.u16m4(<vscale x 16 x i16> %0, i8 %1)
  ret <vscale x 16 x i16> %a
}

declare <vscale x 32 x i16> @llvm.riscv.vwaddu.wx.u16m8(<vscale x 32 x i16>, i8);
define <vscale x 32 x i16> @vwaddu_wx_u16m8(<vscale x 32 x i16> %0, i8 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m8
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 32 x i16> @llvm.riscv.vwaddu.wx.u16m8(<vscale x 32 x i16> %0, i8 %1)
  ret <vscale x 32 x i16> %a
}

declare <vscale x 1 x i32> @llvm.riscv.vwaddu.wx.u32mf2(<vscale x 1 x i32>, i16);
define <vscale x 1 x i32> @vwaddu_wx_u32mf2(<vscale x 1 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32mf2
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i32> @llvm.riscv.vwaddu.wx.u32mf2(<vscale x 1 x i32> %0, i16 %1)
  ret <vscale x 1 x i32> %a
}

declare <vscale x 2 x i32> @llvm.riscv.vwaddu.wx.u32m1(<vscale x 2 x i32>, i16);
define <vscale x 2 x i32> @vwaddu_wx_u32m1(<vscale x 2 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m1
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i32> @llvm.riscv.vwaddu.wx.u32m1(<vscale x 2 x i32> %0, i16 %1)
  ret <vscale x 2 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.vwaddu.wx.u32m2(<vscale x 4 x i32>, i16);
define <vscale x 4 x i32> @vwaddu_wx_u32m2(<vscale x 4 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m2
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i32> @llvm.riscv.vwaddu.wx.u32m2(<vscale x 4 x i32> %0, i16 %1)
  ret <vscale x 4 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.vwaddu.wx.u32m4(<vscale x 8 x i32>, i16);
define <vscale x 8 x i32> @vwaddu_wx_u32m4(<vscale x 8 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m4
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i32> @llvm.riscv.vwaddu.wx.u32m4(<vscale x 8 x i32> %0, i16 %1)
  ret <vscale x 8 x i32> %a
}

declare <vscale x 16 x i32> @llvm.riscv.vwaddu.wx.u32m8(<vscale x 16 x i32>, i16);
define <vscale x 16 x i32> @vwaddu_wx_u32m8(<vscale x 16 x i32> %0, i16 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m8
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 16 x i32> @llvm.riscv.vwaddu.wx.u32m8(<vscale x 16 x i32> %0, i16 %1)
  ret <vscale x 16 x i32> %a
}

declare <vscale x 1 x i64> @llvm.riscv.vwaddu.wx.u64m1(<vscale x 1 x i64>, i32);
define <vscale x 1 x i64> @vwaddu_wx_u64m1(<vscale x 1 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m1
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 1 x i64> @llvm.riscv.vwaddu.wx.u64m1(<vscale x 1 x i64> %0, i32 %1)
  ret <vscale x 1 x i64> %a
}

declare <vscale x 2 x i64> @llvm.riscv.vwaddu.wx.u64m2(<vscale x 2 x i64>, i32);
define <vscale x 2 x i64> @vwaddu_wx_u64m2(<vscale x 2 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m2
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 2 x i64> @llvm.riscv.vwaddu.wx.u64m2(<vscale x 2 x i64> %0, i32 %1)
  ret <vscale x 2 x i64> %a
}

declare <vscale x 4 x i64> @llvm.riscv.vwaddu.wx.u64m4(<vscale x 4 x i64>, i32);
define <vscale x 4 x i64> @vwaddu_wx_u64m4(<vscale x 4 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m4
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 4 x i64> @llvm.riscv.vwaddu.wx.u64m4(<vscale x 4 x i64> %0, i32 %1)
  ret <vscale x 4 x i64> %a
}

declare <vscale x 8 x i64> @llvm.riscv.vwaddu.wx.u64m8(<vscale x 8 x i64>, i32);
define <vscale x 8 x i64> @vwaddu_wx_u64m8(<vscale x 8 x i64> %0, i32 %1) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m8
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}
  ; CHECK: ret
  %a = tail call <vscale x 8 x i64> @llvm.riscv.vwaddu.wx.u64m8(<vscale x 8 x i64> %0, i32 %1)
  ret <vscale x 8 x i64> %a
}

declare <vscale x 1 x i16> @llvm.riscv.vwaddu.wx.mask.u16mf4(<vscale x 1 x i1>, <vscale x 1 x i16>, <vscale x 1 x i16>, i8);
define <vscale x 1 x i16> @vwaddu_wx_u16mf4_m(<vscale x 1 x i1> %0, <vscale x 1 x i16> %1, <vscale x 1 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16mf4_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i16> @llvm.riscv.vwaddu.wx.mask.u16mf4(<vscale x 1 x i1> %0, <vscale x 1 x i16> %1, <vscale x 1 x i16> %2, i8 %3)
  ret <vscale x 1 x i16> %a
}

declare <vscale x 2 x i16> @llvm.riscv.vwaddu.wx.mask.u16mf2(<vscale x 2 x i1>, <vscale x 2 x i16>, <vscale x 2 x i16>, i8);
define <vscale x 2 x i16> @vwaddu_wx_u16mf2_m(<vscale x 2 x i1> %0, <vscale x 2 x i16> %1, <vscale x 2 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16mf2_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i16> @llvm.riscv.vwaddu.wx.mask.u16mf2(<vscale x 2 x i1> %0, <vscale x 2 x i16> %1, <vscale x 2 x i16> %2, i8 %3)
  ret <vscale x 2 x i16> %a
}

declare <vscale x 4 x i16> @llvm.riscv.vwaddu.wx.mask.u16m1(<vscale x 4 x i1>, <vscale x 4 x i16>, <vscale x 4 x i16>, i8);
define <vscale x 4 x i16> @vwaddu_wx_u16m1_m(<vscale x 4 x i1> %0, <vscale x 4 x i16> %1, <vscale x 4 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m1_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i16> @llvm.riscv.vwaddu.wx.mask.u16m1(<vscale x 4 x i1> %0, <vscale x 4 x i16> %1, <vscale x 4 x i16> %2, i8 %3)
  ret <vscale x 4 x i16> %a
}

declare <vscale x 8 x i16> @llvm.riscv.vwaddu.wx.mask.u16m2(<vscale x 8 x i1>, <vscale x 8 x i16>, <vscale x 8 x i16>, i8);
define <vscale x 8 x i16> @vwaddu_wx_u16m2_m(<vscale x 8 x i1> %0, <vscale x 8 x i16> %1, <vscale x 8 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m2_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i16> @llvm.riscv.vwaddu.wx.mask.u16m2(<vscale x 8 x i1> %0, <vscale x 8 x i16> %1, <vscale x 8 x i16> %2, i8 %3)
  ret <vscale x 8 x i16> %a
}

declare <vscale x 16 x i16> @llvm.riscv.vwaddu.wx.mask.u16m4(<vscale x 16 x i1>, <vscale x 16 x i16>, <vscale x 16 x i16>, i8);
define <vscale x 16 x i16> @vwaddu_wx_u16m4_m(<vscale x 16 x i1> %0, <vscale x 16 x i16> %1, <vscale x 16 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m4_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 16 x i16> @llvm.riscv.vwaddu.wx.mask.u16m4(<vscale x 16 x i1> %0, <vscale x 16 x i16> %1, <vscale x 16 x i16> %2, i8 %3)
  ret <vscale x 16 x i16> %a
}

declare <vscale x 32 x i16> @llvm.riscv.vwaddu.wx.mask.u16m8(<vscale x 32 x i1>, <vscale x 32 x i16>, <vscale x 32 x i16>, i8);
define <vscale x 32 x i16> @vwaddu_wx_u16m8_m(<vscale x 32 x i1> %0, <vscale x 32 x i16> %1, <vscale x 32 x i16> %2, i8 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u16m8_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 32 x i16> @llvm.riscv.vwaddu.wx.mask.u16m8(<vscale x 32 x i1> %0, <vscale x 32 x i16> %1, <vscale x 32 x i16> %2, i8 %3)
  ret <vscale x 32 x i16> %a
}

declare <vscale x 1 x i32> @llvm.riscv.vwaddu.wx.mask.u32mf2(<vscale x 1 x i1>, <vscale x 1 x i32>, <vscale x 1 x i32>, i16);
define <vscale x 1 x i32> @vwaddu_wx_u32mf2_m(<vscale x 1 x i1> %0, <vscale x 1 x i32> %1, <vscale x 1 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32mf2_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i32> @llvm.riscv.vwaddu.wx.mask.u32mf2(<vscale x 1 x i1> %0, <vscale x 1 x i32> %1, <vscale x 1 x i32> %2, i16 %3)
  ret <vscale x 1 x i32> %a
}

declare <vscale x 2 x i32> @llvm.riscv.vwaddu.wx.mask.u32m1(<vscale x 2 x i1>, <vscale x 2 x i32>, <vscale x 2 x i32>, i16);
define <vscale x 2 x i32> @vwaddu_wx_u32m1_m(<vscale x 2 x i1> %0, <vscale x 2 x i32> %1, <vscale x 2 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m1_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i32> @llvm.riscv.vwaddu.wx.mask.u32m1(<vscale x 2 x i1> %0, <vscale x 2 x i32> %1, <vscale x 2 x i32> %2, i16 %3)
  ret <vscale x 2 x i32> %a
}

declare <vscale x 4 x i32> @llvm.riscv.vwaddu.wx.mask.u32m2(<vscale x 4 x i1>, <vscale x 4 x i32>, <vscale x 4 x i32>, i16);
define <vscale x 4 x i32> @vwaddu_wx_u32m2_m(<vscale x 4 x i1> %0, <vscale x 4 x i32> %1, <vscale x 4 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m2_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i32> @llvm.riscv.vwaddu.wx.mask.u32m2(<vscale x 4 x i1> %0, <vscale x 4 x i32> %1, <vscale x 4 x i32> %2, i16 %3)
  ret <vscale x 4 x i32> %a
}

declare <vscale x 8 x i32> @llvm.riscv.vwaddu.wx.mask.u32m4(<vscale x 8 x i1>, <vscale x 8 x i32>, <vscale x 8 x i32>, i16);
define <vscale x 8 x i32> @vwaddu_wx_u32m4_m(<vscale x 8 x i1> %0, <vscale x 8 x i32> %1, <vscale x 8 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m4_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i32> @llvm.riscv.vwaddu.wx.mask.u32m4(<vscale x 8 x i1> %0, <vscale x 8 x i32> %1, <vscale x 8 x i32> %2, i16 %3)
  ret <vscale x 8 x i32> %a
}

declare <vscale x 16 x i32> @llvm.riscv.vwaddu.wx.mask.u32m8(<vscale x 16 x i1>, <vscale x 16 x i32>, <vscale x 16 x i32>, i16);
define <vscale x 16 x i32> @vwaddu_wx_u32m8_m(<vscale x 16 x i1> %0, <vscale x 16 x i32> %1, <vscale x 16 x i32> %2, i16 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u32m8_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 16 x i32> @llvm.riscv.vwaddu.wx.mask.u32m8(<vscale x 16 x i1> %0, <vscale x 16 x i32> %1, <vscale x 16 x i32> %2, i16 %3)
  ret <vscale x 16 x i32> %a
}

declare <vscale x 1 x i64> @llvm.riscv.vwaddu.wx.mask.u64m1(<vscale x 1 x i1>, <vscale x 1 x i64>, <vscale x 1 x i64>, i32);
define <vscale x 1 x i64> @vwaddu_wx_u64m1_m(<vscale x 1 x i1> %0, <vscale x 1 x i64> %1, <vscale x 1 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m1_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 1 x i64> @llvm.riscv.vwaddu.wx.mask.u64m1(<vscale x 1 x i1> %0, <vscale x 1 x i64> %1, <vscale x 1 x i64> %2, i32 %3)
  ret <vscale x 1 x i64> %a
}

declare <vscale x 2 x i64> @llvm.riscv.vwaddu.wx.mask.u64m2(<vscale x 2 x i1>, <vscale x 2 x i64>, <vscale x 2 x i64>, i32);
define <vscale x 2 x i64> @vwaddu_wx_u64m2_m(<vscale x 2 x i1> %0, <vscale x 2 x i64> %1, <vscale x 2 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m2_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 2 x i64> @llvm.riscv.vwaddu.wx.mask.u64m2(<vscale x 2 x i1> %0, <vscale x 2 x i64> %1, <vscale x 2 x i64> %2, i32 %3)
  ret <vscale x 2 x i64> %a
}

declare <vscale x 4 x i64> @llvm.riscv.vwaddu.wx.mask.u64m4(<vscale x 4 x i1>, <vscale x 4 x i64>, <vscale x 4 x i64>, i32);
define <vscale x 4 x i64> @vwaddu_wx_u64m4_m(<vscale x 4 x i1> %0, <vscale x 4 x i64> %1, <vscale x 4 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m4_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 4 x i64> @llvm.riscv.vwaddu.wx.mask.u64m4(<vscale x 4 x i1> %0, <vscale x 4 x i64> %1, <vscale x 4 x i64> %2, i32 %3)
  ret <vscale x 4 x i64> %a
}

declare <vscale x 8 x i64> @llvm.riscv.vwaddu.wx.mask.u64m8(<vscale x 8 x i1>, <vscale x 8 x i64>, <vscale x 8 x i64>, i32);
define <vscale x 8 x i64> @vwaddu_wx_u64m8_m(<vscale x 8 x i1> %0, <vscale x 8 x i64> %1, <vscale x 8 x i64> %2, i32 %3) {
entry:
  ; CHECK-LABEL: vwaddu_wx_u64m8_m
  ; CHECK: vwaddu.wx v{{.*}}, v{{.*}}, a{{.*}}, v0.t
  ; CHECK: ret
  %a = tail call <vscale x 8 x i64> @llvm.riscv.vwaddu.wx.mask.u64m8(<vscale x 8 x i1> %0, <vscale x 8 x i64> %1, <vscale x 8 x i64> %2, i32 %3)
  ret <vscale x 8 x i64> %a
}

