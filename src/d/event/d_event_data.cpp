//
// Generated By: dol2asm
// Translation Unit: d/event/d_event_data
//

#include "d/event/d_event_data.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoGph_gInf_c {
    /* 80007FD8 */ void fadeOut(f32, _GXColor&);
    /* 800080D0 */ void fadeOut(f32);

    static f32 mFadeRate;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FC0C */ void StartQuake(u8 const*, int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dMsgObject_c {
    /* 8023806C */ void demoMessageGroup();
};

struct dEvt_control_c {
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
    /* 80042958 */ void setSkipZev(void*, char*);
    /* 80043278 */ void getStageEventDt();
    /* 800432EC */ void convPId(unsigned int);
    /* 8004331C */ void getStbDemoData(char*);
    /* 800434D8 */ void searchMapEventData(u8);
    /* 8004365C */ void setPt2(void*);
    /* 8004368C */ void setPtT(void*);
    /* 800436BC */ void setPtI(void*);
    /* 800436F4 */ void setPtD(void*);
};

struct dEvent_manager_c {
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047F5C */ void getMyNowCutName(int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 80048144 */ void getMySubstanceNum(int, char const*);
    /* 8004817C */ void cutEnd(int);
};

struct dDlst_list_c {
    /* 800568D8 */ void wipeIn(f32);

    static f32 mWipeRate;
};

struct dDemo_c {
    /* 80039B6C */ void start(u8 const*, cXyz*, f32);
    /* 80039CF8 */ void end();

    static u8 m_control[4];
    static u8 m_frameNoMsg[4];
    static u8 m_mode[4];
};

struct dCamera_c {
    /* 80181170 */ void StartBlure(int, fopAc_ac_c*, f32, f32);
};

struct Z2SeqMgr {
    /* 802AF408 */ void bgmStop(u32, s32);
    /* 802AFE18 */ void bgmStreamPlay();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" static void getTelopNo__FPCc();
extern "C" static void getTelopNo__Fv();
extern "C" static void getStartTelopNo__Fv();
extern "C" static void dEvDt_Next_Stage__Fii();
extern "C" void flagCheck__11dEvDtFlag_cFi();
extern "C" void flagSet__11dEvDtFlag_cFi();
extern "C" void flagMaxCheck__11dEvDtFlag_cFi();
extern "C" void init__11dEvDtFlag_cFv();
extern "C" void finishCheck__12dEvDtEvent_cFv();
extern "C" void forceFinish__12dEvDtEvent_cFv();
extern "C" void specialStaffProc__12dEvDtEvent_cFP12dEvDtStaff_c();
extern "C" void specialProc_WaitStart__12dEvDtStaff_cFi();
extern "C" void specialProc_WaitProc__12dEvDtStaff_cFi();
extern "C" void specialProc__12dEvDtStaff_cFv();
extern "C" void init__12dEvDtStaff_cFv();
extern "C" void advanceCut__12dEvDtStaff_cFi();
extern "C" void specialProcLight__12dEvDtStaff_cFv();
extern "C" void specialProcMessage__12dEvDtStaff_cFv();
extern "C" void specialProcSound__12dEvDtStaff_cFv();
extern "C" void specialProcCreate__12dEvDtStaff_cFv();
extern "C" void specialProcDirector__12dEvDtStaff_cFv();
extern "C" void specialProcPackage__12dEvDtStaff_cFv();
extern "C" void specialProcTimekeeper__12dEvDtStaff_cFv();
extern "C" void specialProcEffect__12dEvDtStaff_cFv();
extern "C" void startCheck__10dEvDtCut_cFv();
extern "C" void init__11dEvDtBase_cFv();
extern "C" void init__11dEvDtBase_cFPci();
extern "C" void advanceCut__11dEvDtBase_cFP12dEvDtEvent_c();
extern "C" void advanceCutLocal__11dEvDtBase_cFP12dEvDtStaff_c();
extern "C" extern char const* const d_event_d_event_data__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_searchFromName4Event__FPCcs();
extern "C" void fopMsgM_SearchByID__FUi();
extern "C" void fopMsgM_messageSet__FUlUl();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dStage_searchName__FPCc();
extern "C" void dComIfGp_setNextStage__FPCcsScScfUliScsii();
extern "C" void dComIfGs_onStageSwitch__Fii();
extern "C" void dComIfGs_offStageSwitch__Fii();
extern "C" void dComIfGs_isStageSwitch__Fii();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void start__7dDemo_cFPCUcP4cXyzf();
extern "C" void end__7dDemo_cFv();
extern "C" void dEv_defaultSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setSkipZev__14dEvt_control_cFPvPc();
extern "C" void getStageEventDt__14dEvt_control_cFv();
extern "C" void convPId__14dEvt_control_cFUi();
extern "C" void getStbDemoData__14dEvt_control_cFPc();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void setPtT__14dEvt_control_cFPv();
extern "C" void setPtI__14dEvt_control_cFPv();
extern "C" void setPtD__14dEvt_control_cFPv();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void getMySubstanceNum__16dEvent_manager_cFiPCc();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void wipeIn__12dDlst_list_cFf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFPCUcii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void StartBlure__9dCamera_cFiP10fopAc_ac_cff();
extern "C" void dCam_getBody__Fv();
extern "C" void d_GameOver_Create__FUc();
extern "C" void d_GameOver_Delete__FRUi();
extern "C" void dKy_set_nexttime__Ff();
extern "C" void dKy_instant_timechg__Ff();
extern "C" void dKy_instant_rainchg__Fv();
extern "C" void demoMessageGroup__12dMsgObject_cFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 const tempBitLabels__20dSv_event_tmp_flag_c[370 + 2 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" f32 mFadeRate__13mDoGph_gInf_c;
extern "C" extern u8 struct_80450BE4[4];
extern "C" u8 m_control__7dDemo_c[4];
extern "C" u8 m_frameNoMsg__7dDemo_c[4];
extern "C" u8 m_mode__7dDemo_c[4];
extern "C" f32 mWipeRate__12dDlst_list_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803A7FB0-803A8238 0050D0 0288+00 2/2 0/0 0/0 .data            TelopData */
SECTION_DATA static u8 TelopData[648] = {
    0x44, 0x30, 0x35, 0x00, 0x04, 0x4D, 0x10, 0x69, 0x00, 0x03, 0x00, 0x00, 0x44, 0x30, 0x35, 0x41,
    0x04, 0x4D, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x35, 0x42, 0x04, 0x4D, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x34, 0x00, 0x04, 0x4E, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00,
    0x44, 0x30, 0x34, 0x41, 0x04, 0x4E, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x34, 0x42,
    0x04, 0x4E, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x31, 0x00, 0x04, 0x4F, 0x12, 0x78,
    0x00, 0x03, 0x00, 0x00, 0x44, 0x30, 0x31, 0x41, 0x04, 0x4F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x30, 0x31, 0x42, 0x04, 0x4F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x31, 0x30, 0x00,
    0x04, 0x50, 0x13, 0x2C, 0x00, 0x03, 0x00, 0x00, 0x44, 0x31, 0x30, 0x41, 0x04, 0x50, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x31, 0x30, 0x42, 0x04, 0x50, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x31, 0x31, 0x00, 0x04, 0x51, 0x14, 0x78, 0x00, 0x03, 0x00, 0x00, 0x44, 0x31, 0x31, 0x41,
    0x04, 0x51, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x31, 0x31, 0x42, 0x04, 0x51, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x36, 0x00, 0x04, 0x52, 0x15, 0x59, 0x00, 0x03, 0x00, 0x00,
    0x44, 0x30, 0x36, 0x41, 0x04, 0x52, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x36, 0x42,
    0x04, 0x52, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x37, 0x00, 0x04, 0x53, 0x16, 0x39,
    0x00, 0x03, 0x00, 0x00, 0x44, 0x30, 0x37, 0x41, 0x04, 0x53, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x30, 0x37, 0x42, 0x04, 0x53, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x38, 0x00,
    0x04, 0x54, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x44, 0x30, 0x38, 0x41, 0x04, 0x54, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x38, 0x42, 0x04, 0x54, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x30, 0x38, 0x43, 0x04, 0x54, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x38, 0x44,
    0x04, 0x54, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x39, 0x00, 0x04, 0x55, 0xFF, 0xFF,
    0x00, 0x01, 0x00, 0x00, 0x44, 0x30, 0x39, 0x41, 0x04, 0x55, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x30, 0x39, 0x42, 0x04, 0x55, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x44, 0x30, 0x39, 0x43,
    0x04, 0x55, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x46, 0x30, 0x30, 0x00, 0x04, 0x56, 0xFF, 0xFF,
    0x00, 0x01, 0x00, 0x00, 0x46, 0x31, 0x30, 0x33, 0x04, 0x57, 0x00, 0x0A, 0x00, 0x03, 0x00, 0x00,
    0x52, 0x30, 0x31, 0x00, 0x04, 0x57, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x46, 0x31, 0x30, 0x39,
    0x04, 0x58, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x52, 0x31, 0x30, 0x39, 0x04, 0x58, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x52, 0x32, 0x30, 0x39, 0x04, 0x58, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x46, 0x31, 0x31, 0x32, 0x04, 0x59, 0x04, 0x09, 0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x31, 0x33,
    0x04, 0x5A, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x30, 0x38, 0x04, 0x5B, 0xFF, 0xFF,
    0x00, 0x01, 0x00, 0x00, 0x52, 0x31, 0x30, 0x38, 0x04, 0x5B, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x46, 0x31, 0x31, 0x35, 0x04, 0x5C, 0x04, 0x1E, 0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x31, 0x31,
    0x04, 0x5E, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x46, 0x31, 0x32, 0x34, 0x04, 0x5F, 0xFF, 0xFF,
    0x00, 0x01, 0x00, 0x00, 0x46, 0x31, 0x31, 0x34, 0x04, 0x60, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x46, 0x31, 0x32, 0x35, 0x04, 0x61, 0x0A, 0x0C, 0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x32, 0x31,
    0x04, 0x62, 0x06, 0x2D, 0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x32, 0x32, 0x04, 0x62, 0x06, 0x2D,
    0x00, 0x03, 0x00, 0x00, 0x46, 0x31, 0x32, 0x33, 0x04, 0x62, 0x06, 0x2D, 0x00, 0x03, 0x00, 0x00,
    0x46, 0x31, 0x31, 0x37, 0x04, 0x63, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00, 0x46, 0x31, 0x32, 0x38,
    0x04, 0x6E, 0x03, 0x2E, 0x00, 0x03, 0x00, 0x00, 0x52, 0x31, 0x32, 0x38, 0x04, 0x6E, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x46, 0x31, 0x32, 0x37, 0x04, 0x74, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00,
    0x52, 0x31, 0x32, 0x37, 0x04, 0x74, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x46, 0x31, 0x32, 0x36,
    0x04, 0x75, 0xFF, 0xFF, 0x00, 0x01, 0x00, 0x00,
};

/* 80450640-80450648 0000C0 0004+04 2/2 0/0 0/0 .sdata           numTelopData */
SECTION_SDATA static u32 numTelopData[1 + 1 /* padding */] = {
    0x00000036,
    /* padding */
    0x00000000,
};

/* 8004372C-800437C4 03E06C 0098+00 2/2 0/0 0/0 .text            getTelopNo__FPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getTelopNo(char const* param_0) {
    nofralloc
#include "asm/d/event/d_event_data/getTelopNo__FPCc.s"
}
#pragma pop

/* 800437C4-800437F0 03E104 002C+00 1/1 0/0 0/0 .text            getTelopNo__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getTelopNo() {
    nofralloc
#include "asm/d/event/d_event_data/getTelopNo__Fv.s"
}
#pragma pop

/* 800437F0-80043A14 03E130 0224+00 1/1 0/0 0/0 .text            getStartTelopNo__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getStartTelopNo() {
    nofralloc
#include "asm/d/event/d_event_data/getStartTelopNo__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379DD0 = "ID";
SECTION_DEAD static char const* const stringBase_80379DD3 = "Stage";
SECTION_DEAD static char const* const stringBase_80379DD9 = "StartCode";
SECTION_DEAD static char const* const stringBase_80379DE3 = "RoomNo";
SECTION_DEAD static char const* const stringBase_80379DEA = "Layer";
SECTION_DEAD static char const* const stringBase_80379DF0 = "Wipe";
SECTION_DEAD static char const* const stringBase_80379DF5 = "Mode";
SECTION_DEAD static char const* const stringBase_80379DFA = "Speed";
SECTION_DEAD static char const* const stringBase_80379E00 = "Hour";
SECTION_DEAD static char const* const stringBase_80379E05 = "NoVisit";
#pragma pop

/* 80451ED0-80451ED4 0004D0 0004+00 4/4 0/0 0/0 .sdata2          @4264 */
SECTION_SDATA2 static u8 lit_4264[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451ED4-80451ED8 0004D4 0004+00 2/2 0/0 0/0 .sdata2          @4265 */
SECTION_SDATA2 static f32 lit_4265 = 15.0f;

/* 80451ED8-80451EE0 0004D8 0008+00 1/1 0/0 0/0 .sdata2          @4267 */
SECTION_SDATA2 static f64 lit_4267 = 4503601774854144.0 /* cast s32 to float */;

/* 80043A14-80043D60 03E354 034C+00 1/1 0/0 0/0 .text            dEvDt_Next_Stage__Fii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dEvDt_Next_Stage(int param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event_data/dEvDt_Next_Stage__Fii.s"
}
#pragma pop

/* 80043D60-80043DC8 03E6A0 0068+00 3/3 0/0 0/0 .text            flagCheck__11dEvDtFlag_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtFlag_c::flagCheck(int param_0) {
    nofralloc
#include "asm/d/event/d_event_data/flagCheck__11dEvDtFlag_cFi.s"
}
#pragma pop

/* 80043DC8-80043E30 03E708 0068+00 2/2 1/1 0/0 .text            flagSet__11dEvDtFlag_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtFlag_c::flagSet(int param_0) {
    nofralloc
#include "asm/d/event/d_event_data/flagSet__11dEvDtFlag_cFi.s"
}
#pragma pop

bool dEvDtFlag_c::flagMaxCheck(int flag_id) {
    if (flag_id == -1) {
        return true;
    }

    return FlagMax <= flag_id;
}

void dEvDtFlag_c::init() {
    for (int i = 0; i < 320; i++) {
        mFlags[i] = 0;
    }
}

/* 80043E78-80043EFC 03E7B8 0084+00 0/0 1/1 0/0 .text            finishCheck__12dEvDtEvent_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtEvent_c::finishCheck() {
    nofralloc
#include "asm/d/event/d_event_data/finishCheck__12dEvDtEvent_cFv.s"
}
#pragma pop

/* 80043EFC-80043F70 03E83C 0074+00 0/0 1/1 0/0 .text            forceFinish__12dEvDtEvent_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtEvent_c::forceFinish() {
    nofralloc
#include "asm/d/event/d_event_data/forceFinish__12dEvDtEvent_cFv.s"
}
#pragma pop

/* 80043F70-80043FD8 03E8B0 0068+00 0/0 1/1 0/0 .text
 * specialStaffProc__12dEvDtEvent_cFP12dEvDtStaff_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtEvent_c::specialStaffProc(dEvDtStaff_c* param_0) {
    nofralloc
#include "asm/d/event/d_event_data/specialStaffProc__12dEvDtEvent_cFP12dEvDtStaff_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E0D = "Timer";
#pragma pop

/* 80043FD8-8004403C 03E918 0064+00 4/4 0/0 0/0 .text specialProc_WaitStart__12dEvDtStaff_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProc_WaitStart(int param_0) {
    nofralloc
#include "asm/d/event/d_event_data/specialProc_WaitStart__12dEvDtStaff_cFi.s"
}
#pragma pop

/* 8004403C-80044080 03E97C 0044+00 4/4 0/0 0/0 .text specialProc_WaitProc__12dEvDtStaff_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProc_WaitProc(int param_0) {
    nofralloc
#include "asm/d/event/d_event_data/specialProc_WaitProc__12dEvDtStaff_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A8238-803A8270 -00001 0034+04 1/1 0/0 0/0 .data            @4398 */
SECTION_DATA static void* lit_4398[13 + 1 /* padding */] = {
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0xA0),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x50),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0xA0),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x68),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x48),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0xA0),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x40),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x94),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x8C),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x9C),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0xA0),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x38),
    (void*)(((char*)specialProc__12dEvDtStaff_cFv) + 0x70),
    /* padding */
    NULL,
};

