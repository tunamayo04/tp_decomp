// 
// Generated By: dol2asm
// Translation Unit: d_a_andsw2
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_andsw2/d_a_andsw2.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ fopAc_ac_c();
	/* 80018C8C */ ~fopAc_ac_c();
};

struct daAndsw2_c {
	/* 804D5DF8 */ void getEventNo();
	/* 804D5E04 */ void getSwbit();
	/* 804D5E10 */ void getSwbit2();
	/* 804D5E1C */ void getType();
	/* 804D5E28 */ void getTimer();
	/* 804D5E34 */ void getNum();
	/* 804D5E40 */ void getTopSw();
	/* 804D5EB0 */ void getSwAns();
	/* 804D5EBC */ void chkAllSw2();
	/* 804D5F64 */ void chkSwStatus();
	/* 804D6024 */ void chkSwStatus2();
	/* 804D60CC */ ~daAndsw2_c();
	/* 804D6120 */ void create();
};

struct dSv_info_c {
	/* 80035200 */ void onSwitch(int, int);
	/* 800352B0 */ void offSwitch(int, int);
	/* 80035360 */ void isSwitch(int, int) const;
};

struct dEvt_control_c {
	/* 80042468 */ void reset();
};

struct dEvent_manager_c {
	/* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
	/* 80047A78 */ void endCheck(s16);
};

// 
// Forward References:
// 

static void daAndsw2_actionOnAll(daAndsw2_c*);
static void daAndsw2_actionTimer(daAndsw2_c*);
static void daAndsw2_actionOrder(daAndsw2_c*);
static void daAndsw2_actionEvent(daAndsw2_c*);
static void daAndsw2_actionOff(daAndsw2_c*);
static bool daAndsw2_actionWait(daAndsw2_c*);
static void daAndsw2_Execute(daAndsw2_c*);
static void daAndsw2_Delete(daAndsw2_c*);
static void daAndsw2_Create(fopAc_ac_c*);
extern "C" extern void* g_profile_ANDSW2[12];

extern "C" void getEventNo__10daAndsw2_cFv();
extern "C" void getSwbit__10daAndsw2_cFv();
extern "C" void getSwbit2__10daAndsw2_cFv();
extern "C" void getType__10daAndsw2_cFv();
extern "C" void getTimer__10daAndsw2_cFv();
extern "C" void getNum__10daAndsw2_cFv();
extern "C" void getTopSw__10daAndsw2_cFv();
extern "C" void getSwAns__10daAndsw2_cFv();
extern "C" void chkAllSw2__10daAndsw2_cFv();
extern "C" void chkSwStatus__10daAndsw2_cFv();
extern "C" void chkSwStatus2__10daAndsw2_cFv();
extern "C" void __dt__10daAndsw2_cFv();
extern "C" void create__10daAndsw2_cFv();
extern "C" static void daAndsw2_actionOnAll__FP10daAndsw2_c();
extern "C" static void daAndsw2_actionTimer__FP10daAndsw2_c();
extern "C" static void daAndsw2_actionOrder__FP10daAndsw2_c();
extern "C" static void daAndsw2_actionEvent__FP10daAndsw2_c();
extern "C" static void daAndsw2_actionOff__FP10daAndsw2_c();
extern "C" static bool daAndsw2_actionWait__FP10daAndsw2_c();
extern "C" static void daAndsw2_Execute__FP10daAndsw2_c();
extern "C" static void daAndsw2_Delete__FP10daAndsw2_c();
extern "C" static void daAndsw2_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_ANDSW2[12];

// 
// External References:
// 

