lbl_80784700:
/* 80784700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80784704  7C 08 02 A6 */	mflr r0
/* 80784708  90 01 00 14 */	stw r0, 0x14(r1)
/* 8078470C  4B FF FE CD */	bl Delete__8daE_SB_cFv
/* 80784710  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80784714  7C 08 03 A6 */	mtlr r0
/* 80784718  38 21 00 10 */	addi r1, r1, 0x10
/* 8078471C  4E 80 00 20 */	blr 
