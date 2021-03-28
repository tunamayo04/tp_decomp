// 
// Generated By: dol2asm
// Translation Unit: d_a_swhit0
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_swhit0/d_a_swhit0.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct J3DMaterialTable {
};

struct J3DAnmTevRegKey {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
	/* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_bckAnm {
	/* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
	/* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daSwhit0_c {
	/* 80485FF8 */ void getSwNo();
	/* 80486004 */ void getSwNo2();
	/* 80486010 */ void getEvNo();
	/* 8048602C */ void getTimer();
	/* 80486048 */ void getType();
	/* 80486064 */ void makeEventId();
	/* 804860EC */ void CreateHeap();
	/* 80486214 */ void CreateInit();
	/* 804863B0 */ void create();
	/* 8048668C */ void checkHit();
	/* 80486704 */ void setCombackTimer();
	/* 80486788 */ void endCombackTimer();
	/* 80486800 */ void onSwitch();
	/* 80486858 */ void offSwitch();
	/* 804868A8 */ void DemoProc();
	/* 804869C4 */ void orderEvent();
	/* 80486ABC */ void actionOffWait();
	/* 80486BC4 */ void actionToOnReady();
	/* 80486C28 */ void actionToOnOrder();
	/* 80486CE4 */ void actionToOnDemo();
	/* 80486D88 */ void actionToOnDemo2();
	/* 80486EC4 */ void actionSwWait();
	/* 80486FC0 */ void actionOnWait();
	/* 804870E0 */ void setDrawMtx();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {
};

struct cXyz {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A441C */ void setLightTevColorType(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct dEvent_manager_c {
	/* 80047514 */ void getEventIdx(char const*, u8, s32);
	/* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
	/* 80047930 */ void isMapToolCamera(u8, s32);
	/* 80047A78 */ void endCheck(s16);
	/* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
	/* 80047D4C */ void getIsAddvance(int);
	/* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
	/* 8004817C */ void cutEnd(int);
};

struct dCcD_Stts {
	/* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {
};

struct dCcD_Sph {
	/* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
	/* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ dCcD_GObjInf();
	/* 80084460 */ void ChkTgHit();
};

struct cM3dGSph {
	/* 8026F648 */ void SetC(cXyz const&);
	/* 804865B4 */ ~cM3dGSph();
};

struct cM3dGAab {
	/* 804865FC */ ~cM3dGAab();
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
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80486644 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void CheckCreateHeap(fopAc_ac_c*);
static void daSwhit0_Draw(daSwhit0_c*);
static void daSwhit0_Execute(daSwhit0_c*);
static void daSwhit0_Delete(daSwhit0_c*);
static void daSwhit0_Create(fopAc_ac_c*);
static void cLib_calcTimer__template0(u8*);
extern "C" extern void* g_profile_SWHIT0[12];

extern "C" void getSwNo__10daSwhit0_cFv();
extern "C" void getSwNo2__10daSwhit0_cFv();
extern "C" void getEvNo__10daSwhit0_cFv();
extern "C" void getTimer__10daSwhit0_cFv();
extern "C" void getType__10daSwhit0_cFv();
extern "C" void makeEventId__10daSwhit0_cFv();
extern "C" void CreateHeap__10daSwhit0_cFv();
extern "C" void CreateInit__10daSwhit0_cFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void create__10daSwhit0_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void checkHit__10daSwhit0_cFv();
extern "C" void setCombackTimer__10daSwhit0_cFv();
extern "C" void endCombackTimer__10daSwhit0_cFv();
extern "C" void onSwitch__10daSwhit0_cFv();
extern "C" void offSwitch__10daSwhit0_cFv();
extern "C" void DemoProc__10daSwhit0_cFv();
extern "C" void orderEvent__10daSwhit0_cFv();
extern "C" void actionOffWait__10daSwhit0_cFv();
extern "C" void actionToOnReady__10daSwhit0_cFv();
extern "C" void actionToOnOrder__10daSwhit0_cFv();
extern "C" void actionToOnDemo__10daSwhit0_cFv();
extern "C" void actionToOnDemo2__10daSwhit0_cFv();
extern "C" void actionSwWait__10daSwhit0_cFv();
extern "C" void actionOnWait__10daSwhit0_cFv();
extern "C" void setDrawMtx__10daSwhit0_cFv();
extern "C" static void daSwhit0_Draw__FP10daSwhit0_c();
extern "C" static void daSwhit0_Execute__FP10daSwhit0_c();
extern "C" static void daSwhit0_Delete__FP10daSwhit0_c();
extern "C" static void daSwhit0_Create__FP10fopAc_ac_c();
extern "C" static void func_8048734C();
extern "C" extern void* g_profile_SWHIT0[12];

// 
// External References:
// 

void mDoMtx_XYZrotM(f32 (* )[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void fopAcM_orderMapToolAutoNextEvent(fopAc_ac_c*, u8, s16, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderMapToolAutoNextEvent__FP10fopAc_ac_cUcsUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFPCcUcl();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void isMapToolCamera__16dEvent_manager_cFUcl();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80485FF8-80486004 000C+00 s=9 e=0 z=0  None .text      getSwNo__10daSwhit0_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getSwNo() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getSwNo__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486004-80486010 000C+00 s=1 e=0 z=0  None .text      getSwNo2__10daSwhit0_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getSwNo2() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getSwNo2__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486010-8048602C 001C+00 s=3 e=0 z=0  None .text      getEvNo__10daSwhit0_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getEvNo() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getEvNo__10daSwhit0_cFv.s"
}
#pragma pop


/* 8048602C-80486048 001C+00 s=1 e=0 z=0  None .text      getTimer__10daSwhit0_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getTimer() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getTimer__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486048-80486064 001C+00 s=4 e=0 z=0  None .text      getType__10daSwhit0_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::getType() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/getType__10daSwhit0_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80487370-80487374 0004+00 s=6 e=0 z=0  None .rodata    @3685                                                        */
SECTION_RODATA static u32 const lit_3685 = 0x3F800000;

/* 80487374-80487378 0004+00 s=1 e=0 z=0  None .rodata    @3725                                                        */
SECTION_RODATA static u32 const lit_3725 = 0x42BE0000;

/* 80487378-80487380 0004+04 s=5 e=0 z=0  None .rodata    @3982                                                        */
SECTION_RODATA static u32 const lit_3982[1 + 1 /* padding */] = {
	0xBF800000,
	/* padding */
	0x00000000,
};

/* 80487380-80487388 0008+00 s=1 e=0 z=0  None .rodata    @4212                                                        */
SECTION_RODATA static u8 const lit_4212[8] = {
	0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80487388-804873BC 0034+00 s=5 e=0 z=0  None .rodata    None                                                         */
SECTION_RODATA static u8 const struct_80487388[52] = {
	/* 80487388 0019 stringBase_80487388 @stringBase0 */
	0x53, 0x5F, 0x73, 0x77, 0x48, 0x69, 0x74, 0x30, 0x30, 0x00, 0x44, 0x45, 0x46, 0x41, 0x55, 0x4C,
	0x54, 0x5F, 0x53, 0x57, 0x49, 0x54, 0x43, 0x48, 0x00,
	/* 804873A1 0005 data_804873A1 None */
	0x57, 0x41, 0x49, 0x54, 0x00,
	/* 804873A6 0016 data_804873A6 None */
	0x43, 0x48, 0x41, 0x4E, 0x47, 0x45, 0x00, 0x44, 0x5F, 0x4D, 0x4E, 0x30, 0x36, 0x00, 0x53, 0x57,
	0x49, 0x54, 0x43, 0x48, 0x00, 0x00,
};

/* 80486064-804860EC 0088+00 s=1 e=0 z=0  None .text      makeEventId__10daSwhit0_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::makeEventId() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/makeEventId__10daSwhit0_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804873BC-804873C0 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)(((char*)&struct_80487388)+0x0) /* @stringBase0 */;

/* 804860EC-80486214 0128+00 s=1 e=0 z=0  None .text      CreateHeap__10daSwhit0_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CreateHeap__10daSwhit0_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804873C0-80487400 0040+00 s=1 e=0 z=0  None .data      l_sph_src                                                    */
SECTION_DATA static u8 l_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFA, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80486214-80486390 017C+00 s=1 e=0 z=0  None .text      CreateInit__10daSwhit0_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::CreateInit() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CreateInit__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486390-804863B0 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80487400-80487408 0008+00 s=1 e=0 z=0  None .data      action_table$3953                                            */
SECTION_DATA static void* action_table[2] = {
	(void*)(((char*)&struct_80487388)+0x19) /* None */,
	(void*)(((char*)&struct_80487388)+0x1E) /* None */,
};

/* 80487408-80487410 0008+00 s=1 e=0 z=0  None .data      l_color$localstatic3$draw__10daSwhit0_cFv                    */
SECTION_DATA static u8 data_80487408[8] = {
	0x01, 0x00, 0x02, 0x03, 0x03, 0x02, 0x00, 0x01,
};

/* 80487410-8048743C 002C+00 s=1 e=0 z=0  None .data      @4230                                                        */
SECTION_DATA static void* lit_4230[11] = {
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x40),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x4C),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x58),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x64),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x70),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x7C),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x88),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x58),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x64),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x70),
	(void*)(((char*)daSwhit0_Execute__FP10daSwhit0_c)+0x7C),
};

