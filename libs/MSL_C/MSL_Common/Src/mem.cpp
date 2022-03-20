//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/mem
//

#include "MSL_C/MSL_Common/Src/mem.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __memrchr();
extern "C" void memchr();
extern "C" void memmove();

//
// External References:
//

extern "C" void __copy_longs_rev_unaligned();
extern "C" void __copy_longs_unaligned();
extern "C" void __copy_longs_rev_aligned();
extern "C" void __copy_longs_aligned();

//
// Declarations:
//

/* 8036608C-803660D8 3609CC 004C+00 0/0 19/19 5/5 .text            memcmp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int memcmp(const void*, const void*, size_t) {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem/memcmp.s"
}
#pragma pop

/* 803660D8-80366104 360A18 002C+00 0/0 1/1 0/0 .text            __memrchr */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __memrchr() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem/__memrchr.s"
}
#pragma pop

/* 80366104-80366130 360A44 002C+00 0/0 1/1 0/0 .text            memchr */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void memchr() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem/memchr.s"
}
#pragma pop

/* 80366130-803661FC 360A70 00CC+00 0/0 2/2 0/0 .text            memmove */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void memmove() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem/memmove.s"
}
#pragma pop