/* 80044080-80044134 03E9C0 00B4+00 2/1 0/0 0/0 .text            specialProc__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProc() {
    nofralloc
#include "asm/d/event/d_event_data/specialProc__12dEvDtStaff_cFv.s"
}
#pragma pop

/* 80044134-80044170 03EA74 003C+00 0/0 1/1 0/0 .text            init__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::init() {
    nofralloc
#include "asm/d/event/d_event_data/init__12dEvDtStaff_cFv.s"
}
#pragma pop

/* 80044170-80044190 03EAB0 0020+00 1/1 0/0 0/0 .text            advanceCut__12dEvDtStaff_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::advanceCut(int param_0) {
    nofralloc
#include "asm/d/event/d_event_data/advanceCut__12dEvDtStaff_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E13 = "LIGHT";
SECTION_DEAD static char const* const stringBase_80379E19 = "Weather";
#pragma pop

/* 80451EE0-80451EE8 0004E0 0004+04 1/1 0/0 0/0 .sdata2          @4460 */
SECTION_SDATA2 static f32 lit_4460[1 + 1 /* padding */] = {
    1.0f / 15.0f,
    /* padding */
    0.0f,
};

/* 80451EE8-80451EF0 0004E8 0008+00 1/1 0/0 0/0 .sdata2          @4461 */
SECTION_SDATA2 static f64 lit_4461 = 24.0;

