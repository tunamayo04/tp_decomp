lbl_802F99E8:
/* 802F99E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F99EC  7C 08 02 A6 */	mflr r0
/* 802F99F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F99F4  39 00 00 00 */	li r8, 0
/* 802F99F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F99FC  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 802F9A00  7D 89 03 A6 */	mtctr r12
/* 802F9A04  4E 80 04 21 */	bctrl 
/* 802F9A08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9A0C  7C 08 03 A6 */	mtlr r0
/* 802F9A10  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9A14  4E 80 00 20 */	blr 
