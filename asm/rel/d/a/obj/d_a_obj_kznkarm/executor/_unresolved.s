lbl_80C4F838:
/* 80C4F838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C4F83C  7C 08 02 A6 */	mflr r0
/* 80C4F840  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C4F844  4B 61 38 4C */	b ModuleUnresolved
/* 80C4F848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C4F84C  7C 08 03 A6 */	mtlr r0
/* 80C4F850  38 21 00 10 */	addi r1, r1, 0x10
/* 80C4F854  4E 80 00 20 */	blr 
