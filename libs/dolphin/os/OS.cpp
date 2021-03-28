// 
// Generated By: dol2asm
// Translation Unit: OS
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/os/OS.h"

// 
// Types:
// 

struct dBgW {
};

struct daBgObj_c {
	/* 80459BB4 */ void regist(dBgW*);
};

// 
// Forward References:
// 

extern "C" extern u8 __OSRebootParams[28 + 4 /* padding */];
extern "C" extern u8 __OSIsGcam[4];
extern "C" extern u8 __OSInIPL[4 + 4 /* padding */];
extern "C" extern u8 __OSStartTime[4];
extern "C" extern u8 data_80451634[4];

extern "C" void __OSFPRInit();
extern "C" void OSGetConsoleType();
extern "C" static void InquiryCallback();
extern "C" void OSInit();
extern "C" static void OSExceptionInit();
extern "C" static void __OSDBIntegrator();
extern "C" static void __OSDBJump();
extern "C" void __OSSetExceptionHandler();
extern "C" void __OSGetExceptionHandler();
extern "C" static void OSExceptionVector();
extern "C" static void __DBVECTOR();
extern "C" static void __OSEVSetNumber();
extern "C" static void __OSEVEnd();
extern "C" static void OSDefaultExceptionHandler();
extern "C" void __OSPSInit();
extern "C" void __OSGetDIConfig();
extern "C" void OSRegisterVersion();
extern "C" extern u8 __OSRebootParams[28 + 4 /* padding */];
extern "C" extern u8 __OSIsGcam[4];
extern "C" extern u8 __OSInIPL[4 + 4 /* padding */];
extern "C" extern u8 __OSStartTime[4];
extern "C" extern u8 data_80451634[4];

// 
// External References:
// 

extern "C" extern u8 __DVDLongFileNameFlag[4];
extern "C" extern u8 __PADSpec[4 + 4 /* padding */];

SECTION_INIT void memset();
SECTION_INIT void memcpy();
extern "C" void OSReport();
extern "C" void PPCMtmmcr0();
extern "C" void PPCMtmmcr1();
extern "C" void PPCMtpmc1();
extern "C" void PPCMtpmc2();
extern "C" void PPCMtpmc3();
extern "C" void PPCMtpmc4();
extern "C" void PPCMfhid2();
extern "C" void PPCMthid2();
extern "C" void PPCDisableSpeculation();
extern "C" void PPCSetFpNonIEEEMode();
extern "C" void OSInitAlarm();
extern "C" void OSGetArenaHi();
extern "C" void OSGetArenaLo();
extern "C" void OSSetArenaHi();
extern "C" void OSSetArenaLo();
extern "C" void __OSInitAudioSystem();
extern "C" void DCInvalidateRange();
extern "C" void DCFlushRangeNoSync();
extern "C" void ICInvalidateRange();
extern "C" void ICFlashInvalidate();
extern "C" void __OSCacheInit();
extern "C" void __OSContextInit();
extern "C" void __OSUnhandledException();
extern "C" void __OSGetExecParams();
extern "C" void OSDisableInterrupts();
extern "C" void OSEnableInterrupts();
extern "C" void __OSSetInterruptHandler();
extern "C" void __OSInterruptInit();
extern "C" void __OSModuleInit();
extern "C" void __OSInitMemoryProtection();
extern "C" void OSGetResetCode();
extern "C" void __OSResetSWInterruptHandler();
extern "C" void __OSInitSram();
extern "C" void __OSInitSystemCall();
extern "C" void __OSThreadInit();
extern "C" void __OSGetSystemTime();
extern "C" void EXIInit();
extern "C" void SIInit();
extern "C" void __DBIsExceptionMarked();
extern "C" void DBPrintf();
extern "C" void DVDInit();
extern "C" void DVDInquiryAsync();
extern "C" void EnableMetroTRKInterrupts();
extern "C" extern u8 __DVDLongFileNameFlag[4];
extern "C" extern u8 __PADSpec[4 + 4 /* padding */];
extern "C" void _epilog();
extern "C" void regist__9daBgObj_cFP4dBgW();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80451600-80451604 0004+00 s=2 e=0 z=0  None .sbss      BootInfo                                                     */
static u8 BootInfo[4];

/* 80451604-80451608 0004+00 s=2 e=0 z=0  None .sbss      BI2DebugFlag                                                 */
static u8 BI2DebugFlag[4];

/* 80451608-8045160C 0004+00 s=1 e=0 z=0  None .sbss      BI2DebugFlagHolder                                           */
static u8 BI2DebugFlagHolder[4];

/* 8045160C-80451610 0004+00 s=1 e=1 z=0  None .sbss      __OSIsGcam                                                   */
u8 __OSIsGcam[4];

