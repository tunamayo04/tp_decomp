// 
// Generated By: dol2asm
// Translation Unit: c_xyz
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "SSystem/SComponent/c_xyz.h"

// 
// Types:
// 

struct Vec {
};

struct cXyz {
	/* 80009184 */ ~cXyz();
	/* 80266AE4 */ void operator+(Vec const&) const;
	/* 80266B34 */ void operator-(Vec const&) const;
	/* 80266B84 */ void operator*(f32) const;
	/* 80266BD0 */ void operator*(Vec const&) const;
	/* 80266C18 */ void operator/(f32) const;
	/* 80266C6C */ void getCrossProduct(Vec const&) const;
	/* 80266CBC */ void outprod(Vec const&) const;
	/* 80266CE4 */ void norm() const;
	/* 80266D30 */ void normZP() const;
	/* 80266DC4 */ void normZC() const;
	/* 80266EF4 */ void normalize();
	/* 80266F48 */ void normalizeZP();
	/* 80266FDC */ void normalizeRS();
	/* 8026702C */ bool operator==(Vec const&) const;
	/* 8026706C */ bool operator!=(Vec const&) const;
	/* 802670AC */ void isZero() const;
	/* 80267128 */ void atan2sX_Z() const;
	/* 80267150 */ void atan2sY_XZ() const;
};

// 
// Forward References:
// 

extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 BaseX__4cXyz[12];
extern "C" extern u8 BaseY__4cXyz[12];
extern "C" extern u8 BaseZ__4cXyz[12];

extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ml__4cXyzCFRC3Vec();
extern "C" void __dv__4cXyzCFf();
extern "C" void getCrossProduct__4cXyzCFRC3Vec();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void norm__4cXyzCFv();
extern "C" void normZP__4cXyzCFv();
extern "C" void normZC__4cXyzCFv();
extern "C" void normalize__4cXyzFv();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void normalizeRS__4cXyzFv();
extern "C" bool __eq__4cXyzCFRC3Vec();
extern "C" bool __ne__4cXyzCFRC3Vec();
extern "C" void isZero__4cXyzCFv();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void __sinit_c_xyz_cpp();
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 BaseX__4cXyz[12];
extern "C" extern u8 BaseY__4cXyz[12];
extern "C" extern u8 BaseZ__4cXyz[12];

// 
// External References:
// 

void cM_atan2s(f32, f32);
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_epsilon;

extern "C" void __dt__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void PSVECAdd();
extern "C" void PSVECSubtract();
extern "C" void PSVECScale();
extern "C" void PSVECNormalize();
extern "C" void PSVECSquareMag();
extern "C" void PSVECCrossProduct();
extern "C" void __register_global_object();
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_epsilon;

// 
// Declarations:
// 

/* 80266AE4-80266B34 0050+00 s=0 e=103 z=300  None .text      __pl__4cXyzCFRC3Vec                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator+(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__pl__4cXyzCFRC3Vec.s"
}
#pragma pop


/* 80266B34-80266B84 0050+00 s=0 e=196 z=1082  None .text      __mi__4cXyzCFRC3Vec                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator-(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__mi__4cXyzCFRC3Vec.s"
}
#pragma pop


/* 80266B84-80266BD0 004C+00 s=1 e=99 z=158  None .text      __ml__4cXyzCFf                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator*(f32 param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__ml__4cXyzCFf.s"
}
#pragma pop


/* 80266BD0-80266C18 0048+00 s=0 e=7 z=0  None .text      __ml__4cXyzCFRC3Vec                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator*(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__ml__4cXyzCFRC3Vec.s"
}
#pragma pop


/* ############################################################################################## */
/* 80455070-80455074 0004+00 s=3 e=0 z=0  None .sdata2    @2201                                                        */
SECTION_SDATA2 static u32 lit_2201 = 0x3F800000;

/* 80266C18-80266C6C 0054+00 s=0 e=3 z=12  None .text      __dv__4cXyzCFf                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator/(f32 param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__dv__4cXyzCFf.s"
}
#pragma pop


/* 80266C6C-80266CBC 0050+00 s=1 e=0 z=0  None .text      getCrossProduct__4cXyzCFRC3Vec                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::getCrossProduct(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/getCrossProduct__4cXyzCFRC3Vec.s"
}
#pragma pop


/* 80266CBC-80266CE4 0028+00 s=0 e=7 z=6  None .text      outprod__4cXyzCFRC3Vec                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::outprod(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/outprod__4cXyzCFRC3Vec.s"
}
#pragma pop


/* 80266CE4-80266D30 004C+00 s=0 e=10 z=1  None .text      norm__4cXyzCFv                                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::norm() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/norm__4cXyzCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80430CE8-80430CF4 000C+00 s=1 e=0 z=0  None .bss       @2450                                                        */
static u8 lit_2450[12];

/* 80430CF4-80430D00 000C+00 s=3 e=50 z=42  None .bss       Zero__4cXyz                                                  */
f32 Zero__4cXyz[3];

/* 80455074-80455078 0004+00 s=4 e=0 z=0  None .sdata2    @2288                                                        */
SECTION_SDATA2 static u32 lit_2288 = 0x2EAFEBFF;

/* 80266D30-80266DC4 0094+00 s=1 e=4 z=0  None .text      normZP__4cXyzCFv                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::normZP() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/normZP__4cXyzCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 8039A868-8039A878 000C+04 s=1 e=0 z=0  None .rodata    @2299                                                        */
SECTION_RODATA static u8 const lit_2299[12 + 4 /* padding */] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
	/* padding */
	0x00, 0x00, 0x00, 0x00,
};

