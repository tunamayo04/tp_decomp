lbl_80A9C1F8:
/* 80A9C1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A9C1FC  7C 08 02 A6 */	mflr r0
/* 80A9C200  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9C204  4B 7C 6E 8C */	b ModuleUnresolved
/* 80A9C208  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A9C20C  7C 08 03 A6 */	mtlr r0
/* 80A9C210  38 21 00 10 */	addi r1, r1, 0x10
/* 80A9C214  4E 80 00 20 */	blr 
