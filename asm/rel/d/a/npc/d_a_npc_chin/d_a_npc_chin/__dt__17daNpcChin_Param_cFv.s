lbl_8099188C:
/* 8099188C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80991890  7C 08 02 A6 */	mflr r0
/* 80991894  90 01 00 14 */	stw r0, 0x14(r1)
/* 80991898  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8099189C  7C 7F 1B 79 */	or. r31, r3, r3
/* 809918A0  41 82 00 1C */	beq lbl_809918BC
/* 809918A4  3C A0 80 99 */	lis r5, __vt__17daNpcChin_Param_c@ha
/* 809918A8  38 05 24 04 */	addi r0, r5, __vt__17daNpcChin_Param_c@l
/* 809918AC  90 1F 00 00 */	stw r0, 0(r31)
/* 809918B0  7C 80 07 35 */	extsh. r0, r4
/* 809918B4  40 81 00 08 */	ble lbl_809918BC
/* 809918B8  4B 93 D4 84 */	b __dl__FPv
lbl_809918BC:
/* 809918BC  7F E3 FB 78 */	mr r3, r31
/* 809918C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809918C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809918C8  7C 08 03 A6 */	mtlr r0
/* 809918CC  38 21 00 10 */	addi r1, r1, 0x10
/* 809918D0  4E 80 00 20 */	blr 
