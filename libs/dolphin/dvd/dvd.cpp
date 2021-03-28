// 
// Generated By: dol2asm
// Translation Unit: dvd
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/dvd/dvd.h"

// 
// Forward References:
// 

extern "C" extern u8 lit_789[65 + 3 /* padding */];

extern "C" static void defaultOptionalCommandChecker();
extern "C" void DVDInit();
extern "C" static void stateReadingFST();
extern "C" static void cbForStateReadingFST();
extern "C" static void cbForStateError();
extern "C" static void stateTimeout();
extern "C" static void stateGettingError();
extern "C" static void CategorizeError();
extern "C" static void cbForStateGettingError();
extern "C" static void cbForUnrecoveredError();
extern "C" static void cbForUnrecoveredErrorRetry();
extern "C" static void stateGoToRetry();
extern "C" static void cbForStateGoToRetry();
extern "C" static void stateCheckID();
extern "C" static void stateCheckID3();
extern "C" static void stateCheckID2a();
extern "C" static void cbForStateCheckID2a();
extern "C" static void stateCheckID2();
extern "C" static void cbForStateCheckID1();
extern "C" static void cbForStateCheckID2();
extern "C" static void cbForStateCheckID3();
extern "C" static void AlarmHandler();
extern "C" static void stateCoverClosed();
extern "C" static void stateCoverClosed_CMD();
extern "C" static void cbForStateCoverClosed();
extern "C" static void stateMotorStopped();
extern "C" static void cbForStateMotorStopped();
extern "C" static void stateReady();
extern "C" static void stateBusy();
extern "C" static void cbForStateBusy();
extern "C" void DVDReadAbsAsyncPrio();
extern "C" void DVDReadAbsAsyncForBS();
extern "C" void DVDReadDiskID();
extern "C" void DVDCancelStreamAsync();
extern "C" void DVDInquiryAsync();
extern "C" void DVDReset();
extern "C" void DVDGetCommandBlockStatus();
extern "C" void DVDGetDriveStatus();
extern "C" void DVDSetAutoInvalidation();
extern "C" void DVDResume();
extern "C" static void DVDCancelAsync();
extern "C" void DVDCancel();
extern "C" static void cbForCancelSync();
extern "C" void DVDGetCurrentDiskID();
extern "C" void DVDCheckDisk();
extern "C" void __DVDPrepareResetAsync();
extern "C" void __DVDTestAlarm();
extern "C" extern u8 lit_789[65 + 3 /* padding */];

// 
// External References:
// 

extern "C" extern u8 __DVDThreadQueue[8];

SECTION_INIT void memcpy();
extern "C" void OSReport();
extern "C" void OSPanic();
extern "C" void OSRegisterVersion();
extern "C" void OSCreateAlarm();
extern "C" void OSSetAlarm();
extern "C" void DCInvalidateRange();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __OSSetInterruptHandler();
extern "C" void __OSUnmaskInterrupts();
extern "C" void OSInitThreadQueue();
extern "C" void OSSleepThread();
extern "C" void OSWakeupThread();
extern "C" void __DVDInitWA();
extern "C" void __DVDInterruptHandler();
extern "C" void DVDLowRead();
extern "C" void DVDLowSeek();
extern "C" void DVDLowWaitCoverClose();
extern "C" void DVDLowReadDiskID();
extern "C" void DVDLowStopMotor();
extern "C" void DVDLowRequestError();
extern "C" void DVDLowInquiry();
extern "C" void DVDLowAudioStream();
extern "C" void DVDLowRequestAudioStatus();
extern "C" void DVDLowAudioBufferConfig();
extern "C" void DVDLowReset();
extern "C" void DVDLowBreak();
extern "C" void DVDLowClearCallback();
extern "C" void __DVDLowTestAlarm();
extern "C" void __DVDFSInit();
extern "C" void __DVDClearWaitingQueue();
extern "C" void __DVDPushWaitingQueue();
extern "C" void __DVDPopWaitingQueue();
extern "C" void __DVDCheckWaitingQueue();
extern "C" void __DVDDequeueWaitingQueue();
extern "C" void __DVDStoreErrorCode();
extern "C" void DVDCompareDiskID();
extern "C" void __DVDPrintFatalMessage();
extern "C" void __fstLoad();
extern "C" void memcmp();
extern "C" extern u8 __DVDThreadQueue[8];

