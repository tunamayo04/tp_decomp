lbl_8027B040:
/* 8027B040  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027B044  7C 08 02 A6 */	mflr r0
/* 8027B048  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027B04C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027B050  93 C1 00 08 */	stw r30, 8(r1)
/* 8027B054  7C 7F 1B 78 */	mr r31, r3
/* 8027B058  80 63 00 04 */	lwz r3, 4(r3)
/* 8027B05C  83 C3 00 28 */	lwz r30, 0x28(r3)
/* 8027B060  38 60 00 01 */	li r3, 1
/* 8027B064  80 9E 00 00 */	lwz r4, 0(r30)
/* 8027B068  80 04 00 08 */	lwz r0, 8(r4)
/* 8027B06C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8027B070  41 82 00 58 */	beq lbl_8027B0C8
/* 8027B074  38 60 00 01 */	li r3, 1
/* 8027B078  38 80 00 01 */	li r4, 1
/* 8027B07C  38 A0 00 04 */	li r5, 4
/* 8027B080  38 C0 00 3C */	li r6, 0x3c
/* 8027B084  38 E0 00 00 */	li r7, 0
/* 8027B088  39 00 00 7D */	li r8, 0x7d
/* 8027B08C  48 0E 0A F1 */	bl GXSetTexCoordGen2
/* 8027B090  80 7E 00 00 */	lwz r3, 0(r30)
/* 8027B094  88 03 00 25 */	lbz r0, 0x25(r3)
/* 8027B098  80 7F 00 04 */	lwz r3, 4(r31)
/* 8027B09C  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8027B0A0  54 00 08 3C */	slwi r0, r0, 1
/* 8027B0A4  7C 03 02 2E */	lhzx r0, r3, r0
/* 8027B0A8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8027B0AC  80 63 00 08 */	lwz r3, 8(r3)
/* 8027B0B0  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8027B0B4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8027B0B8  38 63 00 04 */	addi r3, r3, 4
/* 8027B0BC  38 80 00 02 */	li r4, 2
/* 8027B0C0  48 06 37 81 */	bl load__10JUTTextureF11_GXTexMapID
/* 8027B0C4  38 60 00 02 */	li r3, 2
lbl_8027B0C8:
/* 8027B0C8  80 9E 00 00 */	lwz r4, 0(r30)
/* 8027B0CC  80 04 00 08 */	lwz r0, 8(r4)
/* 8027B0D0  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8027B0D4  41 82 00 50 */	beq lbl_8027B124
/* 8027B0D8  38 80 00 01 */	li r4, 1
/* 8027B0DC  38 A0 00 04 */	li r5, 4
/* 8027B0E0  38 C0 00 3C */	li r6, 0x3c
/* 8027B0E4  38 E0 00 00 */	li r7, 0
/* 8027B0E8  39 00 00 7D */	li r8, 0x7d
/* 8027B0EC  48 0E 0A 91 */	bl GXSetTexCoordGen2
/* 8027B0F0  80 7E 00 00 */	lwz r3, 0(r30)
/* 8027B0F4  88 03 00 26 */	lbz r0, 0x26(r3)
/* 8027B0F8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8027B0FC  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8027B100  54 00 08 3C */	slwi r0, r0, 1
/* 8027B104  7C 03 02 2E */	lhzx r0, r3, r0
/* 8027B108  80 7F 00 08 */	lwz r3, 8(r31)
/* 8027B10C  80 63 00 08 */	lwz r3, 8(r3)
/* 8027B110  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8027B114  7C 63 00 2E */	lwzx r3, r3, r0
/* 8027B118  38 63 00 04 */	addi r3, r3, 4
/* 8027B11C  38 80 00 03 */	li r4, 3
/* 8027B120  48 06 37 21 */	bl load__10JUTTextureF11_GXTexMapID
lbl_8027B124:
/* 8027B124  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027B128  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027B12C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027B130  7C 08 03 A6 */	mtlr r0
/* 8027B134  38 21 00 10 */	addi r1, r1, 0x10
/* 8027B138  4E 80 00 20 */	blr 
