lbl_80339634:
/* 80339634  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80339638  7C 08 02 A6 */	mflr r0
/* 8033963C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80339640  39 61 00 20 */	addi r11, r1, 0x20
/* 80339644  48 02 8B 99 */	bl _savegpr_29
/* 80339648  7C 9E 23 78 */	mr r30, r4
/* 8033964C  7C BF 2B 78 */	mr r31, r5
/* 80339650  A8 05 00 0A */	lha r0, 0xa(r5)
/* 80339654  B0 04 00 06 */	sth r0, 6(r4)
/* 80339658  88 05 00 08 */	lbz r0, 8(r5)
/* 8033965C  98 04 00 04 */	stb r0, 4(r4)
/* 80339660  C0 02 CA C0 */	lfs f0, lit_889(r2)
/* 80339664  D0 04 00 08 */	stfs f0, 8(r4)
/* 80339668  A0 05 00 0C */	lhz r0, 0xc(r5)
/* 8033966C  B0 04 00 0C */	sth r0, 0xc(r4)
/* 80339670  A0 05 00 0E */	lhz r0, 0xe(r5)
/* 80339674  B0 04 00 0E */	sth r0, 0xe(r4)
/* 80339678  7F E3 FB 78 */	mr r3, r31
/* 8033967C  80 85 00 18 */	lwz r4, 0x18(r5)
/* 80339680  4B FD 0E 81 */	bl func_8030A500
/* 80339684  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80339688  7F E3 FB 78 */	mr r3, r31
/* 8033968C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80339690  4B FD 0E 71 */	bl func_8030A500
/* 80339694  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 80339698  7F E3 FB 78 */	mr r3, r31
/* 8033969C  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 803396A0  4B FD 0E 49 */	bl func_8030A4E8
/* 803396A4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803396A8  7F E3 FB 78 */	mr r3, r31
/* 803396AC  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 803396B0  4B FD 0E 39 */	bl func_8030A4E8
/* 803396B4  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803396B8  7F E3 FB 78 */	mr r3, r31
/* 803396BC  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 803396C0  4B FB AC 01 */	bl func_802F42C0
/* 803396C4  7C 7D 1B 78 */	mr r29, r3
/* 803396C8  7F E3 FB 78 */	mr r3, r31
/* 803396CC  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 803396D0  4B FB AB F1 */	bl func_802F42C0
/* 803396D4  38 E0 00 00 */	li r7, 0
/* 803396D8  38 80 00 00 */	li r4, 0
/* 803396DC  48 00 00 24 */	b lbl_80339700
lbl_803396E0:
/* 803396E0  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 803396E4  38 C4 00 04 */	addi r6, r4, 4
/* 803396E8  7C 05 30 2E */	lwzx r0, r5, r6
/* 803396EC  54 00 08 3C */	slwi r0, r0, 1
/* 803396F0  7C 1D 02 14 */	add r0, r29, r0
/* 803396F4  7C 05 31 2E */	stwx r0, r5, r6
/* 803396F8  38 E7 00 01 */	addi r7, r7, 1
/* 803396FC  38 84 00 08 */	addi r4, r4, 8
lbl_80339700:
/* 80339700  A0 1E 00 0C */	lhz r0, 0xc(r30)
/* 80339704  7C 07 00 00 */	cmpw r7, r0
/* 80339708  41 80 FF D8 */	blt lbl_803396E0
/* 8033970C  38 E0 00 00 */	li r7, 0
/* 80339710  38 80 00 00 */	li r4, 0
/* 80339714  48 00 00 24 */	b lbl_80339738
lbl_80339718:
/* 80339718  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8033971C  38 C4 00 04 */	addi r6, r4, 4
/* 80339720  7C 05 30 2E */	lwzx r0, r5, r6
/* 80339724  54 00 08 3C */	slwi r0, r0, 1
/* 80339728  7C 03 02 14 */	add r0, r3, r0
/* 8033972C  7C 05 31 2E */	stwx r0, r5, r6
/* 80339730  38 E7 00 01 */	addi r7, r7, 1
/* 80339734  38 84 00 08 */	addi r4, r4, 8
lbl_80339738:
/* 80339738  A0 1E 00 0E */	lhz r0, 0xe(r30)
/* 8033973C  7C 07 00 00 */	cmpw r7, r0
/* 80339740  41 80 FF D8 */	blt lbl_80339718
/* 80339744  7F E3 FB 78 */	mr r3, r31
/* 80339748  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 8033974C  4B FD 0D FD */	bl func_8030A548
/* 80339750  90 7E 00 20 */	stw r3, 0x20(r30)
/* 80339754  7F E3 FB 78 */	mr r3, r31
/* 80339758  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8033975C  4B FD 0D ED */	bl func_8030A548
/* 80339760  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80339764  7F E3 FB 78 */	mr r3, r31
/* 80339768  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8033976C  4B FD 0D DD */	bl func_8030A548
/* 80339770  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80339774  7F E3 FB 78 */	mr r3, r31
/* 80339778  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8033977C  4B FD 0D CD */	bl func_8030A548
/* 80339780  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80339784  39 61 00 20 */	addi r11, r1, 0x20
/* 80339788  48 02 8A A1 */	bl _restgpr_29
/* 8033978C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80339790  7C 08 03 A6 */	mtlr r0
/* 80339794  38 21 00 20 */	addi r1, r1, 0x20
/* 80339798  4E 80 00 20 */	blr 
