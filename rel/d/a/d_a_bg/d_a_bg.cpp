/**
 * @file d_a_bg.cpp
 * 
*/

#include "rel/d/a/d_a_bg/d_a_bg.h"
#include "d/com/d_com_inf_game.h"
#include "d/com/d_com_static.h"
#include "rel/d/a/d_a_grass/d_a_grass.h"
#include "dol2asm.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "string.h"

//
// Forward References:
//

extern "C" void setArcName__6daBg_cFv();
extern "C" static void createMatAnm__FP12J3DModelDataUs();
extern "C" void __dt__15J3DTevKColorAnmFv();
extern "C" void __ct__15J3DTevKColorAnmFv();
extern "C" void __dt__14J3DTevColorAnmFv();
extern "C" void __ct__14J3DTevColorAnmFv();
extern "C" void __dt__11J3DTexNoAnmFv();
extern "C" void __ct__11J3DTexNoAnmFv();
extern "C" void __dt__12J3DTexMtxAnmFv();
extern "C" void __ct__12J3DTexMtxAnmFv();
extern "C" void __dt__14J3DMatColorAnmFv();
extern "C" void __ct__14J3DMatColorAnmFv();
extern "C" void create__13daBg_btkAnm_cFP12J3DModelDataP19J3DAnmTextureSRTKeyi();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void entry__13daBg_btkAnm_cFP12J3DModelData();
extern "C" void play__13daBg_btkAnm_cFv();
extern "C" void create__13daBg_brkAnm_cFP12J3DModelDataP15J3DAnmTevRegKeyi();
extern "C" void entry__13daBg_brkAnm_cFP12J3DModelData();
extern "C" void play__13daBg_brkAnm_cFv();
extern "C" static void checkCreateHeap__FP10fopAc_ac_c();
extern "C" void createHeap__6daBg_cFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__6daBg_cFv();
extern "C" static void daBg_Draw__FP6daBg_c();
extern "C" void draw__6daBg_cFv();
extern "C" static void daBg_Execute__FP6daBg_c();
extern "C" static bool daBg_IsDelete__FP6daBg_c();
extern "C" static void daBg_Delete__FP6daBg_c();
extern "C" static void daBg_Create__FP10fopAc_ac_c();
extern "C" void create__6daBg_cFv();
extern "C" void calc__11J3DTexNoAnmCFPUs();
extern "C" extern char const* const d_a_bg__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelEntryDL__FP8J3DModel();
extern "C" void mDoExt_setupStageTexture__FP12J3DModelData();
extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void getMemoryBlock__20dStage_roomControl_cFi();
extern "C" void dComIfGp_getMapTrans__FiPfPfPs();
extern "C" void dComIfGs_BossLife_public_Get__Fv();
extern "C" void dComIfG_getRoomArcName__Fi();
extern "C" void reset__Q27daSus_c6room_cFv();
extern "C" void deleteRoomGrass__9daGrass_cFi();
extern "C" void deleteRoomFlower__9daGrass_cFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void __ct__8dBgWKColFv();
extern "C" void create__8dBgWKColFPvPv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void clip__11J3DUClipperCFPA4_CfP3VecP3Vec();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void create__12JKRSolidHeapFUlP7JKRHeapb();
extern "C" void adjustSize__12JKRSolidHeapFv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void getTexNo__16J3DAnmTexPatternCFUsPUs();
extern "C" void initialize__14J3DMaterialAnmFv();
extern "C" void __construct_array();
extern "C" void _savegpr_15();
extern "C" void _savegpr_20();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_15();
extern "C" void _restgpr_20();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__14J3DMaterialAnm[4];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mClipper__14mDoLib_clipper[92];
extern "C" u8 mStatus__20dStage_roomControl_c[65792];
extern "C" u8 mRoom__7daSus_c[256];
extern "C" u8 m_frame__7dDemo_c[4];

//
// Declarations:
//

/* 80457BF8-80457C38 000078 0040+00 1/1 0/0 0/0 .text            setArcName__6daBg_cFv */
const char* daBg_c::setArcName() {
    static char arcName[32];

    strncpy(arcName, dComIfG_getRoomArcName(fopAcM_GetParam(this)), sizeof(arcName));
    return arcName;
}

