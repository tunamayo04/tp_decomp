lbl_80B49010:
/* 80B49010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B49014  7C 08 02 A6 */	mflr r0
/* 80B49018  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B4901C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B49020  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B49024  41 82 00 1C */	beq lbl_80B49040
/* 80B49028  3C A0 80 B5 */	lis r5, __vt__12J3DFrameCtrl@ha
/* 80B4902C  38 05 99 60 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 80B49030  90 1F 00 00 */	stw r0, 0(r31)
/* 80B49034  7C 80 07 35 */	extsh. r0, r4
/* 80B49038  40 81 00 08 */	ble lbl_80B49040
/* 80B4903C  4B 78 5D 00 */	b __dl__FPv
lbl_80B49040:
/* 80B49040  7F E3 FB 78 */	mr r3, r31
/* 80B49044  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B49048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B4904C  7C 08 03 A6 */	mtlr r0
/* 80B49050  38 21 00 10 */	addi r1, r1, 0x10
/* 80B49054  4E 80 00 20 */	blr 