/* 80451610-80451618 0008+00 s=1 e=0 z=0  None .sbss      ZeroF                                                        */
static f64 ZeroF;

/* 80451618-80451620 0008+00 s=1 e=0 z=0  None .sbss      ZeroPS                                                       */
static u8 ZeroPS[8];

/* 80339DD4-80339EFC 0128+00 s=0 e=1 z=0  None .text      __OSFPRInit                                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSFPRInit() {
	nofralloc
#include "asm/dolphin/os/OS/__OSFPRInit.s"
}
#pragma pop


/* 80339EFC-80339F24 0028+00 s=0 e=5 z=0  None .text      OSGetConsoleType                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSGetConsoleType() {
	nofralloc
#include "asm/dolphin/os/OS/OSGetConsoleType.s"
}
#pragma pop


/* ############################################################################################## */
/* 8044BA60-8044BA80 0020+00 s=2 e=0 z=0  None .bss       DriveInfo                                                    */
static u8 DriveInfo[32];

/* 80339F24-80339F60 003C+00 s=1 e=0 z=0  None .text      InquiryCallback                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void InquiryCallback() {
	nofralloc
#include "asm/dolphin/os/OS/InquiryCallback.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CF288-803CF2CC 0044+00 s=3 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[68] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x4F, 0x53, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75, 0x69, 0x6C,
	0x64, 0x3A, 0x20, 0x4E, 0x6F, 0x76, 0x20, 0x31, 0x30, 0x20, 0x32, 0x30, 0x30, 0x34, 0x20, 0x30,
	0x36, 0x3A, 0x32, 0x36, 0x3A, 0x34, 0x31, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31, 0x29,
	0x20, 0x3E, 0x3E, 0x00,
};

/* 803CF2CC-803CF2DC 000D+03 s=1 e=0 z=0  None .data      @105                                                         */
SECTION_DATA static u8 lit_105[13 + 3 /* padding */] = {
	0x0A, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x4F, 0x53, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF2DC-803CF2F4 0016+02 s=1 e=0 z=0  None .data      @106                                                         */
SECTION_DATA static u8 lit_106[22 + 2 /* padding */] = {
	0x4B, 0x65, 0x72, 0x6E, 0x65, 0x6C, 0x20, 0x62, 0x75, 0x69, 0x6C, 0x74, 0x20, 0x3A, 0x20, 0x25,
	0x73, 0x20, 0x25, 0x73, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803CF2F4-803CF300 000C+00 s=1 e=0 z=0  None .data      @107                                                         */
SECTION_DATA static u8 lit_107[12] = {
	0x4E, 0x6F, 0x76, 0x20, 0x31, 0x30, 0x20, 0x32, 0x30, 0x30, 0x34, 0x00,
};

/* 803CF300-803CF30C 0009+03 s=1 e=0 z=0  None .data      @108                                                         */
SECTION_DATA static u8 lit_108[9 + 3 /* padding */] = {
	0x30, 0x36, 0x3A, 0x32, 0x36, 0x3A, 0x34, 0x31, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF30C-803CF31C 0010+00 s=1 e=0 z=0  None .data      @109                                                         */
SECTION_DATA static u8 lit_109[16] = {
	0x43, 0x6F, 0x6E, 0x73, 0x6F, 0x6C, 0x65, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x3A, 0x20, 0x00,
};

/* 803CF31C-803CF328 000B+01 s=1 e=0 z=0  None .data      @110                                                         */
SECTION_DATA static u8 lit_110[11 + 1 /* padding */] = {
	0x52, 0x65, 0x74, 0x61, 0x69, 0x6C, 0x20, 0x25, 0x64, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803CF328-803CF338 000E+02 s=1 e=0 z=0  None .data      @111                                                         */
SECTION_DATA static u8 lit_111[14 + 2 /* padding */] = {
	0x4D, 0x61, 0x63, 0x20, 0x45, 0x6D, 0x75, 0x6C, 0x61, 0x74, 0x6F, 0x72, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803CF338-803CF348 000D+03 s=1 e=0 z=0  None .data      @112                                                         */
SECTION_DATA static u8 lit_112[13 + 3 /* padding */] = {
	0x50, 0x43, 0x20, 0x45, 0x6D, 0x75, 0x6C, 0x61, 0x74, 0x6F, 0x72, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF348-803CF358 000D+03 s=1 e=0 z=0  None .data      @113                                                         */
SECTION_DATA static u8 lit_113[13 + 3 /* padding */] = {
	0x45, 0x50, 0x50, 0x43, 0x20, 0x41, 0x72, 0x74, 0x68, 0x75, 0x72, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF358-803CF368 000D+03 s=1 e=0 z=0  None .data      @114                                                         */
SECTION_DATA static u8 lit_114[13 + 3 /* padding */] = {
	0x45, 0x50, 0x50, 0x43, 0x20, 0x4D, 0x69, 0x6E, 0x6E, 0x6F, 0x77, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF368-803CF384 0019+03 s=1 e=0 z=0  None .data      @115                                                         */
SECTION_DATA static u8 lit_115[25 + 3 /* padding */] = {
	0x44, 0x65, 0x76, 0x65, 0x6C, 0x6F, 0x70, 0x6D, 0x65, 0x6E, 0x74, 0x20, 0x48, 0x57, 0x25, 0x64,
	0x20, 0x28, 0x25, 0x30, 0x38, 0x78, 0x29, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803CF384-803CF394 000E+02 s=1 e=0 z=0  None .data      @117                                                         */
SECTION_DATA static u8 lit_117[14 + 2 /* padding */] = {
	0x4D, 0x65, 0x6D, 0x6F, 0x72, 0x79, 0x20, 0x25, 0x64, 0x20, 0x4D, 0x42, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803CF394-803CF3AC 0015+03 s=1 e=0 z=0  None .data      @118                                                         */
SECTION_DATA static u8 lit_118[21 + 3 /* padding */] = {
	0x41, 0x72, 0x65, 0x6E, 0x61, 0x20, 0x3A, 0x20, 0x30, 0x78, 0x25, 0x78, 0x20, 0x2D, 0x20, 0x30,
	0x78, 0x25, 0x78, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 8044BA80-8044BAB0 0030+00 s=1 e=0 z=0  None .bss       DriveBlock                                                   */
static u8 DriveBlock[48];

/* 8044BAB0-8044BAD0 001C+04 s=1 e=1 z=0  None .bss       __OSRebootParams                                             */
u8 __OSRebootParams[28 + 4 /* padding */];

/* 80450980-80450984 0004+00 s=1 e=0 z=0  None .sdata     __OSVersion                                                  */
SECTION_SDATA static void* __OSVersion = (void*)&lit_1;

/* 80450984-8045098C 0006+02 s=1 e=0 z=0  None .sdata     @116                                                         */
SECTION_SDATA static u8 lit_116[6 + 2 /* padding */] = {
	0x25, 0x30, 0x38, 0x78, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 80451620-80451624 0004+00 s=1 e=0 z=0  None .sbss      AreWeInitialized                                             */
static u8 AreWeInitialized[4];

/* 80451624-80451628 0004+00 s=3 e=0 z=0  None .sbss      OSExceptionTable                                             */
static u8 OSExceptionTable[4];

/* 80451628-80451630 0004+04 s=1 e=1 z=0  None .sbss      __OSInIPL                                                    */
u8 __OSInIPL[4 + 4 /* padding */];

/* 80451630-80451634 0004+00 s=1 e=1 z=0  None .sbss      __OSStartTime                                                */
u8 __OSStartTime[4];

/* 80451634-80451638 0004+00 s=1 e=1 z=0  None .sbss      None                                                         */
u8 data_80451634[4];

/* 80339F60-8033A440 04E0+00 s=0 e=2 z=0  None .text      OSInit                                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSInit() {
	nofralloc
#include "asm/dolphin/os/OS/OSInit.s"
}
#pragma pop


/* ############################################################################################## */
/* 803CF3AC-803CF3E8 003C+00 s=1 e=0 z=0  None .data      __OSExceptionLocations                                       */
SECTION_DATA static u8 __OSExceptionLocations[60] = {
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0F, 0x00,
	0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x17, 0x00,
};

/* 803CF3E8-803CF404 001B+01 s=1 e=0 z=0  None .data      @152                                                         */
SECTION_DATA static u8 lit_152[27 + 1 /* padding */] = {
	0x49, 0x6E, 0x73, 0x74, 0x61, 0x6C, 0x6C, 0x69, 0x6E, 0x67, 0x20, 0x4F, 0x53, 0x44, 0x42, 0x49,
	0x6E, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x6F, 0x72, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803CF404-803CF434 002E+02 s=1 e=0 z=0  None .data      @153                                                         */
SECTION_DATA static u8 lit_153[46 + 2 /* padding */] = {
	0x3E, 0x3E, 0x3E, 0x20, 0x4F, 0x53, 0x49, 0x4E, 0x49, 0x54, 0x3A, 0x20, 0x65, 0x78, 0x63, 0x65,
	0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x25, 0x64, 0x20, 0x63, 0x6F, 0x6D, 0x6D, 0x61, 0x6E, 0x64,
	0x65, 0x65, 0x72, 0x65, 0x64, 0x20, 0x62, 0x79, 0x20, 0x54, 0x52, 0x4B, 0x0A, 0x00,
	/* padding */
	0x00, 0x00,
};

/* 803CF434-803CF464 002F+01 s=1 e=0 z=0  None .data      @154                                                         */
SECTION_DATA static u8 lit_154[47 + 1 /* padding */] = {
	0x3E, 0x3E, 0x3E, 0x20, 0x4F, 0x53, 0x49, 0x4E, 0x49, 0x54, 0x3A, 0x20, 0x65, 0x78, 0x63, 0x65,
	0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x25, 0x64, 0x20, 0x76, 0x65, 0x63, 0x74, 0x6F, 0x72, 0x65,
	0x64, 0x20, 0x74, 0x6F, 0x20, 0x64, 0x65, 0x62, 0x75, 0x67, 0x67, 0x65, 0x72, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803CF464-803CF480 001B+01 s=1 e=0 z=0  None .data      @155                                                         */
SECTION_DATA static u8 lit_155[27 + 1 /* padding */] = {
	0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x69, 0x74, 0x69,
	0x61, 0x6C, 0x69, 0x7A, 0x65, 0x64, 0x2E, 0x2E, 0x2E, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 8033A440-8033A6C0 0280+00 s=1 e=0 z=0  None .text      OSExceptionInit                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void OSExceptionInit() {
	nofralloc
#include "asm/dolphin/os/OS/OSExceptionInit.s"
}
#pragma pop


/* 8033A6C0-8033A6E4 0024+00 s=1 e=0 z=0  None .text      __OSDBIntegrator                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __OSDBIntegrator() {
	nofralloc
#include "asm/dolphin/os/OS/__OSDBIntegrator.s"
}
#pragma pop


/* 8033A6E4-8033A6E8 0004+00 s=1 e=0 z=0  None .text      __OSDBJump                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __OSDBJump() {
	nofralloc
#include "asm/dolphin/os/OS/__OSDBJump.s"
}
#pragma pop


/* 8033A6E8-8033A704 001C+00 s=1 e=3 z=0  None .text      __OSSetExceptionHandler                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSSetExceptionHandler() {
	nofralloc
#include "asm/dolphin/os/OS/__OSSetExceptionHandler.s"
}
#pragma pop


/* 8033A704-8033A718 0014+00 s=0 e=1 z=0  None .text      __OSGetExceptionHandler                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSGetExceptionHandler() {
	nofralloc
#include "asm/dolphin/os/OS/__OSGetExceptionHandler.s"
}
#pragma pop


/* 8033A718-8033A770 0058+00 s=1 e=0 z=0  None .text      OSExceptionVector                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void OSExceptionVector() {
	nofralloc
#include "asm/dolphin/os/OS/OSExceptionVector.s"
}
#pragma pop


/* 8033A770-8033A780 0010+00 s=1 e=0 z=0  None .text      __DBVECTOR                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __DBVECTOR() {
	nofralloc
#include "asm/dolphin/os/OS/__DBVECTOR.s"
}
#pragma pop


/* 8033A780-8033A7B0 0030+00 s=1 e=0 z=0  None .text      __OSEVSetNumber                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __OSEVSetNumber() {
	nofralloc
#include "asm/dolphin/os/OS/__OSEVSetNumber.s"
}
#pragma pop


/* 8033A7B0-8033A7B4 0004+00 s=1 e=0 z=0  None .text      __OSEVEnd                                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __OSEVEnd() {
	nofralloc
#include "asm/dolphin/os/OS/__OSEVEnd.s"
}
#pragma pop


/* 8033A7B4-8033A80C 0058+00 s=2 e=0 z=0  None .text      OSDefaultExceptionHandler                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void OSDefaultExceptionHandler() {
	nofralloc
#include "asm/dolphin/os/OS/OSDefaultExceptionHandler.s"
}
#pragma pop


/* 8033A80C-8033A860 0054+00 s=0 e=1 z=0  None .text      __OSPSInit                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSPSInit() {
	nofralloc
#include "asm/dolphin/os/OS/__OSPSInit.s"
}
#pragma pop


/* 8033A860-8033A874 0014+00 s=0 e=1 z=0  None .text      __OSGetDIConfig                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSGetDIConfig() {
	nofralloc
#include "asm/dolphin/os/OS/__OSGetDIConfig.s"
}
#pragma pop


/* ############################################################################################## */
/* 8045098C-80450990 0004+00 s=1 e=0 z=0  None .sdata     @163                                                         */
SECTION_SDATA static u32 lit_163 = 0x25730A00;

/* 8033A874-8033A8A0 002C+00 s=1 e=11 z=0  None .text      OSRegisterVersion                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSRegisterVersion() {
	nofralloc
#include "asm/dolphin/os/OS/OSRegisterVersion.s"
}
#pragma pop


