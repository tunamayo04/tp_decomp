lbl_802D13D8:
/* 802D13D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D13DC  7C 08 02 A6 */	mflr r0
/* 802D13E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D13E4  38 80 FF FF */	li r4, -1
/* 802D13E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D13EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D13F0  7D 89 03 A6 */	mtctr r12
/* 802D13F4  4E 80 04 21 */	bctrl 
/* 802D13F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D13FC  7C 08 03 A6 */	mtlr r0
/* 802D1400  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1404  4E 80 00 20 */	blr 
