lbl_802CEFAC:
/* 802CEFAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CEFB0  7C 08 02 A6 */	mflr r0
/* 802CEFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CEFB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CEFBC  93 C1 00 08 */	stw r30, 8(r1)
/* 802CEFC0  7C 7E 1B 78 */	mr r30, r3
/* 802CEFC4  88 03 00 6E */	lbz r0, 0x6e(r3)
/* 802CEFC8  28 00 00 00 */	cmplwi r0, 0
/* 802CEFCC  40 82 00 38 */	bne lbl_802CF004
/* 802CEFD0  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 802CEFD4  83 E4 00 0C */	lwz r31, 0xc(r4)
/* 802CEFD8  28 1F 00 00 */	cmplwi r31, 0
/* 802CEFDC  41 82 00 3C */	beq lbl_802CF018
/* 802CEFE0  38 80 FF FF */	li r4, -1
/* 802CEFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CEFE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CEFEC  7D 89 03 A6 */	mtctr r12
/* 802CEFF0  4E 80 04 21 */	bctrl 
/* 802CEFF4  7F C3 F3 78 */	mr r3, r30
/* 802CEFF8  7F E4 FB 78 */	mr r4, r31
/* 802CEFFC  4B FF F5 05 */	bl free__7JKRHeapFPvP7JKRHeap
/* 802CF000  48 00 00 18 */	b lbl_802CF018
lbl_802CF004:
/* 802CF004  38 80 FF FF */	li r4, -1
/* 802CF008  81 83 00 00 */	lwz r12, 0(r3)
/* 802CF00C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CF010  7D 89 03 A6 */	mtctr r12
/* 802CF014  4E 80 04 21 */	bctrl 
lbl_802CF018:
/* 802CF018  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CF01C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CF020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CF024  7C 08 03 A6 */	mtlr r0
/* 802CF028  38 21 00 10 */	addi r1, r1, 0x10
/* 802CF02C  4E 80 00 20 */	blr 
