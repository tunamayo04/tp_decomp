lbl_80B667B4:
/* 80B667B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B667B8  7C 08 02 A6 */	mflr r0
/* 80B667BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B667C0  4B FF 8F F9 */	bl Execute__11daNpc_ykW_cFv
/* 80B667C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B667C8  7C 08 03 A6 */	mtlr r0
/* 80B667CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80B667D0  4E 80 00 20 */	blr 
