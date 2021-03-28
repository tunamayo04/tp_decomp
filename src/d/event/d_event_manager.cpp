// 
// Generated By: dol2asm
// Translation Unit: d/event/d_event_manager
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/event/d_event_manager.h"

// 
// Types:
// 

struct fopAc_ac_c {
};

struct dSv_info_c {
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dStage_roomControl_c {
	/* 80024384 */ void getStatusRoomDt(int);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
	/* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
	/* 800429A8 */ void onSkipFade();
	/* 80043278 */ void getStageEventDt();
	/* 80043280 */ void sceneChange(int);
	/* 800432EC */ void convPId(unsigned int);
	/* 80043500 */ void searchMapEventData(u8, s32);
	/* 8004360C */ void runningEventID(s16);
	/* 8004365C */ void setPt2(void*);
	/* 800436BC */ void setPtI(void*);
	/* 800436F4 */ void setPtD(void*);
};

struct Vec {
};

struct cXyz {
	/* 80266B34 */ void operator-(Vec const&) const;
};

struct dEvDtData_c {
};

struct dEvDtStaff_c {
	/* 80044134 */ void init();
};

struct dEvDtEvent_c {
	/* 80043E78 */ void finishCheck();
	/* 80043F70 */ void specialStaffProc(dEvDtStaff_c*);
};

struct dEvent_manager_c {
	/* 800465E8 */ void getSubstance(dEvDtData_c*, int);
	/* 80046688 */ dEvent_manager_c();
	/* 80046710 */ void create();
	/* 80046800 */ void setObjectArchive(char*);
	/* 80046888 */ void demoInit();
	/* 80046904 */ void roomInit(int);
	/* 800469EC */ void roomFinish(int);
	/* 80046A58 */ void orderStartDemo();
	/* 80046C0C */ void remove();
	/* 80046CB8 */ void startProc(dEvDtEvent_c*);
	/* 80046DA0 */ void closeProc(dEvDtEvent_c*);
	/* 80046DAC */ void endProc(s16, int);
	/* 80046E64 */ void Sequencer();
	/* 800473FC */ void Experts();
	/* 800474BC */ void getEventData(s16);
	/* 80047454 */ void getEventData(s16, int);
	/* 80047514 */ void getEventIdx(char const*, u8, s32);
	/* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
	/* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
	/* 80047930 */ void isMapToolCamera(u8, s32);
	/* 80047984 */ void order(s16);
	/* 800479F8 */ void startCheck(s16);
	/* 80047A38 */ void startCheckOld(char const*);
	/* 80047A78 */ void endCheck(s16);
	/* 80047ADC */ void endCheckOld(char const*);
	/* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
	/* 80047D4C */ void getIsAddvance(int);
	/* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
	/* 80047F5C */ void getMyNowCutName(int);
	/* 80047FC8 */ void getMyDataP(int, char const*, int);
	/* 800480EC */ void getMySubstanceP(int, char const*, int);
	/* 80048144 */ void getMySubstanceNum(int, char const*);
	/* 8004817C */ void cutEnd(int);
	/* 800481F4 */ void getEventPrio(fopAc_ac_c*, s16);
	/* 800482CC */ void issueStaff(char const*);
	/* 80048348 */ void cancelStaff(char const*);
	/* 800483C4 */ void setGoal(cXyz*);
	/* 800483E0 */ void getGoal();
	/* 800483E8 */ void getRunEventName();
	/* 80048520 */ void specialCast_Shutter(s16, int);
	/* 80048618 */ void specialCast(char const*, int);
	/* 800487F0 */ void ChkPresentEnd();
	/* 8004882C */ void checkStartDemo();
};

struct dEvent_exception_c {
	/* 800463DC */ void init();
	/* 800463F0 */ void setStartDemo(int);
	/* 80046480 */ void getEventName();
};

struct dEvDtFlag_c {
	/* 80043DC8 */ void flagSet(int);
	/* 80043E58 */ void init();
};

struct dEvDtBase_c {
	/* 80030190 */ ~dEvDtBase_c();
	/* 8004616C */ void init(char*, int);
	/* 80046138 */ void init();
	/* 8004628C */ void advanceCut(dEvDtEvent_c*);
	/* 800466E0 */ dEvDtBase_c();
};

struct dCamera_c {
	/* 80180A40 */ void EventRecoverNotime();
	/* 80181E98 */ void Center();
};

struct Z2StatusMgr {
	/* 802B61E8 */ void setDemoName(char*);
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

// 
// Forward References:
// 

static void extraOnObjectCallBack(fopAc_ac_c*, void*);
static void extraOffObjectCallBack(fopAc_ac_c*, void*);
static void allOffObjectCallBack(fopAc_ac_c*, void*);
static void dEvmng_strcmp(char const*, char*);
static void findShutterCallBack(fopAc_ac_c*, void*);
static void dEv_talkman_get_action(int);
extern "C" extern char const* const d_event_d_event_manager__stringBase0;

extern "C" void init__18dEvent_exception_cFv();
extern "C" void setStartDemo__18dEvent_exception_cFi();
extern "C" void getEventName__18dEvent_exception_cFv();
extern "C" void getSubstance__16dEvent_manager_cFP11dEvDtData_ci();
extern "C" void __ct__16dEvent_manager_cFv();
extern "C" void __ct__11dEvDtBase_cFv();
extern "C" void create__16dEvent_manager_cFv();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void demoInit__16dEvent_manager_cFv();
extern "C" void roomInit__16dEvent_manager_cFi();
extern "C" void roomFinish__16dEvent_manager_cFi();
extern "C" void orderStartDemo__16dEvent_manager_cFv();
extern "C" void remove__16dEvent_manager_cFv();
extern "C" static void extraOnObjectCallBack__FP10fopAc_ac_cPv();
extern "C" static void extraOffObjectCallBack__FP10fopAc_ac_cPv();
extern "C" static void allOffObjectCallBack__FP10fopAc_ac_cPv();
extern "C" void startProc__16dEvent_manager_cFP12dEvDtEvent_c();
extern "C" void closeProc__16dEvent_manager_cFP12dEvDtEvent_c();
extern "C" void endProc__16dEvent_manager_cFsi();
extern "C" void Sequencer__16dEvent_manager_cFv();
extern "C" void Experts__16dEvent_manager_cFv();
extern "C" void getEventData__16dEvent_manager_cFsi();
extern "C" void getEventData__16dEvent_manager_cFs();
extern "C" void getEventIdx__16dEvent_manager_cFPCcUcl();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void isMapToolCamera__16dEvent_manager_cFUcl();
extern "C" void order__16dEvent_manager_cFs();
extern "C" void startCheck__16dEvent_manager_cFs();
extern "C" void startCheckOld__16dEvent_manager_cFPCc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" static void dEvmng_strcmp__FPCcPc();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void getMyDataP__16dEvent_manager_cFiPCci();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void getMySubstanceNum__16dEvent_manager_cFiPCc();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getEventPrio__16dEvent_manager_cFP10fopAc_ac_cs();
extern "C" void issueStaff__16dEvent_manager_cFPCc();
extern "C" void cancelStaff__16dEvent_manager_cFPCc();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void getGoal__16dEvent_manager_cFv();
extern "C" void getRunEventName__16dEvent_manager_cFv();
extern "C" static void findShutterCallBack__FP10fopAc_ac_cPv();
extern "C" void specialCast_Shutter__16dEvent_manager_cFsi();
extern "C" void specialCast__16dEvent_manager_cFPCci();
extern "C" static void dEv_talkman_get_action__Fi();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void checkStartDemo__16dEvent_manager_cFv();
extern "C" extern char const* const d_event_d_event_manager__stringBase0;

// 
// External References:
// 

void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void fopAcM_orderMapToolAutoNextEvent(fopAc_ac_c*, u8, s16, u16, u16, u16);
void fopAcM_searchFromName4Event(char const*, s16);
void dComIfG_getStageRes(char const*);
void dComIfG_getRoomArcName(int);
void dComIfGp_SelectWarpPt_get();
void dEv_defaultSkipProc(void*, int);
void dEv_defaultSkipZev(void*, int);
void dEv_defaultSkipStb(void*, int);
void dCam_getBody();
extern "C" extern u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderMapToolAutoNextEvent__FP10fopAc_ac_cUcsUsUsUs();
extern "C" void fopAcM_searchFromName4Event__FPCcs();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void dComIfG_getRoomArcName__Fi();
extern "C" void dComIfGp_SelectWarpPt_get__Fv();
extern "C" void __dt__11dEvDtBase_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_defaultSkipProc__FPvi();
extern "C" void dEv_defaultSkipZev__FPvi();
extern "C" void dEv_defaultSkipStb__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void getStageEventDt__14dEvt_control_cFv();
extern "C" void sceneChange__14dEvt_control_cFi();
extern "C" void convPId__14dEvt_control_cFUi();
extern "C" void searchMapEventData__14dEvt_control_cFUcl();
extern "C" void runningEventID__14dEvt_control_cFs();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void setPtI__14dEvt_control_cFPv();
extern "C" void setPtD__14dEvt_control_cFPv();
extern "C" void flagSet__11dEvDtFlag_cFi();
extern "C" void init__11dEvDtFlag_cFv();
extern "C" void finishCheck__12dEvDtEvent_cFv();
extern "C" void specialStaffProc__12dEvDtEvent_cFP12dEvDtStaff_c();
extern "C" void init__12dEvDtStaff_cFv();
extern "C" void init__11dEvDtBase_cFv();
extern "C" void init__11dEvDtBase_cFPci();
extern "C" void advanceCut__11dEvDtBase_cFP12dEvDtEvent_c();
extern "C" void EventRecoverNotime__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void Center__9dCamera_cFv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void sprintf();
extern "C" void strchr();
extern "C" void strcmp();
extern "C" void strcpy();
extern "C" extern u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 800463DC-800463F0 0014+00 s=2 e=0 z=0  None .text      init__18dEvent_exception_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_exception_c::init() {
	nofralloc
#include "asm/d/event/d_event_manager/init__18dEvent_exception_cFv.s"
}
#pragma pop


/* 800463F0-80046480 0090+00 s=0 e=2 z=0  None .text      setStartDemo__18dEvent_exception_cFi                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_exception_c::setStartDemo(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/setStartDemo__18dEvent_exception_cFi.s"
}
#pragma pop


/* ############################################################################################## */
/* 80379F50-80379F60 000F+01 s=6 e=0 z=0  None .rodata    DataFileName__29@unnamed@d_event_manager_cpp@                */
SECTION_RODATA static u8 const data_80379F50[15 + 1 /* padding */] = {
	0x65, 0x76, 0x65, 0x6E, 0x74, 0x5F, 0x6C, 0x69, 0x73, 0x74, 0x2E, 0x64, 0x61, 0x74, 0x00,
	/* padding */
	0x00,
};

/* 80379F60-8037A108 01A4+04 s=15 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80379F60 = "NORMAL_COMEBACK";
SECTION_DEAD char const* const stringBase_80379F70 = "DEFAULT_START";
SECTION_DEAD char const* const stringBase_80379F7E = "SHUTTER_START";
SECTION_DEAD char const* const stringBase_80379F8C = "SHUTTER_START_STOP";
SECTION_DEAD char const* const stringBase_80379F9F = "BS_SHUTTER_START";
SECTION_DEAD char const* const stringBase_80379FB0 = "BS_SHUTTER_START_B";
SECTION_DEAD char const* const stringBase_80379FC3 = "KNOB_START";
SECTION_DEAD char const* const stringBase_80379FCE = "KNOB_START_B";
SECTION_DEAD char const* const stringBase_80379FDB = "FMASTER_START";
SECTION_DEAD char const* const stringBase_80379FE9 = "FALL_START";
SECTION_DEAD char const* const stringBase_80379FF4 = "CRAWLOUT_START";
SECTION_DEAD char const* const stringBase_8037A003 = "BOSSWARP_START";
SECTION_DEAD char const* const stringBase_8037A012 = "PORTALWARP_START";
SECTION_DEAD char const* const stringBase_8037A023 = "PORTALWARP_START_B";
SECTION_DEAD char const* const stringBase_8037A036 = "(!NO REGIST!)";
SECTION_DEAD char const* const stringBase_8037A044 = "(!NO INFO!)";
SECTION_DEAD char const* const stringBase_8037A050 = "(!BAD NUMBER!)";
SECTION_DEAD char const* const stringBase_8037A05F = "(MAP TOOL CAMERA)";
SECTION_DEAD char const* const stringBase_8037A071 = "(!BAD DATA!)";
SECTION_DEAD char const* const stringBase_8037A07E = "Event";
SECTION_DEAD char const* const stringBase_8037A084 = "WOLF_WORLD_CHANGE_OUT";
SECTION_DEAD char const* const stringBase_8037A09A = "WORLD_CHANGE_OUT";
SECTION_DEAD char const* const stringBase_8037A0AB = "ALL";
SECTION_DEAD char const* const stringBase_8037A0AF = "MapToolCamera%d";
SECTION_DEAD char const* const stringBase_8037A0BF = "Alink";
SECTION_DEAD char const* const stringBase_8037A0C5 = "Link";
SECTION_DEAD char const* const stringBase_8037A0CA = "NO DATA";
SECTION_DEAD char const* const stringBase_8037A0D2 = "NOT RUNNING";
SECTION_DEAD char const* const stringBase_8037A0DE = "SHUTTER_DOOR";
SECTION_DEAD char const* const stringBase_8037A0EB = "WAIT";
SECTION_DEAD char const* const stringBase_8037A0F0 = "TALK0";
SECTION_DEAD char const* const stringBase_8037A0F6 = "TALK1";
SECTION_DEAD char const* const stringBase_8037A0FC = "TALKMAN";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8037A104 = "\0\0\0";
#pragma pop

/* 803A8270-803A82A8 0038+00 s=1 e=0 z=0  None .data      soecial_names$3966                                           */
SECTION_DATA static void* soecial_names[14] = {
	(void*)&d_event_d_event_manager__stringBase0,
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x10),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x1E),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x2C),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x3F),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x50),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x63),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x6E),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x7B),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x89),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x94),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0xA3),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0xB2),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0xC3),
};