/* 8048743C-8048745C 0020+00 s=1 e=0 z=0  None .data      l_daSwhit0_Method                                            */
SECTION_DATA static void* l_daSwhit0_Method[8] = {
	(void*)daSwhit0_Create__FP10fopAc_ac_c,
	(void*)daSwhit0_Delete__FP10daSwhit0_c,
	(void*)daSwhit0_Execute__FP10daSwhit0_c,
	(void*)NULL,
	(void*)daSwhit0_Draw__FP10daSwhit0_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 8048745C-8048748C 0030+00 s=0 e=0 z=1  None .data      g_profile_SWHIT0                                             */
SECTION_DATA void* g_profile_SWHIT0[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0008FFFD,
	(void*)0x02E70000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000075C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01140000,
	(void*)&l_daSwhit0_Method,
	(void*)0x00044100,
	(void*)NULL,
};

/* 8048748C-80487498 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80487498-804874A4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 804874A4-804874B0 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 804863B0-804865B4 0204+00 s=1 e=0 z=0  None .text      create__10daSwhit0_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::create() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/create__10daSwhit0_cFv.s"
}
#pragma pop


/* 804865B4-804865FC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 804865FC-80486644 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80486644-8048668C 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 8048668C-80486704 0078+00 s=2 e=0 z=0  None .text      checkHit__10daSwhit0_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::checkHit() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/checkHit__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486704-80486788 0084+00 s=1 e=0 z=0  None .text      setCombackTimer__10daSwhit0_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::setCombackTimer() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/setCombackTimer__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486788-80486800 0078+00 s=1 e=0 z=0  None .text      endCombackTimer__10daSwhit0_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::endCombackTimer() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/endCombackTimer__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486800-80486858 0058+00 s=4 e=0 z=0  None .text      onSwitch__10daSwhit0_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::onSwitch() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/onSwitch__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486858-804868A8 0050+00 s=4 e=0 z=0  None .text      offSwitch__10daSwhit0_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::offSwitch() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/offSwitch__10daSwhit0_cFv.s"
}
#pragma pop


/* 804868A8-804869C4 011C+00 s=2 e=0 z=0  None .text      DemoProc__10daSwhit0_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::DemoProc() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/DemoProc__10daSwhit0_cFv.s"
}
#pragma pop


/* 804869C4-80486ABC 00F8+00 s=2 e=0 z=0  None .text      orderEvent__10daSwhit0_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::orderEvent() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/orderEvent__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486ABC-80486BC4 0108+00 s=1 e=0 z=0  None .text      actionOffWait__10daSwhit0_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionOffWait() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionOffWait__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486BC4-80486C28 0064+00 s=1 e=0 z=0  None .text      actionToOnReady__10daSwhit0_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnReady() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnReady__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486C28-80486CE4 00BC+00 s=1 e=0 z=0  None .text      actionToOnOrder__10daSwhit0_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnOrder() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnOrder__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486CE4-80486D88 00A4+00 s=1 e=0 z=0  None .text      actionToOnDemo__10daSwhit0_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnDemo() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnDemo__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486D88-80486EC4 013C+00 s=1 e=0 z=0  None .text      actionToOnDemo2__10daSwhit0_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionToOnDemo2() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionToOnDemo2__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486EC4-80486FC0 00FC+00 s=1 e=0 z=0  None .text      actionSwWait__10daSwhit0_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionSwWait() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionSwWait__10daSwhit0_cFv.s"
}
#pragma pop


/* 80486FC0-804870E0 0120+00 s=1 e=0 z=0  None .text      actionOnWait__10daSwhit0_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::actionOnWait() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/actionOnWait__10daSwhit0_cFv.s"
}
#pragma pop


/* 804870E0-80487138 0058+00 s=1 e=0 z=0  None .text      setDrawMtx__10daSwhit0_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwhit0_c::setDrawMtx() {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/setDrawMtx__10daSwhit0_cFv.s"
}
#pragma pop


/* 80487138-80487228 00F0+00 s=1 e=0 z=0  None .text      daSwhit0_Draw__FP10daSwhit0_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwhit0_Draw(daSwhit0_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Draw__FP10daSwhit0_c.s"
}
#pragma pop


/* 80487228-804872E4 00BC+00 s=2 e=0 z=0  None .text      daSwhit0_Execute__FP10daSwhit0_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwhit0_Execute(daSwhit0_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Execute__FP10daSwhit0_c.s"
}
#pragma pop


/* 804872E4-8048732C 0048+00 s=1 e=0 z=0  None .text      daSwhit0_Delete__FP10daSwhit0_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwhit0_Delete(daSwhit0_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Delete__FP10daSwhit0_c.s"
}
#pragma pop


/* 8048732C-8048734C 0020+00 s=1 e=0 z=0  None .text      daSwhit0_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwhit0_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/daSwhit0_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 8048734C-80487368 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(u8* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_swhit0/d_a_swhit0/func_8048734C.s"
}
#pragma pop


