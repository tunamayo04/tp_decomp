// 
// Generated By: dol2asm
// Translation Unit: d_a_e_ym_tag
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daE_YM_TAG_c {
	/* 80815E8C */ void execute();
	/* 80815F28 */ void create();
};

struct cXyz {
	/* 808164B4 */ ~cXyz();
};

// 
// Forward References:
// 

static bool daE_YM_TAG_Draw(daE_YM_TAG_c*);
static void s_e_ym(void*, void*);
static void daE_YM_TAG_Execute(daE_YM_TAG_c*);
static bool daE_YM_TAG_IsDelete(daE_YM_TAG_c*);
static bool daE_YM_TAG_Delete(daE_YM_TAG_c*);
static void daE_YM_TAG_Create(daE_YM_TAG_c*);
extern "C" extern void* g_profile_E_YM_TAG[12];

extern "C" static bool daE_YM_TAG_Draw__FP12daE_YM_TAG_c();
extern "C" static void s_e_ym__FPvPv();
extern "C" void execute__12daE_YM_TAG_cFv();
extern "C" static void daE_YM_TAG_Execute__FP12daE_YM_TAG_c();
extern "C" static bool daE_YM_TAG_IsDelete__FP12daE_YM_TAG_c();
extern "C" static bool daE_YM_TAG_Delete__FP12daE_YM_TAG_c();
extern "C" void create__12daE_YM_TAG_cFv();
extern "C" static void daE_YM_TAG_Create__FP12daE_YM_TAG_c();
extern "C" extern void* g_profile_E_YM_TAG[12];

// 
// External References:
// 

void fopAc_IsActor(void*);
void fopAcM_delete(fopAc_ac_c*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcM_IsCreating(unsigned int);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" void __dt__4cXyzFv();

// 
// Declarations:
// 

/* 80815DF8-80815E00 0008+00 s=1 e=0 z=0  None .text      daE_YM_TAG_Draw__FP12daE_YM_TAG_c                            */
static bool daE_YM_TAG_Draw(daE_YM_TAG_c* param_0) {
	return true;
}


/* 80815E00-80815E8C 008C+00 s=1 e=0 z=0  None .text      s_e_ym__FPvPv                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_e_ym(void* param_0, void* param_1) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag/s_e_ym__FPvPv.s"
}
#pragma pop


/* 80815E8C-80815EF8 006C+00 s=1 e=0 z=0  None .text      execute__12daE_YM_TAG_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_YM_TAG_c::execute() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag/execute__12daE_YM_TAG_cFv.s"
}
#pragma pop


/* 80815EF8-80815F18 0020+00 s=1 e=0 z=0  None .text      daE_YM_TAG_Execute__FP12daE_YM_TAG_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YM_TAG_Execute(daE_YM_TAG_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag/daE_YM_TAG_Execute__FP12daE_YM_TAG_c.s"
}
#pragma pop


/* 80815F18-80815F20 0008+00 s=1 e=0 z=0  None .text      daE_YM_TAG_IsDelete__FP12daE_YM_TAG_c                        */
static bool daE_YM_TAG_IsDelete(daE_YM_TAG_c* param_0) {
	return true;
}


/* 80815F20-80815F28 0008+00 s=1 e=0 z=0  None .text      daE_YM_TAG_Delete__FP12daE_YM_TAG_c                          */
static bool daE_YM_TAG_Delete(daE_YM_TAG_c* param_0) {
	return true;
}


/* 80815F28-80815F90 0068+00 s=1 e=0 z=0  None .text      create__12daE_YM_TAG_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daE_YM_TAG_c::create() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag/create__12daE_YM_TAG_cFv.s"
}
#pragma pop


/* 80815F90-80815FB0 0020+00 s=1 e=0 z=0  None .text      daE_YM_TAG_Create__FP12daE_YM_TAG_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YM_TAG_Create(daE_YM_TAG_c* param_0) {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym_tag/d_a_e_ym_tag/daE_YM_TAG_Create__FP12daE_YM_TAG_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80815FB8-80815FD8 0020+00 s=1 e=0 z=0  None .data      l_daE_YM_TAG_Method                                          */
SECTION_DATA static void* l_daE_YM_TAG_Method[8] = {
	(void*)daE_YM_TAG_Create__FP12daE_YM_TAG_c,
	(void*)daE_YM_TAG_Delete__FP12daE_YM_TAG_c,
	(void*)daE_YM_TAG_Execute__FP12daE_YM_TAG_c,
	(void*)daE_YM_TAG_IsDelete__FP12daE_YM_TAG_c,
	(void*)daE_YM_TAG_Draw__FP12daE_YM_TAG_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80815FD8-80816008 0030+00 s=0 e=0 z=1  None .data      g_profile_E_YM_TAG                                           */
SECTION_DATA void* g_profile_E_YM_TAG[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01F50000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000568,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00C30000,
	(void*)&l_daE_YM_TAG_Method,
	(void*)0x00044000,
	(void*)NULL,
};