/* 80457C38-80457D78 0000B8 0140+00 2/2 0/0 0/0 .text            createMatAnm__FP12J3DModelDataUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int createMatAnm(J3DModelData* param_0, u16 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/createMatAnm__FP12J3DModelDataUs.s"
}
#pragma pop

/* 80457D78-80457DB4 0001F8 003C+00 1/1 0/0 0/0 .text            __dt__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::~J3DTevKColorAnm() {
extern "C" asm void __dt__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80457DB4-80457DCC 000234 0018+00 1/1 0/0 0/0 .text            __ct__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevKColorAnm::J3DTevKColorAnm() {
extern "C" asm void __ct__15J3DTevKColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 80457DCC-80457E08 00024C 003C+00 1/1 0/0 0/0 .text            __dt__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::~J3DTevColorAnm() {
extern "C" asm void __dt__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 80457E08-80457E20 000288 0018+00 1/1 0/0 0/0 .text            __ct__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTevColorAnm::J3DTevColorAnm() {
extern "C" asm void __ct__14J3DTevColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__14J3DTevColorAnmFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80459424-80459468 000000 0042+02 1/1 0/0 0/0 .data
 * l_modelName$localstatic3$createHeap__6daBg_cFv               */
SECTION_DATA static char l_modelName[6][11] = {
    "model.bmd", "model1.bmd", "model2.bmd", "model3.bmd", "model4.bmd", "model5.bmd",
};

/* 80459468-804594AC 000044 0042+02 1/1 0/0 0/0 .data
 * l_modelName2$localstatic4$createHeap__6daBg_cFv              */
SECTION_DATA static char l_modelName2[6][11] = {
    "model.bdl", "model1.bdl", "model2.bdl", "model3.bdl", "model4.bdl", "model5.bdl",
};

/* 804594AC-804594F0 000088 0042+02 1/1 0/0 0/0 .data l_btkName$localstatic5$createHeap__6daBg_cFv
 */
SECTION_DATA static char l_btkName[6][11] = {
    "model.btk", "model1.btk", "model2.btk", "model3.btk", "model4.btk", "model5.btk",
};

/* 804594F0-80459534 0000CC 0042+02 1/1 0/0 0/0 .data l_brkName$localstatic6$createHeap__6daBg_cFv
 */
SECTION_DATA static char l_brkName[6][11] = {
    "model.brk", "model1.brk", "model2.brk", "model3.brk", "model4.brk", "model5.brk",
};

/* 80459534-8045954C 000110 0018+00 1/1 0/0 0/0 .data l_tevStrType$localstatic3$draw__6daBg_cFv */
SECTION_DATA static int l_tevStrType[6] = {
    32, 33, 34, 35, 35, 32,
};

