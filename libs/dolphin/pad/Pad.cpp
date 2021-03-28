// 
// Generated By: dol2asm
// Translation Unit: Pad
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/pad/Pad.h"

// 
// Forward References:
// 

extern "C" extern u8 __PADSpec[4 + 4 /* padding */];

extern "C" static void UpdateOrigin();
extern "C" static void PADOriginCallback();
extern "C" static void PADOriginUpdateCallback();
extern "C" static void PADProbeCallback();
extern "C" static void PADTypeAndStatusCallback();
extern "C" static void PADReceiveCheckCallback();
extern "C" void PADReset();
extern "C" void PADRecalibrate();
extern "C" void PADInit();
extern "C" void PADRead();
extern "C" void PADControlMotor();
extern "C" void PADSetSpec();
extern "C" static void SPEC0_MakeStatus();
extern "C" static void SPEC1_MakeStatus();
extern "C" static void SPEC2_MakeStatus();
extern "C" void PADSetAnalogMode();
extern "C" static void OnReset();
extern "C" static void SamplingHandler();
extern "C" static void PADSetSamplingCallback();
extern "C" void __PADDisableRecalibration();
extern "C" extern u8 __PADSpec[4 + 4 /* padding */];

// 
// External References:
// 

extern "C" extern u8 __PADFixBits[4 + 4 /* padding */];

