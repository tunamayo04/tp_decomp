lbl_80B75A90:
/* 80B75A90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B75A94  7C 08 02 A6 */	mflr r0
/* 80B75A98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B75A9C  4B FF FA 95 */	bl CreateHeap__13daNpc_Zelda_cFv
/* 80B75AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B75AA4  7C 08 03 A6 */	mtlr r0
/* 80B75AA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80B75AAC  4E 80 00 20 */	blr 
