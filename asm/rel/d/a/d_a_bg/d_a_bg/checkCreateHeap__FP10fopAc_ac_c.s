lbl_80458298:
/* 80458298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045829C  7C 08 02 A6 */	mflr r0
/* 804582A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 804582A4  48 00 00 15 */	bl createHeap__6daBg_cFv
/* 804582A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804582AC  7C 08 03 A6 */	mtlr r0
/* 804582B0  38 21 00 10 */	addi r1, r1, 0x10
/* 804582B4  4E 80 00 20 */	blr 
