lbl_80570190:
/* 80570190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80570194  7C 08 02 A6 */	mflr r0
/* 80570198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057019C  4B FF 67 75 */	bl Delete__12daNpc_Taro_cFv
/* 805701A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805701A4  7C 08 03 A6 */	mtlr r0
/* 805701A8  38 21 00 10 */	addi r1, r1, 0x10
/* 805701AC  4E 80 00 20 */	blr 
