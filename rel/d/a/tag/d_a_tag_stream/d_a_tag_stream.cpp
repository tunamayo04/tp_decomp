// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_stream
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_stream/d_a_tag_stream.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daTagStream_c {
	/* 80D638F8 */ void create();
	/* 80D63A98 */ ~daTagStream_c();
	/* 80D63B58 */ void execute();
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
};

// 
// Forward References:
// 

static void daTagStream_Create(fopAc_ac_c*);
static void daTagStream_Delete(daTagStream_c*);
static void daTagStream_Execute(daTagStream_c*);
static bool daTagStream_Draw(daTagStream_c*);
extern "C" extern void* g_profile_Tag_Stream[12];

extern "C" void create__13daTagStream_cFv();
extern "C" static void daTagStream_Create__FP10fopAc_ac_c();
extern "C" void __dt__13daTagStream_cFv();
extern "C" static void daTagStream_Delete__FP13daTagStream_c();
extern "C" void execute__13daTagStream_cFv();
extern "C" static void daTagStream_Execute__FP13daTagStream_c();
extern "C" static bool daTagStream_Draw__FP13daTagStream_c();
extern "C" extern void* g_profile_Tag_Stream[12];

// 
// External References:
// 

void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 m_top__13daTagStream_c[4];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __dl__FPv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 m_top__13daTagStream_c[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80D63BF0-80D63BF4 0004+00 s=1 e=0 z=0  None .rodata    @3721                                                        */
SECTION_RODATA static u32 const lit_3721 = 0x42C80000;

/* 80D638F8-80D63A78 0180+00 s=1 e=0 z=0  None .text      create__13daTagStream_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagStream_c::create() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/create__13daTagStream_cFv.s"
}
#pragma pop


/* 80D63A78-80D63A98 0020+00 s=1 e=0 z=0  None .text      daTagStream_Create__FP10fopAc_ac_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagStream_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/daTagStream_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80D63A98-80D63B30 0098+00 s=1 e=0 z=0  None .text      __dt__13daTagStream_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagStream_c::~daTagStream_c() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/__dt__13daTagStream_cFv.s"
}
#pragma pop


/* 80D63B30-80D63B58 0028+00 s=1 e=0 z=0  None .text      daTagStream_Delete__FP13daTagStream_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagStream_Delete(daTagStream_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/daTagStream_Delete__FP13daTagStream_c.s"
}
#pragma pop


/* 80D63B58-80D63BC0 0068+00 s=1 e=0 z=0  None .text      execute__13daTagStream_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagStream_c::execute() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/execute__13daTagStream_cFv.s"
}
#pragma pop


/* 80D63BC0-80D63BE0 0020+00 s=1 e=0 z=0  None .text      daTagStream_Execute__FP13daTagStream_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagStream_Execute(daTagStream_c* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/d_a_tag_stream/daTagStream_Execute__FP13daTagStream_c.s"
}
#pragma pop


/* 80D63BE0-80D63BE8 0008+00 s=1 e=0 z=0  None .text      daTagStream_Draw__FP13daTagStream_c                          */
static bool daTagStream_Draw(daTagStream_c* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80D63BF4-80D63C14 0020+00 s=1 e=0 z=0  None .data      l_daTagStream_Method                                         */
SECTION_DATA static void* l_daTagStream_Method[8] = {
	(void*)daTagStream_Create__FP10fopAc_ac_c,
	(void*)daTagStream_Delete__FP13daTagStream_c,
	(void*)daTagStream_Execute__FP13daTagStream_c,
	(void*)NULL,
	(void*)daTagStream_Draw__FP13daTagStream_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D63C14-80D63C44 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Stream                                         */
SECTION_DATA void* g_profile_Tag_Stream[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02C50000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000578,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01030000,
	(void*)&l_daTagStream_Method,
	(void*)0x00044000,
	(void*)0x030E0000,
};