void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dLib_getEventSwitchNo(int);
void operator delete(void*);
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dLib_getEventSwitchNo__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 804D5DF8-804D5E04 000C+00 s=2 e=0 z=0  None .text      getEventNo__10daAndsw2_cFv                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getEventNo() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getEventNo__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E04-804D5E10 000C+00 s=6 e=0 z=0  None .text      getSwbit__10daAndsw2_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getSwbit() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getSwbit__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E10-804D5E1C 000C+00 s=1 e=0 z=0  None .text      getSwbit2__10daAndsw2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getSwbit2() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getSwbit2__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E1C-804D5E28 000C+00 s=6 e=0 z=0  None .text      getType__10daAndsw2_cFv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getType() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getType__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E28-804D5E34 000C+00 s=1 e=0 z=0  None .text      getTimer__10daAndsw2_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getTimer() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getTimer__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E34-804D5E40 000C+00 s=3 e=0 z=0  None .text      getNum__10daAndsw2_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getNum() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getNum__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5E40-804D5EB0 0070+00 s=3 e=0 z=0  None .text      getTopSw__10daAndsw2_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getTopSw() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getTopSw__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5EB0-804D5EBC 000C+00 s=1 e=0 z=0  None .text      getSwAns__10daAndsw2_cFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::getSwAns() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/getSwAns__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5EBC-804D5F64 00A8+00 s=4 e=0 z=0  None .text      chkAllSw2__10daAndsw2_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::chkAllSw2() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/chkAllSw2__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D5F64-804D6024 00C0+00 s=4 e=0 z=0  None .text      chkSwStatus__10daAndsw2_cFv                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::chkSwStatus() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/chkSwStatus__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D6024-804D60CC 00A8+00 s=1 e=0 z=0  None .text      chkSwStatus2__10daAndsw2_cFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::chkSwStatus2() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/chkSwStatus2__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D60CC-804D6120 0054+00 s=1 e=0 z=0  None .text      __dt__10daAndsw2_cFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daAndsw2_c::~daAndsw2_c() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/__dt__10daAndsw2_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 804D6AC8-804D6AE4 001C+00 s=1 e=0 z=0  None .data      @3821                                                        */
SECTION_DATA static void* lit_3821[7] = {
	(void*)(((char*)create__10daAndsw2_cFv)+0x74),
	(void*)(((char*)create__10daAndsw2_cFv)+0xD8),
	(void*)(((char*)create__10daAndsw2_cFv)+0x148),
	(void*)(((char*)create__10daAndsw2_cFv)+0x1AC),
	(void*)(((char*)create__10daAndsw2_cFv)+0x210),
	(void*)(((char*)create__10daAndsw2_cFv)+0x21C),
	(void*)(((char*)create__10daAndsw2_cFv)+0xD8),
};

/* 804D6120-804D63A4 0284+00 s=2 e=0 z=0  None .text      create__10daAndsw2_cFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAndsw2_c::create() {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/create__10daAndsw2_cFv.s"
}
#pragma pop


/* 804D63A4-804D6580 01DC+00 s=1 e=0 z=0  None .text      daAndsw2_actionOnAll__FP10daAndsw2_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_actionOnAll(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_actionOnAll__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6580-804D6704 0184+00 s=1 e=0 z=0  None .text      daAndsw2_actionTimer__FP10daAndsw2_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_actionTimer(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_actionTimer__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6704-804D68A4 01A0+00 s=1 e=0 z=0  None .text      daAndsw2_actionOrder__FP10daAndsw2_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_actionOrder(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_actionOrder__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D68A4-804D6960 00BC+00 s=1 e=0 z=0  None .text      daAndsw2_actionEvent__FP10daAndsw2_c                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_actionEvent(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_actionEvent__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6960-804D6A34 00D4+00 s=1 e=0 z=0  None .text      daAndsw2_actionOff__FP10daAndsw2_c                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_actionOff(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_actionOff__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6A34-804D6A3C 0008+00 s=1 e=0 z=0  None .text      daAndsw2_actionWait__FP10daAndsw2_c                          */
static bool daAndsw2_actionWait(daAndsw2_c* param_0) {
	return true;
}


/* ############################################################################################## */
/* 804D6AE4-804D6AFC 0018+00 s=1 e=0 z=0  None .data      l_action$localstatic3$execute__10daAndsw2_cFv                */
SECTION_DATA static void* data_804D6AE4[6] = {
	(void*)daAndsw2_actionOnAll__FP10daAndsw2_c,
	(void*)daAndsw2_actionTimer__FP10daAndsw2_c,
	(void*)daAndsw2_actionOrder__FP10daAndsw2_c,
	(void*)daAndsw2_actionEvent__FP10daAndsw2_c,
	(void*)daAndsw2_actionOff__FP10daAndsw2_c,
	(void*)daAndsw2_actionWait__FP10daAndsw2_c,
};

/* 804D6A3C-804D6A78 003C+00 s=1 e=0 z=0  None .text      daAndsw2_Execute__FP10daAndsw2_c                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_Execute(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_Execute__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6A78-804D6AA0 0028+00 s=1 e=0 z=0  None .text      daAndsw2_Delete__FP10daAndsw2_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_Delete(daAndsw2_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_Delete__FP10daAndsw2_c.s"
}
#pragma pop


/* 804D6AA0-804D6AC0 0020+00 s=1 e=0 z=0  None .text      daAndsw2_Create__FP10fopAc_ac_c                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAndsw2_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/d_a_andsw2/d_a_andsw2/daAndsw2_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 804D6AFC-804D6B1C 0020+00 s=1 e=0 z=0  None .data      l_daAndsw2_Method                                            */
SECTION_DATA static void* l_daAndsw2_Method[8] = {
	(void*)daAndsw2_Create__FP10fopAc_ac_c,
	(void*)daAndsw2_Delete__FP10daAndsw2_c,
	(void*)daAndsw2_Execute__FP10daAndsw2_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 804D6B1C-804D6B4C 0030+00 s=0 e=0 z=1  None .data      g_profile_ANDSW2                                             */
SECTION_DATA void* g_profile_ANDSW2[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02310000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000570,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x012F0000,
	(void*)&l_daAndsw2_Method,
	(void*)0x00044000,
	(void*)0x00060000,
};

