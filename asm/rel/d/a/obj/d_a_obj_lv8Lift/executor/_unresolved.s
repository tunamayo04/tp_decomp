lbl_80C88698:
/* 80C88698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8869C  7C 08 02 A6 */	mflr r0
/* 80C886A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C886A4  4B 5D A9 EC */	b ModuleUnresolved
/* 80C886A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C886AC  7C 08 03 A6 */	mtlr r0
/* 80C886B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80C886B4  4E 80 00 20 */	blr 
