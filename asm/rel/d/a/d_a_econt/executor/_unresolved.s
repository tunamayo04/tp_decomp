lbl_805194F8:
/* 805194F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805194FC  7C 08 02 A6 */	mflr r0
/* 80519500  90 01 00 14 */	stw r0, 0x14(r1)
/* 80519504  4B D4 9B 8C */	b ModuleUnresolved
/* 80519508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8051950C  7C 08 03 A6 */	mtlr r0
/* 80519510  38 21 00 10 */	addi r1, r1, 0x10
/* 80519514  4E 80 00 20 */	blr 