// 
// Declarations:
// 

/* 803490EC-803490F0 0004+00 s=1 e=0 z=0  None .text      defaultOptionalCommandChecker                                */
extern "C" static void defaultOptionalCommandChecker() {
	/* empty function */
}


/* ############################################################################################## */
/* 803D1520-803D1568 0045+03 s=1 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[69 + 3 /* padding */] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x44, 0x56, 0x44, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75, 0x69,
	0x6C, 0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x35, 0x20, 0x32, 0x30, 0x30, 0x34, 0x20,
	0x30, 0x34, 0x3A, 0x31, 0x34, 0x3A, 0x35, 0x31, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31,
	0x29, 0x20, 0x3E, 0x3E, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D1568-803D1574 000A+02 s=1 e=0 z=0  None .data      @18                                                          */
SECTION_DATA static u8 lit_18[10 + 2 /* padding */] = {
	0x6C, 0x6F, 0x61, 0x64, 0x20, 0x66, 0x73, 0x74, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 804509E8-804509EC 0004+00 s=1 e=0 z=0  None .sdata     __DVDVersion                                                 */
SECTION_SDATA static void* __DVDVersion = (void*)&lit_1;

/* 80451778-8045177C 0004+00 s=24 e=0 z=0  None .sbss      executing                                                    */
static u8 executing[4];

/* 8045177C-80451780 0004+00 s=4 e=0 z=0  None .sbss      IDShouldBe                                                   */
static u8 IDShouldBe[4];

/* 80451780-80451784 0004+00 s=3 e=0 z=0  None .sbss      bootInfo                                                     */
static u8 bootInfo[4];

/* 80451784-80451788 0004+00 s=8 e=0 z=0  None .sbss      PauseFlag                                                    */
static u8 PauseFlag[4];

/* 80451788-8045178C 0004+00 s=5 e=0 z=0  None .sbss      PausingFlag                                                  */
static u8 PausingFlag[4];

/* 8045178C-80451790 0004+00 s=2 e=0 z=0  None .sbss      AutoFinishing                                                */
static u8 AutoFinishing[4];

/* 80451790-80451794 0004+00 s=4 e=0 z=0  None .sbss      FatalErrorFlag                                               */
static u8 FatalErrorFlag[4];

/* 80451794-80451798 0004+00 s=6 e=0 z=0  None .sbss      CurrCommand                                                  */
static u8 CurrCommand[4];

/* 80451798-8045179C 0004+00 s=8 e=0 z=0  None .sbss      Canceling                                                    */
static u8 Canceling[4];

/* 8045179C-804517A0 0004+00 s=8 e=0 z=0  None .sbss      CancelCallback                                               */
static u8 CancelCallback[4];

/* 804517A0-804517A4 0004+00 s=9 e=0 z=0  None .sbss      ResumeFromHere                                               */
static u8 ResumeFromHere[4];

/* 804517A4-804517A8 0004+00 s=1 e=0 z=0  None .sbss      CancelLastError                                              */
static u8 CancelLastError[4];

/* 804517A8-804517AC 0004+00 s=1 e=0 z=0  None .sbss      LastError                                                    */
static u8 LastError[4];

/* 804517AC-804517B0 0004+00 s=9 e=0 z=0  None .sbss      NumInternalRetry                                             */
static u8 NumInternalRetry[4];

/* 804517B0-804517B4 0004+00 s=3 e=0 z=0  None .sbss      ResetRequired                                                */
static u8 ResetRequired[4];

/* 804517B4-804517B8 0004+00 s=1 e=0 z=0  None .sbss      FirstTimeInBootrom                                           */
static u8 FirstTimeInBootrom[4];

/* 804517B8-804517BC 0004+00 s=5 e=0 z=0  None .sbss      MotorState                                                   */
static u8 MotorState[4];

/* 804517BC-804517C0 0004+00 s=1 e=0 z=0  None .sbss      DVDInitialized                                               */
static u8 DVDInitialized[4];

/* 803490F0-803491C8 00D8+00 s=0 e=3 z=0  None .text      DVDInit                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDInit() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDInit.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1574-803D15A8 0034+00 s=2 e=0 z=0  None .data      @24                                                          */
SECTION_DATA static u8 lit_24[52] = {
	0x44, 0x56, 0x44, 0x43, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x44, 0x69, 0x73, 0x6B, 0x28, 0x29, 0x3A,
	0x20, 0x46, 0x53, 0x54, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6E, 0x65, 0x77, 0x20,
	0x64, 0x69, 0x73, 0x63, 0x20, 0x69, 0x73, 0x20, 0x74, 0x6F, 0x6F, 0x20, 0x62, 0x69, 0x67, 0x2E,
	0x20, 0x20, 0x20, 0x00,
};

/* 8044C900-8044C920 0020+00 s=8 e=0 z=0  None .bss       BB2                                                          */
static u8 BB2[32];

/* 804509EC-804509F0 0004+00 s=6 e=0 z=0  None .sdata     autoInvalidation                                             */
SECTION_SDATA static u32 autoInvalidation = 0x00000001;

/* 804509F0-804509F4 0004+00 s=1 e=0 z=0  None .sdata     checkOptionalCommand                                         */
SECTION_SDATA static void* checkOptionalCommand = (void*)defaultOptionalCommandChecker;

/* 804509F4-804509FC 0006+02 s=2 e=0 z=0  None .sdata     @23                                                          */
SECTION_SDATA static u8 lit_23[6 + 2 /* padding */] = {
	0x64, 0x76, 0x64, 0x2E, 0x63, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 804517C0-804517C8 0004+04 s=6 e=0 z=0  None .sbss      LastState                                                    */
static u8 LastState[4 + 4 /* padding */];

/* 803491C8-8034925C 0094+00 s=1 e=0 z=0  None .text      stateReadingFST                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateReadingFST() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateReadingFST.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044C920-8044C940 0020+00 s=3 e=0 z=0  None .bss       CurrDiskID                                                   */
static u8 CurrDiskID[32];

/* 8044C940-8044C970 0030+00 s=14 e=0 z=0  None .bss       DummyCommandBlock                                            */
static u8 DummyCommandBlock[48];

/* 8034925C-803492DC 0080+00 s=2 e=0 z=0  None .text      cbForStateReadingFST                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateReadingFST() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateReadingFST.s"
}
#pragma pop


/* 803492DC-80349388 00AC+00 s=12 e=0 z=0  None .text      cbForStateError                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateError() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateError.s"
}
#pragma pop


/* 80349388-803493BC 0034+00 s=2 e=0 z=0  None .text      stateTimeout                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateTimeout() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateTimeout.s"
}
#pragma pop


/* 803493BC-803493E4 0028+00 s=1 e=0 z=0  None .text      stateGettingError                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateGettingError() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateGettingError.s"
}
#pragma pop


/* 803493E4-80349498 00B4+00 s=1 e=0 z=0  None .text      CategorizeError                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void CategorizeError() {
	nofralloc
#include "asm/dolphin/dvd/dvd/CategorizeError.s"
}
#pragma pop


/* 80349498-803496FC 0264+00 s=6 e=0 z=0  None .text      cbForStateGettingError                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateGettingError() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateGettingError.s"
}
#pragma pop


/* 803496FC-80349758 005C+00 s=1 e=0 z=0  None .text      cbForUnrecoveredError                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForUnrecoveredError() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForUnrecoveredError.s"
}
#pragma pop


/* 80349758-803497D8 0080+00 s=1 e=0 z=0  None .text      cbForUnrecoveredErrorRetry                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForUnrecoveredErrorRetry() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForUnrecoveredErrorRetry.s"
}
#pragma pop


/* 803497D8-80349800 0028+00 s=2 e=0 z=0  None .text      stateGoToRetry                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateGoToRetry() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateGoToRetry.s"
}
#pragma pop


/* 80349800-80349940 0140+00 s=1 e=0 z=0  None .text      cbForStateGoToRetry                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateGoToRetry() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateGoToRetry.s"
}
#pragma pop


/* 80349940-80349A20 00E0+00 s=1 e=0 z=0  None .text      stateCheckID                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCheckID() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCheckID.s"
}
#pragma pop


/* 80349A20-80349A54 0034+00 s=1 e=0 z=0  None .text      stateCheckID3                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCheckID3() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCheckID3.s"
}
#pragma pop


/* 80349A54-80349A88 0034+00 s=1 e=0 z=0  None .text      stateCheckID2a                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCheckID2a() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCheckID2a.s"
}
#pragma pop


/* 80349A88-80349AF0 0068+00 s=1 e=0 z=0  None .text      cbForStateCheckID2a                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateCheckID2a() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateCheckID2a.s"
}
#pragma pop


/* 80349AF0-80349B28 0038+00 s=1 e=0 z=0  None .text      stateCheckID2                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCheckID2() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCheckID2.s"
}
#pragma pop


/* 80349B28-80349C24 00FC+00 s=1 e=0 z=0  None .text      cbForStateCheckID1                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateCheckID1() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateCheckID1.s"
}
#pragma pop


/* 80349C24-80349CFC 00D8+00 s=1 e=0 z=0  None .text      cbForStateCheckID2                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateCheckID2() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateCheckID2.s"
}
#pragma pop


/* 80349CFC-80349DEC 00F0+00 s=1 e=0 z=0  None .text      cbForStateCheckID3                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateCheckID3() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateCheckID3.s"
}
#pragma pop


/* 80349DEC-80349E30 0044+00 s=3 e=0 z=0  None .text      AlarmHandler                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void AlarmHandler() {
	nofralloc
#include "asm/dolphin/dvd/dvd/AlarmHandler.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044C970-8044C998 0028+00 s=4 e=0 z=0  None .bss       ResetAlarm                                                   */
static u8 ResetAlarm[40];

/* 80349E30-80349F04 00D4+00 s=1 e=0 z=0  None .text      stateCoverClosed                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCoverClosed() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCoverClosed.s"
}
#pragma pop


/* 80349F04-80349F34 0030+00 s=1 e=0 z=0  None .text      stateCoverClosed_CMD                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateCoverClosed_CMD() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateCoverClosed_CMD.s"
}
#pragma pop


/* 80349F34-80349F98 0064+00 s=1 e=0 z=0  None .text      cbForStateCoverClosed                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateCoverClosed() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateCoverClosed.s"
}
#pragma pop


/* 80349F98-80349FC0 0028+00 s=3 e=0 z=0  None .text      stateMotorStopped                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateMotorStopped() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateMotorStopped.s"
}
#pragma pop


/* 80349FC0-8034A0AC 00EC+00 s=4 e=0 z=0  None .text      cbForStateMotorStopped                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateMotorStopped() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateMotorStopped.s"
}
#pragma pop


/* 8034A0AC-8034A394 02E8+00 s=18 e=0 z=0  None .text      stateReady                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateReady() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateReady.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D15A8-803D15EC 0044+00 s=1 e=0 z=0  None .data      @359                                                         */
SECTION_DATA static void* lit_359[17] = {
	(void*)(((char*)stateBusy)+0x318),
	(void*)(((char*)stateBusy)+0x6C),
	(void*)(((char*)stateBusy)+0x10C),
	(void*)(((char*)stateBusy)+0x130),
	(void*)(((char*)stateBusy)+0x6C),
	(void*)(((char*)stateBusy)+0x40),
	(void*)(((char*)stateBusy)+0x150),
	(void*)(((char*)stateBusy)+0x1B4),
	(void*)(((char*)stateBusy)+0x1E0),
	(void*)(((char*)stateBusy)+0x214),
	(void*)(((char*)stateBusy)+0x238),
	(void*)(((char*)stateBusy)+0x25C),
	(void*)(((char*)stateBusy)+0x280),
	(void*)(((char*)stateBusy)+0x2A4),
	(void*)(((char*)stateBusy)+0x2CC),
	(void*)(((char*)stateBusy)+0x140),
	(void*)(((char*)stateBusy)+0x2F8),
};

/* 8034A394-8034A6D4 0340+00 s=4 e=0 z=0  None .text      stateBusy                                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void stateBusy() {
	nofralloc
#include "asm/dolphin/dvd/dvd/stateBusy.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D15EC-803D15F8 000C+00 s=1 e=0 z=0  None .data      ImmCommand                                                   */
SECTION_DATA static u8 ImmCommand[12] = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 804509FC-80450A00 0004+00 s=1 e=0 z=0  None .sdata     DmaCommand                                                   */
SECTION_SDATA static u32 DmaCommand = 0xFFFFFFFF;

/* 8034A6D4-8034AD2C 0658+00 s=1 e=0 z=0  None .text      cbForStateBusy                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForStateBusy() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForStateBusy.s"
}
#pragma pop


/* 8034AD2C-8034AE08 00DC+00 s=0 e=5 z=0  None .text      DVDReadAbsAsyncPrio                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDReadAbsAsyncPrio() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDReadAbsAsyncPrio.s"
}
#pragma pop


/* 8034AE08-8034AED8 00D0+00 s=0 e=1 z=0  None .text      DVDReadAbsAsyncForBS                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDReadAbsAsyncForBS() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDReadAbsAsyncForBS.s"
}
#pragma pop


/* 8034AED8-8034AFAC 00D4+00 s=0 e=2 z=0  None .text      DVDReadDiskID                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDReadDiskID() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDReadDiskID.s"
}
#pragma pop


/* 8034AFAC-8034B068 00BC+00 s=0 e=1 z=0  None .text      DVDCancelStreamAsync                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDCancelStreamAsync() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDCancelStreamAsync.s"
}
#pragma pop


/* 8034B068-8034B138 00D0+00 s=0 e=1 z=0  None .text      DVDInquiryAsync                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDInquiryAsync() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDInquiryAsync.s"
}
#pragma pop


/* 8034B138-8034B17C 0044+00 s=15 e=2 z=0  None .text      DVDReset                                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDReset() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDReset.s"
}
#pragma pop


/* 8034B17C-8034B1C8 004C+00 s=0 e=6 z=0  None .text      DVDGetCommandBlockStatus                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDGetCommandBlockStatus() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDGetCommandBlockStatus.s"
}
#pragma pop


/* 8034B1C8-8034B274 00AC+00 s=0 e=7 z=0  None .text      DVDGetDriveStatus                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDGetDriveStatus() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDGetDriveStatus.s"
}
#pragma pop


/* 8034B274-8034B284 0010+00 s=0 e=1 z=0  None .text      DVDSetAutoInvalidation                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDSetAutoInvalidation() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDSetAutoInvalidation.s"
}
#pragma pop


/* 8034B284-8034B2D4 0050+00 s=0 e=1 z=0  None .text      DVDResume                                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDResume() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDResume.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D15F8-803D163C 0041+03 s=0 e=0 z=0  None .data      @789                                                         */
SECTION_DATA u8 lit_789[65 + 3 /* padding */] = {
	0x44, 0x56, 0x44, 0x43, 0x68, 0x61, 0x6E, 0x67, 0x65, 0x44, 0x69, 0x73, 0x6B, 0x41, 0x73, 0x79,
	0x6E, 0x63, 0x28, 0x29, 0x3A, 0x20, 0x59, 0x6F, 0x75, 0x20, 0x63, 0x61, 0x6E, 0x27, 0x74, 0x20,
	0x73, 0x70, 0x65, 0x63, 0x69, 0x66, 0x79, 0x20, 0x4E, 0x55, 0x4C, 0x4C, 0x20, 0x74, 0x6F, 0x20,
	0x63, 0x6F, 0x6D, 0x70, 0x61, 0x6E, 0x79, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x2E, 0x20, 0x20, 0x0A,
	0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803D163C-803D1670 0034+00 s=1 e=0 z=0  None .data      @956                                                         */
SECTION_DATA static void* lit_956[13] = {
	(void*)(((char*)DVDCancelAsync)+0x50),
	(void*)(((char*)DVDCancelAsync)+0x50),
	(void*)(((char*)DVDCancelAsync)+0x70),
	(void*)(((char*)DVDCancelAsync)+0xB4),
	(void*)(((char*)DVDCancelAsync)+0x100),
	(void*)(((char*)DVDCancelAsync)+0x17C),
	(void*)(((char*)DVDCancelAsync)+0x17C),
	(void*)(((char*)DVDCancelAsync)+0x17C),
	(void*)(((char*)DVDCancelAsync)+0x17C),
	(void*)(((char*)DVDCancelAsync)+0x254),
	(void*)(((char*)DVDCancelAsync)+0x254),
	(void*)(((char*)DVDCancelAsync)+0x50),
	(void*)(((char*)DVDCancelAsync)+0x17C),
};

/* 8034B2D4-8034B550 027C+00 s=3 e=0 z=0  None .text      DVDCancelAsync                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void DVDCancelAsync() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDCancelAsync.s"
}
#pragma pop


/* 8034B550-8034B5FC 00AC+00 s=0 e=1 z=1  None .text      DVDCancel                                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDCancel() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDCancel.s"
}
#pragma pop


/* 8034B5FC-8034B620 0024+00 s=1 e=0 z=0  None .text      cbForCancelSync                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void cbForCancelSync() {
	nofralloc
#include "asm/dolphin/dvd/dvd/cbForCancelSync.s"
}
#pragma pop


/* 8034B620-8034B628 0008+00 s=0 e=3 z=0  None .text      DVDGetCurrentDiskID                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDGetCurrentDiskID() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDGetCurrentDiskID.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1670-803D16A8 0034+04 s=1 e=0 z=0  None .data      @1060                                                        */
SECTION_DATA static void* lit_1060[13 + 1 /* padding */] = {
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0xA0),
	(void*)(((char*)DVDCheckDisk)+0x90),
	(void*)(((char*)DVDCheckDisk)+0x90),
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0x98),
	(void*)(((char*)DVDCheckDisk)+0xA0),
	(void*)(((char*)DVDCheckDisk)+0x90),
	(void*)(((char*)DVDCheckDisk)+0x90),
	(void*)(((char*)DVDCheckDisk)+0x98),
	/* padding */
	NULL,
};

/* 8034B628-8034B720 00F8+00 s=1 e=4 z=0  None .text      DVDCheckDisk                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DVDCheckDisk() {
	nofralloc
#include "asm/dolphin/dvd/dvd/DVDCheckDisk.s"
}
#pragma pop


/* 8034B720-8034B83C 011C+00 s=0 e=1 z=0  None .text      __DVDPrepareResetAsync                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __DVDPrepareResetAsync() {
	nofralloc
#include "asm/dolphin/dvd/dvd/__DVDPrepareResetAsync.s"
}
#pragma pop


/* 8034B83C-8034B874 0038+00 s=0 e=1 z=0  None .text      __DVDTestAlarm                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __DVDTestAlarm() {
	nofralloc
#include "asm/dolphin/dvd/dvd/__DVDTestAlarm.s"
}
#pragma pop


