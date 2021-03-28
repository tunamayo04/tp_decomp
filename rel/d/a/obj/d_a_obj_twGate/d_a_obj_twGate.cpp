// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_twGate
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate.h"

// 
// Types:
// 

struct request_of_phase_process_class {
};

struct mDoHIO_entry_c {
	/* 80D1FB3C */ ~mDoHIO_entry_c();
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

struct fOpAcm_HIO_entry_c {
	/* 80D1FAE0 */ ~fOpAcm_HIO_entry_c();
};

struct daTwGate_c {
	/* 80D1FB84 */ void setBaseMtx();
	/* 80D1FC0C */ void CreateHeap();
	/* 80D1FD44 */ void create();
	/* 80D1FFA4 */ void Execute(f32 (** )[3][4]);
	/* 80D200B4 */ void Draw();
	/* 80D20180 */ void Delete();
};

struct daTwGate_HIO_c {
	/* 80D1FAAC */ daTwGate_HIO_c();
	/* 80D2024C */ ~daTwGate_HIO_c();
};

struct dSv_player_status_b_c {
	/* 80032BB0 */ void isDarkClearLV(int) const;
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

struct Vec {
};

struct cM3dGLin {
	/* 8026F31C */ void SetStartEnd(Vec const&, Vec const&);
	/* 80D1FF14 */ ~cM3dGLin();
};

struct J3DModel {
};

struct J3DFrameCtrl {
	/* 803283FC */ void init(s16);
	/* 80D1FF5C */ ~J3DFrameCtrl();
};

// 
// Forward References:
// 

static void daTwGate_Draw(daTwGate_c*);
static void daTwGate_Execute(daTwGate_c*);
static void daTwGate_Delete(daTwGate_c*);
static void daTwGate_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_Obj_TwGate[12];

extern "C" void __ct__14daTwGate_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daTwGate_cFv();
extern "C" void CreateHeap__10daTwGate_cFv();
extern "C" void create__10daTwGate_cFv();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__10daTwGate_cFPPA3_A4_f();
extern "C" void Draw__10daTwGate_cFv();
extern "C" void Delete__10daTwGate_cFv();
extern "C" static void daTwGate_Draw__FP10daTwGate_c();
extern "C" static void daTwGate_Execute__FP10daTwGate_c();
extern "C" static void daTwGate_Delete__FP10daTwGate_c();
extern "C" static void daTwGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daTwGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_twGate_cpp();
extern "C" extern void* g_profile_Obj_TwGate[12];

// 
// External References:
// 

void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM3d_Len3dSqPntAndSegLine(cM3dGLin const*, Vec const*, Vec*, f32*);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isDarkClearLV__21dSv_player_status_b_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
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
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80D20308-80D2030C 0004+00 s=4 e=0 z=0  None .rodata    @3638                                                        */
SECTION_RODATA static u32 const lit_3638 = 0x44ED8000;

/* 80D2030C-80D20340 0034+00 s=2 e=0 z=0  None .rodata    l_bmdIdx                                                     */
SECTION_RODATA static u8 const l_bmdIdx[52] = {
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06,
	0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D20340-80D20374 0034+00 s=1 e=0 z=0  None .rodata    l_dzbIdx                                                     */
SECTION_RODATA static u8 const l_dzbIdx[52] = {
	0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F,
	0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F,
	0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D20374-80D203A8 0034+00 s=1 e=0 z=0  None .rodata    l_btkIdx                                                     */
SECTION_RODATA static u8 const l_btkIdx[52] = {
	0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C,
	0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C,
	0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D203A8-80D203DC 0034+00 s=1 e=0 z=0  None .rodata    l_brkIdx                                                     */
SECTION_RODATA static u8 const l_brkIdx[52] = {
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09,
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09,
	0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D203DC-80D20410 0034+00 s=2 e=0 z=0  None .rodata    l_twFlagIdx                                                  */
SECTION_RODATA static u8 const l_twFlagIdx[52] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x04,
};

/* 80D20410-80D204AC 009C+00 s=1 e=0 z=0  None .rodata    l_cheeckPos0                                                 */
SECTION_RODATA static u8 const l_cheeckPos0[156] = {
	0xC4, 0x0F, 0x26, 0xDC, 0x43, 0x9D, 0x73, 0xAC, 0xC6, 0xA2, 0x70, 0x96, 0xC6, 0xBF, 0xB1, 0xCF,
	0xC5, 0xE2, 0x17, 0xEE, 0x47, 0x8F, 0x69, 0x9F, 0x45, 0x6E, 0xD7, 0xA7, 0x45, 0x92, 0x14, 0x72,
	0xC7, 0x69, 0x42, 0x6A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xC6, 0xB7, 0x79, 0x28, 0xC5, 0xE1, 0x0D, 0xB1, 0x47, 0x90, 0x52, 0xEC,
	0x45, 0x37, 0xF9, 0x42, 0x45, 0x96, 0x23, 0xC0, 0xC7, 0x6C, 0x76, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D204AC-80D20548 009C+00 s=1 e=0 z=0  None .rodata    l_cheeckPos1                                                 */
SECTION_RODATA static u8 const l_cheeckPos1[156] = {
	0xC3, 0x32, 0x31, 0xB6, 0x43, 0x9A, 0x59, 0x66, 0xC6, 0xA1, 0x62, 0xA7, 0xC6, 0xB8, 0x74, 0x9D,
	0xC5, 0xE2, 0x17, 0xEE, 0x47, 0x90, 0x9D, 0xE0, 0x45, 0x38, 0x98, 0xDA, 0x45, 0x92, 0x14, 0x72,
	0xC7, 0x6C, 0x68, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xC6, 0xBF, 0x33, 0x2A, 0xC5, 0xE1, 0x0D, 0xB1, 0x47, 0x8F, 0x28, 0x60,
	0x45, 0x6E, 0xD2, 0xF5, 0x45, 0x96, 0x23, 0xC0, 0xC7, 0x69, 0x3B, 0xDA, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D20548-80D2054C 0004+00 s=2 e=0 z=0  None .rodata    @3693                                                        */
SECTION_RODATA static u32 const lit_3693 = 0x3F800000;

/* 80D2054C-80D20550 0004+00 s=2 e=0 z=0  None .rodata    @3769                                                        */
SECTION_RODATA static u32 const lit_3769 = 0xBF800000;

/* 80D20550-80D20554 0004+00 s=1 e=0 z=0  None .rodata    @3837                                                        */
SECTION_RODATA static u8 const lit_3837[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80D20554-80D205B0 005C+00 s=1 e=0 z=0  None .rodata    None                                                         */
SECTION_RODATA static u8 const struct_80D20554[92] = {
	/* 80D20554 0009 stringBase_80D20554 @stringBase0 */
	0x74, 0x77, 0x47, 0x74, 0x46, 0x69, 0x72, 0x6F, 0x00,
	/* 80D2055D 000A data_80D2055D None */
	0x74, 0x77, 0x47, 0x74, 0x4B, 0x30, 0x31, 0x30, 0x32, 0x00,
	/* 80D20567 000A data_80D20567 None */
	0x74, 0x77, 0x47, 0x74, 0x4B, 0x30, 0x37, 0x30, 0x39, 0x00,
	/* 80D20571 0001 data_80D20571 None */
	0x00,
	/* 80D20572 0009 data_80D20572 None */
	0x74, 0x77, 0x47, 0x6E, 0x46, 0x69, 0x72, 0x6F, 0x00,
	/* 80D2057B 000A data_80D2057B None */
	0x74, 0x77, 0x47, 0x6E, 0x4B, 0x30, 0x31, 0x30, 0x32, 0x00,
	/* 80D20585 000A data_80D20585 None */
	0x74, 0x77, 0x47, 0x6E, 0x4B, 0x30, 0x37, 0x30, 0x39, 0x00,
	/* 80D2058F 000A data_80D2058F None */
	0x74, 0x77, 0x47, 0x6E, 0x4B, 0x30, 0x37, 0x39, 0x62, 0x00,
	/* 80D20599 000A data_80D20599 None */
	0x74, 0x77, 0x47, 0x6E, 0x4B, 0x31, 0x34, 0x31, 0x35, 0x00,
	/* 80D205A3 000D data_80D205A3 None */
	0x74, 0x77, 0x47, 0x6E, 0x4B, 0x30, 0x36, 0x31, 0x36, 0x00, 0x00, 0x00, 0x00,
};

/* 80D205B0-80D205E4 0034+00 s=3 e=0 z=0  None .data      l_resNameIdx                                                 */
SECTION_DATA static void* l_resNameIdx[13] = {
	(void*)(((char*)&struct_80D20554)+0x0) /* @stringBase0 */,
	(void*)(((char*)&struct_80D20554)+0x9) /* None */,
	(void*)(((char*)&struct_80D20554)+0x13) /* None */,
	(void*)(((char*)&struct_80D20554)+0x1D) /* None */,
	(void*)(((char*)&struct_80D20554)+0x1D) /* None */,
	(void*)(((char*)&struct_80D20554)+0x1D) /* None */,
	(void*)(((char*)&struct_80D20554)+0x1E) /* None */,
	(void*)(((char*)&struct_80D20554)+0x27) /* None */,
	(void*)(((char*)&struct_80D20554)+0x31) /* None */,
	(void*)(((char*)&struct_80D20554)+0x3B) /* None */,
	(void*)(((char*)&struct_80D20554)+0x45) /* None */,
	(void*)(((char*)&struct_80D20554)+0x4F) /* None */,
	(void*)(((char*)&struct_80D20554)+0x1D) /* None */,
};

/* 80D205E4-80D20604 0020+00 s=1 e=0 z=0  None .data      l_daTwGate_Method                                            */
SECTION_DATA static void* l_daTwGate_Method[8] = {
	(void*)daTwGate_Create__FP10fopAc_ac_c,
	(void*)daTwGate_Delete__FP10daTwGate_c,
	(void*)daTwGate_Execute__FP10daTwGate_c,
	(void*)NULL,
	(void*)daTwGate_Draw__FP10daTwGate_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80D20604-80D20634 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_TwGate                                         */
SECTION_DATA void* g_profile_Obj_TwGate[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x00510000,
	(void*)&g_fpcLf_Method,
	(void*)0x000005FC,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x021B0000,
	(void*)&l_daTwGate_Method,
	(void*)0x00044000,
	(void*)0x000E0000,
};

/* 80D20634-80D20640 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGLin                                              */
SECTION_DATA static void* __vt__8cM3dGLin[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__8cM3dGLinFv,
};

/* 80D20640-80D2064C 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl                                         */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__12J3DFrameCtrlFv,
};

/* 80D2064C-80D20674 0028+00 s=1 e=0 z=0  None .data      __vt__10daTwGate_c                                           */
SECTION_DATA static void* __vt__10daTwGate_c[10] = {
	(void*)NULL,
	(void*)NULL,
	(void*)CreateHeap__10daTwGate_cFv,
	(void*)Create__16dBgS_MoveBgActorFv,
	(void*)Execute__10daTwGate_cFPPA3_A4_f,
	(void*)Draw__10daTwGate_cFv,
	(void*)Delete__10daTwGate_cFv,
	(void*)IsDelete__16dBgS_MoveBgActorFv,
	(void*)ToFore__16dBgS_MoveBgActorFv,
	(void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D20674-80D20680 000C+00 s=2 e=0 z=0  None .data      __vt__14daTwGate_HIO_c                                       */
SECTION_DATA static void* __vt__14daTwGate_HIO_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14daTwGate_HIO_cFv,
};

/* 80D20680-80D2068C 000C+00 s=3 e=0 z=0  None .data      __vt__18fOpAcm_HIO_entry_c                                   */
SECTION_DATA static void* __vt__18fOpAcm_HIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80D2068C-80D20698 000C+00 s=4 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D1FAAC-80D1FAE0 0034+00 s=1 e=0 z=0  None .text      __ct__14daTwGate_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTwGate_HIO_c::daTwGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__ct__14daTwGate_HIO_cFv.s"
}
#pragma pop


/* 80D1FAE0-80D1FB3C 005C+00 s=1 e=0 z=0  None .text      __dt__18fOpAcm_HIO_entry_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop


/* 80D1FB3C-80D1FB84 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80D1FB84-80D1FC0C 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__10daTwGate_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/setBaseMtx__10daTwGate_cFv.s"
}
#pragma pop


/* 80D1FC0C-80D1FD44 0138+00 s=1 e=0 z=0  None .text      CreateHeap__10daTwGate_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::CreateHeap() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/CreateHeap__10daTwGate_cFv.s"
}
#pragma pop


/* 80D1FD44-80D1FF14 01D0+00 s=1 e=0 z=0  None .text      create__10daTwGate_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/create__10daTwGate_cFv.s"
}
#pragma pop


/* 80D1FF14-80D1FF5C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGLinFv                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__dt__8cM3dGLinFv.s"
}
#pragma pop


/* 80D1FF5C-80D1FFA4 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80D206A0-80D206AC 000C+00 s=1 e=0 z=0  None .bss       @3630                                                        */
static u8 lit_3630[12];

/* 80D206AC-80D206B4 0008+00 s=2 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[8];

/* 80D1FFA4-80D200B4 0110+00 s=1 e=0 z=0  None .text      Execute__10daTwGate_cFPPA3_A4_f                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::Execute(f32 (** param_0)[3][4]) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/Execute__10daTwGate_cFPPA3_A4_f.s"
}
#pragma pop


/* 80D200B4-80D20180 00CC+00 s=1 e=0 z=0  None .text      Draw__10daTwGate_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::Draw() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/Draw__10daTwGate_cFv.s"
}
#pragma pop


/* 80D20180-80D201C0 0040+00 s=1 e=0 z=0  None .text      Delete__10daTwGate_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTwGate_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/Delete__10daTwGate_cFv.s"
}
#pragma pop


/* 80D201C0-80D201EC 002C+00 s=1 e=0 z=0  None .text      daTwGate_Draw__FP10daTwGate_c                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTwGate_Draw(daTwGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/daTwGate_Draw__FP10daTwGate_c.s"
}
#pragma pop


/* 80D201EC-80D2020C 0020+00 s=1 e=0 z=0  None .text      daTwGate_Execute__FP10daTwGate_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTwGate_Execute(daTwGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/daTwGate_Execute__FP10daTwGate_c.s"
}
#pragma pop


/* 80D2020C-80D2022C 0020+00 s=1 e=0 z=0  None .text      daTwGate_Delete__FP10daTwGate_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTwGate_Delete(daTwGate_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/daTwGate_Delete__FP10daTwGate_c.s"
}
#pragma pop


/* 80D2022C-80D2024C 0020+00 s=1 e=0 z=0  None .text      daTwGate_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTwGate_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/daTwGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80D2024C-80D202B8 006C+00 s=2 e=0 z=0  None .text      __dt__14daTwGate_HIO_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTwGate_HIO_c::~daTwGate_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__dt__14daTwGate_HIO_cFv.s"
}
#pragma pop


/* 80D202B8-80D202F4 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_twGate_cpp                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_twGate_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_twGate/d_a_obj_twGate/__sinit_d_a_obj_twGate_cpp.s"
}
#pragma pop


