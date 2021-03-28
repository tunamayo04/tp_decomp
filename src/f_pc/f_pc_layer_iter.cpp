// 
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_layer_iter
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_layer_iter.h"

// 
// Types:
// 

struct node_lists_tree_class {
};

struct node_class {
};

struct method_filter {
};

struct layer_class {
};

struct judge_filter {
};

struct create_tag_class {
};

// 
// Forward References:
// 

void fpcLyIt_OnlyHere(layer_class*, int (*)(void*, void*), void*);
void fpcLyIt_OnlyHereLY(layer_class*, int (*)(void*, void*), void*);
void fpcLyIt_Judge(layer_class*, void* (*)(void*, void*), void*);
void fpcLyIt_AllJudge(void* (*)(void*, void*), void*);

extern "C" void fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv();
extern "C" void fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv();
extern "C" void fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv();
extern "C" void fpcLyIt_AllJudge__FPFPvPv_PvPv();

// 
// External References:
// 

void fpcLy_RootLayer();
void fpcLy_SetCurrentLayer(layer_class*);
void fpcLy_CurrentLayer();
void cTrIt_Method(node_lists_tree_class*, int (*)(node_class*, void*), void*);
void cTrIt_Judge(node_lists_tree_class*, void* (*)(node_class*, void*), void*);
void cTgIt_MethodCall(create_tag_class*, method_filter*);
void cTgIt_JudgeFilter(create_tag_class*, judge_filter*);

extern "C" void fpcLy_RootLayer__Fv();
extern "C" void fpcLy_SetCurrentLayer__FP11layer_class();
extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void cTrIt_Method__FP21node_lists_tree_classPFP10node_classPv_iPv();
extern "C" void cTrIt_Judge__FP21node_lists_tree_classPFP10node_classPv_PvPv();
extern "C" void cTgIt_MethodCall__FP16create_tag_classP13method_filter();
extern "C" void cTgIt_JudgeFilter__FP16create_tag_classP12judge_filter();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

// 
// Declarations:
// 

/* 80021B88-80021BC0 0038+00 s=1 e=4 z=0  None .text      fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_OnlyHere(layer_class* param_0, int (*)(void*, void*), void* param_2) {
	nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv.s"
}
#pragma pop


/* 80021BC0-80021C28 0068+00 s=0 e=1 z=0  None .text      fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_OnlyHereLY(layer_class* param_0, int (*)(void*, void*), void* param_2) {
	nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_OnlyHereLY__FP11layer_classPFPvPv_iPv.s"
}
#pragma pop


/* 80021C28-80021C60 0038+00 s=0 e=3 z=0  None .text      fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_Judge(layer_class* param_0, void* (*)(void*, void*), void* param_2) {
	nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv.s"
}
#pragma pop


/* 80021C60-80021CD4 0074+00 s=0 e=1 z=4  None .text      fpcLyIt_AllJudge__FPFPvPv_PvPv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcLyIt_AllJudge(void* (*)(void*, void*), void* param_1) {
	nofralloc
#include "asm/f_pc/f_pc_layer_iter/fpcLyIt_AllJudge__FPFPvPv_PvPv.s"
}
#pragma pop


