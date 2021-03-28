// 
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_create_tag
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_create_tag.h"

// 
// Types:
// 

struct node_list_class {
};

struct create_tag_class {
};

struct create_tag {
};

// 
// Forward References:
// 

void fpcCtTg_ToCreateQ(create_tag*);
void fpcCtTg_CreateQTo(create_tag*);
void fpcCtTg_Init(create_tag*, void*);
extern "C" extern u8 g_fpcCtTg_Queue[12 + 4 /* padding */];

extern "C" void fpcCtTg_ToCreateQ__FP10create_tag();
extern "C" void fpcCtTg_CreateQTo__FP10create_tag();
extern "C" void fpcCtTg_Init__FP10create_tagPv();
extern "C" extern u8 g_fpcCtTg_Queue[12 + 4 /* padding */];

// 
// External References:
// 

void cTg_SingleCut(create_tag_class*);
void cTg_Addition(node_list_class*, create_tag_class*);
void cTg_Create(create_tag_class*, void*);

extern "C" void cTg_SingleCut__FP16create_tag_class();
extern "C" void cTg_Addition__FP15node_list_classP16create_tag_class();
extern "C" void cTg_Create__FP16create_tag_classPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A3990-803A39A0 000C+04 s=1 e=2 z=0  None .data      g_fpcCtTg_Queue                                              */
SECTION_DATA u8 g_fpcCtTg_Queue[12 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 80020E38-80020E64 002C+00 s=0 e=1 z=0  None .text      fpcCtTg_ToCreateQ__FP10create_tag                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtTg_ToCreateQ(create_tag* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_create_tag/fpcCtTg_ToCreateQ__FP10create_tag.s"
}
#pragma pop


/* 80020E64-80020E84 0020+00 s=0 e=1 z=0  None .text      fpcCtTg_CreateQTo__FP10create_tag                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtTg_CreateQTo(create_tag* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_create_tag/fpcCtTg_CreateQTo__FP10create_tag.s"
}
#pragma pop


/* 80020E84-80020EA8 0024+00 s=0 e=1 z=0  None .text      fpcCtTg_Init__FP10create_tagPv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcCtTg_Init(create_tag* param_0, void* param_1) {
	nofralloc
#include "asm/f_pc/f_pc_create_tag/fpcCtTg_Init__FP10create_tagPv.s"
}
#pragma pop


