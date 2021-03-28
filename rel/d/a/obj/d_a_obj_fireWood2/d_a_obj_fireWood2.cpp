// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_fireWood2
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2.h"

// 
// Types:
// 

struct mDoHIO_entry_c {
	/* 80BE8288 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daFireWood2_c {
	/* 80BE82D0 */ void setBaseMtx();
	/* 80BE8328 */ void create();
	/* 80BE8640 */ void lightInit();
	/* 80BE86CC */ void setLight();
	/* 80BE86FC */ void cutLight();
	/* 80BE872C */ void pointLightProc();
	/* 80BE87DC */ void Execute();
	/* 80BE8D98 */ bool Draw();
	/* 80BE8DA0 */ void Delete();
};

struct daFireWood2_HIO_c {
	/* 80BE824C */ daFireWood2_HIO_c();
	/* 80BE8E54 */ ~daFireWood2_HIO_c();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct cXyz {
};

struct dKy_tevstr_c {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
	/* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
	/* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
	/* 8026F1DC */ void SetC(cXyz const&);
	/* 8026F1F8 */ void SetH(f32);
	/* 8026F200 */ void SetR(f32);
	/* 80BE85B0 */ ~cM3dGCyl();
};

struct cM3dGAab {
	/* 80BE85F8 */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct LIGHT_INFLUENCE {
};

// 
// Forward References:
// 

static void daFireWood2_Draw(daFireWood2_c*);
static void daFireWood2_Execute(daFireWood2_c*);
static void daFireWood2_Delete(daFireWood2_c*);
static void daFireWood2_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_Obj_FireWood2[12];

extern "C" void __ct__17daFireWood2_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daFireWood2_cFv();
extern "C" void create__13daFireWood2_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__13daFireWood2_cFv();
extern "C" void setLight__13daFireWood2_cFv();
extern "C" void cutLight__13daFireWood2_cFv();
extern "C" void pointLightProc__13daFireWood2_cFv();
extern "C" void Execute__13daFireWood2_cFv();
extern "C" bool Draw__13daFireWood2_cFv();
extern "C" void Delete__13daFireWood2_cFv();
extern "C" static void daFireWood2_Draw__FP13daFireWood2_c();
extern "C" static void daFireWood2_Execute__FP13daFireWood2_c();
extern "C" static void daFireWood2_Delete__FP13daFireWood2_c();
extern "C" static void daFireWood2_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daFireWood2_HIO_cFv();
extern "C" void __sinit_d_a_obj_fireWood2_cpp();
extern "C" extern void* g_profile_Obj_FireWood2[12];

// 
// External References:
// 

void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfGp_getReverb(int);
void dKy_plight_set(LIGHT_INFLUENCE*);
void dKy_plight_cut(LIGHT_INFLUENCE*);
void dKy_BossLight_set(cXyz*, _GXColor*, f32, u8);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80BE8F34-80BE8F38 0004+00 s=3 e=0 z=0  None .rodata    @3625                                                        */
SECTION_RODATA static u32 const lit_3625 = 0x41700000;

/* 80BE8F38-80BE8F3C 0004+00 s=1 e=0 z=0  None .rodata    @3626                                                        */
SECTION_RODATA static u32 const lit_3626 = 0x41C80000;

/* 80BE8F3C-80BE8F40 0004+00 s=2 e=0 z=0  None .rodata    @3627                                                        */
SECTION_RODATA static u32 const lit_3627 = 0x42480000;

/* 80BE8F98-80BE8FDC 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__13daFireWood2_c                                     */
SECTION_DATA static u8 mCcDCyl__13daFireWood2_c[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80BE8FDC-80BE8FF4 0018+00 s=1 e=0 z=0  None .data      l_cull_box                                                   */
SECTION_DATA static u8 l_cull_box[24] = {
	0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
	0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80BE8FF4-80BE9014 0020+00 s=1 e=0 z=0  None .data      l_daFireWood2_Method                                         */
SECTION_DATA static void* l_daFireWood2_Method[8] = {
	(void*)daFireWood2_Create__FP10fopAc_ac_c,
	(void*)daFireWood2_Delete__FP13daFireWood2_c,
	(void*)daFireWood2_Execute__FP13daFireWood2_c,
	(void*)NULL,
	(void*)daFireWood2_Draw__FP13daFireWood2_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BE9014-80BE9044 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_FireWood2                                      */
SECTION_DATA void* g_profile_Obj_FireWood2[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00390000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000740,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01EE0000,
	(void*)&l_daFireWood2_Method,
	(void*)0x00060000,
	(void*)0x000E0000,
};

/* 80BE9044-80BE9050 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80BE9050-80BE905C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80BE905C-80BE9068 000C+00 s=2 e=0 z=0  None .data      __vt__17daFireWood2_HIO_c                                    */
SECTION_DATA static void* __vt__17daFireWood2_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__17daFireWood2_HIO_cFv,
};

/* 80BE9068-80BE9074 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BE824C-80BE8288 003C+00 s=1 e=0 z=0  None .text      __ct__17daFireWood2_HIO_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::daFireWood2_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__ct__17daFireWood2_HIO_cFv.s"
}
#pragma pop


/* 80BE8288-80BE82D0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80BE82D0-80BE8328 0058+00 s=2 e=0 z=0  None .text      setBaseMtx__13daFireWood2_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setBaseMtx__13daFireWood2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE9080-80BE908C 000C+00 s=1 e=0 z=0  None .bss       @3619                                                        */
static u8 lit_3619[12];

/* 80BE908C-80BE909C 0010+00 s=3 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80BE8328-80BE85B0 0288+00 s=1 e=0 z=0  None .text      create__13daFireWood2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/create__13daFireWood2_cFv.s"
}
#pragma pop


/* 80BE85B0-80BE85F8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80BE85F8-80BE8640 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE8F40-80BE8F70 0030+00 s=1 e=0 z=0  None .rodata    mCcDObjInfo__13daFireWood2_c                                 */
SECTION_RODATA static u8 const mCcDObjInfo__13daFireWood2_c[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
	0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE8F70-80BE8F74 0004+00 s=1 e=0 z=0  None .rodata    @3834                                                        */
SECTION_RODATA static u32 const lit_3834 = 0x41200000;

/* 80BE8F74-80BE8F78 0004+00 s=1 e=0 z=0  None .rodata    @3835                                                        */
SECTION_RODATA static u32 const lit_3835 = 0x43FA0000;

/* 80BE8F78-80BE8F7C 0004+00 s=3 e=0 z=0  None .rodata    @3836                                                        */
SECTION_RODATA static u32 const lit_3836 = 0x3F800000;

/* 80BE8F7C-80BE8F80 0004+00 s=2 e=0 z=0  None .rodata    @3837                                                        */
SECTION_RODATA static u8 const lit_3837[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BE8640-80BE86CC 008C+00 s=1 e=0 z=0  None .text      lightInit__13daFireWood2_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::lightInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/lightInit__13daFireWood2_cFv.s"
}
#pragma pop


/* 80BE86CC-80BE86FC 0030+00 s=2 e=0 z=0  None .text      setLight__13daFireWood2_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setLight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setLight__13daFireWood2_cFv.s"
}
#pragma pop


/* 80BE86FC-80BE872C 0030+00 s=1 e=0 z=0  None .text      cutLight__13daFireWood2_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::cutLight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/cutLight__13daFireWood2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE8F80-80BE8F84 0004+00 s=1 e=0 z=0  None .rodata    @3855                                                        */
SECTION_RODATA static u32 const lit_3855 = 0xBC6642FF;

/* 80BE8F84-80BE8F88 0004+00 s=1 e=0 z=0  None .rodata    @3863                                                        */
SECTION_RODATA static u32 const lit_3863 = 0x3F000000;

/* 80BE8F88-80BE8F8C 0004+00 s=1 e=0 z=0  None .rodata    @3864                                                        */
SECTION_RODATA static u32 const lit_3864 = 0x3DCCCCCD;

/* 80BE8F8C-80BE8F90 0004+00 s=1 e=0 z=0  None .rodata    @3865                                                        */
SECTION_RODATA static u32 const lit_3865 = 0x38D1B717;

/* 80BE8F90-80BE8F94 0004+00 s=1 e=0 z=0  None .rodata    @3866                                                        */
SECTION_RODATA static u32 const lit_3866 = 0x358637BD;

/* 80BE872C-80BE87DC 00B0+00 s=1 e=0 z=0  None .text      pointLightProc__13daFireWood2_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::pointLightProc() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/pointLightProc__13daFireWood2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE8F94-80BE8F98 0004+00 s=2 e=0 z=0  None .rodata    @4018                                                        */
SECTION_RODATA static u32 const lit_4018 = 0xBF800000;

/* 80BE87DC-80BE8D98 05BC+00 s=1 e=0 z=0  None .text      Execute__13daFireWood2_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Execute__13daFireWood2_cFv.s"
}
#pragma pop


/* 80BE8D98-80BE8DA0 0008+00 s=1 e=0 z=0  None .text      Draw__13daFireWood2_cFv                                      */
bool daFireWood2_c::Draw() {
	return true;
}


/* 80BE8DA0-80BE8DD4 0034+00 s=1 e=0 z=0  None .text      Delete__13daFireWood2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Delete__13daFireWood2_cFv.s"
}
#pragma pop


/* 80BE8DD4-80BE8DF4 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Draw__FP13daFireWood2_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Draw(daFireWood2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Draw__FP13daFireWood2_c.s"
}
#pragma pop


/* 80BE8DF4-80BE8E14 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Execute__FP13daFireWood2_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Execute(daFireWood2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Execute__FP13daFireWood2_c.s"
}
#pragma pop


/* 80BE8E14-80BE8E34 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Delete__FP13daFireWood2_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Delete(daFireWood2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Delete__FP13daFireWood2_c.s"
}
#pragma pop


/* 80BE8E34-80BE8E54 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Create__FP10fopAc_ac_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80BE8E54-80BE8EB0 005C+00 s=2 e=0 z=0  None .text      __dt__17daFireWood2_HIO_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::~daFireWood2_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__17daFireWood2_HIO_cFv.s"
}
#pragma pop


/* 80BE8EB0-80BE8F20 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_fireWood2_cpp                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_fireWood2_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__sinit_d_a_obj_fireWood2_cpp.s"
}
#pragma pop


