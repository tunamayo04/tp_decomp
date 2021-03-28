// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_ganonwall2
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct cXyz {
};

struct mDoMtx_stack_c {
	/* 8000CD64 */ void transS(cXyz const&);
};

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
	/* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct fopAc_ac_c {
};

struct daObjGWall2_c {
	/* 80BF57D8 */ void initBaseMtx();
	/* 80BF5814 */ void setBaseMtx();
	/* 80BF5878 */ void Create();
	/* 80BF5950 */ void CreateHeap();
	/* 80BF5AB4 */ void create1st();
	/* 80BF5B74 */ void Execute(f32 (** )[3][4]);
	/* 80BF5C0C */ void Draw();
	/* 80BF6004 */ void Delete();
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {
};

struct J3DModelData {
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

struct dBgW {
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JUTNameTab {
	/* 802DEAF8 */ void getName(u16) const;
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80BF5A6C */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void daObjGWall2_create1st(daObjGWall2_c*);
static void daObjGWall2_MoveBGDelete(daObjGWall2_c*);
static void daObjGWall2_MoveBGExecute(daObjGWall2_c*);
static void daObjGWall2_MoveBGDraw(daObjGWall2_c*);
extern "C" extern void* g_profile_Obj_GanonWall2[12];

extern "C" void initBaseMtx__13daObjGWall2_cFv();
extern "C" void setBaseMtx__13daObjGWall2_cFv();
extern "C" void Create__13daObjGWall2_cFv();
extern "C" void CreateHeap__13daObjGWall2_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__13daObjGWall2_cFv();
extern "C" void Execute__13daObjGWall2_cFPPA3_A4_f();
extern "C" void Draw__13daObjGWall2_cFv();
extern "C" void Delete__13daObjGWall2_cFv();
extern "C" static void daObjGWall2_create1st__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGDelete__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGExecute__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGDraw__FP13daObjGWall2_c();
extern "C" extern void* g_profile_Obj_GanonWall2[12];

// 
// External References:
// 

void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_btkAnmRemove(J3DModelData*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dKy_getdaytime_hour();
void dKy_getdaytime_minute();
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80BF57D8-80BF5814 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__13daObjGWall2_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::initBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/initBaseMtx__13daObjGWall2_cFv.s"
}
#pragma pop


/* 80BF5814-80BF5878 0064+00 s=2 e=0 z=0  None .text      setBaseMtx__13daObjGWall2_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/setBaseMtx__13daObjGWall2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BF610C-80BF616C 0060+00 s=2 e=0 z=0  None .rodata    l_idx                                                        */
SECTION_RODATA static u8 const l_idx[96] = {
	0x17, 0x05, 0x06, 0x01, 0x17, 0x05, 0x06, 0x02, 0x17, 0x05, 0x06, 0x03, 0x17, 0x05, 0x06, 0x04,
	0x17, 0x05, 0x06, 0x05, 0x05, 0x06, 0x01, 0x00, 0x06, 0x0B, 0x05, 0x00, 0x06, 0x0B, 0x05, 0x01,
	0x06, 0x0B, 0x05, 0x02, 0x06, 0x0B, 0x05, 0x03, 0x06, 0x0B, 0x05, 0x04, 0x0B, 0x11, 0x06, 0x00,
	0x0B, 0x11, 0x06, 0x01, 0x0B, 0x11, 0x06, 0x02, 0x0B, 0x11, 0x06, 0x03, 0x0B, 0x11, 0x06, 0x04,
	0x0B, 0x11, 0x06, 0x05, 0x11, 0x13, 0x02, 0x00, 0x11, 0x13, 0x02, 0x01, 0x13, 0x17, 0x04, 0x00,
	0x13, 0x17, 0x04, 0x01, 0x13, 0x17, 0x04, 0x02, 0x13, 0x17, 0x04, 0x03, 0x17, 0x05, 0x06, 0x00,
};

/* 80BF616C-80BF61CC 0060+00 s=1 e=0 z=0  None .rodata    l_color                                                      */
SECTION_RODATA static u8 const l_color[96] = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x96, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x64, 0x32, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x64, 0x64, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x78, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF,
};

/* 80BF61CC-80BF61D0 0004+00 s=1 e=0 z=0  None .rodata    @3670                                                        */
SECTION_RODATA static u8 const lit_3670[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BF61D0-80BF61D4 0004+00 s=1 e=0 z=0  None .rodata    @3671                                                        */
SECTION_RODATA static u32 const lit_3671 = 0x44480000;

/* 80BF61D4-80BF61D8 0004+00 s=1 e=0 z=0  None .rodata    @3672                                                        */
SECTION_RODATA static u32 const lit_3672 = 0xC6221200;

/* 80BF61D8-80BF61DC 0004+00 s=2 e=0 z=0  None .rodata    @3702                                                        */
SECTION_RODATA static u32 const lit_3702 = 0x3F800000;

/* 80BF61DC-80BF61E0 0004+00 s=1 e=0 z=0  None .rodata    @3737                                                        */
SECTION_RODATA static u32 const lit_3737 = 0xBF800000;

/* 80BF61E0-80BF61E4 0004+00 s=1 e=0 z=0  None .rodata    @3827                                                        */
SECTION_RODATA static u32 const lit_3827 = 0x447A0000;

/* 80BF61E4-80BF61E8 0004+00 s=1 e=0 z=0  None .rodata    @3828                                                        */
SECTION_RODATA static u32 const lit_3828 = 0x48742400;

/* 80BF61E8-80BF61EC 0004+00 s=1 e=0 z=0  None .rodata    @3829                                                        */
SECTION_RODATA static u32 const lit_3829 = 0x42700000;

/* 80BF61EC-80BF61F4 0008+00 s=1 e=0 z=0  None .rodata    @3831                                                        */
SECTION_RODATA static u8 const lit_3831[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BF61F4-80BF61FC 0008+00 s=1 e=0 z=0  None .rodata    @3833                                                        */
SECTION_RODATA static u8 const lit_3833[8] = {
	0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BF61FC-80BF620C 0010+00 s=2 e=0 z=0  None .rodata    None                                                         */
SECTION_RODATA static u8 const struct_80BF61FC[16] = {
	/* 80BF61FC 000A stringBase_80BF61FC @stringBase0 */
	0x56, 0x5F, 0x43, 0x54, 0x47, 0x57, 0x61, 0x6C, 0x6C, 0x00,
	/* 80BF6206 0006 data_80BF6206 None */
	0x6D, 0x61, 0x74, 0x30, 0x30, 0x00,
};

/* 80BF620C-80BF6210 0004+00 s=3 e=0 z=0  None .data      l_arcName                                                    */
SECTION_DATA static void* l_arcName = (void*)(((char*)&struct_80BF61FC)+0x0) /* @stringBase0 */;

/* 80BF6210-80BF6214 0004+00 s=1 e=0 z=0  None .data      l_matName                                                    */
SECTION_DATA static void* l_matName = (void*)(((char*)&struct_80BF61FC)+0xA) /* None */;

/* 80BF5878-80BF5950 00D8+00 s=1 e=0 z=0  None .text      Create__13daObjGWall2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/Create__13daObjGWall2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BF6214-80BF6234 0020+00 s=1 e=0 z=0  None .data      daObjGWall2_METHODS                                          */
SECTION_DATA static void* daObjGWall2_METHODS[8] = {
	(void*)daObjGWall2_create1st__FP13daObjGWall2_c,
	(void*)daObjGWall2_MoveBGDelete__FP13daObjGWall2_c,
	(void*)daObjGWall2_MoveBGExecute__FP13daObjGWall2_c,
	(void*)NULL,
	(void*)daObjGWall2_MoveBGDraw__FP13daObjGWall2_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BF6234-80BF6264 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_GanonWall2                                     */
SECTION_DATA void* g_profile_Obj_GanonWall2[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00C00000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005C0,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02440000,
	(void*)&daObjGWall2_METHODS,
	(void*)0x00040100,
	(void*)0x000E0000,
};

/* 80BF6264-80BF6270 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80BF5950-80BF5A6C 011C+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjGWall2_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/CreateHeap__13daObjGWall2_cFv.s"
}
#pragma pop


/* 80BF5A6C-80BF5AB4 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80BF5AB4-80BF5B74 00C0+00 s=1 e=0 z=0  None .text      create1st__13daObjGWall2_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::create1st() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/create1st__13daObjGWall2_cFv.s"
}
#pragma pop


/* 80BF5B74-80BF5C0C 0098+00 s=1 e=0 z=0  None .text      Execute__13daObjGWall2_cFPPA3_A4_f                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/Execute__13daObjGWall2_cFPPA3_A4_f.s"
}
#pragma pop


/* 80BF5C0C-80BF6004 03F8+00 s=1 e=0 z=0  None .text      Draw__13daObjGWall2_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/Draw__13daObjGWall2_cFv.s"
}
#pragma pop


/* 80BF6004-80BF6038 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjGWall2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall2_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/Delete__13daObjGWall2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BF6270-80BF6298 0028+00 s=1 e=0 z=0  None .data      __vt__13daObjGWall2_c                                        */
SECTION_DATA static void* __vt__13daObjGWall2_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__13daObjGWall2_cFv,
	(void*)Create__13daObjGWall2_cFv,
	(void*)Execute__13daObjGWall2_cFPPA3_A4_f,
	(void*)Draw__13daObjGWall2_cFv,
	(void*)Delete__13daObjGWall2_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BF6038-80BF6098 0060+00 s=1 e=0 z=0  None .text      daObjGWall2_create1st__FP13daObjGWall2_c                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjGWall2_create1st(daObjGWall2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/daObjGWall2_create1st__FP13daObjGWall2_c.s"
}
#pragma pop


/* 80BF6098-80BF60B8 0020+00 s=1 e=0 z=0  None .text      daObjGWall2_MoveBGDelete__FP13daObjGWall2_c                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjGWall2_MoveBGDelete(daObjGWall2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/daObjGWall2_MoveBGDelete__FP13daObjGWall2_c.s"
}
#pragma pop


/* 80BF60B8-80BF60D8 0020+00 s=1 e=0 z=0  None .text      daObjGWall2_MoveBGExecute__FP13daObjGWall2_c                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjGWall2_MoveBGExecute(daObjGWall2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/daObjGWall2_MoveBGExecute__FP13daObjGWall2_c.s"
}
#pragma pop


/* 80BF60D8-80BF6104 002C+00 s=1 e=0 z=0  None .text      daObjGWall2_MoveBGDraw__FP13daObjGWall2_c                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjGWall2_MoveBGDraw(daObjGWall2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall2/d_a_obj_ganonwall2/daObjGWall2_MoveBGDraw__FP13daObjGWall2_c.s"
}
#pragma pop


