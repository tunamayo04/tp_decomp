lbl_8097830C:
/* 8097830C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80978310  7C 08 02 A6 */	mflr r0
/* 80978314  90 01 00 14 */	stw r0, 0x14(r1)
/* 80978318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8097831C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80978320  41 82 00 1C */	beq lbl_8097833C
/* 80978324  3C A0 80 98 */	lis r5, __vt__12J3DFrameCtrl@ha
/* 80978328  38 05 8A E0 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 8097832C  90 1F 00 00 */	stw r0, 0(r31)
/* 80978330  7C 80 07 35 */	extsh. r0, r4
/* 80978334  40 81 00 08 */	ble lbl_8097833C
/* 80978338  4B 95 6A 04 */	b __dl__FPv
lbl_8097833C:
/* 8097833C  7F E3 FB 78 */	mr r3, r31
/* 80978340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80978344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80978348  7C 08 03 A6 */	mtlr r0
/* 8097834C  38 21 00 10 */	addi r1, r1, 0x10
/* 80978350  4E 80 00 20 */	blr 
