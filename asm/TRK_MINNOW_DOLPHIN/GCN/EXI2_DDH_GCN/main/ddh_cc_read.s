lbl_803724F8:
/* 803724F8  94 21 F7 E0 */	stwu r1, -0x820(r1)
/* 803724FC  7C 08 02 A6 */	mflr r0
/* 80372500  90 01 08 24 */	stw r0, 0x824(r1)
/* 80372504  BF 61 08 0C */	stmw r27, 0x80c(r1)
/* 80372508  7C 7B 1B 78 */	mr r27, r3
/* 8037250C  7C 9E 23 78 */	mr r30, r4
/* 80372510  3B A0 00 00 */	li r29, 0
/* 80372514  80 0D 94 40 */	lwz r0, gIsInitialized(r13)
/* 80372518  2C 00 00 00 */	cmpwi r0, 0
/* 8037251C  40 82 00 0C */	bne lbl_80372528
/* 80372520  38 60 D8 EF */	li r3, -10001
/* 80372524  48 00 00 AC */	b lbl_803725D0
lbl_80372528:
/* 80372528  3C 60 80 3A */	lis r3, lit_342@ha
/* 8037252C  7F C5 F3 78 */	mr r5, r30
/* 80372530  38 83 2D 6C */	addi r4, r3, lit_342@l
/* 80372534  7F C6 F3 78 */	mr r6, r30
/* 80372538  38 60 00 01 */	li r3, 1
/* 8037253C  4C C6 31 82 */	crclr 6
/* 80372540  48 00 07 15 */	bl MWTRACE
/* 80372544  3C 60 80 45 */	lis r3, gRecvCB@ha
/* 80372548  3B E3 00 30 */	addi r31, r3, gRecvCB@l
/* 8037254C  48 00 00 38 */	b lbl_80372584
lbl_80372550:
/* 80372550  3B A0 00 00 */	li r29, 0
/* 80372554  48 00 07 B1 */	bl EXI2_Poll
/* 80372558  7C 7C 1B 79 */	or. r28, r3, r3
/* 8037255C  41 82 00 28 */	beq lbl_80372584
/* 80372560  7F 84 E3 78 */	mr r4, r28
/* 80372564  38 61 00 08 */	addi r3, r1, 8
/* 80372568  48 00 07 A5 */	bl EXI2_ReadN
/* 8037256C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80372570  40 82 00 14 */	bne lbl_80372584
/* 80372574  7F E3 FB 78 */	mr r3, r31
/* 80372578  7F 85 E3 78 */	mr r5, r28
/* 8037257C  38 81 00 08 */	addi r4, r1, 8
/* 80372580  48 00 02 29 */	bl CircleBufferWriteBytes
lbl_80372584:
/* 80372584  7F E3 FB 78 */	mr r3, r31
/* 80372588  48 00 03 79 */	bl CBGetBytesAvailableForRead
/* 8037258C  7C 03 F0 40 */	cmplw r3, r30
/* 80372590  41 80 FF C0 */	blt lbl_80372550
/* 80372594  28 1D 00 00 */	cmplwi r29, 0
/* 80372598  40 82 00 1C */	bne lbl_803725B4
/* 8037259C  3C 60 80 45 */	lis r3, gRecvCB@ha
/* 803725A0  7F 64 DB 78 */	mr r4, r27
/* 803725A4  38 63 00 30 */	addi r3, r3, gRecvCB@l
/* 803725A8  7F C5 F3 78 */	mr r5, r30
/* 803725AC  48 00 00 F5 */	bl CircleBufferReadBytes
/* 803725B0  48 00 00 1C */	b lbl_803725CC
lbl_803725B4:
/* 803725B4  3C 60 80 3A */	lis r3, lit_343@ha
/* 803725B8  7F A5 EB 78 */	mr r5, r29
/* 803725BC  38 83 2D 94 */	addi r4, r3, lit_343@l
/* 803725C0  38 60 00 08 */	li r3, 8
/* 803725C4  4C C6 31 82 */	crclr 6
/* 803725C8  48 00 06 8D */	bl MWTRACE
lbl_803725CC:
/* 803725CC  7F A3 EB 78 */	mr r3, r29
lbl_803725D0:
/* 803725D0  BB 61 08 0C */	lmw r27, 0x80c(r1)
/* 803725D4  80 01 08 24 */	lwz r0, 0x824(r1)
/* 803725D8  7C 08 03 A6 */	mtlr r0
/* 803725DC  38 21 08 20 */	addi r1, r1, 0x820
/* 803725E0  4E 80 00 20 */	blr 