/* 8045954C-8045956C -00001 0020+00 1/0 0/0 0/0 .data            l_daBg_Method */
SECTION_DATA static void* l_daBg_Method[8] = {
    (void*)daBg_Create__FP10fopAc_ac_c,
    (void*)daBg_Delete__FP6daBg_c,
    (void*)daBg_Execute__FP6daBg_c,
    (void*)daBg_IsDelete__FP6daBg_c,
    (void*)daBg_Draw__FP6daBg_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8045956C-804595A0 -00001 0034+00 0/0 0/0 1/0 .data            g_profile_BG */
SECTION_DATA extern void* g_profile_BG[13] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,     (void*)0x02DC0000, (void*)&g_fpcLf_Method,
    (void*)0x000005F4, (void*)NULL,           (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02F10000, (void*)&l_daBg_Method, (void*)0x00060000, (void*)NULL,
    (void*)NULL,
};

/* 804595A0-804595AC 00017C 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804595AC-804595B8 000188 000C+00 2/2 0/0 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 80457E20-80457E68 0002A0 0048+00 1/1 0/0 0/0 .text            __dt__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::~J3DTexNoAnm() {
extern "C" asm void __dt__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80457E68-80457E8C 0002E8 0024+00 1/1 0/0 0/0 .text            __ct__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexNoAnm::J3DTexNoAnm() {
extern "C" asm void __ct__11J3DTexNoAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 80457E8C-80457EC8 00030C 003C+00 1/1 0/0 0/0 .text            __dt__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::~J3DTexMtxAnm() {
extern "C" asm void __dt__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80457EC8-80457EE0 000348 0018+00 1/1 0/0 0/0 .text            __ct__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DTexMtxAnm::J3DTexMtxAnm() {
extern "C" asm void __ct__12J3DTexMtxAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 80457EE0-80457F1C 000360 003C+00 1/1 0/0 0/0 .text            __dt__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::~J3DMatColorAnm() {
extern "C" asm void __dt__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 80457F1C-80457F34 00039C 0018+00 1/1 0/0 0/0 .text            __ct__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DMatColorAnm::J3DMatColorAnm() {
extern "C" asm void __ct__14J3DMatColorAnmFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__14J3DMatColorAnmFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80459374-80459380 000000 000C+00 1/1 0/0 0/0 .rodata          @3756 */
SECTION_RODATA static u8 const lit_3756[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80459374, &lit_3756);

/* 80459380-80459384 00000C 0004+00 2/3 0/0 0/0 .rodata          @3900 */
SECTION_RODATA static f32 const lit_3900 = 1.0f;
COMPILER_STRIP_GATE(0x80459380, &lit_3900);

/* 80457F34-80458040 0003B4 010C+00 1/1 0/0 0/0 .text
 * create__13daBg_btkAnm_cFP12J3DModelDataP19J3DAnmTextureSRTKeyi */
// matches with literals
#ifdef NONMATCHING
int daBg_btkAnm_c::create(J3DModelData* i_modelData, J3DAnmTextureSRTKey* i_btk, int i_anmPlay) {
    mpBtk = new mDoExt_btkAnm();

    if (mpBtk == NULL) {
        return 0;
    }

    if (!mpBtk->init(i_modelData, i_btk, i_anmPlay, -1, 1.0f, 0, -1)) {
        return 0;
    }

    J3DAnmTextureSRTKey* btk = mpBtk->getBtkAnm();
    for (u16 i = 0; i < btk->getUpdateMaterialNum(); i++) {
        u16 matID = btk->getUpdateMaterialID(i);

        if (!createMatAnm(i_modelData, matID)) {
            return 0;
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBg_btkAnm_c::create(J3DModelData* param_0, J3DAnmTextureSRTKey* param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/create__13daBg_btkAnm_cFP12J3DModelDataP19J3DAnmTextureSRTKeyi.s"
}
#pragma pop
#endif

/* 80458040-80458088 0004C0 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80459384-80459388 000010 0004+00 4/4 0/0 0/0 .rodata          @3914 */
SECTION_RODATA static u8 const lit_3914[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80459384, &lit_3914);

/* 80458088-804580CC 000508 0044+00 1/1 0/0 0/0 .text entry__13daBg_btkAnm_cFP12J3DModelData */
// matches with literals
#ifdef NONMATCHING
void daBg_btkAnm_c::entry(J3DModelData* i_modelData) {
    mpBtk->entry(i_modelData, 0.0f);
    field_0x4 = 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBg_btkAnm_c::entry(J3DModelData* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/entry__13daBg_btkAnm_cFP12J3DModelData.s"
}
#pragma pop
#endif

/* 804580CC-804580F0 00054C 0024+00 1/1 0/0 0/0 .text            play__13daBg_btkAnm_cFv */
void daBg_btkAnm_c::play() {
    mpBtk->play();
}

/* 804580F0-80458230 000570 0140+00 1/1 0/0 0/0 .text
 * create__13daBg_brkAnm_cFP12J3DModelDataP15J3DAnmTevRegKeyi   */
// matches with literals
#ifdef NONMATCHING
int daBg_brkAnm_c::create(J3DModelData* i_modelData, J3DAnmTevRegKey* i_brk, int i_anmPlay) {
    mpBrk = new mDoExt_brkAnm();

    if (mpBrk == NULL) {
        return 0;
    }

    if (!mpBrk->init(i_modelData, i_brk, i_anmPlay, -1, 1.0f, 0, -1)) {
        return 0;
    }

    J3DAnmTevRegKey* brk = mpBrk->getBrkAnm();
    for (u16 i = 0; i < brk->getCRegUpdateMaterialNum(); i++) {
        u16 matID = brk->getCRegUpdateMaterialID(i);

        if (!createMatAnm(i_modelData, matID)) {
            return 0;
        }
    }

    for (u16 i = 0; i < brk->getKRegUpdateMaterialNum(); i++) {
        u16 matID = brk->getKRegUpdateMaterialID(i);

        if (!createMatAnm(i_modelData, matID)) {
            return 0;
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBg_brkAnm_c::create(J3DModelData* param_0, J3DAnmTevRegKey* param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/create__13daBg_brkAnm_cFP12J3DModelDataP15J3DAnmTevRegKeyi.s"
}
#pragma pop
#endif

/* 80458230-80458274 0006B0 0044+00 1/1 0/0 0/0 .text entry__13daBg_brkAnm_cFP12J3DModelData */
// matches with literals
#ifdef NONMATCHING
void daBg_brkAnm_c::entry(J3DModelData* i_modelData) {
    mpBrk->entry(i_modelData, 0.0f);
    field_0x4 = 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBg_brkAnm_c::entry(J3DModelData* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/entry__13daBg_brkAnm_cFP12J3DModelData.s"
}
#pragma pop
#endif

/* 80458274-80458298 0006F4 0024+00 1/1 0/0 0/0 .text            play__13daBg_brkAnm_cFv */
void daBg_brkAnm_c::play() {
    mpBrk->play();
}

/* 80458298-804582B8 000718 0020+00 1/1 0/0 0/0 .text            checkCreateHeap__FP10fopAc_ac_c */
static int checkCreateHeap(fopAc_ac_c* i_this) {
    return static_cast<daBg_c*>(i_this)->createHeap();
}

/* ############################################################################################## */
/* 80459388-8045938C 000014 0004+00 1/1 0/0 0/0 .rodata          @4125 */
SECTION_RODATA static f32 const lit_4125 = -1.0f;
COMPILER_STRIP_GATE(0x80459388, &lit_4125);

/* 804593A8-804593A8 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804593A8 = "00";
SECTION_DEAD static char const* const stringBase_804593AB = "01";
SECTION_DEAD static char const* const stringBase_804593AE = "12";
SECTION_DEAD static char const* const stringBase_804593B1 = "18";
SECTION_DEAD static char const* const stringBase_804593B4 = "room.dzb";
SECTION_DEAD static char const* const stringBase_804593BD = "room.kcl";
SECTION_DEAD static char const* const stringBase_804593C6 = "room.plc";
#pragma pop

/* 804582B8-80458750 000738 0498+00 2/2 0/0 1/1 .text            createHeap__6daBg_cFv */
// regalloc, but equivalent
#ifdef NONMATCHING
int daBg_c::createHeap() {
    const char* arcName = setArcName();
    s32 prm = fopAcM_GetParam(this);
    daBg_unkData* bgData = mBgData;

    for (int i = 0; i < 6; bgData++, i++) {
        J3DModelData* modelData = (J3DModelData*)dComIfG_getStageRes(arcName, l_modelName[i]);
        if (modelData == NULL) {
            modelData = (J3DModelData*)dComIfG_getStageRes(arcName, l_modelName2[i]);
        }

        if (modelData != NULL) {
            mDoExt_setupStageTexture(modelData);
            u32 modelFlags = 0x11000084;

            for (u16 j = 0; j < modelData->getMaterialNum(); j++) {
                modelData->getMaterialNodePointer(j)->setMaterialAnm(NULL);
            }

            J3DAnmTextureSRTKey* btk =
                (J3DAnmTextureSRTKey*)dComIfG_getStageRes(arcName, l_btkName[i]);
            if (btk != NULL) {
                bgData->mpBgBtk = new daBg_btkAnm_c();
                if (bgData->mpBgBtk == NULL) {
                    return 0;
                }

                if (!bgData->mpBgBtk->create(modelData, btk, TRUE)) {
                    return 0;
                }

                modelFlags |= 0x1200;
            } else {
                bgData->mpBgBtk = NULL;
            }
            bgData->mBtkAnmSpeed = -1.0f;

            J3DAnmTevRegKey* brk = (J3DAnmTevRegKey*)dComIfG_getStageRes(arcName, l_brkName[i]);
            if (brk != NULL) {
                bgData->mpBgBrk = new daBg_brkAnm_c();
                if (bgData->mpBgBrk == NULL) {
                    return 0;
                }

                if (!bgData->mpBgBrk->create(modelData, brk, TRUE)) {
                    return 0;
                }
            } else {
                bgData->mpBgBrk = NULL;
            }

            for (u16 j = 0; j < modelData->getMaterialNum(); j++) {
                const char* name = modelData->getMaterialName()->getName(j);

                if (name[3] == 'M' && name[4] == 'A') {
                    if (!memcmp(&name[5], "00", 2)) {
                        modelFlags |= 0x1200;
                    } else if (!memcmp(&name[5], "01", 2)) {
                        modelFlags |= 0x20000000;
                    } else if (!memcmp(&name[5], "12", 2) || !memcmp(&name[5], "18", 2)) {
                        field_0x5f0 = 1;
                    }
                }
            }

            bgData->mpBgModel = mDoExt_J3DModel__create(modelData, 0, modelFlags);
            if (bgData->mpBgModel == NULL) {
                return 0;
            }

            bgData->mpTevStr = new dKy_tevstr_c();
            if (bgData->mpTevStr == NULL) {
                return 0;
            }

            dKy_tevstr_init(bgData->mpTevStr, prm, 0xFF);
        }
    }

    cBgD_t* dzb = (cBgD_t*)dComIfG_getStageRes(arcName, "room.dzb");
    if (dzb != NULL) {
        mpKCol = NULL;
        mpBgW = new dBgW();
        if (mpBgW == NULL) {
            return 0;
        }

        if (mpBgW->Set(dzb, cBgW::GLOBAL_e, NULL)) {
            return 0;
        }

        dStage_roomControl_c::setBgW(prm, (dBgW_base*)mpBgW);
        mpBgW->SetPriority(dBgW_Base::PRIORITY_0);
    } else {
        void* kcl = dComIfG_getStageRes(arcName, "room.kcl");
        void* plc = dComIfG_getStageRes(arcName, "room.plc");

        if (kcl != NULL && plc != NULL) {
            mpBgW = NULL;
            mpKCol = new dBgWKCol();
            if (mpKCol == NULL) {
                return 0;
            }

            mpKCol->create(kcl, plc);
            mpKCol->SetPriority(dBgW_Base::PRIORITY_0);
        } else {
            mpBgW = NULL;
            mpKCol = NULL;
        }
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBg_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/createHeap__6daBg_cFv.s"
}
#pragma pop
#endif

/* 80458750-80458788 000BD0 0038+00 1/1 0/0 0/0 .text            __ct__11J3DLightObjFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J3DLightObj::J3DLightObj() {
extern "C" asm void __ct__11J3DLightObjFv() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/__ct__11J3DLightObjFv.s"
}
#pragma pop

/* 80458788-804588A4 000C08 011C+00 1/1 0/0 0/0 .text            __dt__6daBg_cFv */
daBg_c::~daBg_c() {
    int roomNo = fopAcM_GetParam(this);

    if (heap != NULL && mpBgW != NULL) {
        dComIfG_Bgsp().Release((dBgW_Base*)mpBgW);
        dStage_roomControl_c::setBgW(roomNo, NULL);
    }

    if (heap != NULL && mpKCol != NULL) {
        dComIfG_Bgsp().Release(mpKCol);
        dStage_roomControl_c::setBgW(roomNo, NULL);
    }

    daGrass_c::deleteRoomGrass(roomNo);
    daGrass_c::deleteRoomFlower(roomNo);
    daSus_c::reset(roomNo);
    dComIfGp_roomControl_offStatusFlag(roomNo, 0x10);
}

/* 804588A4-804588C4 000D24 0020+00 1/0 0/0 0/0 .text            daBg_Draw__FP6daBg_c */
static int daBg_Draw(daBg_c* i_this) {
    return i_this->draw();
}

/* ############################################################################################## */
/* 8045938C-80459390 000018 0004+00 0/1 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = 1000000.0f;
COMPILER_STRIP_GATE(0x8045938C, &lit_4479);
#pragma pop

/* 80459390-80459394 00001C 0004+00 0/1 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80459390, &lit_4480);
#pragma pop

/* 80459394-8045939C 000020 0004+04 0/1 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481[1 + 1 /* padding */] = {
    10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80459394, &lit_4481);
#pragma pop

/* 8045939C-804593A4 000028 0008+00 1/2 0/0 0/0 .rodata          @4483 */
SECTION_RODATA static u8 const lit_4483[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8045939C, &lit_4483);

/* 804593A8-804593A8 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804593CF = "MA12";
SECTION_DEAD static char const* const stringBase_804593D4 = "MA18";
SECTION_DEAD static char const* const stringBase_804593D9 = "MA15";
SECTION_DEAD static char const* const stringBase_804593DE = "MA09";
SECTION_DEAD static char const* const stringBase_804593E3 = "MA05";
SECTION_DEAD static char const* const stringBase_804593E8 = "F_SP127";
SECTION_DEAD static char const* const stringBase_804593F0 = "R_SP127";
SECTION_DEAD static char const* const stringBase_804593F8 = "MA00_Enkei_Tree_Color";
SECTION_DEAD static char const* const stringBase_8045940E = "MA00_Gake";
SECTION_DEAD static char const* const stringBase_80459418 = "MA00_Kusa";
#pragma pop

/* 804588C4-80458F38 000D44 0674+00 1/1 0/0 0/0 .text            draw__6daBg_cFv */
// just regalloc + some reorder issues
#ifdef NONMATCHING
int daBg_c::draw() {
    int roomNo = fopAcM_GetParam(this);
    daBg_unkData* bgData = mBgData;

    dComIfGd_setListBG();
    mDoLib_clipper::changeFar(1000000.0f);

    for (int i = 0; i < 6; bgData++, i++) {
        J3DModel* bg_model = bgData->mpBgModel;
        
        if (bg_model != NULL) {
            J3DModelData* modelData = bg_model->getModelData();

            if (bgData->mpBgBtk != NULL) {
                bgData->mpBgBtk->entryFrame();
            }

            if (bgData->mpBgBrk != NULL) {
                if (field_0x5f0 == 9) {
                    bgData->mpBgBrk->entryFrame(bgData->mpBgBrk->getEndFrame());
                } else {
                    bgData->mpBgBrk->entryFrame();
                }
            }

            bg_model->calc();

            for (u16 j = 0; j < modelData->getShapeNum(); j++) {
                J3DShape* shape = modelData->getShapeNodePointer(j);

                if (mDoLib_clipper::clip(j3dSys.getViewMtx(), shape->getMin(), shape->getMax())) {
                    shape->hide();
                } else {
                    shape->show();
                }
            }

            g_env_light.settingTevStruct(l_tevStrType[i], NULL, bgData->mpTevStr);
            g_env_light.setLightTevColorType_MAJI(bg_model, bgData->mpTevStr);
            dKy_bg_MAxx_proc(bg_model);

            if (bg_model != NULL) {
                modelData = bg_model->getModelData();

                for (u16 j = 0; j < modelData->getMaterialNum(); j++) {
                    J3DMaterial* mat = modelData->getMaterialNodePointer(j);
                    const char* name = modelData->getMaterialName()->getName(j);

                    if (!memcmp(&name[3], "MA12", 4)) {
                        if (g_env_light.mColPatCurr == 6) {
                            field_0x5f0 = 0;
                        }
                    } else if (!memcmp(&name[3], "MA18", 4)) {
                        if (dDemo_c::getFrame() >= 1118) {
                            field_0x5f0 = 0;
                        }

                        if (dComIfGs_isEventBit(dSv_event_flag_c::M_077)) {
                            field_0x5f0 = 9;
                        }
                    } else if (!memcmp(&name[3], "MA15", 4)) {
                        if (dComIfGs_BossLife_public_Get() != -1) {
                            field_0x5f1 = dComIfGs_BossLife_public_Get() + 1;
                        } else {
                            field_0x5f1 = 0;
                        }
                    } else if (!memcmp(&name[3], "MA09", 4)) {
                        bgData->mBtkAnmSpeed = 1.0f - (1.0f - g_env_light.mWaterSurfaceShineRate) * 0.9f;
                    } else if (!memcmp(&name[3], "MA05", 4)) {
                        bgData->mpTevStr->field_0x378 |= (u8)j;
                    }

                    if (!strcmp(dComIfGp_getStartStageName(), "F_SP127") ||
                        !strcmp(dComIfGp_getStartStageName(), "R_SP127")) {
                        if (!memcmp(&name[3], "MA00_Enkei_Tree_Color", 21) ||
                            !memcmp(&name[3], "MA00_Gake", 9) ||
                            !memcmp(&name[3], "MA00_Kusa", 9)) {
                            J3DGXColorS10 colorS10;
                            J3DGXColor color;

                            s16 var_r0;
                            s16 var_r3;
                            s16 var_r5;
                            switch (g_env_light.mPondSeason) {
                            case 2:
                                var_r5 = -3;
                                var_r0 = 0;
                                var_r3 = -4;
                                break;
                            case 3:
                                var_r5 = 0;
                                var_r0 = -10;
                                var_r3 = -13;
                                break;
                            case 4:
                                var_r5 = 18;
                                var_r0 = 17;
                                var_r3 = 25;
                                break;
                            default:
                                var_r5 = 0;
                                var_r0 = 0;
                                var_r3 = 0;
                                break;
                            }

                            f32 temp_f2 = bgData->mpTevStr->mColorC0.r / 10.0f;
                            f32 var_f2 = temp_f2 * temp_f2;
                            if (var_f2 > 1.0f) {
                                var_f2 = 1.0f;
                            }
                            colorS10.r = var_r5 * var_f2;

                            f32 temp_f2_2 = bgData->mpTevStr->mColorC0.g / 10.0f;
                            f32 var_f2_2 = temp_f2_2 * temp_f2_2;
                            if (var_f2_2 > 1.0f) {
                                var_f2_2 = 1.0f;
                            }
                            colorS10.g = var_r0 * var_f2_2;

                            f32 temp_f2_3 = bgData->mpTevStr->mColorC0.b / 10.0f;
                            f32 var_f2_3 = temp_f2_3 * temp_f2_3;
                            if (var_f2_3 > 1.0f) {
                                var_f2_3 = 1.0f;
                            }
                            colorS10.b = var_r3 * var_f2_3;
                            colorS10.a = 255;
                            mat->setTevColor(0, &colorS10);

                            color.r = 0;
                            color.g = 0;
                            color.b = 0;
                            color.a = 255;
                            mat->setTevKColor(0, &color);
                        }
                    }
                }

                mDoExt_modelEntryDL(bg_model);
                dComIfGd_setListBG();
            }
        }
    }

    dComIfGd_setList();
    dKy_tevstr_c* tevstr = dComIfGp_roomControl_getTevStr(roomNo);
    g_env_light.settingTevStruct(0x10, NULL, tevstr);

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBg_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/draw__6daBg_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804593A4-804593A8 000030 0004+00 1/1 0/0 0/0 .rodata          @4524 */
SECTION_RODATA static f32 const lit_4524 = 100.0f;
COMPILER_STRIP_GATE(0x804593A4, &lit_4524);

int daBg_c::execute() {
    daBg_unkData* bgData = mBgData;

    for (int i = 0; i < 6; i++) {
        if (bgData->mpBgBtk != NULL) {
            if (field_0x5f1 != 0) {
                bgData->mpBgBtk->playspeed((field_0x5f1 - 1) / 100.0f);
            }

            if (bgData->mBtkAnmSpeed >= 0.0f) {
                bgData->mpBgBtk->playspeed(bgData->mBtkAnmSpeed);
            }
            bgData->mpBgBtk->play();
        }

        if (bgData->mpBgBrk != NULL && field_0x5f0 == 0) {
            bgData->mpBgBrk->play();
        }

        bgData++;
    }

    return 1;
}

/* 80458F38-8045901C 0013B8 00E4+00 1/0 0/0 0/0 .text            daBg_Execute__FP6daBg_c */
// matches with literals
#ifdef NONMATCHING
static int daBg_Execute(daBg_c* i_this) {
    return i_this->execute();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daBg_Execute(daBg_c* i_this) {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/daBg_Execute__FP6daBg_c.s"
}
#pragma pop
#endif

/* 8045901C-80459024 00149C 0008+00 1/0 0/0 0/0 .text            daBg_IsDelete__FP6daBg_c */
static int daBg_IsDelete(daBg_c* i_this) {
    return 1;
}

/* 80459024-8045904C 0014A4 0028+00 1/0 0/0 0/0 .text            daBg_Delete__FP6daBg_c */
static int daBg_Delete(daBg_c* i_this) {
    i_this->~daBg_c();
    return 1;
}

/* 8045904C-8045906C 0014CC 0020+00 1/0 0/0 0/0 .text            daBg_Create__FP10fopAc_ac_c */
static int daBg_Create(fopAc_ac_c* i_this) {
    return static_cast<daBg_c*>(i_this)->create();
}

/* 8045906C-8045933C 0014EC 02D0+00 1/1 0/0 0/0 .text            create__6daBg_cFv */
// regalloc
#ifdef NONMATCHING
int daBg_c::create() {
    int roomNo = fopAcM_GetParam(this);
    field_0x5f0 = 0;
    field_0x5f1 = 0;

    if (mHeap == NULL) {
        fopAcM_SetupActor(this, daBg_c);

        home.roomNo = roomNo;
        current.roomNo = roomNo;

        JKRExpHeap* heap = dStage_roomControl_c::getMemoryBlock(roomNo);
        if (heap != NULL) {
            mHeap = JKRSolidHeap::create(-1, heap, false);

            JKRHeap* old = mDoExt_setCurrentHeap(mHeap);
            createHeap();

            mDoExt_setCurrentHeap(old);
            mHeap->adjustSize();
        } else if (!fopAcM_entrySolidHeap(this, checkCreateHeap, 0x80020040)) {
            return cPhs_ERROR_e;
        }

        daBg_unkData* bgData = mBgData;
        for (int i = 0; i < 6; i++) {
            if (bgData->mpBgModel != NULL) {
                J3DModelData* modelData = bgData->mpBgModel->getModelData();

                if (bgData->mpBgBtk != NULL) {
                    bgData->mpBgBtk->entry(modelData);
                }

                if (bgData->mpBgBrk != NULL) {
                    bgData->mpBgBrk->entry(modelData);
                }
            }
            bgData++;
        }

        f32 transX;
        f32 transY;
        s16 angle;
        if (dComIfGp_getMapTrans(roomNo, &transX, &transY, &angle)) {
            daBg_unkData* bgData_ = mBgData;
            for (int i = 0; i < 6; i++) {
                J3DModel* model = bgData_->mpBgModel;

                if (model != NULL) {
                    mDoMtx_stack_c::transS(transX, 0.0f, transY);
                    mDoMtx_stack_c::YrotM(angle);
                    model->setBaseTRMtx(mDoMtx_stack_c::get());

                    J3DModelData* modelData = model->getModelData();
                    for (u16 j = 0; j < modelData->getMaterialNum(); j++) {
                        const char* name = modelData->getMaterialName()->getName(j);

                        if (name[3] == 'M' && name[4] == 'A' && name[5] == '0' && name[6] == '8') {
                            modelData->getMaterialNodePointer(j)->getShape()->setTexMtxLoadType(
                                0x2000);
                        }
                    }
                }
                bgData_++;
            }
        }

        if (mpBgW != NULL) {
            if (dComIfG_Bgsp().Regist(mpBgW, this)) {
                return cPhs_ERROR_e;
            }
        }

        if (mpKCol != NULL) {
            if (dComIfG_Bgsp().Regist(mpKCol, this)) {
                return cPhs_ERROR_e;
            }
        }

        dKy_tevstr_init(dComIfGp_roomControl_getTevStr(roomNo), roomNo, 0xFF);
    }

    dComIfGp_roomControl_onStatusFlag(roomNo, 0x10);
    return cPhs_COMPLEATE_e;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daBg_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/create__6daBg_cFv.s"
}
#pragma pop
#endif

/* 8045933C-8045936C 0017BC 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void J3DTexNoAnm::calc(u16* param_0) const {
extern "C" asm void calc__11J3DTexNoAnmCFPUs() {
    nofralloc
#include "asm/rel/d/a/d_a_bg/d_a_bg/calc__11J3DTexNoAnmCFPUs.s"
}
#pragma pop

/* 804593A8-804593A8 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
