// 
// Generated By: dol2asm
// Translation Unit: GCN/EXI2_GDEV_GCN/main
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main.h"

// 
// Forward References:
// 


extern "C" void gdev_cc_initinterrupts();
extern "C" void gdev_cc_peek();
extern "C" void gdev_cc_post_stop();
extern "C" void gdev_cc_pre_continue();
extern "C" void gdev_cc_write();
extern "C" void gdev_cc_read();
extern "C" bool gdev_cc_close();
extern "C" void gdev_cc_open();
extern "C" bool gdev_cc_shutdown();
extern "C" void gdev_cc_initialize();

// 
// External References:
// 


extern "C" void CircleBufferReadBytes();
extern "C" void CircleBufferWriteBytes();
extern "C" void CircleBufferInitialize();
extern "C" void CBGetBytesAvailableForRead();
extern "C" void MWTRACE();
extern "C" void DBClose();
extern "C" void DBOpen();
extern "C" void DBWrite();
extern "C" void DBRead();
extern "C" void DBQueryData();
extern "C" void DBInitInterrupts();
extern "C" void DBInitComm();

// 
// Declarations:
// 

/* 80372908-8037292C 0024+00 s=0 e=1 z=0  None .text      gdev_cc_initinterrupts                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_initinterrupts() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_initinterrupts.s"
}
#pragma pop


/* ############################################################################################## */
/* 80450050-80450550 0500+00 s=1 e=0 z=0  None .bss       gRecvBuf                                                     */
static u8 gRecvBuf[1280];

/* 80450550-8045056C 001C+00 s=3 e=0 z=0  None .bss       gRecvCB                                                      */
static u8 gRecvCB[28];

/* 8037292C-8037299C 0070+00 s=0 e=1 z=0  None .text      gdev_cc_peek                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_peek() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_peek.s"
}
#pragma pop


/* 8037299C-803729C0 0024+00 s=0 e=1 z=0  None .text      gdev_cc_post_stop                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_post_stop() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_post_stop.s"
}
#pragma pop


/* 803729C0-803729E4 0024+00 s=0 e=1 z=0  None .text      gdev_cc_pre_continue                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_pre_continue() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_pre_continue.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2DF0-803A2E04 0014+00 s=1 e=0 z=0  None .rodata    @318                                                         */
SECTION_RODATA static u8 const lit_318[20] = {
	0x63, 0x63, 0x20, 0x6E, 0x6F, 0x74, 0x20, 0x69, 0x6E, 0x69, 0x74, 0x69, 0x61, 0x6C, 0x69, 0x7A,
	0x65, 0x64, 0x0A, 0x00,
};

/* 803A2E04-803A2E30 0029+03 s=1 e=0 z=0  None .rodata    @319                                                         */
SECTION_RODATA static u8 const lit_319[41 + 3 /* padding */] = {
	0x63, 0x63, 0x5F, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x3A, 0x20, 0x4F, 0x75, 0x74, 0x70, 0x75,
	0x74, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x25, 0x6C,
	0x64, 0x20, 0x62, 0x79, 0x74, 0x65, 0x73, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803A2E30-803A2E4C 001C+00 s=1 e=0 z=0  None .rodata    @320                                                         */
SECTION_RODATA static u8 const lit_320[28] = {
	0x63, 0x63, 0x5F, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x69, 0x6E, 0x67,
	0x20, 0x25, 0x6C, 0x64, 0x20, 0x62, 0x79, 0x74, 0x65, 0x73, 0x0A, 0x00,
};

/* 804519C8-804519D0 0004+04 s=3 e=0 z=0  None .sbss      gIsInitialized                                               */
static u8 gIsInitialized[4 + 4 /* padding */];

/* 803729E4-80372AA4 00C0+00 s=0 e=1 z=0  None .text      gdev_cc_write                                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_write() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_write.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A2E4C-803A2E74 0025+03 s=1 e=0 z=0  None .rodata    @341                                                         */
SECTION_RODATA static u8 const lit_341[37 + 3 /* padding */] = {
	0x45, 0x78, 0x70, 0x65, 0x63, 0x74, 0x65, 0x64, 0x20, 0x70, 0x61, 0x63, 0x6B, 0x65, 0x74, 0x20,
	0x73, 0x69, 0x7A, 0x65, 0x20, 0x3A, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x28, 0x25,
	0x6C, 0x64, 0x29, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 803A2E74-803A2EA4 002D+03 s=1 e=0 z=0  None .rodata    @342                                                         */
SECTION_RODATA static u8 const lit_342[45 + 3 /* padding */] = {
	0x63, 0x63, 0x5F, 0x72, 0x65, 0x61, 0x64, 0x20, 0x3A, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x20,
	0x72, 0x65, 0x61, 0x64, 0x69, 0x6E, 0x67, 0x20, 0x62, 0x79, 0x74, 0x65, 0x73, 0x20, 0x66, 0x72,
	0x6F, 0x6D, 0x20, 0x45, 0x58, 0x49, 0x32, 0x20, 0x25, 0x6C, 0x64, 0x0A, 0x00,
	/* padding */
	0x00, 0x00, 0x00,
};

/* 80372AA4-80372B98 00F4+00 s=0 e=1 z=0  None .text      gdev_cc_read                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_read() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_read.s"
}
#pragma pop


/* 80372B98-80372BA0 0008+00 s=0 e=1 z=0  None .text      gdev_cc_close                                                */
extern "C" bool gdev_cc_close() {
	return false;
}


/* 80372BA0-80372BC4 0024+00 s=0 e=1 z=0  None .text      gdev_cc_open                                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_open() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_open.s"
}
#pragma pop


/* 80372BC4-80372BCC 0008+00 s=0 e=1 z=0  None .text      gdev_cc_shutdown                                             */
extern "C" bool gdev_cc_shutdown() {
	return false;
}


/* ############################################################################################## */
/* 803A2EA4-803A2EB8 0013+01 s=1 e=0 z=0  None .rodata    @348                                                         */
SECTION_RODATA static u8 const lit_348[19 + 1 /* padding */] = {
	0x43, 0x41, 0x4C, 0x4C, 0x49, 0x4E, 0x47, 0x20, 0x45, 0x58, 0x49, 0x32, 0x5F, 0x49, 0x6E, 0x69,
	0x74, 0x0A, 0x00,
	/* padding */
	0x00,
};

/* 803A2EB8-803A2ED0 0018+00 s=1 e=0 z=0  None .rodata    @349                                                         */
SECTION_RODATA static u8 const lit_349[24] = {
	0x44, 0x4F, 0x4E, 0x45, 0x20, 0x43, 0x41, 0x4C, 0x4C, 0x49, 0x4E, 0x47, 0x20, 0x45, 0x58, 0x49,
	0x32, 0x5F, 0x49, 0x6E, 0x69, 0x74, 0x0A, 0x00,
};

/* 80372BCC-80372C54 0088+00 s=0 e=1 z=0  None .text      gdev_cc_initialize                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void gdev_cc_initialize() {
	nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/GCN/EXI2_GDEV_GCN/main/gdev_cc_initialize.s"
}
#pragma pop