/* 80046480-800465E8 0168+00 s=1 e=0 z=0  None .text      getEventName__18dEvent_exception_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_exception_c::getEventName() {
	nofralloc
#include "asm/d/event/d_event_manager/getEventName__18dEvent_exception_cFv.s"
}
#pragma pop


/* 800465E8-80046688 00A0+00 s=1 e=0 z=0  None .text      getSubstance__16dEvent_manager_cFP11dEvDtData_ci             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getSubstance(dEvDtData_c* param_0, int param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/getSubstance__16dEvent_manager_cFP11dEvDtData_ci.s"
}
#pragma pop


/* 80046688-800466E0 0058+00 s=0 e=1 z=0  None .text      __ct__16dEvent_manager_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvent_manager_c::dEvent_manager_c() {
	nofralloc
#include "asm/d/event/d_event_manager/__ct__16dEvent_manager_cFv.s"
}
#pragma pop


/* 800466E0-80046710 0030+00 s=1 e=0 z=0  None .text      __ct__11dEvDtBase_cFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvDtBase_c::dEvDtBase_c() {
	nofralloc
#include "asm/d/event/d_event_manager/__ct__11dEvDtBase_cFv.s"
}
#pragma pop


/* 80046710-80046800 00F0+00 s=0 e=1 z=0  None .text      create__16dEvent_manager_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::create() {
	nofralloc
#include "asm/d/event/d_event_manager/create__16dEvent_manager_cFv.s"
}
#pragma pop


/* 80046800-80046888 0088+00 s=0 e=8 z=24  None .text      setObjectArchive__16dEvent_manager_cFPc                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::setObjectArchive(char* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/setObjectArchive__16dEvent_manager_cFPc.s"
}
#pragma pop


/* 80046888-80046904 007C+00 s=0 e=1 z=0  None .text      demoInit__16dEvent_manager_cFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::demoInit() {
	nofralloc
#include "asm/d/event/d_event_manager/demoInit__16dEvent_manager_cFv.s"
}
#pragma pop


/* 80046904-800469EC 00E8+00 s=0 e=1 z=0  None .text      roomInit__16dEvent_manager_cFi                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::roomInit(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/roomInit__16dEvent_manager_cFi.s"
}
#pragma pop


/* 800469EC-80046A58 006C+00 s=0 e=1 z=0  None .text      roomFinish__16dEvent_manager_cFi                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::roomFinish(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/roomFinish__16dEvent_manager_cFi.s"
}
#pragma pop


/* 80046A58-80046C0C 01B4+00 s=0 e=1 z=0  None .text      orderStartDemo__16dEvent_manager_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::orderStartDemo() {
	nofralloc
#include "asm/d/event/d_event_manager/orderStartDemo__16dEvent_manager_cFv.s"
}
#pragma pop


/* 80046C0C-80046C74 0068+00 s=0 e=1 z=0  None .text      remove__16dEvent_manager_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::remove() {
	nofralloc
#include "asm/d/event/d_event_manager/remove__16dEvent_manager_cFv.s"
}
#pragma pop


/* 80046C74-80046C88 0014+00 s=1 e=0 z=0  None .text      extraOnObjectCallBack__FP10fopAc_ac_cPv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void extraOnObjectCallBack(fopAc_ac_c* param_0, void* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/extraOnObjectCallBack__FP10fopAc_ac_cPv.s"
}
#pragma pop


/* 80046C88-80046C9C 0014+00 s=1 e=0 z=0  None .text      extraOffObjectCallBack__FP10fopAc_ac_cPv                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void extraOffObjectCallBack(fopAc_ac_c* param_0, void* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/extraOffObjectCallBack__FP10fopAc_ac_cPv.s"
}
#pragma pop


/* 80046C9C-80046CB8 001C+00 s=1 e=0 z=0  None .text      allOffObjectCallBack__FP10fopAc_ac_cPv                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void allOffObjectCallBack(fopAc_ac_c* param_0, void* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/allOffObjectCallBack__FP10fopAc_ac_cPv.s"
}
#pragma pop


/* 80046CB8-80046DA0 00E8+00 s=1 e=0 z=0  None .text      startProc__16dEvent_manager_cFP12dEvDtEvent_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::startProc(dEvDtEvent_c* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/startProc__16dEvent_manager_cFP12dEvDtEvent_c.s"
}
#pragma pop


/* 80046DA0-80046DAC 000C+00 s=2 e=0 z=0  None .text      closeProc__16dEvent_manager_cFP12dEvDtEvent_c                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::closeProc(dEvDtEvent_c* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/closeProc__16dEvent_manager_cFP12dEvDtEvent_c.s"
}
#pragma pop


/* 80046DAC-80046E64 00B8+00 s=0 e=2 z=0  None .text      endProc__16dEvent_manager_cFsi                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::endProc(s16 param_0, int param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/endProc__16dEvent_manager_cFsi.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451F00-80451F08 0004+04 s=1 e=0 z=0  None .sdata2    @4398                                                        */
SECTION_SDATA2 static u8 lit_4398[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 80451F08-80451F10 0008+00 s=1 e=0 z=0  None .sdata2    @4399                                                        */
SECTION_SDATA2 static u8 lit_4399[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451F10-80451F18 0008+00 s=1 e=0 z=0  None .sdata2    @4400                                                        */
SECTION_SDATA2 static u8 lit_4400[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451F18-80451F20 0008+00 s=1 e=0 z=0  None .sdata2    @4401                                                        */
SECTION_SDATA2 static u8 lit_4401[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451F20-80451F24 0004+00 s=1 e=0 z=0  None .sdata2    @4402                                                        */
SECTION_SDATA2 static u32 lit_4402 = 0x43340000;

/* 80451F24-80451F28 0004+00 s=1 e=0 z=0  None .sdata2    @4403                                                        */
SECTION_SDATA2 static u32 lit_4403 = 0x3F800000;

/* 80451F28-80451F2C 0004+00 s=1 e=0 z=0  None .sdata2    @4404                                                        */
SECTION_SDATA2 static u32 lit_4404 = 0xBF800000;

/* 80046E64-800473FC 0598+00 s=0 e=1 z=0  None .text      Sequencer__16dEvent_manager_cFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::Sequencer() {
	nofralloc
#include "asm/d/event/d_event_manager/Sequencer__16dEvent_manager_cFv.s"
}
#pragma pop


/* 800473FC-80047454 0058+00 s=0 e=1 z=0  None .text      Experts__16dEvent_manager_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::Experts() {
	nofralloc
#include "asm/d/event/d_event_manager/Experts__16dEvent_manager_cFv.s"
}
#pragma pop


/* 80047454-800474BC 0068+00 s=1 e=0 z=0  None .text      getEventData__16dEvent_manager_cFsi                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventData(s16 param_0, int param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventData__16dEvent_manager_cFsi.s"
}
#pragma pop


/* 800474BC-80047514 0058+00 s=9 e=3 z=4  None .text      getEventData__16dEvent_manager_cFs                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventData(s16 param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventData__16dEvent_manager_cFs.s"
}
#pragma pop


/* ############################################################################################## */
/* 804246A0-804246B4 0011+03 s=1 e=0 z=0  None .bss       map_tool_name$4449                                           */
static u8 map_tool_name_4449[17 + 3 /* padding */];

/* 80047514-80047698 0184+00 s=3 e=8 z=3  None .text      getEventIdx__16dEvent_manager_cFPCcUcl                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventIdx(char const* param_0, u8 param_1, s32 param_2) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventIdx__16dEvent_manager_cFPCcUcl.s"
}
#pragma pop


/* ############################################################################################## */
/* 804246B4-804246C8 0011+03 s=1 e=0 z=0  None .bss       map_tool_name$4498                                           */
static u8 map_tool_name_4498[17 + 3 /* padding */];

/* 80047698-80047758 00C0+00 s=0 e=3 z=25  None .text      getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventIdx(fopAc_ac_c* param_0, u8 param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc.s"
}
#pragma pop


/* ############################################################################################## */
/* 804246C8-804246E0 0011+07 s=1 e=0 z=0  None .bss       map_tool_name$4511                                           */
static u8 map_tool_name_4511[17 + 7 /* padding */];

/* 80047758-80047930 01D8+00 s=1 e=10 z=92  None .text      getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventIdx(fopAc_ac_c* param_0, char const* param_1, u8 param_2) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc.s"
}
#pragma pop


/* 80047930-80047984 0054+00 s=0 e=0 z=1  None .text      isMapToolCamera__16dEvent_manager_cFUcl                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::isMapToolCamera(u8 param_0, s32 param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/isMapToolCamera__16dEvent_manager_cFUcl.s"
}
#pragma pop


/* 80047984-800479F8 0074+00 s=0 e=6 z=0  None .text      order__16dEvent_manager_cFs                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::order(s16 param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/order__16dEvent_manager_cFs.s"
}
#pragma pop


/* 800479F8-80047A38 0040+00 s=1 e=0 z=9  None .text      startCheck__16dEvent_manager_cFs                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::startCheck(s16 param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/startCheck__16dEvent_manager_cFs.s"
}
#pragma pop


/* 80047A38-80047A78 0040+00 s=0 e=2 z=0  None .text      startCheckOld__16dEvent_manager_cFPCc                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::startCheckOld(char const* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/startCheckOld__16dEvent_manager_cFPCc.s"
}
#pragma pop


/* 80047A78-80047ADC 0064+00 s=1 e=2 z=122  None .text      endCheck__16dEvent_manager_cFs                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::endCheck(s16 param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/endCheck__16dEvent_manager_cFs.s"
}
#pragma pop


/* 80047ADC-80047B1C 0040+00 s=0 e=2 z=10  None .text      endCheckOld__16dEvent_manager_cFPCc                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::endCheckOld(char const* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/endCheckOld__16dEvent_manager_cFPCc.s"
}
#pragma pop


/* 80047B1C-80047D4C 0230+00 s=1 e=10 z=210  None .text      getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMyStaffId(char const* param_0, fopAc_ac_c* param_1, int param_2) {
	nofralloc
#include "asm/d/event/d_event_manager/getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci.s"
}
#pragma pop


/* 80047D4C-80047DAC 0060+00 s=0 e=9 z=417  None .text      getIsAddvance__16dEvent_manager_cFi                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getIsAddvance(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/getIsAddvance__16dEvent_manager_cFi.s"
}
#pragma pop


/* 80047DAC-80047E10 0064+00 s=1 e=0 z=0  None .text      dEvmng_strcmp__FPCcPc                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dEvmng_strcmp(char const* param_0, char* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/dEvmng_strcmp__FPCcPc.s"
}
#pragma pop


/* 80047E10-80047F5C 014C+00 s=1 e=1 z=118  None .text      getMyActIdx__16dEvent_manager_cFiPCPCciii                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMyActIdx(int param_0, char const* const* param_1, int param_2, int param_3, int param_4) {
	nofralloc
#include "asm/d/event/d_event_manager/getMyActIdx__16dEvent_manager_cFiPCPCciii.s"
}
#pragma pop


/* 80047F5C-80047FC8 006C+00 s=1 e=9 z=62  None .text      getMyNowCutName__16dEvent_manager_cFi                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMyNowCutName(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/getMyNowCutName__16dEvent_manager_cFi.s"
}
#pragma pop


/* 80047FC8-800480EC 0124+00 s=2 e=0 z=0  None .text      getMyDataP__16dEvent_manager_cFiPCci                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMyDataP(int param_0, char const* param_1, int param_2) {
	nofralloc
#include "asm/d/event/d_event_manager/getMyDataP__16dEvent_manager_cFiPCci.s"
}
#pragma pop


/* 800480EC-80048144 0058+00 s=0 e=22 z=355  None .text      getMySubstanceP__16dEvent_manager_cFiPCci                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMySubstanceP(int param_0, char const* param_1, int param_2) {
	nofralloc
#include "asm/d/event/d_event_manager/getMySubstanceP__16dEvent_manager_cFiPCci.s"
}
#pragma pop


/* 80048144-8004817C 0038+00 s=0 e=12 z=0  None .text      getMySubstanceNum__16dEvent_manager_cFiPCc                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getMySubstanceNum(int param_0, char const* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/getMySubstanceNum__16dEvent_manager_cFiPCc.s"
}
#pragma pop


/* 8004817C-800481F4 0078+00 s=1 e=78 z=182  None .text      cutEnd__16dEvent_manager_cFi                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::cutEnd(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/cutEnd__16dEvent_manager_cFi.s"
}
#pragma pop


/* 800481F4-800482CC 00D8+00 s=0 e=4 z=0  None .text      getEventPrio__16dEvent_manager_cFP10fopAc_ac_cs              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getEventPrio(fopAc_ac_c* param_0, s16 param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/getEventPrio__16dEvent_manager_cFP10fopAc_ac_cs.s"
}
#pragma pop


/* 800482CC-80048348 007C+00 s=1 e=1 z=0  None .text      issueStaff__16dEvent_manager_cFPCc                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::issueStaff(char const* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/issueStaff__16dEvent_manager_cFPCc.s"
}
#pragma pop


/* 80048348-800483C4 007C+00 s=0 e=1 z=0  None .text      cancelStaff__16dEvent_manager_cFPCc                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::cancelStaff(char const* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/cancelStaff__16dEvent_manager_cFPCc.s"
}
#pragma pop


/* 800483C4-800483E0 001C+00 s=1 e=2 z=38  None .text      setGoal__16dEvent_manager_cFP4cXyz                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::setGoal(cXyz* param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/setGoal__16dEvent_manager_cFP4cXyz.s"
}
#pragma pop


/* 800483E0-800483E8 0008+00 s=0 e=1 z=1  None .text      getGoal__16dEvent_manager_cFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getGoal() {
	nofralloc
#include "asm/d/event/d_event_manager/getGoal__16dEvent_manager_cFv.s"
}
#pragma pop


/* 800483E8-8004846C 0084+00 s=0 e=5 z=27  None .text      getRunEventName__16dEvent_manager_cFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::getRunEventName() {
	nofralloc
#include "asm/d/event/d_event_manager/getRunEventName__16dEvent_manager_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451F2C-80451F30 0004+00 s=1 e=0 z=0  None .sdata2    @5025                                                        */
SECTION_SDATA2 static u32 lit_5025 = 0x41200000;

/* 80451F30-80451F34 0004+00 s=1 e=0 z=0  None .sdata2    @5026                                                        */
SECTION_SDATA2 static u32 lit_5026 = 0xC1200000;

/* 8004846C-80048520 00B4+00 s=1 e=0 z=0  None .text      findShutterCallBack__FP10fopAc_ac_cPv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void findShutterCallBack(fopAc_ac_c* param_0, void* param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/findShutterCallBack__FP10fopAc_ac_cPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451F34-80451F38 0004+00 s=1 e=0 z=0  None .sdata2    @5055                                                        */
SECTION_SDATA2 static u32 lit_5055 = 0x42C80000;

/* 80048520-80048618 00F8+00 s=1 e=0 z=0  None .text      specialCast_Shutter__16dEvent_manager_cFsi                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::specialCast_Shutter(s16 param_0, int param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/specialCast_Shutter__16dEvent_manager_cFsi.s"
}
#pragma pop


/* 80048618-80048748 0130+00 s=1 e=0 z=0  None .text      specialCast__16dEvent_manager_cFPCci                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::specialCast(char const* param_0, int param_1) {
	nofralloc
#include "asm/d/event/d_event_manager/specialCast__16dEvent_manager_cFPCci.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A82A8-803A82B8 000C+04 s=1 e=0 z=0  None .data      action_table$5100                                            */
SECTION_DATA static void* action_table[3 + 1 /* padding */] = {
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x18B),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x190),
	(void*)(((char*)&d_event_d_event_manager__stringBase0)+0x196),
	/* padding */
	NULL,
};

/* 80048748-800487F0 00A8+00 s=1 e=0 z=0  None .text      dEv_talkman_get_action__Fi                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dEv_talkman_get_action(int param_0) {
	nofralloc
#include "asm/d/event/d_event_manager/dEv_talkman_get_action__Fi.s"
}
#pragma pop


/* 800487F0-8004882C 003C+00 s=0 e=0 z=108  None .text      ChkPresentEnd__16dEvent_manager_cFv                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::ChkPresentEnd() {
	nofralloc
#include "asm/d/event/d_event_manager/ChkPresentEnd__16dEvent_manager_cFv.s"
}
#pragma pop


/* 8004882C-8004886C 0040+00 s=0 e=2 z=2  None .text      checkStartDemo__16dEvent_manager_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEvent_manager_c::checkStartDemo() {
	nofralloc
#include "asm/d/event/d_event_manager/checkStartDemo__16dEvent_manager_cFv.s"
}
#pragma pop


