// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv6SzGate
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
	/* 80C758B8 */ ~mDoHIO_entry_c();
};

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
	/* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
	/* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ void play();
};

struct fopAc_ac_c {
};

struct daLv6SzGate_c {
	/* 80C75900 */ void setBaseMtx();
	/* 80C75A54 */ void CreateHeap();
	/* 80C75C0C */ void create();
	/* 80C75E18 */ void Execute(f32 (** )[3][4]);
	/* 80C75E78 */ void moveGate();
	/* 80C75F64 */ void init_modeWait();
	/* 80C75F70 */ void modeWait();
	/* 80C75FC0 */ void init_modeOpenWait0();
	/* 80C75FD8 */ void modeOpenWait0();
	/* 80C76010 */ void init_modeOpenWait();
	/* 80C76094 */ void modeOpenWait();
	/* 80C760F0 */ void init_modeOpen();
	/* 80C760FC */ void modeOpen();
	/* 80C7624C */ void modeClose();
	/* 80C76328 */ void init_modeEnd();
	/* 80C76344 */ void modeEnd();
	/* 80C7637C */ void Draw();
	/* 80C76490 */ void Delete();
};

struct daLv6SzGate_HIO_c {
	/* 80C7586C */ daLv6SzGate_HIO_c();
	/* 80C76584 */ ~daLv6SzGate_HIO_c();
};

struct cXyz {
};

struct dVibration_c {
	/* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
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

struct dBgW_Base {
};

struct dBgW {
	/* 8007B970 */ dBgW();
	/* 8007B9C0 */ void Move();
};

struct csXyz {
};

struct cBgS_PolyInfo {
};

struct dBgS_MoveBgActor {
	/* 80078624 */ dBgS_MoveBgActor();
	/* 80078690 */ bool Create();
	/* 800786B0 */ bool IsDelete();
	/* 800786B8 */ bool ToFore();
	/* 800786C0 */ bool ToBack();
	/* 800787BC */ void MoveBGCreate(char const*, int, void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*), u32, f32 (* )[3][4]);
	/* 800788DC */ void MoveBGDelete();
	/* 80078950 */ void MoveBGExecute();
};

struct dBgS {
	/* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
	/* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {
};

struct cBgW {
	/* 80079F38 */ void Set(cBgD_t*, u32, f32 (* )[3][4]);
};

