lbl_80306480:
/* 80306480  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80306484  7C 08 02 A6 */	mflr r0
/* 80306488  90 01 00 44 */	stw r0, 0x44(r1)
/* 8030648C  39 61 00 40 */	addi r11, r1, 0x40
/* 80306490  48 05 BD 41 */	bl _savegpr_26
/* 80306494  7C 7B 1B 78 */	mr r27, r3
/* 80306498  7C 9C 23 78 */	mr r28, r4
/* 8030649C  7C BD 2B 78 */	mr r29, r5
/* 803064A0  80 83 01 50 */	lwz r4, 0x150(r3)
/* 803064A4  28 04 00 00 */	cmplwi r4, 0
/* 803064A8  40 82 00 0C */	bne lbl_803064B4
/* 803064AC  38 60 00 00 */	li r3, 0
/* 803064B0  48 00 01 9C */	b lbl_8030664C
lbl_803064B4:
/* 803064B4  80 04 00 70 */	lwz r0, 0x70(r4)
/* 803064B8  28 00 00 00 */	cmplwi r0, 0
/* 803064BC  40 82 00 0C */	bne lbl_803064C8
/* 803064C0  38 60 00 00 */	li r3, 0
/* 803064C4  48 00 01 88 */	b lbl_8030664C
lbl_803064C8:
/* 803064C8  80 1D 00 00 */	lwz r0, 0(r29)
/* 803064CC  90 01 00 08 */	stw r0, 8(r1)
/* 803064D0  80 1C 00 00 */	lwz r0, 0(r28)
/* 803064D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 803064D8  38 81 00 0C */	addi r4, r1, 0xc
/* 803064DC  38 A1 00 08 */	addi r5, r1, 8
/* 803064E0  48 00 03 45 */	bl isSetBlackWhite__12J2DPictureExCFQ28JUtility6TColorQ28JUtility6TColor
/* 803064E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803064E8  40 82 00 0C */	bne lbl_803064F4
/* 803064EC  38 60 00 00 */	li r3, 0
/* 803064F0  48 00 01 5C */	b lbl_8030664C
lbl_803064F4:
/* 803064F4  80 9B 01 50 */	lwz r4, 0x150(r27)
/* 803064F8  80 04 00 28 */	lwz r0, 0x28(r4)
/* 803064FC  54 1E 06 3E */	clrlwi r30, r0, 0x18
/* 80306500  3B E0 00 01 */	li r31, 1
/* 80306504  80 1C 00 00 */	lwz r0, 0(r28)
/* 80306508  28 00 00 00 */	cmplwi r0, 0
/* 8030650C  40 82 00 18 */	bne lbl_80306524
/* 80306510  80 7D 00 00 */	lwz r3, 0(r29)
/* 80306514  3C 03 00 01 */	addis r0, r3, 1
/* 80306518  28 00 FF FF */	cmplwi r0, 0xffff
/* 8030651C  40 82 00 08 */	bne lbl_80306524
/* 80306520  3B E0 00 00 */	li r31, 0
lbl_80306524:
/* 80306524  28 1E 00 01 */	cmplwi r30, 1
/* 80306528  40 82 00 1C */	bne lbl_80306544
/* 8030652C  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80306530  30 03 FF FF */	addic r0, r3, -1
/* 80306534  7C 60 19 10 */	subfe r3, r0, r3
/* 80306538  38 03 00 01 */	addi r0, r3, 1
/* 8030653C  54 1A 06 3E */	clrlwi r26, r0, 0x18
/* 80306540  48 00 00 1C */	b lbl_8030655C
lbl_80306544:
/* 80306544  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80306548  30 03 FF FF */	addic r0, r3, -1
/* 8030654C  7C 60 19 10 */	subfe r3, r0, r3
/* 80306550  38 03 00 01 */	addi r0, r3, 1
/* 80306554  7C 1E 02 14 */	add r0, r30, r0
/* 80306558  54 1A 06 3E */	clrlwi r26, r0, 0x18
lbl_8030655C:
/* 8030655C  80 64 00 70 */	lwz r3, 0x70(r4)
/* 80306560  7F 44 D3 78 */	mr r4, r26
/* 80306564  81 83 00 00 */	lwz r12, 0(r3)
/* 80306568  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8030656C  7D 89 03 A6 */	mtctr r12
/* 80306570  4E 80 04 21 */	bctrl 
/* 80306574  7F 63 DB 78 */	mr r3, r27
/* 80306578  7F C4 F3 78 */	mr r4, r30
/* 8030657C  7F 45 D3 78 */	mr r5, r26
/* 80306580  7F E6 FB 78 */	mr r6, r31
/* 80306584  4B FF ED 29 */	bl setTevOrder__12J2DPictureExFUcUcb
/* 80306588  7F 63 DB 78 */	mr r3, r27
/* 8030658C  7F C4 F3 78 */	mr r4, r30
/* 80306590  7F 45 D3 78 */	mr r5, r26
/* 80306594  7F E6 FB 78 */	mr r6, r31
/* 80306598  4B FF EE 49 */	bl setTevStage__12J2DPictureExFUcUcb
/* 8030659C  7F 63 DB 78 */	mr r3, r27
/* 803065A0  7F C4 F3 78 */	mr r4, r30
/* 803065A4  4B FF F3 85 */	bl setTevKColor__12J2DPictureExFUc
/* 803065A8  7F 63 DB 78 */	mr r3, r27
/* 803065AC  7F C4 F3 78 */	mr r4, r30
/* 803065B0  4B FF F6 C1 */	bl setTevKColorSel__12J2DPictureExFUc
/* 803065B4  7F 63 DB 78 */	mr r3, r27
/* 803065B8  7F C4 F3 78 */	mr r4, r30
/* 803065BC  4B FF F7 5D */	bl setTevKAlphaSel__12J2DPictureExFUc
/* 803065C0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803065C4  41 82 00 84 */	beq lbl_80306648
/* 803065C8  88 1C 00 00 */	lbz r0, 0(r28)
/* 803065CC  88 7C 00 01 */	lbz r3, 1(r28)
/* 803065D0  88 9C 00 02 */	lbz r4, 2(r28)
/* 803065D4  88 BC 00 03 */	lbz r5, 3(r28)
/* 803065D8  B0 01 00 18 */	sth r0, 0x18(r1)
/* 803065DC  B0 61 00 1A */	sth r3, 0x1a(r1)
/* 803065E0  B0 81 00 1C */	sth r4, 0x1c(r1)
/* 803065E4  B0 A1 00 1E */	sth r5, 0x1e(r1)
/* 803065E8  80 7B 01 50 */	lwz r3, 0x150(r27)
/* 803065EC  80 63 00 70 */	lwz r3, 0x70(r3)
/* 803065F0  38 80 00 00 */	li r4, 0
/* 803065F4  38 A1 00 18 */	addi r5, r1, 0x18
/* 803065F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803065FC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80306600  7D 89 03 A6 */	mtctr r12
/* 80306604  4E 80 04 21 */	bctrl 
/* 80306608  88 7D 00 01 */	lbz r3, 1(r29)
/* 8030660C  88 9D 00 02 */	lbz r4, 2(r29)
/* 80306610  88 BD 00 03 */	lbz r5, 3(r29)
/* 80306614  88 1D 00 00 */	lbz r0, 0(r29)
/* 80306618  B0 01 00 10 */	sth r0, 0x10(r1)
/* 8030661C  B0 61 00 12 */	sth r3, 0x12(r1)
/* 80306620  B0 81 00 14 */	sth r4, 0x14(r1)
/* 80306624  B0 A1 00 16 */	sth r5, 0x16(r1)
/* 80306628  80 7B 01 50 */	lwz r3, 0x150(r27)
/* 8030662C  80 63 00 70 */	lwz r3, 0x70(r3)
/* 80306630  38 80 00 01 */	li r4, 1
/* 80306634  38 A1 00 10 */	addi r5, r1, 0x10
/* 80306638  81 83 00 00 */	lwz r12, 0(r3)
/* 8030663C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80306640  7D 89 03 A6 */	mtctr r12
/* 80306644  4E 80 04 21 */	bctrl 
lbl_80306648:
/* 80306648  38 60 00 01 */	li r3, 1
lbl_8030664C:
/* 8030664C  39 61 00 40 */	addi r11, r1, 0x40
/* 80306650  48 05 BB CD */	bl _restgpr_26
/* 80306654  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80306658  7C 08 03 A6 */	mtlr r0
/* 8030665C  38 21 00 40 */	addi r1, r1, 0x40
/* 80306660  4E 80 00 20 */	blr 
