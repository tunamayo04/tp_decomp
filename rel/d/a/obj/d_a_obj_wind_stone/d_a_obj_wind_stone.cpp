// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_wind_stone
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daWindStone_c {
	/* 80D37A18 */ daWindStone_c();
	/* 80D37A68 */ ~daWindStone_c();
	/* 80D37AF4 */ void createHeap();
	/* 80D37C20 */ void create();
	/* 80D37F0C */ void execute();
	/* 80D37F6C */ void draw();
	/* 80D3806C */ void Delete();
	/* 80D3811C */ void setModelMtx();
	/* 80D38180 */ void init();
	/* 80D381EC */ void chkWlfInRange();
	/* 80D38278 */ void chkEveOccur();
	/* 80D382C4 */ void exeModeHowl();
	/* 80D3835C */ void exeModeMapDisp();
	/* 80D383FC */ void chkMapDispMode();
	/* 80D384C4 */ void getGoldWolfIdx();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {
};

struct J3DModelData {
};

struct cXyz {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
	/* 80D37E2C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
	/* 80075EAC */ dBgS_AcchCir();
	/* 80075F58 */ void SetWall(f32, f32);
	/* 80D37E9C */ ~dBgS_AcchCir();
};

struct csXyz {
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct dBgS_Acch {
	/* 80075F94 */ ~dBgS_Acch();
	/* 800760A0 */ dBgS_Acch();
	/* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
	/* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGCir {
	/* 8026EF18 */ ~cM3dGCir();
};

struct cBgW_BgId {
	/* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS_PolyInfo {
	/* 80268074 */ cBgS_PolyInfo();
	/* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

struct _GXTexObj {
};

struct Vec {
};

struct Z2WolfHowlMgr {
	/* 802CB6EC */ void startWindStoneSound(s8, Vec*);
};

struct J3DModel {
};

// 
// Forward References:
// 

static void daWindStone_c_createHeap(fopAc_ac_c*);
static void daWindStone_create(daWindStone_c*);
static void daWindStone_Delete(daWindStone_c*);
static void daWindStone_execute(daWindStone_c*);
static void daWindStone_draw(daWindStone_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_WindStone[12];

extern "C" static void daWindStone_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__13daWindStone_cFv();
extern "C" void __dt__13daWindStone_cFv();
extern "C" void createHeap__13daWindStone_cFv();
extern "C" void create__13daWindStone_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void execute__13daWindStone_cFv();
extern "C" void draw__13daWindStone_cFv();
extern "C" void Delete__13daWindStone_cFv();
extern "C" void setModelMtx__13daWindStone_cFv();
extern "C" void init__13daWindStone_cFv();
extern "C" void chkWlfInRange__13daWindStone_cFv();
extern "C" void chkEveOccur__13daWindStone_cFv();
extern "C" void exeModeHowl__13daWindStone_cFv();
extern "C" void exeModeMapDisp__13daWindStone_cFv();
extern "C" void chkMapDispMode__13daWindStone_cFv();
extern "C" void getGoldWolfIdx__13daWindStone_cFv();
extern "C" static void daWindStone_create__FP13daWindStone_c();
extern "C" static void daWindStone_Delete__FP13daWindStone_c();
extern "C" static void daWindStone_execute__FP13daWindStone_c();
extern "C" static void daWindStone_draw__FP13daWindStone_c();
extern "C" static void func_80D385F0();
extern "C" static void func_80D385F8();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_WindStone[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&, dKy_tevstr_c*, s16, f32, _GXTexObj*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void startWindStoneSound__13Z2WolfHowlMgrFScP3Vec();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* 80D379F8-80D37A18 0020+00 s=1 e=0 z=0  None .text      daWindStone_c_createHeap__FP10fopAc_ac_c                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWindStone_c_createHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D38608-80D38614 000C+00 s=1 e=0 z=0  None .rodata    @3760                                                        */
SECTION_RODATA static u8 const lit_3760[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D38614-80D38618 0004+00 s=2 e=0 z=0  None .rodata    @4127                                                        */
SECTION_RODATA static u8 const lit_4127[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80D38618-80D3861C 0004+00 s=1 e=0 z=0  None .rodata    @4128                                                        */
SECTION_RODATA static u32 const lit_4128 = 0x41200000;

/* 80D3861C-80D38620 0004+00 s=1 e=0 z=0  None .rodata    @4175                                                        */
SECTION_RODATA static u32 const lit_4175 = 0x43FA0000;

/* 80D38620-80D38624 0004+00 s=1 e=0 z=0  None .rodata    @4176                                                        */
SECTION_RODATA static u32 const lit_4176 = 0x3F800000;

/* 80D38624-80D38628 0004+00 s=1 e=0 z=0  None .rodata    @4243                                                        */
SECTION_RODATA static u32 const lit_4243 = 0x471C4000;

/* 80D38628-80D38632 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D38628 = "WindStone";
#pragma pop

/* 80D38634-80D38638 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D38638-80D38658 0020+00 s=1 e=0 z=0  None .data      daWindStone_METHODS                                          */
SECTION_DATA static void* daWindStone_METHODS[8] = {
	(void*)daWindStone_create__FP13daWindStone_c,
	(void*)daWindStone_Delete__FP13daWindStone_c,
	(void*)daWindStone_execute__FP13daWindStone_c,
	(void*)NULL,
	(void*)daWindStone_draw__FP13daWindStone_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D38658-80D38688 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_WindStone                                      */
SECTION_DATA void* g_profile_Obj_WindStone[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x018A0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005C8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02DC0000,
	(void*)&daWindStone_METHODS,
	(void*)0x00040100,
	(void*)0x03000000,
};

/* 80D38688-80D38694 000C+00 s=2 e=0 z=0  None .data      __vt__12dBgS_AcchCir                                         */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_AcchCirFv,
};

/* 80D38694-80D386B8 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80D385F8,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80D385F0,
};

/* 80D386B8-80D386C4 000C+00 s=2 e=0 z=0  None .data      __vt__13daWindStone_c                                        */
SECTION_DATA static void* __vt__13daWindStone_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__13daWindStone_cFv,
};

/* 80D37A18-80D37A68 0050+00 s=2 e=0 z=0  None .text      __ct__13daWindStone_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWindStone_c::daWindStone_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__ct__13daWindStone_cFv.s"
}
#pragma pop


/* 80D37A68-80D37AF4 008C+00 s=1 e=0 z=0  None .text      __dt__13daWindStone_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWindStone_c::~daWindStone_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__13daWindStone_cFv.s"
}
#pragma pop


/* 80D37AF4-80D37C20 012C+00 s=1 e=0 z=0  None .text      createHeap__13daWindStone_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::createHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/createHeap__13daWindStone_cFv.s"
}
#pragma pop


/* 80D37C20-80D37E2C 020C+00 s=1 e=0 z=0  None .text      create__13daWindStone_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/create__13daWindStone_cFv.s"
}
#pragma pop


/* 80D37E2C-80D37E9C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 80D37E9C-80D37F0C 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop


/* 80D37F0C-80D37F6C 0060+00 s=1 e=0 z=0  None .text      execute__13daWindStone_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/execute__13daWindStone_cFv.s"
}
#pragma pop


/* 80D37F6C-80D3806C 0100+00 s=1 e=0 z=0  None .text      draw__13daWindStone_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/draw__13daWindStone_cFv.s"
}
#pragma pop


/* 80D3806C-80D3811C 00B0+00 s=1 e=0 z=0  None .text      Delete__13daWindStone_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/Delete__13daWindStone_cFv.s"
}
#pragma pop


/* 80D3811C-80D38180 0064+00 s=2 e=0 z=0  None .text      setModelMtx__13daWindStone_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::setModelMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/setModelMtx__13daWindStone_cFv.s"
}
#pragma pop


/* 80D38180-80D381EC 006C+00 s=1 e=0 z=0  None .text      init__13daWindStone_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/init__13daWindStone_cFv.s"
}
#pragma pop


/* 80D381EC-80D38278 008C+00 s=1 e=0 z=0  None .text      chkWlfInRange__13daWindStone_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkWlfInRange() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkWlfInRange__13daWindStone_cFv.s"
}
#pragma pop


/* 80D38278-80D382C4 004C+00 s=2 e=0 z=0  None .text      chkEveOccur__13daWindStone_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkEveOccur() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkEveOccur__13daWindStone_cFv.s"
}
#pragma pop


/* 80D382C4-80D3835C 0098+00 s=1 e=0 z=0  None .text      exeModeHowl__13daWindStone_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::exeModeHowl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/exeModeHowl__13daWindStone_cFv.s"
}
#pragma pop


/* 80D3835C-80D383FC 00A0+00 s=1 e=0 z=0  None .text      exeModeMapDisp__13daWindStone_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::exeModeMapDisp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/exeModeMapDisp__13daWindStone_cFv.s"
}
#pragma pop


/* 80D383FC-80D384C4 00C8+00 s=1 e=0 z=0  None .text      chkMapDispMode__13daWindStone_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::chkMapDispMode() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/chkMapDispMode__13daWindStone_cFv.s"
}
#pragma pop


/* 80D384C4-80D3853C 0078+00 s=1 e=0 z=0  None .text      getGoldWolfIdx__13daWindStone_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWindStone_c::getGoldWolfIdx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/getGoldWolfIdx__13daWindStone_cFv.s"
}
#pragma pop


/* 80D3853C-80D38590 0054+00 s=1 e=0 z=0  None .text      daWindStone_create__FP13daWindStone_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWindStone_create(daWindStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_create__FP13daWindStone_c.s"
}
#pragma pop


/* 80D38590-80D385B0 0020+00 s=1 e=0 z=0  None .text      daWindStone_Delete__FP13daWindStone_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWindStone_Delete(daWindStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_Delete__FP13daWindStone_c.s"
}
#pragma pop


/* 80D385B0-80D385D0 0020+00 s=1 e=0 z=0  None .text      daWindStone_execute__FP13daWindStone_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWindStone_execute(daWindStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_execute__FP13daWindStone_c.s"
}
#pragma pop


/* 80D385D0-80D385F0 0020+00 s=1 e=0 z=0  None .text      daWindStone_draw__FP13daWindStone_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWindStone_draw(daWindStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/daWindStone_draw__FP13daWindStone_c.s"
}
#pragma pop


/* 80D385F0-80D385F8 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D385F0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/func_80D385F0.s"
}
#pragma pop


/* 80D385F8-80D38600 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D385F8() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wind_stone/d_a_obj_wind_stone/func_80D385F8.s"
}
#pragma pop


