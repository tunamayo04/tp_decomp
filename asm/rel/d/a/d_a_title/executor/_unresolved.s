lbl_80D66A78:
/* 80D66A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D66A7C  7C 08 02 A6 */	mflr r0
/* 80D66A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D66A84  4B 4F C6 0C */	b ModuleUnresolved
/* 80D66A88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D66A8C  7C 08 03 A6 */	mtlr r0
/* 80D66A90  38 21 00 10 */	addi r1, r1, 0x10
/* 80D66A94  4E 80 00 20 */	blr 
