// 
// Generated By: dol2asm
// Translation Unit: fvb-data-parse
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JStudio/JStudio/fvb-data-parse.h"

// 
// Types:
// 

namespace JStudio {
	namespace fvb {
		struct data {
			struct TParse_TParagraph {
				struct TData {
				};

				/* 802850AC */ void getData(JStudio::fvb::data::TParse_TParagraph::TData*) const;
			};

		};

	};

};

namespace JGadget {
	struct binary {
		struct TEBit {
		};

		/* 802DC864 */ void parseVariableUInt_16_32_following(void const*, u32*, u32*, JGadget::binary::TEBit*);
	};

};

// 
// Forward References:
// 


extern "C" void getData__Q47JStudio3fvb4data17TParse_TParagraphCFPQ57JStudio3fvb4data17TParse_TParagraph5TData();

// 
// External References:
// 


extern "C" void parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit();

// 
// Declarations:
// 

/* 802850AC-80285114 0068+00 s=0 e=1 z=0  None .text      getData__Q47JStudio3fvb4data17TParse_TParagraphCFPQ57JStudio3fvb4data17TParse_TParagraph5TData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::fvb::data::TParse_TParagraph::getData(JStudio::fvb::data::TParse_TParagraph::TData* param_0) const {
	nofralloc
#include "asm/JSystem/JStudio/JStudio/fvb-data-parse/func_802850AC.s"
}
#pragma pop


