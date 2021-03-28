// 
// Generated By: dol2asm
// Translation Unit: d_a_npc_sq
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_sq/d_a_npc_sq.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct npc_sq_class {
};

struct mDoMtx_stack_c {
	/* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
	/* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_McaMorfCallBack2_c {
};

struct mDoExt_McaMorfCallBack1_c {
};

struct Vec {
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_McaMorf {
	/* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*, mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int, int, void*, u32, u32);
	/* 8001037C */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32, void*);
	/* 800105C8 */ void play(Vec*, u32, s8);
	/* 80010680 */ void entryDL();
	/* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
};

struct daNpc_Sq_HIO_c {
	/* 80AF5FEC */ daNpc_Sq_HIO_c();
	/* 80AF7360 */ ~daNpc_Sq_HIO_c();
};

struct dSv_event_c {
	/* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {
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

struct dMsgFlow_c {
	/* 80249F00 */ dMsgFlow_c();
	/* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
	/* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
	/* 8024A540 */ void getNowMsgNo();
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
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
};

struct dCamera_c {
	/* 801614AC */ void Start();
	/* 801614D0 */ void Stop();
	/* 8016300C */ void SetTrimSize(s32);
	/* 80180AE0 */ void Set(cXyz, cXyz, f32, s16);
};

struct dBgS_PolyPassChk {
	/* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
	/* 80AF72F0 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
	/* 80075EAC */ dBgS_AcchCir();
	/* 80075F58 */ void SetWall(f32, f32);
};

struct csXyz {
};

struct dBgS {
};

struct dBgS_Acch {
	/* 80075F94 */ ~dBgS_Acch();
	/* 800760A0 */ dBgS_Acch();
	/* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
	/* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
	/* 8026F648 */ void SetC(cXyz const&);
	/* 8026F708 */ void SetR(f32);
	/* 80AF7260 */ ~cM3dGSph();
};

struct cM3dGAab {
	/* 80AF72A8 */ ~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {
};

struct _GXTexObj {
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80AF6F50 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void anm_init(npc_sq_class*, int, f32, u8, f32);
static void daNpc_Sq_Draw(npc_sq_class*);
static void npc_sq_normal(npc_sq_class*);
static void action(npc_sq_class*);
static void cam_3d_morf(npc_sq_class*, f32);
static void demo_camera(npc_sq_class*);
static void daNpc_Sq_Execute(npc_sq_class*);
static bool daNpc_Sq_IsDelete(npc_sq_class*);
static void daNpc_Sq_Delete(npc_sq_class*);
static void useHeapInit(fopAc_ac_c*);
static void daNpc_Sq_Create(fopAc_ac_c*);
extern "C" extern u32 const lit_4044;
extern "C" extern u32 const lit_4045;
extern "C" extern u32 const lit_4046;
extern "C" extern u32 const lit_4047;
extern "C" extern u32 const lit_4049;
extern "C" extern u32 const lit_4050;
extern "C" extern u32 const lit_4051[1 + 1 /* padding */];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_NPC_SQ[12];

extern "C" void __ct__14daNpc_Sq_HIO_cFv();
extern "C" static void anm_init__FP12npc_sq_classifUcf();
extern "C" static void daNpc_Sq_Draw__FP12npc_sq_class();
extern "C" static void npc_sq_normal__FP12npc_sq_class();
extern "C" static void action__FP12npc_sq_class();
extern "C" static void cam_3d_morf__FP12npc_sq_classf();
extern "C" static void demo_camera__FP12npc_sq_class();
extern "C" static void daNpc_Sq_Execute__FP12npc_sq_class();
extern "C" static bool daNpc_Sq_IsDelete__FP12npc_sq_class();
extern "C" static void daNpc_Sq_Delete__FP12npc_sq_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daNpc_Sq_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__14daNpc_Sq_HIO_cFv();
extern "C" void __sinit_d_a_npc_sq_cpp();
extern "C" static void func_80AF73E4();
extern "C" static void func_80AF73EC();
extern "C" extern u32 const lit_4044;
extern "C" extern u32 const lit_4045;
extern "C" extern u32 const lit_4046;
extern "C" extern u32 const lit_4047;
extern "C" extern u32 const lit_4049;
extern "C" extern u32 const lit_4050;
extern "C" extern u32 const lit_4051[1 + 1 /* padding */];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_NPC_SQ[12];

// 
// External References:
// 

void mDoMtx_XrotM(f32 (* )[4], s16);
void mDoMtx_YrotS(f32 (* )[4], s16);
void mDoMtx_YrotM(f32 (* )[4], s16);
void mDoMtx_ZrotM(f32 (* )[4], s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_searchActorDistance(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&, dKy_tevstr_c*, s16, f32, _GXTexObj*);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void __ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getNowMsgNo__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSubtract();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80AF7408-80AF740C 0004+00 s=7 e=0 z=0  None .rodata    @3768                                                        */
SECTION_RODATA static u32 const lit_3768 = 0x40000000;

/* 80AF74A8-80AF74D0 0028+00 s=1 e=0 z=0  None .data      @4052                                                        */
SECTION_DATA static void* lit_4052[10] = {
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x4B0),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x68),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x128),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x294),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x2E0),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x338),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x3E8),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x4B0),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x4B0),
	(void*)(((char*)demo_camera__FP12npc_sq_class)+0x49C),
};

