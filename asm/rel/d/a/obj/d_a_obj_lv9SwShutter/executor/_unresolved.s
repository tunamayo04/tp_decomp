lbl_80C8CE18:
/* 80C8CE18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8CE1C  7C 08 02 A6 */	mflr r0
/* 80C8CE20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8CE24  4B 5D 62 6C */	b ModuleUnresolved
/* 80C8CE28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C8CE2C  7C 08 03 A6 */	mtlr r0
/* 80C8CE30  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8CE34  4E 80 00 20 */	blr 
