lbl_80564098:
/* 80564098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8056409C  7C 08 02 A6 */	mflr r0
/* 805640A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805640A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805640A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 805640AC  41 82 00 1C */	beq lbl_805640C8
/* 805640B0  3C A0 80 56 */	lis r5, __vt__12J3DFrameCtrl@ha
/* 805640B4  38 05 5C 14 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 805640B8  90 1F 00 00 */	stw r0, 0(r31)
/* 805640BC  7C 80 07 35 */	extsh. r0, r4
/* 805640C0  40 81 00 08 */	ble lbl_805640C8
/* 805640C4  4B D6 AC 78 */	b __dl__FPv
lbl_805640C8:
/* 805640C8  7F E3 FB 78 */	mr r3, r31
/* 805640CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805640D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805640D4  7C 08 03 A6 */	mtlr r0
/* 805640D8  38 21 00 10 */	addi r1, r1, 0x10
/* 805640DC  4E 80 00 20 */	blr 
