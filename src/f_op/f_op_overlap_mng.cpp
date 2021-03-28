// 
// Generated By: dol2asm
// Translation Unit: f_op/f_op_overlap_mng
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_overlap_mng.h"

// 
// Types:
// 

struct scene_class {
};

struct request_base_class {
};

struct overlap_task_class {
};

struct overlap_request_class {
};

// 
// Forward References:
// 

void fopOvlpM_SceneIsStop();
void fopOvlpM_SceneIsStart();
void fopOvlpM_IsOutReq(overlap_task_class*);
void fopOvlpM_Done(overlap_task_class*);
void fopOvlpM_ToldAboutID(unsigned int);
void fopOvlpM_IsPeek();
void fopOvlpM_IsDone();
void fopOvlpM_IsDoingReq();
void fopOvlpM_ClearOfReq();
void fopOvlpM_Request(s16, u16);
void fopOvlpM_Management();
void fopOvlpM_Cancel();
void fopOvlpM_Init();

extern "C" void fopOvlpM_SceneIsStop__Fv();
extern "C" void fopOvlpM_SceneIsStart__Fv();
extern "C" void fopOvlpM_IsOutReq__FP18overlap_task_class();
extern "C" void fopOvlpM_Done__FP18overlap_task_class();
extern "C" void fopOvlpM_ToldAboutID__FUi();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fopOvlpM_IsDone__Fv();
extern "C" void fopOvlpM_IsDoingReq__Fv();
extern "C" void fopOvlpM_ClearOfReq__Fv();
extern "C" void fopOvlpM_Request__FsUs();
extern "C" void fopOvlpM_Management__Fv();
extern "C" void fopOvlpM_Cancel__Fv();
extern "C" void fopOvlpM_Init__Fv();

// 
// External References:
// 

void fopOvlpReq_Request(overlap_request_class*, s16, u16);
void fopOvlpReq_Handler(overlap_request_class*);
void fopOvlpReq_Cancel(overlap_request_class*);
void fopOvlpReq_OverlapClr(overlap_request_class*);
void fopScnPause_Enable(scene_class*);
void fopScnPause_Disable(scene_class*);
void fpcEx_SearchByID(unsigned int);
void cReq_Is_Done(request_base_class*);
void cReq_Done(request_base_class*);

extern "C" void fopOvlpReq_Request__FP21overlap_request_classsUs();
extern "C" void fopOvlpReq_Handler__FP21overlap_request_class();
extern "C" void fopOvlpReq_Cancel__FP21overlap_request_class();
extern "C" void fopOvlpReq_OverlapClr__FP21overlap_request_class();
extern "C" void fopScnPause_Enable__FP11scene_class();
extern "C" void fopScnPause_Disable__FP11scene_class();
extern "C" void fpcEx_SearchByID__FUi();
extern "C" void cReq_Is_Done__FP18request_base_class();
extern "C" void cReq_Done__FP18request_base_class();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 804505B0-804505B8 0004+04 s=10 e=0 z=0  None .sdata     l_fopOvlpM_overlap                                           */
SECTION_SDATA static u8 l_fopOvlpM_overlap[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 8001E484-8001E4C4 0040+00 s=0 e=1 z=0  None .text      fopOvlpM_SceneIsStop__Fv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_SceneIsStop() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_SceneIsStop__Fv.s"
}
#pragma pop


/* 8001E4C4-8001E504 0040+00 s=0 e=5 z=0  None .text      fopOvlpM_SceneIsStart__Fv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_SceneIsStart() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_SceneIsStart__Fv.s"
}
#pragma pop


/* 8001E504-8001E51C 0018+00 s=0 e=3 z=0  None .text      fopOvlpM_IsOutReq__FP18overlap_task_class                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_IsOutReq(overlap_task_class* param_0) {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_IsOutReq__FP18overlap_task_class.s"
}
#pragma pop


/* 8001E51C-8001E540 0024+00 s=0 e=6 z=0  None .text      fopOvlpM_Done__FP18overlap_task_class                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_Done(overlap_task_class* param_0) {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_Done__FP18overlap_task_class.s"
}
#pragma pop


/* 8001E540-8001E558 0018+00 s=0 e=1 z=0  None .text      fopOvlpM_ToldAboutID__FUi                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_ToldAboutID(unsigned int param_0) {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_ToldAboutID__FUi.s"
}
#pragma pop


/* 8001E558-8001E574 001C+00 s=0 e=6 z=7  None .text      fopOvlpM_IsPeek__Fv                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_IsPeek() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_IsPeek__Fv.s"
}
#pragma pop


/* 8001E574-8001E5A8 0034+00 s=0 e=1 z=0  None .text      fopOvlpM_IsDone__Fv                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_IsDone() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_IsDone__Fv.s"
}
#pragma pop


/* 8001E5A8-8001E5D0 0028+00 s=0 e=3 z=1  None .text      fopOvlpM_IsDoingReq__Fv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_IsDoingReq() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_IsDoingReq__Fv.s"
}
#pragma pop


/* 8001E5D0-8001E604 0034+00 s=0 e=1 z=0  None .text      fopOvlpM_ClearOfReq__Fv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_ClearOfReq() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_ClearOfReq__Fv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803F1DE8-803F1E10 0028+00 s=1 e=0 z=0  None .bss       l_fopOvlpM_Request                                           */
static u8 l_fopOvlpM_Request[40];

/* 8001E604-8001E650 004C+00 s=0 e=1 z=0  None .text      fopOvlpM_Request__FsUs                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_Request(s16 param_0, u16 param_1) {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_Request__FsUs.s"
}
#pragma pop


/* 8001E650-8001E698 0048+00 s=0 e=1 z=0  None .text      fopOvlpM_Management__Fv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_Management() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_Management__Fv.s"
}
#pragma pop


/* 8001E698-8001E6E8 0050+00 s=0 e=1 z=0  None .text      fopOvlpM_Cancel__Fv                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopOvlpM_Cancel() {
	nofralloc
#include "asm/f_op/f_op_overlap_mng/fopOvlpM_Cancel__Fv.s"
}
#pragma pop


/* 8001E6E8-8001E6EC 0004+00 s=0 e=1 z=0  None .text      fopOvlpM_Init__Fv                                            */
void fopOvlpM_Init() {
	/* empty function */
}