/* 80044190-80044324 03EAD0 0194+00 1/1 0/0 0/0 .text            specialProcLight__12dEvDtStaff_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcLight() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcLight__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E21 = "MESSAGE";
SECTION_DEAD static char const* const stringBase_80379E29 = "msgNo";
SECTION_DEAD static char const* const stringBase_80379E2F = "No";
SECTION_DEAD static char const* const stringBase_80379E32 = "Type";
SECTION_DEAD static char const* const stringBase_80379E37 = "ForStart";
#pragma pop

/* 80044324-80044A58 03EC64 0734+00 1/1 0/0 0/0 .text specialProcMessage__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcMessage() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcMessage__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E40 = "SOUND";
#pragma pop

/* 80451EF0-80451EF4 0004F0 0004+00 4/4 0/0 0/0 .sdata2          @4668 */
SECTION_SDATA2 static f32 lit_4668 = 1.0f;

/* 80451EF4-80451EF8 0004F4 0004+00 2/2 0/0 0/0 .sdata2          @4669 */
SECTION_SDATA2 static f32 lit_4669 = -1.0f;

/* 80044A58-80044CB8 03F398 0260+00 1/1 0/0 0/0 .text            specialProcSound__12dEvDtStaff_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcSound() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcSound__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E46 = "CREATER";
SECTION_DEAD static char const* const stringBase_80379E4E = "MAKECAST";
SECTION_DEAD static char const* const stringBase_80379E57 = "ARG";
SECTION_DEAD static char const* const stringBase_80379E5B = "POS";
SECTION_DEAD static char const* const stringBase_80379E5F = "ANGLE";
SECTION_DEAD static char const* const stringBase_80379E65 = "SCALE";
#pragma pop

/* 80044CB8-80044EE4 03F5F8 022C+00 1/1 0/0 0/0 .text            specialProcCreate__12dEvDtStaff_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcCreate() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcCreate__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379E6B = "DIRECTOR";
SECTION_DEAD static char const* const stringBase_80379E74 = "EventFlag";
SECTION_DEAD static char const* const stringBase_80379E7E = "EventFlagOff";
SECTION_DEAD static char const* const stringBase_80379E8B = "SwitchTable";
SECTION_DEAD static char const* const stringBase_80379E97 = "SwitchBit";
SECTION_DEAD static char const* const stringBase_80379EA1 = "SwitchOff";
SECTION_DEAD static char const* const stringBase_80379EAB = "TmpBit";
SECTION_DEAD static char const* const stringBase_80379EB2 = "TmpBitOff";
SECTION_DEAD static char const* const stringBase_80379EBC = "PLAYER_NODRAW";
SECTION_DEAD static char const* const stringBase_80379ECA = "PLAYER_DRAW";
SECTION_DEAD static char const* const stringBase_80379ED6 = "Zev";
SECTION_DEAD static char const* const stringBase_80379EDA = "Rate";
SECTION_DEAD static char const* const stringBase_80379EDF = "Color";
SECTION_DEAD static char const* const stringBase_80379EE5 = "Pattern";
SECTION_DEAD static char const* const stringBase_80379EED = "Pt2";
SECTION_DEAD static char const* const stringBase_80379EF1 = "PtT";
SECTION_DEAD static char const* const stringBase_80379EF5 = "PtI";
SECTION_DEAD static char const* const stringBase_80379EF9 = "PtD";
#pragma pop

/* 80044EE4-80045878 03F824 0994+00 1/1 0/0 0/0 .text specialProcDirector__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcDirector() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcDirector__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379EFD = "PACKAGE";
SECTION_DEAD static char const* const stringBase_80379F05 = "FileName";
SECTION_DEAD static char const* const stringBase_80379F0E = "OffsetPos";
SECTION_DEAD static char const* const stringBase_80379F18 = "OffsetAngY";
#pragma pop

/* 80451EF8-80451EFC 0004F8 0004+00 1/1 0/0 0/0 .sdata2          @5057 */
SECTION_SDATA2 static f32 lit_5057 = 10.0f;

