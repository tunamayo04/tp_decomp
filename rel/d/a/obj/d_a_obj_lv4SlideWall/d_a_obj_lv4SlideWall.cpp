// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4SlideWall
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoMtx_stack_c {
	/* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
	/* 80C61E68 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
};

struct daSldWall_c {
	/* 80C61EB0 */ void setBaseMtx();
	/* 80C61F4C */ void CreateHeap();
	/* 80C61FB8 */ void create();
	/* 80C620E4 */ void Execute(f32 (** )[3][4]);
	/* 80C62134 */ void moveWall();
	/* 80C62238 */ void init_modeWait();
	/* 80C62244 */ void modeWait();
	/* 80C62248 */ void init_modeMoveOpen();
	/* 80C62254 */ void modeMoveOpen();
	/* 80C62314 */ void init_modeMoveClose();
	/* 80C62320 */ void modeMoveClose();
	/* 80C623E0 */ void setSe();
	/* 80C6249C */ void Draw();
	/* 80C62540 */ void Delete();
};

struct daSldWall_HIO_c {
	/* 80C61E2C */ daSldWall_HIO_c();
	/* 80C625FC */ ~daSldWall_HIO_c();
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

static void daSldWall_Draw(daSldWall_c*);
static void daSldWall_Execute(daSldWall_c*);
static void daSldWall_Delete(daSldWall_c*);
static void daSldWall_Create(fopAc_ac_c*);
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv4SlideWall[12];

extern "C" void __ct__15daSldWall_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__11daSldWall_cFv();
extern "C" void CreateHeap__11daSldWall_cFv();
extern "C" void create__11daSldWall_cFv();
extern "C" void Execute__11daSldWall_cFPPA3_A4_f();
extern "C" void moveWall__11daSldWall_cFv();
extern "C" void init_modeWait__11daSldWall_cFv();
extern "C" void modeWait__11daSldWall_cFv();
extern "C" void init_modeMoveOpen__11daSldWall_cFv();
extern "C" void modeMoveOpen__11daSldWall_cFv();
extern "C" void init_modeMoveClose__11daSldWall_cFv();
extern "C" void modeMoveClose__11daSldWall_cFv();
extern "C" void setSe__11daSldWall_cFv();
extern "C" void Draw__11daSldWall_cFv();
extern "C" void Delete__11daSldWall_cFv();
extern "C" static void daSldWall_Draw__FP11daSldWall_c();
extern "C" static void daSldWall_Execute__FP11daSldWall_c();
extern "C" static void daSldWall_Delete__FP11daSldWall_c();
extern "C" static void daSldWall_Create__FP10fopAc_ac_c();
extern "C" void __dt__15daSldWall_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv4SlideWall_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv4SlideWall[12];

// 
// External References:
// 

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
/* 80C626A8-80C626AC 0004+00 s=4 e=0 z=0  None .rodata    @3627                                                        */
SECTION_RODATA static u32 const lit_3627 = 0x44610000;

/* 80C626AC-80C626B0 0004+00 s=1 e=0 z=0  None .rodata    @3628                                                        */
SECTION_RODATA static u32 const lit_3628 = 0x40800000;

/* 80C626D0-80C626DC 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C626DC-80C626F0 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C626F0-80C626FC 000C+00 s=1 e=0 z=0  None .data      @3720                                                        */
SECTION_DATA static void* lit_3720[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWait__11daSldWall_cFv,
};

/* 80C626FC-80C62708 000C+00 s=1 e=0 z=0  None .data      @3721                                                        */
SECTION_DATA static void* lit_3721[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveOpen__11daSldWall_cFv,
};

/* 80C62708-80C62714 000C+00 s=1 e=0 z=0  None .data      @3722                                                        */
SECTION_DATA static void* lit_3722[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeMoveClose__11daSldWall_cFv,
};

/* 80C62714-80C62738 0024+00 s=1 e=0 z=0  None .data      mode_proc$3719                                               */
SECTION_DATA static u8 mode_proc[36] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80C62738-80C62758 0020+00 s=1 e=0 z=0  None .data      l_daSldWall_Method                                           */
SECTION_DATA static void* l_daSldWall_Method[8] = {
	(void*)daSldWall_Create__FP10fopAc_ac_c,
	(void*)daSldWall_Delete__FP11daSldWall_c,
	(void*)daSldWall_Execute__FP11daSldWall_c,
	(void*)NULL,
	(void*)daSldWall_Draw__FP11daSldWall_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C62758-80C62788 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv4SlideWall                                   */
SECTION_DATA void* g_profile_Obj_Lv4SlideWall[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x009E0000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005B4,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x027F0000,
	(void*)&l_daSldWall_Method,
	(void*)0x00040000,
	(void*)0x000E0000,
};

/* 80C62788-80C627B0 0028+00 s=1 e=0 z=0  None .data      __vt__11daSldWall_c                                          */
SECTION_DATA static void* __vt__11daSldWall_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__11daSldWall_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__11daSldWall_cFPPA3_A4_f,
	(void*)Draw__11daSldWall_cFv,
	(void*)Delete__11daSldWall_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C627B0-80C627BC 000C+00 s=2 e=0 z=0  None .data      __vt__15daSldWall_HIO_c                                      */
SECTION_DATA static void* __vt__15daSldWall_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__15daSldWall_HIO_cFv,
};

/* 80C627BC-80C627C8 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C61E2C-80C61E68 003C+00 s=1 e=0 z=0  None .text      __ct__15daSldWall_HIO_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSldWall_HIO_c::daSldWall_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__ct__15daSldWall_HIO_cFv.s"
}
#pragma pop


/* 80C61E68-80C61EB0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C626B0-80C626B4 0004+00 s=5 e=0 z=0  None .rodata    @3649                                                        */
SECTION_RODATA static u8 const lit_3649[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C61EB0-80C61F4C 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__11daSldWall_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/setBaseMtx__11daSldWall_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C626B4-80C626B8 0004+00 s=3 e=0 z=0  None .rodata    @3763                                                        */
SECTION_RODATA static u32 const lit_3763 = 0x3F800000;

/* 80C626B8-80C626BC 0004+00 s=3 e=0 z=0  None .rodata    @3764                                                        */
SECTION_RODATA static u32 const lit_3764 = 0xBF800000;

/* 80C626BC-80C626C0 0004+00 s=2 e=0 z=0  None .rodata    @3765                                                        */
SECTION_RODATA static u32 const lit_3765 = 0x3E4CCCCD;

/* 80C626C0-80C626C4 0004+00 s=2 e=0 z=0  None .rodata    @3766                                                        */
SECTION_RODATA static u32 const lit_3766 = 0x3F000000;

/* 80C626C4-80C626CE 000A+00 s=3 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C626C4 = "L4SldWall";
#pragma pop

/* 80C61F4C-80C61FB8 006C+00 s=1 e=0 z=0  None .text      CreateHeap__11daSldWall_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/CreateHeap__11daSldWall_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C627D0-80C627DC 000C+00 s=1 e=0 z=0  None .bss       @3621                                                        */
static u8 lit_3621[12];

/* 80C627DC-80C627EC 0010+00 s=5 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80C61FB8-80C620E4 012C+00 s=1 e=0 z=0  None .text      create__11daSldWall_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/create__11daSldWall_cFv.s"
}
#pragma pop


/* 80C620E4-80C62134 0050+00 s=1 e=0 z=0  None .text      Execute__11daSldWall_cFPPA3_A4_f                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Execute__11daSldWall_cFPPA3_A4_f.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C627EC-80C627F0 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80C627EC[4];

/* 80C62134-80C62238 0104+00 s=1 e=0 z=0  None .text      moveWall__11daSldWall_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::moveWall() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/moveWall__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62238-80C62244 000C+00 s=3 e=0 z=0  None .text      init_modeWait__11daSldWall_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::init_modeWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeWait__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62244-80C62248 0004+00 s=1 e=0 z=0  None .text      modeWait__11daSldWall_cFv                                    */
void daSldWall_c::modeWait() {
	/* empty function */
}


/* 80C62248-80C62254 000C+00 s=1 e=0 z=0  None .text      init_modeMoveOpen__11daSldWall_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::init_modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeMoveOpen__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62254-80C62314 00C0+00 s=1 e=0 z=0  None .text      modeMoveOpen__11daSldWall_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::modeMoveOpen() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/modeMoveOpen__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62314-80C62320 000C+00 s=1 e=0 z=0  None .text      init_modeMoveClose__11daSldWall_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::init_modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/init_modeMoveClose__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62320-80C623E0 00C0+00 s=1 e=0 z=0  None .text      modeMoveClose__11daSldWall_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::modeMoveClose() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/modeMoveClose__11daSldWall_cFv.s"
}
#pragma pop


/* 80C623E0-80C6249C 00BC+00 s=2 e=0 z=0  None .text      setSe__11daSldWall_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::setSe() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/setSe__11daSldWall_cFv.s"
}
#pragma pop


/* 80C6249C-80C62540 00A4+00 s=1 e=0 z=0  None .text      Draw__11daSldWall_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Draw__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62540-80C62570 0030+00 s=1 e=0 z=0  None .text      Delete__11daSldWall_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSldWall_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/Delete__11daSldWall_cFv.s"
}
#pragma pop


/* 80C62570-80C6259C 002C+00 s=1 e=0 z=0  None .text      daSldWall_Draw__FP11daSldWall_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSldWall_Draw(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Draw__FP11daSldWall_c.s"
}
#pragma pop


/* 80C6259C-80C625BC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Execute__FP11daSldWall_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSldWall_Execute(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Execute__FP11daSldWall_c.s"
}
#pragma pop


/* 80C625BC-80C625DC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Delete__FP11daSldWall_c                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSldWall_Delete(daSldWall_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Delete__FP11daSldWall_c.s"
}
#pragma pop


/* 80C625DC-80C625FC 0020+00 s=1 e=0 z=0  None .text      daSldWall_Create__FP10fopAc_ac_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSldWall_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/daSldWall_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C625FC-80C62658 005C+00 s=2 e=0 z=0  None .text      __dt__15daSldWall_HIO_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSldWall_HIO_c::~daSldWall_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__dt__15daSldWall_HIO_cFv.s"
}
#pragma pop


/* 80C62658-80C62694 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv4SlideWall_cpp                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv4SlideWall_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4SlideWall/d_a_obj_lv4SlideWall/__sinit_d_a_obj_lv4SlideWall_cpp.s"
}
#pragma pop


