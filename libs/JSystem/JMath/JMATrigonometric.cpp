// 
// Generated By: dol2asm
// Translation Unit: JMATrigonometric
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JMath/JMATrigonometric.h"

// 
// Types:
// 

namespace std {
	template <typename A1, typename B1>
	struct pair { };
	/* pair<f32, f32> */
	struct pair__template0 {
		/* 80339CB0 */ pair__template0();
	};

};

// 
// Forward References:
// 

extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 asinAcosTable___5JMath[4128];

extern "C" void __sinit_JMATrigonometric_cpp();
extern "C" void func_80339CB0();
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 asinAcosTable___5JMath[4128];

// 
// External References:
// 


extern "C" void __construct_array();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" void atan();
extern "C" void cos();
extern "C" void sin();
extern "C" void asin();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80439A20-80449A20 10000+00 s=1 e=265 z=705  None .bss       sincosTable___5JMath                                         */
u8 sincosTable___5JMath[65536];

/* 80449A20-8044AA40 1020+00 s=1 e=0 z=0  None .bss       atanTable___5JMath                                           */
static u8 atanTable___5JMath[4128];

/* 8044AA40-8044BA60 1020+00 s=1 e=1 z=0  None .bss       asinAcosTable___5JMath                                       */
u8 asinAcosTable___5JMath[4128];

/* 804564D8-804564E0 0004+04 s=2 e=0 z=0  None .sdata2    @326                                                         */
SECTION_SDATA2 static u8 lit_326[4 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 804564E0-804564E8 0008+00 s=1 e=0 z=0  None .sdata2    @436                                                         */
SECTION_SDATA2 static u8 lit_436[8] = {
	0x40, 0x19, 0x21, 0xFB, 0x60, 0x00, 0x00, 0x00,
};

/* 804564E8-804564F0 0008+00 s=1 e=0 z=0  None .sdata2    @437                                                         */
SECTION_SDATA2 static u8 lit_437[8] = {
	0x40, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804564F0-804564F8 0008+00 s=1 e=0 z=0  None .sdata2    @438                                                         */
SECTION_SDATA2 static u8 lit_438[8] = {
	0x3F, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804564F8-80456500 0004+04 s=1 e=0 z=0  None .sdata2    @439                                                         */
SECTION_SDATA2 static f32 lit_439[1 + 1 /* padding */] = {
	0.7853981852531433f,
	/* padding */
	0.0f,
};

/* 80456500-80456508 0008+00 s=1 e=0 z=0  None .sdata2    @441                                                         */
SECTION_SDATA2 static u8 lit_441[8] = {
	0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80339AEC-80339CB0 01C4+00 s=0 e=1 z=0  None .text      __sinit_JMATrigonometric_cpp                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_JMATrigonometric_cpp() {
	nofralloc
#include "asm/JSystem/JMath/JMATrigonometric/__sinit_JMATrigonometric_cpp.s"
}
#pragma pop


/* 80339CB0-80339CC0 0010+00 s=1 e=0 z=0  None .text      __ct__Q23std9pair<f,f>Fv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm std::pair__template0::pair__template0() {
	nofralloc
#include "asm/JSystem/JMath/JMATrigonometric/func_80339CB0.s"
}
#pragma pop


