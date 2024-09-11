#ifndef PASS_H
#define PASS_H

#include "llvm/IR/PassManager.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Analysis/LoopAnalysisManager.h"
#include "llvm/Analysis/ScalarEvolution.h"
#include "llvm/Analysis/AliasAnalysis.h"

using namespace llvm;

namespace pass {
    struct PrintAnalysisPass : public llvm::PassInfoMixin<PrintAnalysisPass> {
        explicit PrintAnalysisPass(llvm::raw_ostream &OS) : OS(OS) {}
        llvm::PreservedAnalyses run(Loop &L, LoopAnalysisManager &AM, LoopStandardAnalysisResults &AR, LPMUpdater &U);
    private:
        llvm::raw_ostream &OS;
    };
}

#endif