// 
// Generated By: dol2asm
// Translation Unit: JSUList
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JSupport/JSUList.h"

// 
// Types:
// 

struct JSUPtrLink {
	/* 802DBDFC */ JSUPtrLink(void*);
	/* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
	/* 802DBE74 */ JSUPtrList(bool);
	/* 802DBEAC */ ~JSUPtrList();
	/* 802DBF14 */ void initiate();
	/* 802DBF28 */ void setFirst(JSUPtrLink*);
	/* 802DBF4C */ void append(JSUPtrLink*);
	/* 802DBFF0 */ void prepend(JSUPtrLink*);
	/* 802DC094 */ void insert(JSUPtrLink*, JSUPtrLink*);
	/* 802DC15C */ void remove(JSUPtrLink*);
	/* 802DC20C */ void getNthLink(u32) const;
};

// 
// Forward References:
// 


extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __ct__10JSUPtrListFb();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void setFirst__10JSUPtrListFP10JSUPtrLink();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void getNthLink__10JSUPtrListCFUl();

// 
// External References:
// 

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

// 
// Declarations:
// 

/* 802DBDFC-802DBE14 0018+00 s=0 e=34 z=0  None .text      __ct__10JSUPtrLinkFPv                                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUPtrLink::JSUPtrLink(void* param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/__ct__10JSUPtrLinkFPv.s"
}
#pragma pop


/* 802DBE14-802DBE74 0060+00 s=0 e=27 z=0  None .text      __dt__10JSUPtrLinkFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUPtrLink::~JSUPtrLink() {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/__dt__10JSUPtrLinkFv.s"
}
#pragma pop


/* 802DBE74-802DBEAC 0038+00 s=0 e=4 z=0  None .text      __ct__10JSUPtrListFb                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUPtrList::JSUPtrList(bool param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/__ct__10JSUPtrListFb.s"
}
#pragma pop


/* 802DBEAC-802DBF14 0068+00 s=0 e=25 z=0  None .text      __dt__10JSUPtrListFv                                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUPtrList::~JSUPtrList() {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/__dt__10JSUPtrListFv.s"
}
#pragma pop


/* 802DBF14-802DBF28 0014+00 s=1 e=27 z=0  None .text      initiate__10JSUPtrListFv                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::initiate() {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/initiate__10JSUPtrListFv.s"
}
#pragma pop


/* 802DBF28-802DBF4C 0024+00 s=2 e=0 z=0  None .text      setFirst__10JSUPtrListFP10JSUPtrLink                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::setFirst(JSUPtrLink* param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/setFirst__10JSUPtrListFP10JSUPtrLink.s"
}
#pragma pop


/* 802DBF4C-802DBFF0 00A4+00 s=1 e=29 z=0  None .text      append__10JSUPtrListFP10JSUPtrLink                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::append(JSUPtrLink* param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/append__10JSUPtrListFP10JSUPtrLink.s"
}
#pragma pop


/* 802DBFF0-802DC094 00A4+00 s=1 e=8 z=0  None .text      prepend__10JSUPtrListFP10JSUPtrLink                          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::prepend(JSUPtrLink* param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/prepend__10JSUPtrListFP10JSUPtrLink.s"
}
#pragma pop


/* 802DC094-802DC15C 00C8+00 s=0 e=4 z=0  None .text      insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::insert(JSUPtrLink* param_0, JSUPtrLink* param_1) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink.s"
}
#pragma pop


/* 802DC15C-802DC20C 00B0+00 s=4 e=31 z=0  None .text      remove__10JSUPtrListFP10JSUPtrLink                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::remove(JSUPtrLink* param_0) {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/remove__10JSUPtrListFP10JSUPtrLink.s"
}
#pragma pop


/* 802DC20C-802DC23C 0030+00 s=0 e=3 z=0  None .text      getNthLink__10JSUPtrListCFUl                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUPtrList::getNthLink(u32 param_0) const {
	nofralloc
#include "asm/JSystem/JSupport/JSUList/getNthLink__10JSUPtrListCFUl.s"
}
#pragma pop


