lbl_80820DB0:
/* 80820DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80820DB4  7C 08 02 A6 */	mflr r0
/* 80820DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80820DBC  4B FF FD 35 */	bl CreateHeap__9daE_YMB_cFv
/* 80820DC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80820DC4  7C 08 03 A6 */	mtlr r0
/* 80820DC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80820DCC  4E 80 00 20 */	blr 
