lbl_8076BD38:
/* 8076BD38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8076BD3C  7C 08 02 A6 */	mflr r0
/* 8076BD40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8076BD44  4B AF 73 4C */	b ModuleUnresolved
/* 8076BD48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8076BD4C  7C 08 03 A6 */	mtlr r0
/* 8076BD50  38 21 00 10 */	addi r1, r1, 0x10
/* 8076BD54  4E 80 00 20 */	blr 
