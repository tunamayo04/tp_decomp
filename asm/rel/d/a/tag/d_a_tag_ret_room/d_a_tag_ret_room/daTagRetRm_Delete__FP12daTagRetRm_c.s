lbl_80D5F1A0:
/* 80D5F1A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D5F1A4  7C 08 02 A6 */	mflr r0
/* 80D5F1A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D5F1AC  4B FF FD E1 */	bl Delete__12daTagRetRm_cFv
/* 80D5F1B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D5F1B4  7C 08 03 A6 */	mtlr r0
/* 80D5F1B8  38 21 00 10 */	addi r1, r1, 0x10
/* 80D5F1BC  4E 80 00 20 */	blr 
