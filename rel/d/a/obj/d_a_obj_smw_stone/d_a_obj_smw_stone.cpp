// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_smw_stone
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daSmWStone_c {
	/* 80CDE538 */ daSmWStone_c();
	/* 80CDE588 */ ~daSmWStone_c();
	/* 80CDE614 */ void create();
	/* 80CDE8D8 */ void execute();
	/* 80CDE92C */ void draw();
	/* 80CDEA2C */ void Delete();
	/* 80CDEAA4 */ void exeModeHowl();
	/* 80CDEBA0 */ void setModelMtx();
	/* 80CDEC04 */ void createHeap();
	/* 80CDED30 */ void init();
	/* 80CDED9C */ void chkWlfInRange();
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
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
	/* 80CDE7F8 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
	/* 80075EAC */ dBgS_AcchCir();
	/* 80075F58 */ void SetWall(f32, f32);
	/* 80CDE868 */ ~dBgS_AcchCir();
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

static void daSmWStone_c_createHeap(fopAc_ac_c*);
static void daSmWStone_create(daSmWStone_c*);
static void daSmWStone_Delete(daSmWStone_c*);
static void daSmWStone_execute(daSmWStone_c*);
static void daSmWStone_draw(daSmWStone_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_SmWStone[12];

extern "C" static void daSmWStone_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__12daSmWStone_cFv();
extern "C" void __dt__12daSmWStone_cFv();
extern "C" void create__12daSmWStone_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void execute__12daSmWStone_cFv();
extern "C" void draw__12daSmWStone_cFv();
extern "C" void Delete__12daSmWStone_cFv();
extern "C" void exeModeHowl__12daSmWStone_cFv();
extern "C" void setModelMtx__12daSmWStone_cFv();
extern "C" void createHeap__12daSmWStone_cFv();
extern "C" void init__12daSmWStone_cFv();
extern "C" void chkWlfInRange__12daSmWStone_cFv();
extern "C" static void daSmWStone_create__FP12daSmWStone_c();
extern "C" static void daSmWStone_Delete__FP12daSmWStone_c();
extern "C" static void daSmWStone_execute__FP12daSmWStone_c();
extern "C" static void daSmWStone_draw__FP12daSmWStone_c();
extern "C" static void func_80CDEEDC();
extern "C" static void func_80CDEEE4();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_SmWStone[12];

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
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
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
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

// 
// Declarations:
// 

/* 80CDE518-80CDE538 0020+00 s=1 e=0 z=0  None .text      daSmWStone_c_createHeap__FP10fopAc_ac_c                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSmWStone_c_createHeap(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/daSmWStone_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CDEEF4-80CDEF00 000C+00 s=1 e=0 z=0  None .rodata    @3776                                                        */
SECTION_RODATA static u8 const lit_3776[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CDEF00-80CDEF04 0004+00 s=2 e=0 z=0  None .rodata    @4191                                                        */
SECTION_RODATA static u8 const lit_4191[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CDEF04-80CDEF08 0004+00 s=1 e=0 z=0  None .rodata    @4192                                                        */
SECTION_RODATA static u32 const lit_4192 = 0x41200000;

/* 80CDEF08-80CDEF0C 0004+00 s=1 e=0 z=0  None .rodata    @4238                                                        */
SECTION_RODATA static u32 const lit_4238 = 0x43FA0000;

/* 80CDEF0C-80CDEF10 0004+00 s=1 e=0 z=0  None .rodata    @4239                                                        */
SECTION_RODATA static u32 const lit_4239 = 0x3F800000;

/* 80CDEF10-80CDEF14 0004+00 s=1 e=0 z=0  None .rodata    @4350                                                        */
SECTION_RODATA static u32 const lit_4350 = 0x471C4000;

/* 80CDEF14-80CDEF1C 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CDEF14 = "WStoneF";
#pragma pop

/* 80CDEF1C-80CDEF20 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CDEF20-80CDEF40 0020+00 s=1 e=0 z=0  None .data      daSmWStone_METHODS                                           */
SECTION_DATA static void* daSmWStone_METHODS[8] = {
	(void*)daSmWStone_create__FP12daSmWStone_c,
	(void*)daSmWStone_Delete__FP12daSmWStone_c,
	(void*)daSmWStone_execute__FP12daSmWStone_c,
	(void*)NULL,
	(void*)daSmWStone_draw__FP12daSmWStone_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CDEF40-80CDEF70 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_SmWStone                                       */
SECTION_DATA void* g_profile_Obj_SmWStone[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x018D0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005C8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02DF0000,
	(void*)&daSmWStone_METHODS,
	(void*)0x00044100,
	(void*)0x03000000,
};

/* 80CDEF70-80CDEF7C 000C+00 s=2 e=0 z=0  None .data      __vt__12dBgS_AcchCir                                         */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_AcchCirFv,
};

/* 80CDEF7C-80CDEFA0 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80CDEEE4,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80CDEEDC,
};

/* 80CDEFA0-80CDEFAC 000C+00 s=2 e=0 z=0  None .data      __vt__12daSmWStone_c                                         */
SECTION_DATA static void* __vt__12daSmWStone_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12daSmWStone_cFv,
};

/* 80CDE538-80CDE588 0050+00 s=2 e=0 z=0  None .text      __ct__12daSmWStone_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSmWStone_c::daSmWStone_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/__ct__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDE588-80CDE614 008C+00 s=1 e=0 z=0  None .text      __dt__12daSmWStone_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSmWStone_c::~daSmWStone_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/__dt__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDE614-80CDE7F8 01E4+00 s=1 e=0 z=0  None .text      create__12daSmWStone_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/create__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDE7F8-80CDE868 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 80CDE868-80CDE8D8 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop


/* 80CDE8D8-80CDE92C 0054+00 s=1 e=0 z=0  None .text      execute__12daSmWStone_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/execute__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDE92C-80CDEA2C 0100+00 s=1 e=0 z=0  None .text      draw__12daSmWStone_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/draw__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDEA2C-80CDEAA4 0078+00 s=1 e=0 z=0  None .text      Delete__12daSmWStone_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/Delete__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDEAA4-80CDEBA0 00FC+00 s=1 e=0 z=0  None .text      exeModeHowl__12daSmWStone_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::exeModeHowl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/exeModeHowl__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDEBA0-80CDEC04 0064+00 s=2 e=0 z=0  None .text      setModelMtx__12daSmWStone_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::setModelMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/setModelMtx__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDEC04-80CDED30 012C+00 s=1 e=0 z=0  None .text      createHeap__12daSmWStone_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::createHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/createHeap__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDED30-80CDED9C 006C+00 s=1 e=0 z=0  None .text      init__12daSmWStone_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/init__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDED9C-80CDEE28 008C+00 s=1 e=0 z=0  None .text      chkWlfInRange__12daSmWStone_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSmWStone_c::chkWlfInRange() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/chkWlfInRange__12daSmWStone_cFv.s"
}
#pragma pop


/* 80CDEE28-80CDEE7C 0054+00 s=1 e=0 z=0  None .text      daSmWStone_create__FP12daSmWStone_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSmWStone_create(daSmWStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/daSmWStone_create__FP12daSmWStone_c.s"
}
#pragma pop


/* 80CDEE7C-80CDEE9C 0020+00 s=1 e=0 z=0  None .text      daSmWStone_Delete__FP12daSmWStone_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSmWStone_Delete(daSmWStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/daSmWStone_Delete__FP12daSmWStone_c.s"
}
#pragma pop


/* 80CDEE9C-80CDEEBC 0020+00 s=1 e=0 z=0  None .text      daSmWStone_execute__FP12daSmWStone_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSmWStone_execute(daSmWStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/daSmWStone_execute__FP12daSmWStone_c.s"
}
#pragma pop


/* 80CDEEBC-80CDEEDC 0020+00 s=1 e=0 z=0  None .text      daSmWStone_draw__FP12daSmWStone_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSmWStone_draw(daSmWStone_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/daSmWStone_draw__FP12daSmWStone_c.s"
}
#pragma pop


/* 80CDEEDC-80CDEEE4 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80CDEEDC() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/func_80CDEEDC.s"
}
#pragma pop


/* 80CDEEE4-80CDEEEC 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80CDEEE4() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smw_stone/d_a_obj_smw_stone/func_80CDEEE4.s"
}
#pragma pop