/* 80AF74D0-80AF7510 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$4176                                              */
SECTION_DATA static u8 cc_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};

/* 80AF7510-80AF7530 0020+00 s=1 e=0 z=0  None .data      l_daNpc_Sq_Method                                            */
SECTION_DATA static void* l_daNpc_Sq_Method[8] = {
	(void*)daNpc_Sq_Create__FP10fopAc_ac_c,
	(void*)daNpc_Sq_Delete__FP12npc_sq_class,
	(void*)daNpc_Sq_Execute__FP12npc_sq_class,
	(void*)daNpc_Sq_IsDelete__FP12npc_sq_class,
	(void*)daNpc_Sq_Draw__FP12npc_sq_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80AF7530-80AF7560 0030+00 s=0 e=0 z=1  None .data      g_profile_NPC_SQ                                             */
SECTION_DATA void* g_profile_NPC_SQ[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x010B0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000A44,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02BA0000,
	(void*)&l_daNpc_Sq_Method,
	(void*)0x000C0000,
	(void*)NULL,
};

/* 80AF7560-80AF756C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80AF756C-80AF7578 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80AF7578-80AF759C 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch                                         */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12dBgS_ObjAcchFv,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80AF73EC,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80AF73E4,
};

/* 80AF759C-80AF75A8 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80AF75A8-80AF75B4 000C+00 s=2 e=0 z=0  None .data      __vt__14daNpc_Sq_HIO_c                                       */
SECTION_DATA static void* __vt__14daNpc_Sq_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14daNpc_Sq_HIO_cFv,
};

