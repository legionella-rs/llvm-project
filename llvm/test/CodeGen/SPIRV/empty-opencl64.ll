; RUN: llc -O0 -global-isel %s -o - | FileCheck %s

target triple = "spirv64-unknown-unknown"

; FIXME: ensure Magic Number, version number, generator's magic number, "bound" and "schema" are at least present

; Ensure the required Capabilities are listed.
; CHECK-DAG: OpCapability Kernel
; CHECK-DAG: OpCapability Addresses

; Ensure one, and only one, OpMemoryModel is defined.
; CHECK: OpMemoryModel Physical64 OpenCL
; CHECK-NOT: OpMemoryModel