/* 80045878-80045AFC 0401B8 0284+00 1/1 0/0 0/0 .text specialProcPackage__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcPackage() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcPackage__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379F23 = "TIMEKEEPER";
#pragma pop

/* 80045AFC-80045C34 04043C 0138+00 1/1 0/0 0/0 .text specialProcTimekeeper__12dEvDtStaff_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcTimekeeper() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcTimekeeper__12dEvDtStaff_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379F2E = "EFFECT";
SECTION_DEAD static char const* const stringBase_80379F35 = "Power";
SECTION_DEAD static char const* const stringBase_80379F3B = "Random";
SECTION_DEAD static char const* const stringBase_80379F42 = "Alpha";
SECTION_DEAD static char const* const stringBase_80379F48 = "Scale";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80379F4E = "\0";
#pragma pop

/* 80451EFC-80451F00 0004FC 0004+00 1/1 0/0 0/0 .sdata2          @5200 */
SECTION_SDATA2 static f32 lit_5200 = 4.0f / 5.0f;

/* 80045C34-800460A8 040574 0474+00 1/1 0/0 0/0 .text            specialProcEffect__12dEvDtStaff_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtStaff_c::specialProcEffect() {
    nofralloc
#include "asm/d/event/d_event_data/specialProcEffect__12dEvDtStaff_cFv.s"
}
#pragma pop

/* 800460A8-80046138 0409E8 0090+00 1/1 0/0 0/0 .text            startCheck__10dEvDtCut_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtCut_c::startCheck() {
    nofralloc
#include "asm/d/event/d_event_data/startCheck__10dEvDtCut_cFv.s"
}
#pragma pop

/* 80046138-8004616C 040A78 0034+00 1/1 7/7 0/0 .text            init__11dEvDtBase_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtBase_c::init() {
    nofralloc
#include "asm/d/event/d_event_data/init__11dEvDtBase_cFv.s"
}
#pragma pop

/* 8004616C-8004628C 040AAC 0120+00 0/0 6/6 0/0 .text            init__11dEvDtBase_cFPci */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtBase_c::init(char* param_0, int param_1) {
    nofralloc
#include "asm/d/event/d_event_data/init__11dEvDtBase_cFPci.s"
}
#pragma pop

/* 8004628C-800462FC 040BCC 0070+00 0/0 1/1 0/0 .text advanceCut__11dEvDtBase_cFP12dEvDtEvent_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtBase_c::advanceCut(dEvDtEvent_c* param_0) {
    nofralloc
#include "asm/d/event/d_event_data/advanceCut__11dEvDtBase_cFP12dEvDtEvent_c.s"
}
#pragma pop

/* 800462FC-800463DC 040C3C 00E0+00 1/1 0/0 0/0 .text
 * advanceCutLocal__11dEvDtBase_cFP12dEvDtStaff_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvDtBase_c::advanceCutLocal(dEvDtStaff_c* param_0) {
    nofralloc
#include "asm/d/event/d_event_data/advanceCutLocal__11dEvDtBase_cFP12dEvDtStaff_c.s"
}
#pragma pop

/* 80379DD0-80379DD0 006430 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
