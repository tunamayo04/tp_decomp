lbl_8094A8D0:
/* 8094A8D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8094A8D4  7C 08 02 A6 */	mflr r0
/* 8094A8D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094A8DC  4B FF BB F1 */	bl execute__8daMyna_cFv
/* 8094A8E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8094A8E4  7C 08 03 A6 */	mtlr r0
/* 8094A8E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8094A8EC  4E 80 00 20 */	blr 