/* 80455078-8045507C 0004+00 s=1 e=0 z=0  None .sdata2    @2325                                                        */
SECTION_SDATA2 static u32 lit_2325 = 0x3FA00000;

/* 8045507C-80455080 0004+00 s=1 e=0 z=0  None .sdata2    @2326                                                        */
SECTION_SDATA2 static u32 lit_2326 = 0x49742400;

/* 80455080-80455084 0004+00 s=3 e=0 z=0  None .sdata2    @2327                                                        */
SECTION_SDATA2 static u8 lit_2327[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80266DC4-80266EF4 0130+00 s=0 e=0 z=2  None .text      normZC__4cXyzCFv                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::normZC() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/normZC__4cXyzCFv.s"
}
#pragma pop


/* 80266EF4-80266F48 0054+00 s=0 e=13 z=17  None .text      normalize__4cXyzFv                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::normalize() {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/normalize__4cXyzFv.s"
}
#pragma pop


/* 80266F48-80266FDC 0094+00 s=0 e=19 z=59  None .text      normalizeZP__4cXyzFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::normalizeZP() {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/normalizeZP__4cXyzFv.s"
}
#pragma pop


/* 80266FDC-8026702C 0050+00 s=0 e=2 z=3  None .text      normalizeRS__4cXyzFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::normalizeRS() {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/normalizeRS__4cXyzFv.s"
}
#pragma pop


/* 8026702C-8026706C 0040+00 s=0 e=5 z=9  None .text      __eq__4cXyzCFRC3Vec                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cXyz::operator==(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__eq__4cXyzCFRC3Vec.s"
}
#pragma pop


/* 8026706C-802670AC 0040+00 s=0 e=6 z=6  None .text      __ne__4cXyzCFRC3Vec                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cXyz::operator!=(Vec const& param_0) const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__ne__4cXyzCFRC3Vec.s"
}
#pragma pop


/* ############################################################################################## */
/* 80455084-80455088 0004+00 s=1 e=0 z=0  None .sdata2    @2405                                                        */
SECTION_SDATA2 static u32 lit_2405 = 0x42000000;

/* 802670AC-80267128 007C+00 s=0 e=4 z=7  None .text      isZero__4cXyzCFv                                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::isZero() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/isZero__4cXyzCFv.s"
}
#pragma pop


/* 80267128-80267150 0028+00 s=0 e=81 z=85  None .text      atan2sX_Z__4cXyzCFv                                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::atan2sX_Z() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/atan2sX_Z__4cXyzCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80455088-80455090 0008+00 s=1 e=0 z=0  None .sdata2    @2446                                                        */
SECTION_SDATA2 static u8 lit_2446[8] = {
	0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455090-80455098 0008+00 s=1 e=0 z=0  None .sdata2    @2447                                                        */
SECTION_SDATA2 static u8 lit_2447[8] = {
	0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455098-804550A0 0008+00 s=1 e=0 z=0  None .sdata2    @2448                                                        */
SECTION_SDATA2 static u8 lit_2448[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80267150-80267290 0140+00 s=0 e=21 z=33  None .text      atan2sY_XZ__4cXyzCFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::atan2sY_XZ() const {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/atan2sY_XZ__4cXyzCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80430D00-80430D0C 000C+00 s=1 e=0 z=0  None .bss       @2451                                                        */
static u8 lit_2451[12];

/* 80430D0C-80430D18 000C+00 s=1 e=3 z=9  None .bss       BaseX__4cXyz                                                 */
u8 BaseX__4cXyz[12];

/* 80430D18-80430D24 000C+00 s=1 e=0 z=0  None .bss       @2452                                                        */
static u8 lit_2452[12];

/* 80430D24-80430D30 000C+00 s=1 e=14 z=8  None .bss       BaseY__4cXyz                                                 */
u8 BaseY__4cXyz[12];

/* 80430D30-80430D3C 000C+00 s=1 e=0 z=0  None .bss       @2453                                                        */
static u8 lit_2453[12];

/* 80430D3C-80430D48 000C+00 s=1 e=15 z=5  None .bss       BaseZ__4cXyz                                                 */
u8 BaseZ__4cXyz[12];

/* 80430D48-80430D54 000C+00 s=1 e=0 z=0  None .bss       @2454                                                        */
static u8 lit_2454[12];

/* 80430D54-80430D60 000C+00 s=1 e=0 z=0  None .bss       BaseXY__4cXyz                                                */
static u8 BaseXY__4cXyz[12];

/* 80430D60-80430D6C 000C+00 s=1 e=0 z=0  None .bss       @2455                                                        */
static u8 lit_2455[12];

/* 80430D6C-80430D78 000C+00 s=1 e=0 z=0  None .bss       BaseXZ__4cXyz                                                */
static u8 BaseXZ__4cXyz[12];

/* 80430D78-80430D84 000C+00 s=1 e=0 z=0  None .bss       @2456                                                        */
static u8 lit_2456[12];

/* 80430D84-80430D90 000C+00 s=1 e=0 z=0  None .bss       BaseYZ__4cXyz                                                */
static u8 BaseYZ__4cXyz[12];

/* 80430D90-80430D9C 000C+00 s=1 e=0 z=0  None .bss       @2457                                                        */
static u8 lit_2457[12];

/* 80430D9C-80430DA8 000C+00 s=1 e=0 z=0  None .bss       BaseXYZ__4cXyz                                               */
static u8 BaseXYZ__4cXyz[12];

/* 80267290-802673F4 0164+00 s=0 e=1 z=0  None .text      __sinit_c_xyz_cpp                                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_c_xyz_cpp() {
	nofralloc
#include "asm/SSystem/SComponent/c_xyz/__sinit_c_xyz_cpp.s"
}
#pragma pop


