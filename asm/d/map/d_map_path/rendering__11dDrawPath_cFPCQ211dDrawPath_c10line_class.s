lbl_8003C94C:
/* 8003C94C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8003C950  7C 08 02 A6 */	mflr r0
/* 8003C954  90 01 00 24 */	stw r0, 0x24(r1)
/* 8003C958  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8003C95C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8003C960  7C 7E 1B 78 */	mr r30, r3
/* 8003C964  7C 9F 23 78 */	mr r31, r4
/* 8003C968  88 84 00 00 */	lbz r4, 0(r4)
/* 8003C96C  81 83 00 00 */	lwz r12, 0(r3)
/* 8003C970  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8003C974  7D 89 03 A6 */	mtctr r12
/* 8003C978  4E 80 04 21 */	bctrl 
/* 8003C97C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8003C980  41 82 00 A8 */	beq lbl_8003CA28
/* 8003C984  7F C3 F3 78 */	mr r3, r30
/* 8003C988  88 9F 00 01 */	lbz r4, 1(r31)
/* 8003C98C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8003C990  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8003C994  7D 89 03 A6 */	mtctr r12
/* 8003C998  4E 80 04 21 */	bctrl 
/* 8003C99C  2C 03 00 00 */	cmpwi r3, 0
/* 8003C9A0  40 81 00 88 */	ble lbl_8003CA28
/* 8003C9A4  88 1F 00 02 */	lbz r0, 2(r31)
/* 8003C9A8  28 00 00 02 */	cmplwi r0, 2
/* 8003C9AC  41 80 00 7C */	blt lbl_8003CA28
/* 8003C9B0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8003C9B4  38 80 00 00 */	li r4, 0
/* 8003C9B8  48 31 FF 05 */	bl GXSetLineWidth
/* 8003C9BC  7F C3 F3 78 */	mr r3, r30
/* 8003C9C0  88 1F 00 00 */	lbz r0, 0(r31)
/* 8003C9C4  54 04 06 BE */	clrlwi r4, r0, 0x1a
/* 8003C9C8  88 BF 00 01 */	lbz r5, 1(r31)
/* 8003C9CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8003C9D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8003C9D4  7D 89 03 A6 */	mtctr r12
/* 8003C9D8  4E 80 04 21 */	bctrl 
/* 8003C9DC  80 03 00 00 */	lwz r0, 0(r3)
/* 8003C9E0  90 01 00 08 */	stw r0, 8(r1)
/* 8003C9E4  38 60 00 01 */	li r3, 1
/* 8003C9E8  38 81 00 08 */	addi r4, r1, 8
/* 8003C9EC  48 32 29 91 */	bl GXSetTevColor
/* 8003C9F0  38 60 00 B0 */	li r3, 0xb0
/* 8003C9F4  38 80 00 00 */	li r4, 0
/* 8003C9F8  88 BF 00 02 */	lbz r5, 2(r31)
/* 8003C9FC  48 31 FD 69 */	bl GXBegin
/* 8003CA00  80 9F 00 04 */	lwz r4, 4(r31)
/* 8003CA04  3C 60 CC 01 */	lis r3, 0xcc01
/* 8003CA08  88 1F 00 02 */	lbz r0, 2(r31)
/* 8003CA0C  7C 09 03 A6 */	mtctr r0
/* 8003CA10  2C 00 00 00 */	cmpwi r0, 0
/* 8003CA14  40 81 00 14 */	ble lbl_8003CA28
lbl_8003CA18:
/* 8003CA18  A0 04 00 00 */	lhz r0, 0(r4)
/* 8003CA1C  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 8003CA20  38 84 00 02 */	addi r4, r4, 2
/* 8003CA24  42 00 FF F4 */	bdnz lbl_8003CA18
lbl_8003CA28:
/* 8003CA28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8003CA2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8003CA30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8003CA34  7C 08 03 A6 */	mtlr r0
/* 8003CA38  38 21 00 20 */	addi r1, r1, 0x20
/* 8003CA3C  4E 80 00 20 */	blr 
