lbl_802BFFEC:
/* 802BFFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BFFF0  7C 08 02 A6 */	mflr r0
/* 802BFFF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BFFF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BFFFC  93 C1 00 08 */	stw r30, 8(r1)
/* 802C0000  7C 7E 1B 78 */	mr r30, r3
/* 802C0004  7C 9F 23 78 */	mr r31, r4
/* 802C0008  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 802C000C  28 00 00 20 */	cmplwi r0, 0x20
/* 802C0010  40 82 00 24 */	bne lbl_802C0034
/* 802C0014  88 7E 00 1A */	lbz r3, 0x1a(r30)
/* 802C0018  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 802C001C  7C 03 00 40 */	cmplw r3, r0
/* 802C0020  41 80 00 2C */	blt lbl_802C004C
/* 802C0024  80 6D 86 04 */	lwz r3, data_80450B84(r13)
/* 802C0028  38 80 00 01 */	li r4, 1
/* 802C002C  4B FF 43 B5 */	bl setBattleGhostMute__8Z2SeqMgrFb
/* 802C0030  48 00 00 1C */	b lbl_802C004C
lbl_802C0034:
/* 802C0034  88 1E 00 1A */	lbz r0, 0x1a(r30)
/* 802C0038  28 00 00 00 */	cmplwi r0, 0
/* 802C003C  40 82 00 10 */	bne lbl_802C004C
/* 802C0040  38 00 00 00 */	li r0, 0
/* 802C0044  98 1E 00 19 */	stb r0, 0x19(r30)
/* 802C0048  48 00 00 14 */	b lbl_802C005C
lbl_802C004C:
/* 802C004C  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 802C0050  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 802C0054  7C 1F 02 14 */	add r0, r31, r0
/* 802C0058  98 1E 00 19 */	stb r0, 0x19(r30)
lbl_802C005C:
/* 802C005C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C0060  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C0064  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C0068  7C 08 03 A6 */	mtlr r0
/* 802C006C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C0070  4E 80 00 20 */	blr 
