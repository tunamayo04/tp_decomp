// 
// Generated By: dol2asm
// Translation Unit: f_op/f_op_draw_tag
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_draw_tag.h"

// 
// Types:
// 

struct node_lists_tree_class {
};

struct node_list_class {
};

struct create_tag_class {
};

// 
// Forward References:
// 

void fopDwTg_ToDrawQ(create_tag_class*, int);
void fopDwTg_DrawQTo(create_tag_class*);
void fopDwTg_Init(create_tag_class*, void*);
void fopDwTg_CreateQueue();
extern "C" extern u8 g_fopDwTg_Queue[8];

extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
extern "C" void fopDwTg_CreateQueue__Fv();
extern "C" extern u8 g_fopDwTg_Queue[8];

// 
// External References:
// 

void cTr_Create(node_lists_tree_class*, node_list_class*, int);
void cTg_SingleCutFromTree(create_tag_class*);
void cTg_AdditionToTree(node_lists_tree_class*, int, create_tag_class*);
void cTg_Create(create_tag_class*, void*);

extern "C" void cTr_Create__FP21node_lists_tree_classP15node_list_classi();
extern "C" void cTg_SingleCutFromTree__FP16create_tag_class();
extern "C" void cTg_AdditionToTree__FP21node_lists_tree_classiP16create_tag_class();
extern "C" void cTg_Create__FP16create_tag_classPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804505D0-804505D8 0008+00 s=2 e=2 z=0  None .sdata     g_fopDwTg_Queue                                              */
SECTION_SDATA u8 g_fopDwTg_Queue[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 800204AC-800204D4 0028+00 s=0 e=4 z=2  None .text      fopDwTg_ToDrawQ__FP16create_tag_classi                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwTg_ToDrawQ(create_tag_class* param_0, int param_1) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_ToDrawQ__FP16create_tag_classi.s"
}
#pragma pop


/* 800204D4-800204F4 0020+00 s=0 e=8 z=3  None .text      fopDwTg_DrawQTo__FP16create_tag_class                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwTg_DrawQTo(create_tag_class* param_0) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_DrawQTo__FP16create_tag_class.s"
}
#pragma pop


/* 800204F4-80020518 0024+00 s=0 e=4 z=0  None .text      fopDwTg_Init__FP16create_tag_classPv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwTg_Init(create_tag_class* param_0, void* param_1) {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_Init__FP16create_tag_classPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803F1E10-803F4CF0 2EE0+00 s=1 e=0 z=0  None .bss       lists$2216                                                   */
static u8 lists[12000];

/* 80020518-80020548 0030+00 s=0 e=1 z=0  None .text      fopDwTg_CreateQueue__Fv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwTg_CreateQueue() {
	nofralloc
#include "asm/f_op/f_op_draw_tag/fopDwTg_CreateQueue__Fv.s"
}
#pragma pop


