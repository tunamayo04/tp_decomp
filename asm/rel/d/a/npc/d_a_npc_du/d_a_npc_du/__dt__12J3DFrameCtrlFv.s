lbl_809B13C8:
/* 809B13C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809B13CC  7C 08 02 A6 */	mflr r0
/* 809B13D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809B13D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809B13D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 809B13DC  41 82 00 1C */	beq lbl_809B13F8
/* 809B13E0  3C A0 80 9B */	lis r5, __vt__12J3DFrameCtrl@ha
/* 809B13E4  38 05 19 C8 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 809B13E8  90 1F 00 00 */	stw r0, 0(r31)
/* 809B13EC  7C 80 07 35 */	extsh. r0, r4
/* 809B13F0  40 81 00 08 */	ble lbl_809B13F8
/* 809B13F4  4B 91 D9 48 */	b __dl__FPv
lbl_809B13F8:
/* 809B13F8  7F E3 FB 78 */	mr r3, r31
/* 809B13FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809B1400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809B1404  7C 08 03 A6 */	mtlr r0
/* 809B1408  38 21 00 10 */	addi r1, r1, 0x10
/* 809B140C  4E 80 00 20 */	blr 
