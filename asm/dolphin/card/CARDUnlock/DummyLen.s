lbl_803541D4:
/* 803541D4  7C 08 02 A6 */	mflr r0
/* 803541D8  90 01 00 04 */	stw r0, 4(r1)
/* 803541DC  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 803541E0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803541E4  93 C1 00 20 */	stw r30, 0x20(r1)
/* 803541E8  3B C0 00 01 */	li r30, 1
/* 803541EC  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 803541F0  3B A0 00 00 */	li r29, 0
/* 803541F4  4B FE E5 21 */	bl OSGetTick
/* 803541F8  90 6D 84 E8 */	stw r3, next(r13)
/* 803541FC  3C 60 41 C6 */	lis r3, 0x41C6 /* 0x41C64E6D@ha */
/* 80354200  3B E3 4E 6D */	addi r31, r3, 0x4E6D /* 0x41C64E6D@l */
/* 80354204  80 0D 84 E8 */	lwz r0, next(r13)
/* 80354208  7C 60 F9 D6 */	mullw r3, r0, r31
/* 8035420C  38 03 30 39 */	addi r0, r3, 0x3039
/* 80354210  90 0D 84 E8 */	stw r0, next(r13)
/* 80354214  80 0D 84 E8 */	lwz r0, next(r13)
/* 80354218  54 03 86 FE */	rlwinm r3, r0, 0x10, 0x1b, 0x1f
/* 8035421C  38 63 00 01 */	addi r3, r3, 1
/* 80354220  48 00 00 40 */	b lbl_80354260
lbl_80354224:
/* 80354224  4B FE E4 F1 */	bl OSGetTick
/* 80354228  7C 60 F0 30 */	slw r0, r3, r30
/* 8035422C  3B DE 00 01 */	addi r30, r30, 1
/* 80354230  28 1E 00 10 */	cmplwi r30, 0x10
/* 80354234  40 81 00 08 */	ble lbl_8035423C
/* 80354238  3B C0 00 01 */	li r30, 1
lbl_8035423C:
/* 8035423C  90 0D 84 E8 */	stw r0, next(r13)
/* 80354240  3B BD 00 01 */	addi r29, r29, 1
/* 80354244  80 0D 84 E8 */	lwz r0, next(r13)
/* 80354248  7C 60 F9 D6 */	mullw r3, r0, r31
/* 8035424C  38 03 30 39 */	addi r0, r3, 0x3039
/* 80354250  90 0D 84 E8 */	stw r0, next(r13)
/* 80354254  80 0D 84 E8 */	lwz r0, next(r13)
/* 80354258  54 03 86 FE */	rlwinm r3, r0, 0x10, 0x1b, 0x1f
/* 8035425C  38 63 00 01 */	addi r3, r3, 1
lbl_80354260:
/* 80354260  2C 03 00 04 */	cmpwi r3, 4
/* 80354264  40 80 00 0C */	bge lbl_80354270
/* 80354268  28 1D 00 0A */	cmplwi r29, 0xa
/* 8035426C  41 80 FF B8 */	blt lbl_80354224
lbl_80354270:
/* 80354270  2C 03 00 04 */	cmpwi r3, 4
/* 80354274  40 80 00 08 */	bge lbl_8035427C
/* 80354278  38 60 00 04 */	li r3, 4
lbl_8035427C:
/* 8035427C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80354280  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 80354284  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 80354288  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 8035428C  38 21 00 28 */	addi r1, r1, 0x28
/* 80354290  7C 08 03 A6 */	mtlr r0
/* 80354294  4E 80 00 20 */	blr 
