lbl_804BD1AC:
/* 804BD1AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804BD1B0  7C 08 02 A6 */	mflr r0
/* 804BD1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804BD1B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804BD1BC  7C 7F 1B 79 */	or. r31, r3, r3
/* 804BD1C0  41 82 00 10 */	beq lbl_804BD1D0
/* 804BD1C4  7C 80 07 35 */	extsh. r0, r4
/* 804BD1C8  40 81 00 08 */	ble lbl_804BD1D0
/* 804BD1CC  4B E1 1B 70 */	b __dl__FPv
lbl_804BD1D0:
/* 804BD1D0  7F E3 FB 78 */	mr r3, r31
/* 804BD1D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804BD1D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804BD1DC  7C 08 03 A6 */	mtlr r0
/* 804BD1E0  38 21 00 10 */	addi r1, r1, 0x10
/* 804BD1E4  4E 80 00 20 */	blr 
