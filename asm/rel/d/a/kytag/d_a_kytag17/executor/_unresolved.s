lbl_8046DB38:
/* 8046DB38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046DB3C  7C 08 02 A6 */	mflr r0
/* 8046DB40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046DB44  4B DF 55 4C */	b ModuleUnresolved
/* 8046DB48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046DB4C  7C 08 03 A6 */	mtlr r0
/* 8046DB50  38 21 00 10 */	addi r1, r1, 0x10
/* 8046DB54  4E 80 00 20 */	blr 
