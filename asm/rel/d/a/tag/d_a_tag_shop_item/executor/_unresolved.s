lbl_80D60B58:
/* 80D60B58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D60B5C  7C 08 02 A6 */	mflr r0
/* 80D60B60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D60B64  4B 50 25 2C */	b ModuleUnresolved
/* 80D60B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D60B6C  7C 08 03 A6 */	mtlr r0
/* 80D60B70  38 21 00 10 */	addi r1, r1, 0x10
/* 80D60B74  4E 80 00 20 */	blr 
