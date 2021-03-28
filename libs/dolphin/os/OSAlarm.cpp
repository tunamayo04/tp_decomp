// 
// Generated By: dol2asm
// Translation Unit: OSAlarm
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/os/OSAlarm.h"

// 
// Forward References:
// 


extern "C" void OSInitAlarm();
extern "C" void OSCreateAlarm();
extern "C" static void InsertAlarm();
extern "C" void OSSetAlarm();
extern "C" void OSSetPeriodicAlarm();
extern "C" void OSCancelAlarm();
extern "C" static void DecrementerExceptionCallback();
extern "C" static void DecrementerExceptionHandler();
extern "C" static void OnReset();

// 
// External References:
// 


extern "C" void PPCMtdec();
extern "C" void __OSSetExceptionHandler();
extern "C" void __OSGetExceptionHandler();
extern "C" void OSSetCurrentContext();
extern "C" void OSLoadContext();
extern "C" void OSClearContext();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSRegisterResetFunction();
extern "C" void OSDisableScheduler();
extern "C" void OSEnableScheduler();
extern "C" void __OSReschedule();
extern "C" void __OSGetSystemTime();
extern "C" void __OSTimeToSystemTime();
extern "C" void __DVDTestAlarm();
extern "C" void __div2i();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803CF480-803CF490 0010+00 s=1 e=0 z=0  None .data      ResetFunctionInfo                                            */
SECTION_DATA static void* ResetFunctionInfo[4] = {
	(void*)OnReset,
	(void*)0xFFFFFFFF,
	(void*)NULL,
	(void*)NULL,
};

/* 80451638-80451640 0008+00 s=5 e=0 z=0  None .sbss      AlarmQueue                                                   */
static u8 AlarmQueue[8];

/* 8033A8A0-8033A8F8 0058+00 s=0 e=3 z=0  None .text      OSInitAlarm                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSInitAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSInitAlarm.s"
}
#pragma pop


/* 8033A8F8-8033A908 0010+00 s=0 e=17 z=0  None .text      OSCreateAlarm                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSCreateAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSCreateAlarm.s"
}
#pragma pop


/* 8033A908-8033AB58 0250+00 s=3 e=0 z=0  None .text      InsertAlarm                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void InsertAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/InsertAlarm.s"
}
#pragma pop


/* 8033AB58-8033ABC0 0068+00 s=0 e=18 z=0  None .text      OSSetAlarm                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSSetAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSSetAlarm.s"
}
#pragma pop


/* 8033ABC0-8033AC3C 007C+00 s=0 e=1 z=0  None .text      OSSetPeriodicAlarm                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSSetPeriodicAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSSetPeriodicAlarm.s"
}
#pragma pop


/* 8033AC3C-8033AD58 011C+00 s=1 e=11 z=0  None .text      OSCancelAlarm                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSCancelAlarm() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OSCancelAlarm.s"
}
#pragma pop


/* 8033AD58-8033AF88 0230+00 s=1 e=0 z=0  None .text      DecrementerExceptionCallback                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void DecrementerExceptionCallback() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/DecrementerExceptionCallback.s"
}
#pragma pop


/* 8033AF88-8033AFD8 0050+00 s=1 e=0 z=0  None .text      DecrementerExceptionHandler                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void DecrementerExceptionHandler() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/DecrementerExceptionHandler.s"
}
#pragma pop


/* 8033AFD8-8033B078 00A0+00 s=1 e=0 z=0  None .text      OnReset                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void OnReset() {
	nofralloc
#include "asm/dolphin/os/OSAlarm/OnReset.s"
}
#pragma pop


