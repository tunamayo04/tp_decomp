lbl_8065268C:
/* 8065268C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80652690  7C 08 02 A6 */	mflr r0
/* 80652694  90 01 00 14 */	stw r0, 0x14(r1)
/* 80652698  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8065269C  7C 7F 1B 79 */	or. r31, r3, r3
/* 806526A0  41 82 00 1C */	beq lbl_806526BC
/* 806526A4  3C A0 80 65 */	lis r5, __vt__15daB_ZANTZ_HIO_c@ha
/* 806526A8  38 05 29 10 */	addi r0, r5, __vt__15daB_ZANTZ_HIO_c@l
/* 806526AC  90 1F 00 00 */	stw r0, 0(r31)
/* 806526B0  7C 80 07 35 */	extsh. r0, r4
/* 806526B4  40 81 00 08 */	ble lbl_806526BC
/* 806526B8  4B C7 C6 84 */	b __dl__FPv
lbl_806526BC:
/* 806526BC  7F E3 FB 78 */	mr r3, r31
/* 806526C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806526C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806526C8  7C 08 03 A6 */	mtlr r0
/* 806526CC  38 21 00 10 */	addi r1, r1, 0x10
/* 806526D0  4E 80 00 20 */	blr 
