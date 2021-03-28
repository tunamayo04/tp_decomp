// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_telop
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_telop/d_a_tag_telop.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Telop_c {
	/* 80490A58 */ void create();
	/* 80490AF8 */ void execute();
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

// 
// Forward References:
// 

static bool daTag_Telop_Draw(daTag_Telop_c*);
static void daTag_Telop_Execute(daTag_Telop_c*);
static bool daTag_Telop_IsDelete(daTag_Telop_c*);
static void daTag_Telop_Delete(daTag_Telop_c*);
static void daTag_Telop_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_TAG_TELOP[12];

extern "C" void create__13daTag_Telop_cFv();
extern "C" void execute__13daTag_Telop_cFv();
extern "C" static bool daTag_Telop_Draw__FP13daTag_Telop_c();
extern "C" static void daTag_Telop_Execute__FP13daTag_Telop_c();
extern "C" static bool daTag_Telop_IsDelete__FP13daTag_Telop_c();
extern "C" static void daTag_Telop_Delete__FP13daTag_Telop_c();
extern "C" static void daTag_Telop_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_TAG_TELOP[12];

// 
// External References:
// 

void fopAcM_delete(fopAc_ac_c*);
void fopMsgM_messageSetDemo(u32);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 80490A58-80490AF8 00A0+00 s=1 e=0 z=0  None .text      create__13daTag_Telop_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Telop_c::create() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_telop/d_a_tag_telop/create__13daTag_Telop_cFv.s"
}
#pragma pop


/* 80490AF8-80490B5C 0064+00 s=1 e=0 z=0  None .text      execute__13daTag_Telop_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Telop_c::execute() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_telop/d_a_tag_telop/execute__13daTag_Telop_cFv.s"
}
#pragma pop


/* 80490B5C-80490B64 0008+00 s=1 e=0 z=0  None .text      daTag_Telop_Draw__FP13daTag_Telop_c                          */
static bool daTag_Telop_Draw(daTag_Telop_c* param_0) {
	return true;
}


/* 80490B64-80490B88 0024+00 s=1 e=0 z=0  None .text      daTag_Telop_Execute__FP13daTag_Telop_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Telop_Execute(daTag_Telop_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_telop/d_a_tag_telop/daTag_Telop_Execute__FP13daTag_Telop_c.s"
}
#pragma pop


/* 80490B88-80490B90 0008+00 s=1 e=0 z=0  None .text      daTag_Telop_IsDelete__FP13daTag_Telop_c                      */
static bool daTag_Telop_IsDelete(daTag_Telop_c* param_0) {
	return true;
}


/* 80490B90-80490BC0 0030+00 s=1 e=0 z=0  None .text      daTag_Telop_Delete__FP13daTag_Telop_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Telop_Delete(daTag_Telop_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_telop/d_a_tag_telop/daTag_Telop_Delete__FP13daTag_Telop_c.s"
}
#pragma pop


/* 80490BC0-80490BE0 0020+00 s=1 e=0 z=0  None .text      daTag_Telop_Create__FP10fopAc_ac_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Telop_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_telop/d_a_tag_telop/daTag_Telop_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80490BE8-80490C08 0020+00 s=1 e=0 z=0  None .data      l_daTag_Telop_Method                                         */
SECTION_DATA static void* l_daTag_Telop_Method[8] = {
	(void*)daTag_Telop_Create__FP10fopAc_ac_c,
	(void*)daTag_Telop_Delete__FP13daTag_Telop_c,
	(void*)daTag_Telop_Execute__FP13daTag_Telop_c,
	(void*)daTag_Telop_IsDelete__FP13daTag_Telop_c,
	(void*)daTag_Telop_Draw__FP13daTag_Telop_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80490C08-80490C38 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_TELOP                                          */
SECTION_DATA void* g_profile_TAG_TELOP[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02D30000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000570,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x011A0000,
	(void*)&l_daTag_Telop_Method,
	(void*)0x00044000,
	(void*)0x00060000,
};

