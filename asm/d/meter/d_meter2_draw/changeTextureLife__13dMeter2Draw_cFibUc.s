lbl_802147CC:
/* 802147CC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802147D0  7C 08 02 A6 */	mflr r0
/* 802147D4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802147D8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802147DC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 802147E0  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802147E4  F3 C1 00 38 */	psq_st f30, 56(r1), 0, 0 /* qr0 */
/* 802147E8  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802147EC  F3 A1 00 28 */	psq_st f29, 40(r1), 0, 0 /* qr0 */
/* 802147F0  39 61 00 20 */	addi r11, r1, 0x20
/* 802147F4  48 14 D9 DD */	bl _savegpr_26
/* 802147F8  7C 7E 1B 78 */	mr r30, r3
/* 802147FC  7C 9F 23 78 */	mr r31, r4
/* 80214800  7C DA 33 78 */	mr r26, r6
/* 80214804  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80214808  41 82 01 A0 */	beq lbl_802149A8
/* 8021480C  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 80214810  28 00 00 FF */	cmplwi r0, 0xff
/* 80214814  40 82 00 24 */	bne lbl_80214838
/* 80214818  57 FC 18 38 */	slwi r28, r31, 3
/* 8021481C  7C 7E E2 14 */	add r3, r30, r28
/* 80214820  80 63 03 A0 */	lwz r3, 0x3a0(r3)
/* 80214824  48 04 0D A5 */	bl show__13CPaneMgrAlphaFv
/* 80214828  7C 7E E2 14 */	add r3, r30, r28
/* 8021482C  80 63 03 A4 */	lwz r3, 0x3a4(r3)
/* 80214830  48 04 0D 99 */	bl show__13CPaneMgrAlphaFv
/* 80214834  48 00 01 90 */	b lbl_802149C4
lbl_80214838:
/* 80214838  57 FC 18 38 */	slwi r28, r31, 3
/* 8021483C  7C 7E E2 14 */	add r3, r30, r28
/* 80214840  80 63 03 A0 */	lwz r3, 0x3a0(r3)
/* 80214844  48 04 0D C5 */	bl hide__13CPaneMgrAlphaFv
/* 80214848  7C 7E E2 14 */	add r3, r30, r28
/* 8021484C  80 63 03 A4 */	lwz r3, 0x3a4(r3)
/* 80214850  48 04 0D B9 */	bl hide__13CPaneMgrAlphaFv
/* 80214854  3B 60 00 00 */	li r27, 0
/* 80214858  3B A0 00 00 */	li r29, 0
/* 8021485C  57 5C 06 3E */	clrlwi r28, r26, 0x18
lbl_80214860:
/* 80214860  7C 1B E0 00 */	cmpw r27, r28
/* 80214864  40 82 00 38 */	bne lbl_8021489C
/* 80214868  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 8021486C  3C 80 80 3A */	lis r4, tag_bigh@ha
/* 80214870  38 04 88 78 */	addi r0, r4, tag_bigh@l
/* 80214874  7C 80 EA 14 */	add r4, r0, r29
/* 80214878  80 A4 00 00 */	lwz r5, 0(r4)
/* 8021487C  80 C4 00 04 */	lwz r6, 4(r4)
/* 80214880  81 83 00 00 */	lwz r12, 0(r3)
/* 80214884  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80214888  7D 89 03 A6 */	mtctr r12
/* 8021488C  4E 80 04 21 */	bctrl 
/* 80214890  38 00 00 01 */	li r0, 1
/* 80214894  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80214898  48 00 00 34 */	b lbl_802148CC
lbl_8021489C:
/* 8021489C  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 802148A0  3C 80 80 3A */	lis r4, tag_bigh@ha
/* 802148A4  38 04 88 78 */	addi r0, r4, tag_bigh@l
/* 802148A8  7C 80 EA 14 */	add r4, r0, r29
/* 802148AC  80 A4 00 00 */	lwz r5, 0(r4)
/* 802148B0  80 C4 00 04 */	lwz r6, 4(r4)
/* 802148B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802148B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802148BC  7D 89 03 A6 */	mtctr r12
/* 802148C0  4E 80 04 21 */	bctrl 
/* 802148C4  38 00 00 00 */	li r0, 0
/* 802148C8  98 03 00 B0 */	stb r0, 0xb0(r3)
lbl_802148CC:
/* 802148CC  3B 7B 00 01 */	addi r27, r27, 1
/* 802148D0  2C 1B 00 04 */	cmpwi r27, 4
/* 802148D4  3B BD 00 08 */	addi r29, r29, 8
/* 802148D8  41 80 FF 88 */	blt lbl_80214860
/* 802148DC  57 E0 10 3A */	slwi r0, r31, 2
/* 802148E0  7F BE 02 14 */	add r29, r30, r0
/* 802148E4  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 802148E8  80 63 00 04 */	lwz r3, 4(r3)
/* 802148EC  C3 E3 00 D8 */	lfs f31, 0xd8(r3)
/* 802148F0  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 802148F4  38 00 00 0A */	li r0, 0xa
/* 802148F8  7C 1F 03 D6 */	divw r0, r31, r0
/* 802148FC  54 05 18 38 */	slwi r5, r0, 3
/* 80214900  3C 80 80 3A */	lis r4, tag_du@ha
/* 80214904  38 04 88 98 */	addi r0, r4, tag_du@l
/* 80214908  7F 80 2A 14 */	add r28, r0, r5
/* 8021490C  80 BC 00 00 */	lwz r5, 0(r28)
/* 80214910  80 DC 00 04 */	lwz r6, 4(r28)
/* 80214914  81 83 00 00 */	lwz r12, 0(r3)
/* 80214918  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8021491C  7D 89 03 A6 */	mtctr r12
/* 80214920  4E 80 04 21 */	bctrl 
/* 80214924  C3 C3 00 D8 */	lfs f30, 0xd8(r3)
/* 80214928  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 8021492C  3C 80 80 3A */	lis r4, tag_du@ha
/* 80214930  84 A4 88 98 */	lwzu r5, tag_du@l(r4)
/* 80214934  80 C4 00 04 */	lwz r6, 4(r4)
/* 80214938  81 83 00 00 */	lwz r12, 0(r3)
/* 8021493C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80214940  7D 89 03 A6 */	mtctr r12
/* 80214944  4E 80 04 21 */	bctrl 
/* 80214948  C3 A3 00 D4 */	lfs f29, 0xd4(r3)
/* 8021494C  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 80214950  80 BC 00 00 */	lwz r5, 0(r28)
/* 80214954  80 DC 00 04 */	lwz r6, 4(r28)
/* 80214958  81 83 00 00 */	lwz r12, 0(r3)
/* 8021495C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80214960  7D 89 03 A6 */	mtctr r12
/* 80214964  4E 80 04 21 */	bctrl 
/* 80214968  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8021496C  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 80214970  80 63 00 04 */	lwz r3, 4(r3)
/* 80214974  C0 23 00 D4 */	lfs f1, 0xd4(r3)
/* 80214978  80 7E 01 C8 */	lwz r3, 0x1c8(r30)
/* 8021497C  80 63 00 04 */	lwz r3, 4(r3)
/* 80214980  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80214984  EC 01 00 2A */	fadds f0, f1, f0
/* 80214988  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8021498C  EC 1E F8 2A */	fadds f0, f30, f31
/* 80214990  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80214994  81 83 00 00 */	lwz r12, 0(r3)
/* 80214998  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8021499C  7D 89 03 A6 */	mtctr r12
/* 802149A0  4E 80 04 21 */	bctrl 
/* 802149A4  48 00 00 20 */	b lbl_802149C4
lbl_802149A8:
/* 802149A8  57 FC 18 38 */	slwi r28, r31, 3
/* 802149AC  7C 7E E2 14 */	add r3, r30, r28
/* 802149B0  80 63 03 A0 */	lwz r3, 0x3a0(r3)
/* 802149B4  48 04 0C 55 */	bl hide__13CPaneMgrAlphaFv
/* 802149B8  7C 7E E2 14 */	add r3, r30, r28
/* 802149BC  80 63 03 A4 */	lwz r3, 0x3a4(r3)
/* 802149C0  48 04 0C 49 */	bl hide__13CPaneMgrAlphaFv
lbl_802149C4:
/* 802149C4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 802149C8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802149CC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, 0 /* qr0 */
/* 802149D0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802149D4  E3 A1 00 28 */	psq_l f29, 40(r1), 0, 0 /* qr0 */
/* 802149D8  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 802149DC  39 61 00 20 */	addi r11, r1, 0x20
/* 802149E0  48 14 D8 3D */	bl _restgpr_26
/* 802149E4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802149E8  7C 08 03 A6 */	mtlr r0
/* 802149EC  38 21 00 50 */	addi r1, r1, 0x50
/* 802149F0  4E 80 00 20 */	blr 
