lbl_80AA0298:
/* 80AA0298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AA029C  7C 08 02 A6 */	mflr r0
/* 80AA02A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AA02A4  4B FF C9 69 */	bl Execute__18daNpc_Pachi_Taro_cFv
/* 80AA02A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AA02AC  7C 08 03 A6 */	mtlr r0
/* 80AA02B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80AA02B4  4E 80 00 20 */	blr 
