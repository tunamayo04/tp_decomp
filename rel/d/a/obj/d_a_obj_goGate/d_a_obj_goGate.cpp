// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_goGate
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
	/* 80BFD6DC */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
};

struct daGoGate_c {
	/* 80BFD724 */ void setBaseMtx();
	/* 80BFD7C0 */ void CreateHeap();
	/* 80BFD82C */ void create();
	/* 80BFD984 */ void Execute(f32 (** )[3][4]);
	/* 80BFD9D4 */ void moveGate();
	/* 80BFDAD8 */ void init_modeWait();
	/* 80BFDAE4 */ void modeWait();
	/* 80BFDAE8 */ void init_modeMoveOpen();
	/* 80BFDAF4 */ void modeMoveOpen();
	/* 80BFDC04 */ void init_modeMoveClose();
	/* 80BFDC10 */ void modeMoveClose();
	/* 80BFDD20 */ void setSe();
	/* 80BFDDDC */ void Draw();
	/* 80BFDE80 */ void Delete();
};

struct daGoGate_HIO_c {
	/* 80BFD6AC */ daGoGate_HIO_c();
	/* 80BFDF3C */ ~daGoGate_HIO_c();
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

struct dBgW {
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

// 
// Forward References:
// 

static void daGoGate_Draw(daGoGate_c*);
static void daGoGate_Execute(daGoGate_c*);
static void daGoGate_Delete(daGoGate_c*);
static void daGoGate_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_GoGate[12];

extern "C" void __ct__14daGoGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daGoGate_cFv();
extern "C" void CreateHeap__10daGoGate_cFv();
extern "C" void create__10daGoGate_cFv();
extern "C" void Execute__10daGoGate_cFPPA3_A4_f();
extern "C" void moveGate__10daGoGate_cFv();
extern "C" void init_modeWait__10daGoGate_cFv();
extern "C" void modeWait__10daGoGate_cFv();
extern "C" void init_modeMoveOpen__10daGoGate_cFv();
extern "C" void modeMoveOpen__10daGoGate_cFv();
extern "C" void init_modeMoveClose__10daGoGate_cFv();
extern "C" void modeMoveClose__10daGoGate_cFv();
extern "C" void setSe__10daGoGate_cFv();
extern "C" void Draw__10daGoGate_cFv();
extern "C" void Delete__10daGoGate_cFv();
extern "C" static void daGoGate_Draw__FP10daGoGate_c();
extern "C" static void daGoGate_Execute__FP10daGoGate_c();
extern "C" static void daGoGate_Delete__FP10daGoGate_c();
extern "C" static void daGoGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daGoGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_goGate_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_GoGate[12];

// 
// External References:
// 

void mDoMtx_ZXYrotS(f32 (* )[4], s16, s16, s16);
void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
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
/* 80BFDFE8-80BFDFEC 0004+00 s=5 e=0 z=0  None .rodata    @3627                                                        */
SECTION_RODATA static u32 const lit_3627 = 0x40000000;

/* 80BFE010-80BFE01C 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BFE01C-80BFE030 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80BFE030-80BFE03C 000C+00 s=1 e=0 z=0  None .data      @3727                                                        */
SECTION_DATA static void* lit_3727[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__10daGoGate_cFv,
};

/* 80BFE03C-80BFE048 000C+00 s=1 e=0 z=0  None .data      @3728                                                        */
SECTION_DATA static void* lit_3728[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveOpen__10daGoGate_cFv,
};

/* 80BFE048-80BFE054 000C+00 s=1 e=0 z=0  None .data      @3729                                                        */
SECTION_DATA static void* lit_3729[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveClose__10daGoGate_cFv,
};

/* 80BFE054-80BFE078 0024+00 s=1 e=0 z=0  None .data      mode_proc$3726                                               */
SECTION_DATA static u8 mode_proc[36] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80BFE078-80BFE098 0020+00 s=1 e=0 z=0  None .data      l_daGoGate_Method                                            */
SECTION_DATA static void* l_daGoGate_Method[8] = {
	(void*)daGoGate_Create__FP10fopAc_ac_c,
	(void*)daGoGate_Delete__FP10daGoGate_c,
	(void*)daGoGate_Execute__FP10daGoGate_c,
	(void*)NULL,
	(void*)daGoGate_Draw__FP10daGoGate_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BFE098-80BFE0C8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_GoGate                                         */
SECTION_DATA void* g_profile_Obj_GoGate[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x003E0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005B8,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01F80000,
	(void*)&l_daGoGate_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80BFE0C8-80BFE0F0 0028+00 s=1 e=0 z=0  None .data      __vt__10daGoGate_c                                           */
SECTION_DATA static void* __vt__10daGoGate_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__10daGoGate_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__10daGoGate_cFPPA3_A4_f,
	(void*)Draw__10daGoGate_cFv,
	(void*)Delete__10daGoGate_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BFE0F0-80BFE0FC 000C+00 s=2 e=0 z=0  None .data      __vt__14daGoGate_HIO_c                                       */
SECTION_DATA static void* __vt__14daGoGate_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14daGoGate_HIO_cFv,
};

/* 80BFE0FC-80BFE108 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BFD6AC-80BFD6DC 0030+00 s=1 e=0 z=0  None .text      __ct__14daGoGate_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daGoGate_HIO_c::daGoGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/__ct__14daGoGate_HIO_cFv.s"
}
#pragma pop


/* 80BFD6DC-80BFD724 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BFDFEC-80BFDFF0 0004+00 s=5 e=0 z=0  None .rodata    @3648                                                        */
SECTION_RODATA static u8 const lit_3648[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BFD724-80BFD7C0 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__10daGoGate_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/setBaseMtx__10daGoGate_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BFDFF0-80BFDFF4 0004+00 s=1 e=0 z=0  None .rodata    @3712                                                        */
SECTION_RODATA static u32 const lit_3712 = 0xC37A0000;

/* 80BFDFF4-80BFDFF8 0004+00 s=1 e=0 z=0  None .rodata    @3713                                                        */
SECTION_RODATA static u32 const lit_3713 = 0x437A0000;

/* 80BFDFF8-80BFDFFC 0004+00 s=3 e=0 z=0  None .rodata    @3780                                                        */
SECTION_RODATA static u32 const lit_3780 = 0x3F800000;

/* 80BFDFFC-80BFE000 0004+00 s=3 e=0 z=0  None .rodata    @3781                                                        */
SECTION_RODATA static u32 const lit_3781 = 0xBF800000;

/* 80BFE000-80BFE004 0004+00 s=2 e=0 z=0  None .rodata    @3782                                                        */
SECTION_RODATA static u32 const lit_3782 = 0x3E4CCCCD;

/* 80BFE004-80BFE008 0004+00 s=2 e=0 z=0  None .rodata    @3783                                                        */
SECTION_RODATA static u32 const lit_3783 = 0x3F000000;

/* 80BFE008-80BFE010 0008+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BFE008 = "P_Ggate";
#pragma pop

/* 80BFD7C0-80BFD82C 006C+00 s=1 e=0 z=0  None .text      CreateHeap__10daGoGate_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/CreateHeap__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFD82C-80BFD984 0158+00 s=1 e=0 z=0  None .text      create__10daGoGate_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/create__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFD984-80BFD9D4 0050+00 s=1 e=0 z=0  None .text      Execute__10daGoGate_cFPPA3_A4_f                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/Execute__10daGoGate_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BFE110-80BFE11C 000C+00 s=1 e=0 z=0  None .bss       @3621                                                        */
static u8 lit_3621[12];

/* 80BFE11C-80BFE128 000C+00 s=4 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[12];

/* 80BFE128-80BFE12C 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80BFE128[4];

/* 80BFD9D4-80BFDAD8 0104+00 s=1 e=0 z=0  None .text      moveGate__10daGoGate_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::moveGate() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/moveGate__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDAD8-80BFDAE4 000C+00 s=3 e=0 z=0  None .text      init_modeWait__10daGoGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/init_modeWait__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDAE4-80BFDAE8 0004+00 s=1 e=0 z=0  None .text      modeWait__10daGoGate_cFv                                     */
void daGoGate_c::modeWait() {
	/* empty function */
}


/* 80BFDAE8-80BFDAF4 000C+00 s=1 e=0 z=0  None .text      init_modeMoveOpen__10daGoGate_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::init_modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/init_modeMoveOpen__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDAF4-80BFDC04 0110+00 s=1 e=0 z=0  None .text      modeMoveOpen__10daGoGate_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/modeMoveOpen__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDC04-80BFDC10 000C+00 s=1 e=0 z=0  None .text      init_modeMoveClose__10daGoGate_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::init_modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/init_modeMoveClose__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDC10-80BFDD20 0110+00 s=1 e=0 z=0  None .text      modeMoveClose__10daGoGate_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/modeMoveClose__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDD20-80BFDDDC 00BC+00 s=2 e=0 z=0  None .text      setSe__10daGoGate_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::setSe() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/setSe__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDDDC-80BFDE80 00A4+00 s=1 e=0 z=0  None .text      Draw__10daGoGate_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/Draw__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDE80-80BFDEB0 0030+00 s=1 e=0 z=0  None .text      Delete__10daGoGate_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGoGate_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/Delete__10daGoGate_cFv.s"
}
#pragma pop


/* 80BFDEB0-80BFDEDC 002C+00 s=1 e=0 z=0  None .text      daGoGate_Draw__FP10daGoGate_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGoGate_Draw(daGoGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/daGoGate_Draw__FP10daGoGate_c.s"
}
#pragma pop


/* 80BFDEDC-80BFDEFC 0020+00 s=1 e=0 z=0  None .text      daGoGate_Execute__FP10daGoGate_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGoGate_Execute(daGoGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/daGoGate_Execute__FP10daGoGate_c.s"
}
#pragma pop


/* 80BFDEFC-80BFDF1C 0020+00 s=1 e=0 z=0  None .text      daGoGate_Delete__FP10daGoGate_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGoGate_Delete(daGoGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/daGoGate_Delete__FP10daGoGate_c.s"
}
#pragma pop


/* 80BFDF1C-80BFDF3C 0020+00 s=1 e=0 z=0  None .text      daGoGate_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGoGate_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/daGoGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80BFDF3C-80BFDF98 005C+00 s=2 e=0 z=0  None .text      __dt__14daGoGate_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daGoGate_HIO_c::~daGoGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/__dt__14daGoGate_HIO_cFv.s"
}
#pragma pop


/* 80BFDF98-80BFDFD4 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_goGate_cpp                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_goGate_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_goGate/d_a_obj_goGate/__sinit_d_a_obj_goGate_cpp.s"
}
#pragma pop


