//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_floor
//

#include "MSL_C/Math/Double_precision/s_floor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void floor();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80456AF8-80456B00 0050F8 0008+00 1/1 0/0 0/0 .sdata2          @124 */
SECTION_SDATA2 static f64 lit_124 = 1e+300;

/* 80456B00-80456B08 005100 0008+00 1/1 0/0 0/0 .sdata2          @125 */
SECTION_SDATA2 static u8 lit_125[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036C0FC-8036C244 366A3C 0148+00 0/0 5/5 0/0 .text            floor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void floor() {
    nofralloc
#include "asm/MSL_C/Math/Double_precision/s_floor/floor.s"
}
#pragma pop
