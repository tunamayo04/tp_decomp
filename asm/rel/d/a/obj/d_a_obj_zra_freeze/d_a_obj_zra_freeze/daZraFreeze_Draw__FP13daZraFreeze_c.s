lbl_80D44AB8:
/* 80D44AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D44ABC  7C 08 02 A6 */	mflr r0
/* 80D44AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D44AC4  4B FF FF 1D */	bl Draw__13daZraFreeze_cFv
/* 80D44AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D44ACC  7C 08 03 A6 */	mtlr r0
/* 80D44AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80D44AD4  4E 80 00 20 */	blr 