/* 80AF5FEC-80AF6010 0024+00 s=1 e=0 z=0  None .text      __ct__14daNpc_Sq_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_Sq_HIO_c::daNpc_Sq_HIO_c() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__ct__14daNpc_Sq_HIO_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80AF740C-80AF7410 0004+00 s=5 e=0 z=0  None .rodata    @3782                                                        */
SECTION_RODATA static u8 const lit_3782[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80AF7410-80AF7414 0004+00 s=1 e=0 z=0  None .rodata    @3783                                                        */
SECTION_RODATA static u32 const lit_3783 = 0xBF800000;

/* 80AF7414-80AF7418 0004+00 s=2 e=0 z=0  None .rodata    @3810                                                        */
SECTION_RODATA static u32 const lit_3810 = 0x42C80000;

/* 80AF7418-80AF741C 0004+00 s=1 e=0 z=0  None .rodata    @3811                                                        */
SECTION_RODATA static u32 const lit_3811 = 0x44160000;

/* 80AF741C-80AF7420 0004+00 s=2 e=0 z=0  None .rodata    @3812                                                        */
SECTION_RODATA static u32 const lit_3812 = 0x41200000;

/* 80AF7420-80AF7424 0004+00 s=3 e=0 z=0  None .rodata    @3813                                                        */
SECTION_RODATA static u32 const lit_3813 = 0x3F800000;

/* 80AF7424-80AF7428 0004+00 s=1 e=0 z=0  None .rodata    @3861                                                        */
SECTION_RODATA static u32 const lit_3861 = 0x40400000;

/* 80AF7428-80AF742C 0004+00 s=1 e=0 z=0  None .rodata    @3862                                                        */
SECTION_RODATA static u32 const lit_3862 = 0x41700000;

/* 80AF742C-80AF7430 0004+00 s=1 e=0 z=0  None .rodata    @3863                                                        */
SECTION_RODATA static u32 const lit_3863 = 0x43520000;

/* 80AF7430-80AF7434 0004+00 s=1 e=0 z=0  None .rodata    @3864                                                        */
SECTION_RODATA static u32 const lit_3864 = 0x44480000;

/* 80AF7434-80AF7438 0004+00 s=1 e=0 z=0  None .rodata    @3865                                                        */
SECTION_RODATA static u32 const lit_3865 = 0xC3BB8000;

/* 80AF7438-80AF7440 0008+00 s=1 e=0 z=0  None .rodata    @3866                                                        */
SECTION_RODATA static u8 const lit_3866[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80AF7440-80AF7448 0008+00 s=1 e=0 z=0  None .rodata    @3867                                                        */
SECTION_RODATA static u8 const lit_3867[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80AF7448-80AF7450 0008+00 s=1 e=0 z=0  None .rodata    @3868                                                        */
SECTION_RODATA static u8 const lit_3868[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80AF7450-80AF7454 0004+00 s=1 e=0 z=0  None .rodata    @3869                                                        */
SECTION_RODATA static u32 const lit_3869 = 0x437A0000;

/* 80AF7454-80AF7458 0004+00 s=1 e=0 z=0  None .rodata    @3893                                                        */
SECTION_RODATA static u32 const lit_3893 = 0xC0A00000;

/* 80AF7458-80AF745C 0004+00 s=1 e=0 z=0  None .rodata    @3894                                                        */
SECTION_RODATA static u32 const lit_3894 = 0xC2A00000;

/* 80AF745C-80AF7460 0004+00 s=1 e=0 z=0  None .rodata    @4040                                                        */
SECTION_RODATA static u32 const lit_4040 = 0x425C0000;

/* 80AF7460-80AF7464 0004+00 s=1 e=0 z=0  None .rodata    @4041                                                        */
SECTION_RODATA static u32 const lit_4041 = 0xC1F00000;

/* 80AF7464-80AF7468 0004+00 s=1 e=0 z=0  None .rodata    @4042                                                        */
SECTION_RODATA static u32 const lit_4042 = 0xC3160000;

/* 80AF7468-80AF746C 0004+00 s=1 e=0 z=0  None .rodata    @4043                                                        */
SECTION_RODATA static u32 const lit_4043 = 0x427C0000;

/* 80AF746C-80AF7470 0004+00 s=0 e=0 z=0  None .rodata    @4044                                                        */
SECTION_RODATA u32 const lit_4044 = 0x3E4CCCCD;

/* 80AF7470-80AF7474 0004+00 s=0 e=0 z=0  None .rodata    @4045                                                        */
SECTION_RODATA u32 const lit_4045 = 0x3DCCCCCD;

/* 80AF7474-80AF7478 0004+00 s=0 e=0 z=0  None .rodata    @4046                                                        */
SECTION_RODATA u32 const lit_4046 = 0x3C23D70A;

/* 80AF7478-80AF747C 0004+00 s=0 e=0 z=0  None .rodata    @4047                                                        */
SECTION_RODATA u32 const lit_4047 = 0x43160000;

/* 80AF747C-80AF7480 0004+00 s=1 e=0 z=0  None .rodata    @4048                                                        */
SECTION_RODATA static u32 const lit_4048 = 0x41A00000;

/* 80AF7480-80AF7484 0004+00 s=0 e=0 z=0  None .rodata    @4049                                                        */
SECTION_RODATA u32 const lit_4049 = 0x42480000;

/* 80AF7484-80AF7488 0004+00 s=0 e=0 z=0  None .rodata    @4050                                                        */
SECTION_RODATA u32 const lit_4050 = 0x420C0000;

/* 80AF7488-80AF7490 0004+04 s=0 e=0 z=0  None .rodata    @4051                                                        */
SECTION_RODATA u32 const lit_4051[1 + 1 /* padding */] = {
	0x41500000,
	/* padding */
	0x00000000,
};

/* 80AF7490-80AF7498 0008+00 s=1 e=0 z=0  None .rodata    @4097                                                        */
SECTION_RODATA static u8 const lit_4097[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80AF7498-80AF749C 0004+00 s=1 e=0 z=0  None .rodata    @4266                                                        */
SECTION_RODATA static u32 const lit_4266 = 0x41F00000;

/* 80AF749C-80AF74A0 0004+00 s=1 e=0 z=0  None .rodata    @4267                                                        */
SECTION_RODATA static u32 const lit_4267 = 0x42200000;

/* 80AF74A0-80AF74A4 0004+00 s=1 e=0 z=0  None .rodata    @4268                                                        */
SECTION_RODATA static u32 const lit_4268 = 0x407FEF9E;

/* 80AF74A4-80AF74A7 0003+00 s=4 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80AF74A4 = "Sq";
#pragma pop

/* 80AF6010-80AF60B8 00A8+00 s=2 e=0 z=0  None .text      anm_init__FP12npc_sq_classifUcf                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(npc_sq_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/anm_init__FP12npc_sq_classifUcf.s"
}
#pragma pop


/* ############################################################################################## */
/* 80AF75C0-80AF75C4 0004+00 s=2 e=0 z=0  None .bss       None                                                         */
static u8 data_80AF75C0[4];

/* 80AF75C4-80AF75D0 000C+00 s=1 e=0 z=0  None .bss       @3763                                                        */
static u8 lit_3763[12];

/* 80AF75D0-80AF75DC 000C+00 s=4 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[12];

/* 80AF60B8-80AF61B0 00F8+00 s=1 e=0 z=0  None .text      daNpc_Sq_Draw__FP12npc_sq_class                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Sq_Draw(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/daNpc_Sq_Draw__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF61B0-80AF63C0 0210+00 s=1 e=0 z=0  None .text      npc_sq_normal__FP12npc_sq_class                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void npc_sq_normal(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/npc_sq_normal__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF63C0-80AF6518 0158+00 s=1 e=0 z=0  None .text      action__FP12npc_sq_class                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/action__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF6518-80AF65FC 00E4+00 s=1 e=0 z=0  None .text      cam_3d_morf__FP12npc_sq_classf                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cam_3d_morf(npc_sq_class* param_0, f32 param_1) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/cam_3d_morf__FP12npc_sq_classf.s"
}
#pragma pop


/* 80AF65FC-80AF6B74 0578+00 s=2 e=0 z=0  None .text      demo_camera__FP12npc_sq_class                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void demo_camera(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/demo_camera__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF6B74-80AF6D54 01E0+00 s=2 e=0 z=0  None .text      daNpc_Sq_Execute__FP12npc_sq_class                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Sq_Execute(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/daNpc_Sq_Execute__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF6D54-80AF6D5C 0008+00 s=1 e=0 z=0  None .text      daNpc_Sq_IsDelete__FP12npc_sq_class                          */
static bool daNpc_Sq_IsDelete(npc_sq_class* param_0) {
	return true;
}


/* 80AF6D5C-80AF6DB0 0054+00 s=1 e=0 z=0  None .text      daNpc_Sq_Delete__FP12npc_sq_class                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Sq_Delete(npc_sq_class* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/daNpc_Sq_Delete__FP12npc_sq_class.s"
}
#pragma pop


/* 80AF6DB0-80AF6F50 01A0+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80AF6F50-80AF6F98 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80AF6F98-80AF7260 02C8+00 s=1 e=0 z=0  None .text      daNpc_Sq_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpc_Sq_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/daNpc_Sq_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80AF7260-80AF72A8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 80AF72A8-80AF72F0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80AF72F0-80AF7360 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop


/* 80AF7360-80AF73A8 0048+00 s=2 e=0 z=0  None .text      __dt__14daNpc_Sq_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpc_Sq_HIO_c::~daNpc_Sq_HIO_c() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__dt__14daNpc_Sq_HIO_cFv.s"
}
#pragma pop


/* 80AF73A8-80AF73E4 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_npc_sq_cpp                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_npc_sq_cpp() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/__sinit_d_a_npc_sq_cpp.s"
}
#pragma pop


/* 80AF73E4-80AF73EC 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80AF73E4() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/func_80AF73E4.s"
}
#pragma pop


/* 80AF73EC-80AF73F4 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80AF73EC() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_sq/d_a_npc_sq/func_80AF73EC.s"
}
#pragma pop


