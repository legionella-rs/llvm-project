//===- SPIRVLegalizerInfo.h --- SPIR-V Legalization Rules --------*- C++ -*-==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the targeting of the MachineLegalizer class for SPIR-V.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_SPIRV_SPIRVMACHINELEGALIZER_H
#define LLVM_LIB_TARGET_SPIRV_SPIRVMACHINELEGALIZER_H

#include "llvm/CodeGen/GlobalISel/LegalizerInfo.h"

namespace llvm {

class LLVMContext;
class SPIRVSubtarget;

// This class provides the information for legalizing SPIR-V instructions.
class SPIRVLegalizerInfo : public LegalizerInfo {
public:
  SPIRVLegalizerInfo(const SPIRVSubtarget &ST);
};
} // namespace llvm
#endif
