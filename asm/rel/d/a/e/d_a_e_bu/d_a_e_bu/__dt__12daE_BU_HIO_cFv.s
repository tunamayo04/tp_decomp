lbl_806941D4:
/* 806941D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806941D8  7C 08 02 A6 */	mflr r0
/* 806941DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 806941E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806941E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 806941E8  41 82 00 1C */	beq lbl_80694204
/* 806941EC  3C A0 80 69 */	lis r5, __vt__12daE_BU_HIO_c@ha
/* 806941F0  38 05 49 40 */	addi r0, r5, __vt__12daE_BU_HIO_c@l
/* 806941F4  90 1F 00 00 */	stw r0, 0(r31)
/* 806941F8  7C 80 07 35 */	extsh. r0, r4
/* 806941FC  40 81 00 08 */	ble lbl_80694204
/* 80694200  4B C3 AB 3C */	b __dl__FPv
lbl_80694204:
/* 80694204  7F E3 FB 78 */	mr r3, r31
/* 80694208  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8069420C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80694210  7C 08 03 A6 */	mtlr r0
/* 80694214  38 21 00 10 */	addi r1, r1, 0x10
/* 80694218  4E 80 00 20 */	blr 
