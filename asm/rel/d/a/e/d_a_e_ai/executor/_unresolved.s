lbl_806790D8:
/* 806790D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806790DC  7C 08 02 A6 */	mflr r0
/* 806790E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806790E4  4B BE 9F AC */	b ModuleUnresolved
/* 806790E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806790EC  7C 08 03 A6 */	mtlr r0
/* 806790F0  38 21 00 10 */	addi r1, r1, 0x10
/* 806790F4  4E 80 00 20 */	blr 
