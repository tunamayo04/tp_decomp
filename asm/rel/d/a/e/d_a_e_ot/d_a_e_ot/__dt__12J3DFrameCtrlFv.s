lbl_8073C2B4:
/* 8073C2B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8073C2B8  7C 08 02 A6 */	mflr r0
/* 8073C2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8073C2C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8073C2C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8073C2C8  41 82 00 1C */	beq lbl_8073C2E4
/* 8073C2CC  3C A0 80 74 */	lis r5, __vt__12J3DFrameCtrl@ha
/* 8073C2D0  38 05 D2 4C */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 8073C2D4  90 1F 00 00 */	stw r0, 0(r31)
/* 8073C2D8  7C 80 07 35 */	extsh. r0, r4
/* 8073C2DC  40 81 00 08 */	ble lbl_8073C2E4
/* 8073C2E0  4B B9 2A 5C */	b __dl__FPv
lbl_8073C2E4:
/* 8073C2E4  7F E3 FB 78 */	mr r3, r31
/* 8073C2E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8073C2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8073C2F0  7C 08 03 A6 */	mtlr r0
/* 8073C2F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8073C2F8  4E 80 00 20 */	blr 
