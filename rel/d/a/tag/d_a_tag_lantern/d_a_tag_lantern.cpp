// 
// Generated By: dol2asm
// Translation Unit: d_a_tag_lantern
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Lantern_c {
	/* 8048ECAC */ ~daTag_Lantern_c();
	/* 8048ED28 */ void create();
	/* 8048EDA8 */ void Delete();
	/* 8048EDDC */ void Execute();
	/* 8048EF6C */ bool Draw();
	/* 8048EF74 */ void initialize();
};

struct daTag_Lantern_Param_c {
	/* 8048F0EC */ ~daTag_Lantern_Param_c();
};

struct dMsgFlow_c {
	/* 80249F00 */ dMsgFlow_c();
	/* 80249F48 */ ~dMsgFlow_c();
	/* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
	/* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct cBgS_PolyInfo {
};

struct dBgS {
	/* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
	/* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct cXyz {
};

struct cBgS_GndChk {
	/* 80267C1C */ cBgS_GndChk();
	/* 80267C94 */ ~cBgS_GndChk();
	/* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
	/* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

// 
// Forward References:
// 

static void daTag_Lantern_Create(void*);
static void daTag_Lantern_Delete(void*);
static void daTag_Lantern_Execute(void*);
static void daTag_Lantern_Draw(void*);
static bool daTag_Lantern_IsDelete(void*);
extern "C" extern void* g_profile_TAG_LANTERN[12];

extern "C" void __dt__15daTag_Lantern_cFv();
extern "C" void create__15daTag_Lantern_cFv();
extern "C" void Delete__15daTag_Lantern_cFv();
extern "C" void Execute__15daTag_Lantern_cFv();
extern "C" bool Draw__15daTag_Lantern_cFv();
extern "C" void initialize__15daTag_Lantern_cFv();
extern "C" static void daTag_Lantern_Create__FPv();
extern "C" static void daTag_Lantern_Delete__FPv();
extern "C" static void daTag_Lantern_Execute__FPv();
extern "C" static void daTag_Lantern_Draw__FPv();
extern "C" static bool daTag_Lantern_IsDelete__FPv();
extern "C" void __sinit_d_a_tag_lantern_cpp();
extern "C" void __dt__21daTag_Lantern_Param_cFv();
extern "C" extern void* g_profile_TAG_LANTERN[12];

// 
// External References:
// 

void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_orderSpeakEvent(fopAc_ac_c*, u16, u16);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 8048F154-8048F174 0020+00 s=1 e=0 z=0  None .data      daTag_Lantern_MethodTable                                    */
SECTION_DATA static void* daTag_Lantern_MethodTable[8] = {
	(void*)daTag_Lantern_Create__FPv,
	(void*)daTag_Lantern_Delete__FPv,
	(void*)daTag_Lantern_Execute__FPv,
	(void*)daTag_Lantern_IsDelete__FPv,
	(void*)daTag_Lantern_Draw__FPv,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 8048F174-8048F1A4 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_LANTERN                                        */
SECTION_DATA void* g_profile_TAG_LANTERN[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02D60000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000060C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x011E0000,
	(void*)&daTag_Lantern_MethodTable,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 8048F1A4-8048F1B0 000C+00 s=2 e=0 z=0  None .data      __vt__15daTag_Lantern_c                                      */
SECTION_DATA static void* __vt__15daTag_Lantern_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__15daTag_Lantern_cFv,
};

/* 8048ECAC-8048ED28 007C+00 s=1 e=0 z=0  None .text      __dt__15daTag_Lantern_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Lantern_c::~daTag_Lantern_c() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/__dt__15daTag_Lantern_cFv.s"
}
#pragma pop


/* 8048ED28-8048EDA8 0080+00 s=1 e=0 z=0  None .text      create__15daTag_Lantern_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lantern_c::create() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/create__15daTag_Lantern_cFv.s"
}
#pragma pop


/* 8048EDA8-8048EDDC 0034+00 s=1 e=0 z=0  None .text      Delete__15daTag_Lantern_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lantern_c::Delete() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/Delete__15daTag_Lantern_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 8048F148-8048F14C 0004+00 s=1 e=0 z=0  None .rodata    @3683                                                        */
SECTION_RODATA static u32 const lit_3683 = 0xCE6E6B28;

/* 8048EDDC-8048EF6C 0190+00 s=2 e=0 z=0  None .text      Execute__15daTag_Lantern_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lantern_c::Execute() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/Execute__15daTag_Lantern_cFv.s"
}
#pragma pop


/* 8048EF6C-8048EF74 0008+00 s=1 e=0 z=0  None .text      Draw__15daTag_Lantern_cFv                                    */
bool daTag_Lantern_c::Draw() {
	return true;
}


/* ############################################################################################## */
/* 8048F14C-8048F150 0004+00 s=1 e=0 z=0  None .rodata    @3697                                                        */
SECTION_RODATA static u8 const lit_3697[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8048F150-8048F154 0004+00 s=1 e=0 z=0  None .rodata    @3698                                                        */
SECTION_RODATA static u32 const lit_3698 = 0x42C80000;

/* 8048EF74-8048F024 00B0+00 s=1 e=0 z=0  None .text      initialize__15daTag_Lantern_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lantern_c::initialize() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/initialize__15daTag_Lantern_cFv.s"
}
#pragma pop


/* 8048F024-8048F044 0020+00 s=1 e=0 z=0  None .text      daTag_Lantern_Create__FPv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lantern_Create(void* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/daTag_Lantern_Create__FPv.s"
}
#pragma pop


/* 8048F044-8048F064 0020+00 s=1 e=0 z=0  None .text      daTag_Lantern_Delete__FPv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lantern_Delete(void* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/daTag_Lantern_Delete__FPv.s"
}
#pragma pop


/* 8048F064-8048F084 0020+00 s=1 e=0 z=0  None .text      daTag_Lantern_Execute__FPv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lantern_Execute(void* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/daTag_Lantern_Execute__FPv.s"
}
#pragma pop


/* 8048F084-8048F0A4 0020+00 s=1 e=0 z=0  None .text      daTag_Lantern_Draw__FPv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lantern_Draw(void* param_0) {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/daTag_Lantern_Draw__FPv.s"
}
#pragma pop


/* 8048F0A4-8048F0AC 0008+00 s=1 e=0 z=0  None .text      daTag_Lantern_IsDelete__FPv                                  */
static bool daTag_Lantern_IsDelete(void* param_0) {
	return true;
}


/* ############################################################################################## */
/* 8048F1B0-8048F1BC 000C+00 s=2 e=0 z=0  None .data      __vt__21daTag_Lantern_Param_c                                */
SECTION_DATA static void* __vt__21daTag_Lantern_Param_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__21daTag_Lantern_Param_cFv,
};

/* 8048F1C8-8048F1D4 000C+00 s=1 e=0 z=0  None .bss       @3622                                                        */
static u8 lit_3622[12];

/* 8048F1D4-8048F1D8 0004+00 s=1 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[4];

/* 8048F0AC-8048F0EC 0040+00 s=0 e=1 z=0  None .text      __sinit_d_a_tag_lantern_cpp                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_tag_lantern_cpp() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/__sinit_d_a_tag_lantern_cpp.s"
}
#pragma pop


/* 8048F0EC-8048F134 0048+00 s=2 e=0 z=0  None .text      __dt__21daTag_Lantern_Param_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Lantern_Param_c::~daTag_Lantern_Param_c() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lantern/d_a_tag_lantern/__dt__21daTag_Lantern_Param_cFv.s"
}
#pragma pop


