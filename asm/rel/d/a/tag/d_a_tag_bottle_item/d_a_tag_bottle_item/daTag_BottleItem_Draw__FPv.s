lbl_80D565C8:
/* 80D565C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D565CC  7C 08 02 A6 */	mflr r0
/* 80D565D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D565D4  4B FF FA FD */	bl Draw__18daTag_BottleItem_cFv
/* 80D565D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D565DC  7C 08 03 A6 */	mtlr r0
/* 80D565E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80D565E4  4E 80 00 20 */	blr 
