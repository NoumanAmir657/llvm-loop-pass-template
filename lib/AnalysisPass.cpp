#include "Pass.h"

using namespace llvm;

namespace pass {
    PreservedAnalyses PrintAnalysisPass::run(Loop &L, LoopAnalysisManager &AM, LoopStandardAnalysisResults &AR, LPMUpdater &U) {
        return PreservedAnalyses::all();
    }
}