SECTION_INIT void memset();
extern "C" void OSRegisterVersion();
extern "C" void OSSetCurrentContext();
extern "C" void OSClearContext();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSRegisterResetFunction();
extern "C" void OSSetWirelessID();
extern "C" void OSGetTime();
extern "C" void SIBusy();
extern "C" void SIIsChanBusy();
extern "C" void SIRegisterPollingHandler();
extern "C" void SIUnregisterPollingHandler();
extern "C" void SIGetStatus();
extern "C" void SISetCommand();
extern "C" void SITransferCommands();
extern "C" void SIEnablePolling();
extern "C" void SIDisablePolling();
extern "C" void SIGetResponse();
extern "C" void SITransfer();
extern "C" void SIGetType();
extern "C" void SIGetTypeAsync();
extern "C" void SIRefreshSamplingRate();
extern "C" void __shr2i();
extern "C" extern u8 __PADFixBits[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803D1B48-803D1B90 0045+03 s=1 e=0 z=0  None .data      @1                                                           */
SECTION_DATA static u8 lit_1[69 + 3 /* padding */] = {
	0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B, 0x20, 0x2D,
	0x20, 0x50, 0x41, 0x44, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20, 0x62, 0x75, 0x69,
	0x6C, 0x64, 0x3A, 0x20, 0x41, 0x70, 0x72, 0x20, 0x20, 0x35, 0x20, 0x32, 0x30, 0x30, 0x34, 0x20,
	0x30, 0x34, 0x3A, 0x31, 0x34, 0x3A, 0x34, 0x39, 0x20, 0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31,
	0x29, 0x20, 0x3E, 0x3E, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 8044CB70-8044CB80 0010+00 s=3 e=0 z=0  None .bss       Type                                                         */
static u8 Type[16];

/* 8044CB80-8044CBB0 0030+00 s=8 e=0 z=0  None .bss       Origin                                                       */
static u8 Origin[48];

/* 80450A20-80450A24 0004+00 s=1 e=0 z=0  None .sdata     __PADVersion                                                 */
SECTION_SDATA static void* __PADVersion = (void*)&lit_1;

/* 80450A24-80450A28 0004+00 s=7 e=0 z=0  None .sdata     ResettingChan                                                */
SECTION_SDATA static u32 ResettingChan = 0x00000020;

/* 80450A28-80450A2C 0004+00 s=1 e=0 z=0  None .sdata     XPatchBits                                                   */
SECTION_SDATA static u32 XPatchBits = 0xF0000000;

/* 80450A2C-80450A30 0004+00 s=7 e=0 z=0  None .sdata     AnalogMode                                                   */
SECTION_SDATA static u32 AnalogMode = 0x00000300;

/* 8034E2B4-8034E458 01A4+00 s=2 e=0 z=0  None .text      UpdateOrigin                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void UpdateOrigin() {
	nofralloc
#include "asm/dolphin/pad/Pad/UpdateOrigin.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451848-8045184C 0004+00 s=1 e=0 z=0  None .sbss      Initialized                                                  */
static u8 Initialized[4];

/* 8045184C-80451850 0004+00 s=10 e=0 z=0  None .sbss      EnabledBits                                                  */
static u8 EnabledBits[4];

/* 80451850-80451854 0004+00 s=7 e=0 z=0  None .sbss      ResettingBits                                                */
static u8 ResettingBits[4];

/* 8034E458-8034E51C 00C4+00 s=1 e=0 z=0  None .text      PADOriginCallback                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADOriginCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADOriginCallback.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451854-80451858 0004+00 s=4 e=0 z=0  None .sbss      RecalibrateBits                                              */
static u8 RecalibrateBits[4];

/* 80451858-8045185C 0004+00 s=7 e=0 z=0  None .sbss      WaitingBits                                                  */
static u8 WaitingBits[4];

/* 8045185C-80451860 0004+00 s=6 e=0 z=0  None .sbss      CheckingBits                                                 */
static u8 CheckingBits[4];

/* 80451860-80451864 0004+00 s=6 e=0 z=0  None .sbss      PendingBits                                                  */
static u8 PendingBits[4];

/* 80451864-80451868 0004+00 s=6 e=0 z=0  None .sbss      BarrelBits                                                   */
static u8 BarrelBits[4];

/* 8034E51C-8034E5E8 00CC+00 s=2 e=0 z=0  None .text      PADOriginUpdateCallback                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADOriginUpdateCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADOriginUpdateCallback.s"
}
#pragma pop


/* 8034E5E8-8034E6C0 00D8+00 s=1 e=0 z=0  None .text      PADProbeCallback                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADProbeCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADProbeCallback.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450A30-80450A34 0004+00 s=4 e=0 z=0  None .sdata     Spec                                                         */
SECTION_SDATA static u32 Spec = 0x00000005;

/* 80450A34-80450A38 0004+00 s=2 e=0 z=0  None .sdata     MakeStatus                                                   */
SECTION_SDATA static void* MakeStatus = (void*)SPEC2_MakeStatus;

/* 80450A38-80450A3C 0004+00 s=3 e=0 z=0  None .sdata     CmdReadOrigin                                                */
SECTION_SDATA static u32 CmdReadOrigin = 0x41000000;

/* 80450A3C-80450A40 0004+00 s=1 e=0 z=0  None .sdata     CmdCalibrate                                                 */
SECTION_SDATA static u32 CmdCalibrate = 0x42000000;

/* 8034E6C0-8034E9EC 032C+00 s=4 e=0 z=0  None .text      PADTypeAndStatusCallback                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADTypeAndStatusCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADTypeAndStatusCallback.s"
}
#pragma pop


/* 8034E9EC-8034EB2C 0140+00 s=1 e=0 z=0  None .text      PADReceiveCheckCallback                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADReceiveCheckCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADReceiveCheckCallback.s"
}
#pragma pop


/* 8034EB2C-8034EC3C 0110+00 s=2 e=1 z=0  None .text      PADReset                                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADReset() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADReset.s"
}
#pragma pop


/* 8034EC3C-8034ED50 0114+00 s=1 e=1 z=0  None .text      PADRecalibrate                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADRecalibrate() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADRecalibrate.s"
}
#pragma pop


/* ############################################################################################## */
/* 803D1B90-803D1BA0 0010+00 s=1 e=0 z=0  None .data      ResetFunctionInfo                                            */
SECTION_DATA static void* ResetFunctionInfo[4] = {
	(void*)OnReset,
	(void*)0x0000007F,
	(void*)NULL,
	(void*)NULL,
};

/* 8044CBB0-8044CBC0 0010+00 s=1 e=0 z=0  None .bss       CmdProbeDevice                                               */
static u8 CmdProbeDevice[16];

/* 80451868-8045186C 0004+00 s=3 e=0 z=0  None .sbss      SamplingCallback                                             */
static u8 SamplingCallback[4];

/* 8045186C-80451870 0004+00 s=1 e=0 z=0  None .sbss      recalibrated$388                                             */
static u8 recalibrated[4];

/* 80451870-80451878 0004+04 s=2 e=1 z=0  None .sbss      __PADSpec                                                    */
u8 __PADSpec[4 + 4 /* padding */];

/* 8034ED50-8034EEA0 0150+00 s=0 e=1 z=0  None .text      PADInit                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADInit() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADInit.s"
}
#pragma pop


/* 8034EEA0-8034F1A0 0300+00 s=0 e=1 z=0  None .text      PADRead                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADRead() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADRead.s"
}
#pragma pop


/* 8034F1A0-8034F258 00B8+00 s=0 e=2 z=0  None .text      PADControlMotor                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADControlMotor() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADControlMotor.s"
}
#pragma pop


/* 8034F258-8034F2B8 0060+00 s=1 e=1 z=0  None .text      PADSetSpec                                                   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADSetSpec() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADSetSpec.s"
}
#pragma pop


/* 8034F2B8-8034F42C 0174+00 s=1 e=0 z=0  None .text      SPEC0_MakeStatus                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void SPEC0_MakeStatus() {
	nofralloc
#include "asm/dolphin/pad/Pad/SPEC0_MakeStatus.s"
}
#pragma pop


/* 8034F42C-8034F5A0 0174+00 s=1 e=0 z=0  None .text      SPEC1_MakeStatus                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void SPEC1_MakeStatus() {
	nofralloc
#include "asm/dolphin/pad/Pad/SPEC1_MakeStatus.s"
}
#pragma pop


/* 8034F5A0-8034FA10 0470+00 s=2 e=0 z=0  None .text      SPEC2_MakeStatus                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void SPEC2_MakeStatus() {
	nofralloc
#include "asm/dolphin/pad/Pad/SPEC2_MakeStatus.s"
}
#pragma pop


/* 8034FA10-8034FA84 0074+00 s=0 e=2 z=0  None .text      PADSetAnalogMode                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void PADSetAnalogMode() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADSetAnalogMode.s"
}
#pragma pop


/* 8034FA84-8034FB40 00BC+00 s=1 e=0 z=0  None .text      OnReset                                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void OnReset() {
	nofralloc
#include "asm/dolphin/pad/Pad/OnReset.s"
}
#pragma pop


/* 8034FB40-8034FBA0 0060+00 s=1 e=0 z=0  None .text      SamplingHandler                                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void SamplingHandler() {
	nofralloc
#include "asm/dolphin/pad/Pad/SamplingHandler.s"
}
#pragma pop


/* 8034FBA0-8034FBF4 0054+00 s=1 e=0 z=0  None .text      PADSetSamplingCallback                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void PADSetSamplingCallback() {
	nofralloc
#include "asm/dolphin/pad/Pad/PADSetSamplingCallback.s"
}
#pragma pop


/* 8034FBF4-8034FC70 007C+00 s=0 e=1 z=0  None .text      __PADDisableRecalibration                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __PADDisableRecalibration() {
	nofralloc
#include "asm/dolphin/pad/Pad/__PADDisableRecalibration.s"
}
#pragma pop


