lbl_80B739B0:
/* 80B739B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B739B4  7C 08 02 A6 */	mflr r0
/* 80B739B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B739BC  4B FF EE 29 */	bl Delete__13daNpc_ZelRo_cFv
/* 80B739C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B739C4  7C 08 03 A6 */	mtlr r0
/* 80B739C8  38 21 00 10 */	addi r1, r1, 0x10
/* 80B739CC  4E 80 00 20 */	blr 
