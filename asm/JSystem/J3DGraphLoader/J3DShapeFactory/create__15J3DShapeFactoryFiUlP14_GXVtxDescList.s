lbl_80337400:
/* 80337400  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80337404  7C 08 02 A6 */	mflr r0
/* 80337408  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033740C  39 61 00 20 */	addi r11, r1, 0x20
/* 80337410  48 02 AD C1 */	bl _savegpr_26
/* 80337414  7C 7B 1B 78 */	mr r27, r3
/* 80337418  7C 9C 23 78 */	mr r28, r4
/* 8033741C  7C BD 2B 78 */	mr r29, r5
/* 80337420  38 60 00 68 */	li r3, 0x68
/* 80337424  4B F9 78 29 */	bl __nw__FUl
/* 80337428  7C 7F 1B 79 */	or. r31, r3, r3
/* 8033742C  41 82 00 2C */	beq lbl_80337458
/* 80337430  3C 80 80 3D */	lis r4, __vt__8J3DShape@ha
/* 80337434  38 04 DC 78 */	addi r0, r4, __vt__8J3DShape@l
/* 80337438  90 1F 00 00 */	stw r0, 0(r31)
/* 8033743C  3C 80 3C F4 */	lis r4, 0x3CF4 /* 0x3CF3CF00@ha */
/* 80337440  38 04 CF 00 */	addi r0, r4, 0xCF00 /* 0x3CF3CF00@l */
/* 80337444  90 1F 00 40 */	stw r0, 0x40(r31)
/* 80337448  3C 80 00 F4 */	lis r4, 0x00F4 /* 0x00F3CF3C@ha */
/* 8033744C  38 04 CF 3C */	addi r0, r4, 0xCF3C /* 0x00F3CF3C@l */
/* 80337450  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80337454  4B FD D6 F5 */	bl initialize__8J3DShapeFv
lbl_80337458:
/* 80337458  80 9B 00 00 */	lwz r4, 0(r27)
/* 8033745C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80337460  57 9E 08 3C */	slwi r30, r28, 1
/* 80337464  7C 03 F2 2E */	lhzx r0, r3, r30
/* 80337468  1C 00 00 28 */	mulli r0, r0, 0x28
/* 8033746C  7C 64 02 14 */	add r3, r4, r0
/* 80337470  A0 03 00 02 */	lhz r0, 2(r3)
/* 80337474  B0 1F 00 0A */	sth r0, 0xa(r31)
/* 80337478  80 9B 00 00 */	lwz r4, 0(r27)
/* 8033747C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80337480  7C 03 F2 2E */	lhzx r0, r3, r30
/* 80337484  1C 00 00 28 */	mulli r0, r0, 0x28
/* 80337488  7C 64 02 14 */	add r3, r4, r0
/* 8033748C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80337490  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80337494  80 BB 00 08 */	lwz r5, 8(r27)
/* 80337498  80 9B 00 00 */	lwz r4, 0(r27)
/* 8033749C  80 7B 00 04 */	lwz r3, 4(r27)
/* 803374A0  7C 03 F2 2E */	lhzx r0, r3, r30
/* 803374A4  1C 00 00 28 */	mulli r0, r0, 0x28
/* 803374A8  7C 64 02 14 */	add r3, r4, r0
/* 803374AC  A0 03 00 04 */	lhz r0, 4(r3)
/* 803374B0  7C 05 02 14 */	add r0, r5, r0
/* 803374B4  90 1F 00 30 */	stw r0, 0x30(r31)
/* 803374B8  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 803374BC  54 03 10 3A */	slwi r3, r0, 2
/* 803374C0  4B F9 78 05 */	bl __nwa__FUl
/* 803374C4  90 7F 00 38 */	stw r3, 0x38(r31)
/* 803374C8  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 803374CC  54 03 10 3A */	slwi r3, r0, 2
/* 803374D0  4B F9 77 F5 */	bl __nwa__FUl
/* 803374D4  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 803374D8  80 9B 00 00 */	lwz r4, 0(r27)
/* 803374DC  80 7B 00 04 */	lwz r3, 4(r27)
/* 803374E0  7C 03 F2 2E */	lhzx r0, r3, r30
/* 803374E4  1C 60 00 28 */	mulli r3, r0, 0x28
/* 803374E8  38 63 00 10 */	addi r3, r3, 0x10
/* 803374EC  7C 64 1A 14 */	add r3, r4, r3
/* 803374F0  C0 03 00 00 */	lfs f0, 0(r3)
/* 803374F4  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803374F8  C0 03 00 04 */	lfs f0, 4(r3)
/* 803374FC  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80337500  C0 03 00 08 */	lfs f0, 8(r3)
/* 80337504  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80337508  80 9B 00 00 */	lwz r4, 0(r27)
/* 8033750C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80337510  7C 03 F2 2E */	lhzx r0, r3, r30
/* 80337514  1C 60 00 28 */	mulli r3, r0, 0x28
/* 80337518  38 63 00 1C */	addi r3, r3, 0x1c
/* 8033751C  7C 64 1A 14 */	add r3, r4, r3
/* 80337520  C0 03 00 00 */	lfs f0, 0(r3)
/* 80337524  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80337528  C0 03 00 04 */	lfs f0, 4(r3)
/* 8033752C  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80337530  C0 03 00 08 */	lfs f0, 8(r3)
/* 80337534  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80337538  80 7B 00 1C */	lwz r3, 0x1c(r27)
/* 8033753C  1C 1C 00 C0 */	mulli r0, r28, 0xc0
/* 80337540  7C 03 02 14 */	add r0, r3, r0
/* 80337544  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80337548  3B 40 00 00 */	li r26, 0
/* 8033754C  3B C0 00 00 */	li r30, 0
/* 80337550  48 00 00 40 */	b lbl_80337590
lbl_80337554:
/* 80337554  7F 63 DB 78 */	mr r3, r27
/* 80337558  7F A4 EB 78 */	mr r4, r29
/* 8033755C  7F 85 E3 78 */	mr r5, r28
/* 80337560  7F 46 D3 78 */	mr r6, r26
/* 80337564  48 00 00 59 */	bl newShapeMtx__15J3DShapeFactoryCFUlii
/* 80337568  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8033756C  7C 64 F1 2E */	stwx r3, r4, r30
/* 80337570  7F 63 DB 78 */	mr r3, r27
/* 80337574  7F 84 E3 78 */	mr r4, r28
/* 80337578  7F 45 D3 78 */	mr r5, r26
/* 8033757C  48 00 02 D1 */	bl newShapeDraw__15J3DShapeFactoryCFii
/* 80337580  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80337584  7C 64 F1 2E */	stwx r3, r4, r30
/* 80337588  3B 5A 00 01 */	addi r26, r26, 1
/* 8033758C  3B DE 00 04 */	addi r30, r30, 4
lbl_80337590:
/* 80337590  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80337594  7C 1A 00 00 */	cmpw r26, r0
/* 80337598  41 80 FF BC */	blt lbl_80337554
/* 8033759C  B3 9F 00 08 */	sth r28, 8(r31)
/* 803375A0  7F E3 FB 78 */	mr r3, r31
/* 803375A4  39 61 00 20 */	addi r11, r1, 0x20
/* 803375A8  48 02 AC 75 */	bl _restgpr_26
/* 803375AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803375B0  7C 08 03 A6 */	mtlr r0
/* 803375B4  38 21 00 20 */	addi r1, r1, 0x20
/* 803375B8  4E 80 00 20 */	blr 
