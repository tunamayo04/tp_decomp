// 
// Generated By: dol2asm
// Translation Unit: JASSeqReader
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JAudio2/JASSeqReader.h"

// 
// Types:
// 

struct JASSeqReader {
	/* 80296108 */ void init();
	/* 80296148 */ void init(void*);
	/* 8029618C */ void call(u32);
	/* 802961CC */ void loopStart(u32);
	/* 80296210 */ void loopEnd();
	/* 8029627C */ void ret();
	/* 802962B0 */ void readMidiValue();
};

// 
// Forward References:
// 


extern "C" void init__12JASSeqReaderFv();
extern "C" void init__12JASSeqReaderFPv();
extern "C" void call__12JASSeqReaderFUl();
extern "C" void loopStart__12JASSeqReaderFUl();
extern "C" void loopEnd__12JASSeqReaderFv();
extern "C" void ret__12JASSeqReaderFv();
extern "C" void readMidiValue__12JASSeqReaderFv();

// 
// External References:
// 



// 
// Declarations:
// 

/* 80296108-80296148 0040+00 s=0 e=2 z=0  None .text      init__12JASSeqReaderFv                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::init() {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/init__12JASSeqReaderFv.s"
}
#pragma pop


/* 80296148-8029618C 0044+00 s=0 e=1 z=0  None .text      init__12JASSeqReaderFPv                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::init(void* param_0) {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/init__12JASSeqReaderFPv.s"
}
#pragma pop


/* 8029618C-802961CC 0040+00 s=0 e=3 z=0  None .text      call__12JASSeqReaderFUl                                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::call(u32 param_0) {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/call__12JASSeqReaderFUl.s"
}
#pragma pop


/* 802961CC-80296210 0044+00 s=0 e=1 z=0  None .text      loopStart__12JASSeqReaderFUl                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::loopStart(u32 param_0) {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/loopStart__12JASSeqReaderFUl.s"
}
#pragma pop


/* 80296210-8029627C 006C+00 s=0 e=1 z=0  None .text      loopEnd__12JASSeqReaderFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::loopEnd() {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/loopEnd__12JASSeqReaderFv.s"
}
#pragma pop


/* 8029627C-802962B0 0034+00 s=0 e=2 z=0  None .text      ret__12JASSeqReaderFv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::ret() {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/ret__12JASSeqReaderFv.s"
}
#pragma pop


/* 802962B0-8029631C 006C+00 s=0 e=2 z=0  None .text      readMidiValue__12JASSeqReaderFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASSeqReader::readMidiValue() {
	nofralloc
#include "asm/JSystem/JAudio2/JASSeqReader/readMidiValue__12JASSeqReaderFv.s"
}
#pragma pop


