lbl_80AC5058:
/* 80AC5058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AC505C  7C 08 02 A6 */	mflr r0
/* 80AC5060  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AC5064  4B 79 E0 2C */	b ModuleUnresolved
/* 80AC5068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AC506C  7C 08 03 A6 */	mtlr r0
/* 80AC5070  38 21 00 10 */	addi r1, r1, 0x10
/* 80AC5074  4E 80 00 20 */	blr 
