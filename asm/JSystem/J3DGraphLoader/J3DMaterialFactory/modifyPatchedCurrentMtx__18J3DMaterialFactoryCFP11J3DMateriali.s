lbl_8033168C:
/* 8033168C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80331690  7C 08 02 A6 */	mflr r0
/* 80331694  90 01 00 64 */	stw r0, 0x64(r1)
/* 80331698  39 61 00 60 */	addi r11, r1, 0x60
/* 8033169C  48 03 0B 35 */	bl _savegpr_26
/* 803316A0  7C 7D 1B 78 */	mr r29, r3
/* 803316A4  7C 9E 23 78 */	mr r30, r4
/* 803316A8  7C BF 2B 78 */	mr r31, r5
/* 803316AC  3C 80 80 3A */	lis r4, j3dDefaultTexCoordInfo@ha
/* 803316B0  38 84 1E FC */	addi r4, r4, j3dDefaultTexCoordInfo@l
/* 803316B4  80 84 00 00 */	lwz r4, 0(r4)
/* 803316B8  90 81 00 10 */	stw r4, 0x10(r1)
/* 803316BC  88 01 00 12 */	lbz r0, 0x12(r1)
/* 803316C0  B0 01 00 14 */	sth r0, 0x14(r1)
/* 803316C4  90 81 00 16 */	stw r4, 0x16(r1)
/* 803316C8  88 01 00 18 */	lbz r0, 0x18(r1)
/* 803316CC  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 803316D0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803316D4  88 01 00 1E */	lbz r0, 0x1e(r1)
/* 803316D8  B0 01 00 20 */	sth r0, 0x20(r1)
/* 803316DC  90 81 00 22 */	stw r4, 0x22(r1)
/* 803316E0  88 01 00 24 */	lbz r0, 0x24(r1)
/* 803316E4  B0 01 00 26 */	sth r0, 0x26(r1)
/* 803316E8  90 81 00 28 */	stw r4, 0x28(r1)
/* 803316EC  88 01 00 2A */	lbz r0, 0x2a(r1)
/* 803316F0  B0 01 00 2C */	sth r0, 0x2c(r1)
/* 803316F4  90 81 00 2E */	stw r4, 0x2e(r1)
/* 803316F8  88 01 00 30 */	lbz r0, 0x30(r1)
/* 803316FC  B0 01 00 32 */	sth r0, 0x32(r1)
/* 80331700  90 81 00 34 */	stw r4, 0x34(r1)
/* 80331704  88 01 00 36 */	lbz r0, 0x36(r1)
/* 80331708  B0 01 00 38 */	sth r0, 0x38(r1)
/* 8033170C  90 81 00 3A */	stw r4, 0x3a(r1)
/* 80331710  88 01 00 3C */	lbz r0, 0x3c(r1)
/* 80331714  B0 01 00 3E */	sth r0, 0x3e(r1)
/* 80331718  7F E4 FB 78 */	mr r4, r31
/* 8033171C  4B FF EB E9 */	bl countTexGens__18J3DMaterialFactoryCFi
/* 80331720  7C 7B 1B 78 */	mr r27, r3
/* 80331724  3B 40 00 00 */	li r26, 0
/* 80331728  3B 81 00 10 */	addi r28, r1, 0x10
/* 8033172C  48 00 00 28 */	b lbl_80331754
lbl_80331730:
/* 80331730  38 61 00 08 */	addi r3, r1, 8
/* 80331734  7F A4 EB 78 */	mr r4, r29
/* 80331738  7F E5 FB 78 */	mr r5, r31
/* 8033173C  48 00 08 A9 */	bl newTexCoord__18J3DMaterialFactoryCFii
/* 80331740  80 61 00 08 */	lwz r3, 8(r1)
/* 80331744  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 80331748  1C 00 00 06 */	mulli r0, r0, 6
/* 8033174C  7C 7C 01 2E */	stwx r3, r28, r0
/* 80331750  3B 5A 00 01 */	addi r26, r26, 1
lbl_80331754:
/* 80331754  57 46 06 3E */	clrlwi r6, r26, 0x18
/* 80331758  7C 06 D8 40 */	cmplw r6, r27
/* 8033175C  41 80 FF D4 */	blt lbl_80331730
/* 80331760  89 41 00 3C */	lbz r10, 0x3c(r1)
/* 80331764  89 21 00 36 */	lbz r9, 0x36(r1)
/* 80331768  89 01 00 30 */	lbz r8, 0x30(r1)
/* 8033176C  88 E1 00 2A */	lbz r7, 0x2a(r1)
/* 80331770  88 81 00 24 */	lbz r4, 0x24(r1)
/* 80331774  88 61 00 1E */	lbz r3, 0x1e(r1)
/* 80331778  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8033177C  88 01 00 12 */	lbz r0, 0x12(r1)
/* 80331780  54 85 C0 0E */	slwi r5, r4, 0x18
/* 80331784  54 64 90 1A */	slwi r4, r3, 0x12
/* 80331788  54 03 30 32 */	slwi r3, r0, 6
/* 8033178C  54 C0 60 26 */	slwi r0, r6, 0xc
/* 80331790  7C 60 03 78 */	or r0, r3, r0
/* 80331794  7C 80 03 78 */	or r0, r4, r0
/* 80331798  7C A0 03 78 */	or r0, r5, r0
/* 8033179C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 803317A0  55 44 90 1A */	slwi r4, r10, 0x12
/* 803317A4  55 23 60 26 */	slwi r3, r9, 0xc
/* 803317A8  55 00 30 32 */	slwi r0, r8, 6
/* 803317AC  7C E0 03 78 */	or r0, r7, r0
/* 803317B0  7C 60 03 78 */	or r0, r3, r0
/* 803317B4  7C 80 03 78 */	or r0, r4, r0
/* 803317B8  90 1E 00 44 */	stw r0, 0x44(r30)
/* 803317BC  39 61 00 60 */	addi r11, r1, 0x60
/* 803317C0  48 03 0A 5D */	bl _restgpr_26
/* 803317C4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803317C8  7C 08 03 A6 */	mtlr r0
/* 803317CC  38 21 00 60 */	addi r1, r1, 0x60
/* 803317D0  4E 80 00 20 */	blr 