struct cBgS {
	/* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {
};

struct Vec {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
	/* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80C75DD0 */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void daLv6SzGate_Draw(daLv6SzGate_c*);
static void daLv6SzGate_Execute(daLv6SzGate_c*);
static void daLv6SzGate_Delete(daLv6SzGate_c*);
static void daLv6SzGate_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv6SzGate[12];

extern "C" void __ct__17daLv6SzGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv6SzGate_cFv();
extern "C" void CreateHeap__13daLv6SzGate_cFv();
extern "C" void create__13daLv6SzGate_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__13daLv6SzGate_cFPPA3_A4_f();
extern "C" void moveGate__13daLv6SzGate_cFv();
extern "C" void init_modeWait__13daLv6SzGate_cFv();
extern "C" void modeWait__13daLv6SzGate_cFv();
extern "C" void init_modeOpenWait0__13daLv6SzGate_cFv();
extern "C" void modeOpenWait0__13daLv6SzGate_cFv();
extern "C" void init_modeOpenWait__13daLv6SzGate_cFv();
extern "C" void modeOpenWait__13daLv6SzGate_cFv();
extern "C" void init_modeOpen__13daLv6SzGate_cFv();
extern "C" void modeOpen__13daLv6SzGate_cFv();
extern "C" void modeClose__13daLv6SzGate_cFv();
extern "C" void init_modeEnd__13daLv6SzGate_cFv();
extern "C" void modeEnd__13daLv6SzGate_cFv();
extern "C" void Draw__13daLv6SzGate_cFv();
extern "C" void Delete__13daLv6SzGate_cFv();
extern "C" static void daLv6SzGate_Draw__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Execute__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Delete__FP13daLv6SzGate_c();
extern "C" static void daLv6SzGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv6SzGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6SzGate_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv6SzGate[12];

// 
// External References:
// 

void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void* operator new(u32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C76630-80C76634 0004+00 s=3 e=0 z=0  None .rodata    @3627                                                        */
SECTION_RODATA static u32 const lit_3627 = 0x40800000;

/* 80C76634-80C76638 0004+00 s=1 e=0 z=0  None .rodata    @3628                                                        */
SECTION_RODATA static u32 const lit_3628 = 0x41F00000;

/* 80C76638-80C7663C 0004+00 s=1 e=0 z=0  None .rodata    @3629                                                        */
SECTION_RODATA static u32 const lit_3629 = 0x41700000;

/* 80C7663C-80C76640 0004+00 s=1 e=0 z=0  None .rodata    @3630                                                        */
SECTION_RODATA static u32 const lit_3630 = 0x43C80000;

/* 80C76668-80C76674 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C76674-80C76688 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C76688-80C766A0 0018+00 s=1 e=0 z=0  None .data      l_cull_box                                                   */
SECTION_DATA static u8 l_cull_box[24] = {
	0xC4, 0x96, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0x44, 0x96, 0x00, 0x00,
	0x43, 0x96, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 80C766A0-80C766AC 000C+00 s=1 e=0 z=0  None .data      @3799                                                        */
SECTION_DATA static void* lit_3799[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__13daLv6SzGate_cFv,
};

/* 80C766AC-80C766B8 000C+00 s=2 e=0 z=0  None .data      @3800                                                        */
SECTION_DATA static void* lit_3800[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeOpenWait0__13daLv6SzGate_cFv,
};

/* 80C766B8-80C766C4 000C+00 s=1 e=0 z=0  None .data      @3801                                                        */
SECTION_DATA static void* lit_3801[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeOpenWait__13daLv6SzGate_cFv,
};

/* 80C766C4-80C766D0 000C+00 s=1 e=0 z=0  None .data      @3802                                                        */
SECTION_DATA static void* lit_3802[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeOpen__13daLv6SzGate_cFv,
};

/* 80C766D0-80C766DC 000C+00 s=1 e=0 z=0  None .data      @3803                                                        */
SECTION_DATA static void* lit_3803[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeClose__13daLv6SzGate_cFv,
};

/* 80C766DC-80C766E8 000C+00 s=1 e=0 z=0  None .data      @3804                                                        */
SECTION_DATA static void* lit_3804[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeEnd__13daLv6SzGate_cFv,
};

/* 80C766E8-80C76730 0048+00 s=1 e=0 z=0  None .data      mode_proc$3798                                               */
SECTION_DATA static u8 mode_proc[72] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C76730-80C76750 0020+00 s=1 e=0 z=0  None .data      l_daLv6SzGate_Method                                         */
SECTION_DATA static void* l_daLv6SzGate_Method[8] = {
	(void*)daLv6SzGate_Create__FP10fopAc_ac_c,
	(void*)daLv6SzGate_Delete__FP13daLv6SzGate_c,
	(void*)daLv6SzGate_Execute__FP13daLv6SzGate_c,
	(void*)NULL,
	(void*)daLv6SzGate_Draw__FP13daLv6SzGate_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C76750-80C76780 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv6SzGate                                      */
SECTION_DATA void* g_profile_Obj_Lv6SzGate[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x009A0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000061C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02740000,
	(void*)&l_daLv6SzGate_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C76780-80C7678C 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80C7678C-80C767B4 0028+00 s=1 e=0 z=0  None .data      __vt__13daLv6SzGate_c                                        */
SECTION_DATA static void* __vt__13daLv6SzGate_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__13daLv6SzGate_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__13daLv6SzGate_cFPPA3_A4_f,
	(void*)Draw__13daLv6SzGate_cFv,
	(void*)Delete__13daLv6SzGate_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C767B4-80C767C0 000C+00 s=2 e=0 z=0  None .data      __vt__17daLv6SzGate_HIO_c                                    */
SECTION_DATA static void* __vt__17daLv6SzGate_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__17daLv6SzGate_HIO_cFv,
};

/* 80C767C0-80C767CC 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C7586C-80C758B8 004C+00 s=1 e=0 z=0  None .text      __ct__17daLv6SzGate_HIO_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6SzGate_HIO_c::daLv6SzGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/__ct__17daLv6SzGate_HIO_cFv.s"
}
#pragma pop


/* 80C758B8-80C75900 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C76640-80C76644 0004+00 s=1 e=0 z=0  None .rodata    @3665                                                        */
SECTION_RODATA static u32 const lit_3665 = 0xC3480000;

/* 80C76644-80C76648 0004+00 s=4 e=0 z=0  None .rodata    @3666                                                        */
SECTION_RODATA static u8 const lit_3666[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C75900-80C75A54 0154+00 s=2 e=0 z=0  None .text      setBaseMtx__13daLv6SzGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/setBaseMtx__13daLv6SzGate_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C76648-80C7664C 0004+00 s=4 e=0 z=0  None .rodata    @3697                                                        */
SECTION_RODATA static u32 const lit_3697 = 0x3F800000;

/* 80C7664C-80C76650 0004+00 s=4 e=0 z=0  None .rodata    @3843                                                        */
SECTION_RODATA static u32 const lit_3843 = 0xBF800000;

/* 80C76650-80C76654 0004+00 s=1 e=0 z=0  None .rodata    @3879                                                        */
SECTION_RODATA static u32 const lit_3879 = 0x3E4CCCCD;

/* 80C76654-80C76658 0004+00 s=1 e=0 z=0  None .rodata    @3880                                                        */
SECTION_RODATA static u32 const lit_3880 = 0x3F000000;

/* 80C76658-80C7665C 0004+00 s=1 e=0 z=0  None .rodata    @3901                                                        */
SECTION_RODATA static u32 const lit_3901 = 0x40A00000;

/* 80C7665C-80C76665 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C7665C = "L6SzGate";
#pragma pop

/* 80C75A54-80C75C0C 01B8+00 s=1 e=0 z=0  None .text      CreateHeap__13daLv6SzGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/CreateHeap__13daLv6SzGate_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C767D8-80C767E4 000C+00 s=1 e=0 z=0  None .bss       @3621                                                        */
static u8 lit_3621[12];

/* 80C767E4-80C767FC 0018+00 s=4 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[24];

/* 80C75C0C-80C75DD0 01C4+00 s=1 e=0 z=0  None .text      create__13daLv6SzGate_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/create__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C75DD0-80C75E18 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* 80C75E18-80C75E78 0060+00 s=1 e=0 z=0  None .text      Execute__13daLv6SzGate_cFPPA3_A4_f                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/Execute__13daLv6SzGate_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C767FC-80C76800 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80C767FC[4];

/* 80C75E78-80C75F64 00EC+00 s=1 e=0 z=0  None .text      moveGate__13daLv6SzGate_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::moveGate() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/moveGate__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C75F64-80C75F70 000C+00 s=2 e=0 z=0  None .text      init_modeWait__13daLv6SzGate_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/init_modeWait__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C75F70-80C75FC0 0050+00 s=1 e=0 z=0  None .text      modeWait__13daLv6SzGate_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeWait__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C75FC0-80C75FD8 0018+00 s=1 e=0 z=0  None .text      init_modeOpenWait0__13daLv6SzGate_cFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::init_modeOpenWait0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/init_modeOpenWait0__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C75FD8-80C76010 0038+00 s=1 e=0 z=0  None .text      modeOpenWait0__13daLv6SzGate_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeOpenWait0() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeOpenWait0__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C76010-80C76094 0084+00 s=1 e=0 z=0  None .text      init_modeOpenWait__13daLv6SzGate_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::init_modeOpenWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/init_modeOpenWait__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C76094-80C760F0 005C+00 s=1 e=0 z=0  None .text      modeOpenWait__13daLv6SzGate_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeOpenWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeOpenWait__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C760F0-80C760FC 000C+00 s=1 e=0 z=0  None .text      init_modeOpen__13daLv6SzGate_cFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::init_modeOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/init_modeOpen__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C760FC-80C7624C 0150+00 s=1 e=0 z=0  None .text      modeOpen__13daLv6SzGate_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeOpen__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C7624C-80C76328 00DC+00 s=1 e=0 z=0  None .text      modeClose__13daLv6SzGate_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeClose__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C76328-80C76344 001C+00 s=2 e=0 z=0  None .text      init_modeEnd__13daLv6SzGate_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::init_modeEnd() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/init_modeEnd__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C76344-80C7637C 0038+00 s=1 e=0 z=0  None .text      modeEnd__13daLv6SzGate_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::modeEnd() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/modeEnd__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C7637C-80C76490 0114+00 s=1 e=0 z=0  None .text      Draw__13daLv6SzGate_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/Draw__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C76490-80C764F8 0068+00 s=1 e=0 z=0  None .text      Delete__13daLv6SzGate_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6SzGate_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/Delete__13daLv6SzGate_cFv.s"
}
#pragma pop


/* 80C764F8-80C76524 002C+00 s=1 e=0 z=0  None .text      daLv6SzGate_Draw__FP13daLv6SzGate_c                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6SzGate_Draw(daLv6SzGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/daLv6SzGate_Draw__FP13daLv6SzGate_c.s"
}
#pragma pop


/* 80C76524-80C76544 0020+00 s=1 e=0 z=0  None .text      daLv6SzGate_Execute__FP13daLv6SzGate_c                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6SzGate_Execute(daLv6SzGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/daLv6SzGate_Execute__FP13daLv6SzGate_c.s"
}
#pragma pop


/* 80C76544-80C76564 0020+00 s=1 e=0 z=0  None .text      daLv6SzGate_Delete__FP13daLv6SzGate_c                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6SzGate_Delete(daLv6SzGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/daLv6SzGate_Delete__FP13daLv6SzGate_c.s"
}
#pragma pop


/* 80C76564-80C76584 0020+00 s=1 e=0 z=0  None .text      daLv6SzGate_Create__FP10fopAc_ac_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6SzGate_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/daLv6SzGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C76584-80C765E0 005C+00 s=2 e=0 z=0  None .text      __dt__17daLv6SzGate_HIO_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6SzGate_HIO_c::~daLv6SzGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/__dt__17daLv6SzGate_HIO_cFv.s"
}
#pragma pop


/* 80C765E0-80C7661C 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv6SzGate_cpp                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv6SzGate_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6SzGate/d_a_obj_lv6SzGate/__sinit_d_a_obj_lv6SzGate_cpp.s"
}
#pragma pop


