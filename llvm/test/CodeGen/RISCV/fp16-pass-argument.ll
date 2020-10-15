; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mtriple=riscv32 -mattr=+experimental-zfh < %s \ 
; RUN:   | FileCheck -check-prefix=ILP32 %s
; RUN: llc -mtriple=riscv32 -mattr=+f,+experimental-zfh -target-abi=ilp32f < %s \
; RUN:   | FileCheck -check-prefix=ILP32F %s

define void @test_pass_argument_with_gpr(half %a, half *%p) nounwind {
; ILP32-LABEL: test_pass_argument_with_gpr:
; ILP32:       # %bb.0:
; ILP32-NEXT:    fmv.h.x	ft0, a0
; ILP32-NEXT:    fsh	ft0, 0(a1)
; ILP32-NEXT:    ret

; ILP32F-LABEL: test_pass_argument_with_gpr:
; ILP32F:       # %bb.0:
; ILP32F-ILP32F:   flh	fa0, 0(a0)
; ILP32F-ILP32F:   ret
  store half %a, half * %p
  ret void
}