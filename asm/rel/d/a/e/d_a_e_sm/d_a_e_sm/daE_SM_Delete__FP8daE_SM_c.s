lbl_807974F0:
/* 807974F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807974F4  7C 08 02 A6 */	mflr r0
/* 807974F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 807974FC  48 00 00 75 */	bl Delete__8daE_SM_cFv
/* 80797500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80797504  7C 08 03 A6 */	mtlr r0
/* 80797508  38 21 00 10 */	addi r1, r1, 0x10
/* 8079750C  4E 80 00 20 */	blr 
