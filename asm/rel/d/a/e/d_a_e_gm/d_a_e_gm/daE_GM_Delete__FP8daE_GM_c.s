lbl_806D6AA8:
/* 806D6AA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806D6AAC  7C 08 02 A6 */	mflr r0
/* 806D6AB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806D6AB4  4B FF FE CD */	bl _delete__8daE_GM_cFv
/* 806D6AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806D6ABC  7C 08 03 A6 */	mtlr r0
/* 806D6AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 806D6AC4  4E 80 00 20 */	blr 
