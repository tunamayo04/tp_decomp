lbl_80040E84:
/* 80040E84  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80040E88  7C 08 02 A6 */	mflr r0
/* 80040E8C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80040E90  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80040E94  F3 E1 00 68 */	psq_st f31, 104(r1), 0, 0 /* qr0 */
/* 80040E98  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80040E9C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, 0 /* qr0 */
/* 80040EA0  39 61 00 50 */	addi r11, r1, 0x50
/* 80040EA4  48 32 13 15 */	bl _savegpr_20
/* 80040EA8  7C 7F 1B 78 */	mr r31, r3
/* 80040EAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80040EB0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80040EB4  7D 89 03 A6 */	mtctr r12
/* 80040EB8  4E 80 04 21 */	bctrl 
/* 80040EBC  7C 74 1B 78 */	mr r20, r3
/* 80040EC0  48 31 A6 CD */	bl GXClearVtxDesc
/* 80040EC4  38 60 00 09 */	li r3, 9
/* 80040EC8  38 80 00 01 */	li r4, 1
/* 80040ECC  48 31 9F ED */	bl GXSetVtxDesc
/* 80040ED0  38 60 00 0D */	li r3, 0xd
/* 80040ED4  38 80 00 02 */	li r4, 2
/* 80040ED8  48 31 9F E1 */	bl GXSetVtxDesc
/* 80040EDC  38 60 00 00 */	li r3, 0
/* 80040EE0  38 80 00 09 */	li r4, 9
/* 80040EE4  38 A0 00 00 */	li r5, 0
/* 80040EE8  38 C0 00 04 */	li r6, 4
/* 80040EEC  38 E0 00 00 */	li r7, 0
/* 80040EF0  48 31 A6 D5 */	bl GXSetVtxAttrFmt
/* 80040EF4  38 60 00 00 */	li r3, 0
/* 80040EF8  38 80 00 0D */	li r4, 0xd
/* 80040EFC  38 A0 00 01 */	li r5, 1
/* 80040F00  38 C0 00 00 */	li r6, 0
/* 80040F04  38 E0 00 00 */	li r7, 0
/* 80040F08  48 31 A6 BD */	bl GXSetVtxAttrFmt
/* 80040F0C  38 60 00 0D */	li r3, 0xd
/* 80040F10  38 82 84 AC */	la r4, l_iconTex0_4605(r2) /* 80451EAC-_SDA2_BASE_ */
/* 80040F14  38 A0 00 02 */	li r5, 2
/* 80040F18  48 31 AC 11 */	bl GXSetArray
/* 80040F1C  7F E3 FB 78 */	mr r3, r31
/* 80040F20  4B FF C0 21 */	bl setTevSettingIntensityTextureToCI__18dRenderingFDAmap_cCFv
/* 80040F24  3A E0 00 00 */	li r23, 0
/* 80040F28  3B C0 00 00 */	li r30, 0
/* 80040F2C  3B 42 84 B4 */	la r26, tboxNotStayColor_4624(r2) /* 80451EB4-_SDA2_BASE_ */
/* 80040F30  3B 22 84 7C */	la r25, l_treasureStartColor(r2) /* 80451E7C-_SDA2_BASE_ */
/* 80040F34  56 98 06 3E */	clrlwi r24, r20, 0x18
/* 80040F38  3C 60 80 38 */	lis r3, l_treasureDispList_4606@ha
/* 80040F3C  3B 63 9C B8 */	addi r27, r3, l_treasureDispList_4606@l
lbl_80040F40:
/* 80040F40  7F BB F2 14 */	add r29, r27, r30
/* 80040F44  88 9D 00 00 */	lbz r4, 0(r29)
/* 80040F48  7C 95 23 78 */	mr r21, r4
/* 80040F4C  7F E3 FB 78 */	mr r3, r31
/* 80040F50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80040F54  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80040F58  7D 89 03 A6 */	mtctr r12
/* 80040F5C  4E 80 04 21 */	bctrl 
/* 80040F60  7C 76 1B 78 */	mr r22, r3
/* 80040F64  7F E3 FB 78 */	mr r3, r31
/* 80040F68  7E A4 AB 78 */	mr r4, r21
/* 80040F6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80040F70  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80040F74  7D 89 03 A6 */	mtctr r12
/* 80040F78  4E 80 04 21 */	bctrl 
/* 80040F7C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80040F80  41 82 02 48 */	beq lbl_800411C8
/* 80040F84  7F E3 FB 78 */	mr r3, r31
/* 80040F88  7E A4 AB 78 */	mr r4, r21
/* 80040F8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80040F90  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80040F94  7D 89 03 A6 */	mtctr r12
/* 80040F98  4E 80 04 21 */	bctrl 
/* 80040F9C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80040FA0  EF C0 00 72 */	fmuls f30, f0, f1
/* 80040FA4  48 31 D6 C1 */	bl GXInvalidateTexAll
/* 80040FA8  80 1D 00 04 */	lwz r0, 4(r29)
/* 80040FAC  54 00 10 3A */	slwi r0, r0, 2
/* 80040FB0  3C 60 80 42 */	lis r3, m_texObjAgg__8dMpath_n@ha
/* 80040FB4  38 63 46 84 */	addi r3, r3, m_texObjAgg__8dMpath_n@l
/* 80040FB8  7C 63 00 2E */	lwzx r3, r3, r0
/* 80040FBC  38 80 00 00 */	li r4, 0
/* 80040FC0  48 31 D4 55 */	bl GXLoadTexObj
/* 80040FC4  80 7D 00 08 */	lwz r3, 8(r29)
/* 80040FC8  88 03 00 00 */	lbz r0, 0(r3)
/* 80040FCC  98 01 00 18 */	stb r0, 0x18(r1)
/* 80040FD0  88 03 00 01 */	lbz r0, 1(r3)
/* 80040FD4  98 01 00 19 */	stb r0, 0x19(r1)
/* 80040FD8  88 03 00 02 */	lbz r0, 2(r3)
/* 80040FDC  98 01 00 1A */	stb r0, 0x1a(r1)
/* 80040FE0  88 03 00 03 */	lbz r0, 3(r3)
/* 80040FE4  98 01 00 1B */	stb r0, 0x1b(r1)
/* 80040FE8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80040FEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80040FF0  38 60 00 02 */	li r3, 2
/* 80040FF4  38 81 00 14 */	addi r4, r1, 0x14
/* 80040FF8  48 31 E3 85 */	bl GXSetTevColor
/* 80040FFC  88 61 00 18 */	lbz r3, 0x18(r1)
/* 80041000  38 03 00 04 */	addi r0, r3, 4
/* 80041004  98 01 00 18 */	stb r0, 0x18(r1)
/* 80041008  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8004100C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80041010  38 60 00 03 */	li r3, 3
/* 80041014  38 81 00 10 */	addi r4, r1, 0x10
/* 80041018  48 31 E3 65 */	bl GXSetTevColor
/* 8004101C  3A 80 00 00 */	li r20, 0
/* 80041020  56 BD 06 3E */	clrlwi r29, r21, 0x18
/* 80041024  C3 E2 84 A8 */	lfs f31, lit_4600(r2)
/* 80041028  48 00 01 90 */	b lbl_800411B8
lbl_8004102C:
/* 8004102C  7F E3 FB 78 */	mr r3, r31
/* 80041030  7E C4 B3 78 */	mr r4, r22
/* 80041034  81 9F 00 00 */	lwz r12, 0(r31)
/* 80041038  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8004103C  7D 89 03 A6 */	mtctr r12
/* 80041040  4E 80 04 21 */	bctrl 
/* 80041044  7C 75 1B 78 */	mr r21, r3
/* 80041048  28 1D 00 00 */	cmplwi r29, 0
/* 8004104C  40 82 00 90 */	bne lbl_800410DC
/* 80041050  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80041054  88 16 00 01 */	lbz r0, 1(r22)
/* 80041058  7C 00 07 74 */	extsb r0, r0
/* 8004105C  7C 03 00 00 */	cmpw r3, r0
/* 80041060  41 82 00 28 */	beq lbl_80041088
/* 80041064  88 02 84 B4 */	lbz r0, tboxNotStayColor_4624(r2)
/* 80041068  98 01 00 18 */	stb r0, 0x18(r1)
/* 8004106C  88 1A 00 01 */	lbz r0, 1(r26)
/* 80041070  98 01 00 19 */	stb r0, 0x19(r1)
/* 80041074  88 1A 00 02 */	lbz r0, 2(r26)
/* 80041078  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8004107C  88 1A 00 03 */	lbz r0, 3(r26)
/* 80041080  98 01 00 1B */	stb r0, 0x1b(r1)
/* 80041084  48 00 00 24 */	b lbl_800410A8
lbl_80041088:
/* 80041088  88 02 84 7C */	lbz r0, l_treasureStartColor(r2)
/* 8004108C  98 01 00 18 */	stb r0, 0x18(r1)
/* 80041090  88 19 00 01 */	lbz r0, 1(r25)
/* 80041094  98 01 00 19 */	stb r0, 0x19(r1)
/* 80041098  88 19 00 02 */	lbz r0, 2(r25)
/* 8004109C  98 01 00 1A */	stb r0, 0x1a(r1)
/* 800410A0  88 19 00 03 */	lbz r0, 3(r25)
/* 800410A4  98 01 00 1B */	stb r0, 0x1b(r1)
lbl_800410A8:
/* 800410A8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 800410AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 800410B0  38 60 00 02 */	li r3, 2
/* 800410B4  38 81 00 0C */	addi r4, r1, 0xc
/* 800410B8  48 31 E2 C5 */	bl GXSetTevColor
/* 800410BC  88 61 00 18 */	lbz r3, 0x18(r1)
/* 800410C0  38 03 00 04 */	addi r0, r3, 4
/* 800410C4  98 01 00 18 */	stb r0, 0x18(r1)
/* 800410C8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 800410CC  90 01 00 08 */	stw r0, 8(r1)
/* 800410D0  38 60 00 03 */	li r3, 3
/* 800410D4  38 81 00 08 */	addi r4, r1, 8
/* 800410D8  48 31 E2 A5 */	bl GXSetTevColor
lbl_800410DC:
/* 800410DC  38 00 00 00 */	li r0, 0
/* 800410E0  C0 75 00 00 */	lfs f3, 0(r21)
/* 800410E4  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 800410E8  C0 1F 00 08 */	lfs f0, 8(r31)
/* 800410EC  EC 3F 00 32 */	fmuls f1, f31, f0
/* 800410F0  EC 02 08 28 */	fsubs f0, f2, f1
/* 800410F4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800410F8  4C 41 13 82 */	cror 2, 1, 2
/* 800410FC  40 82 00 48 */	bne lbl_80041144
/* 80041100  EC 02 08 2A */	fadds f0, f2, f1
/* 80041104  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80041108  4C 40 13 82 */	cror 2, 0, 2
/* 8004110C  40 82 00 38 */	bne lbl_80041144
/* 80041110  C0 75 00 08 */	lfs f3, 8(r21)
/* 80041114  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 80041118  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8004111C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80041120  EC 02 08 28 */	fsubs f0, f2, f1
/* 80041124  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80041128  4C 41 13 82 */	cror 2, 1, 2
/* 8004112C  40 82 00 18 */	bne lbl_80041144
/* 80041130  EC 02 08 2A */	fadds f0, f2, f1
/* 80041134  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80041138  4C 40 13 82 */	cror 2, 0, 2
/* 8004113C  40 82 00 08 */	bne lbl_80041144
/* 80041140  38 00 00 01 */	li r0, 1
lbl_80041144:
/* 80041144  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80041148  41 82 00 50 */	beq lbl_80041198
/* 8004114C  7F E3 FB 78 */	mr r3, r31
/* 80041150  7E C4 B3 78 */	mr r4, r22
/* 80041154  80 BF 00 2C */	lwz r5, 0x2c(r31)
/* 80041158  88 DF 00 30 */	lbz r6, 0x30(r31)
/* 8004115C  7C C6 07 74 */	extsb r6, r6
/* 80041160  7F 07 C3 78 */	mr r7, r24
/* 80041164  39 00 00 01 */	li r8, 1
/* 80041168  7E A9 AB 78 */	mr r9, r21
/* 8004116C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80041170  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80041174  7D 89 03 A6 */	mtctr r12
/* 80041178  4E 80 04 21 */	bctrl 
/* 8004117C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80041180  41 82 00 18 */	beq lbl_80041198
/* 80041184  7F E3 FB 78 */	mr r3, r31
/* 80041188  7E A4 AB 78 */	mr r4, r21
/* 8004118C  FC 20 F0 90 */	fmr f1, f30
/* 80041190  FC 40 F0 90 */	fmr f2, f30
/* 80041194  48 00 00 75 */	bl drawIconSingle__28renderingPlusDoorAndCursor_cFRC3Vecff
lbl_80041198:
/* 80041198  7F E3 FB 78 */	mr r3, r31
/* 8004119C  7E C4 B3 78 */	mr r4, r22
/* 800411A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 800411A4  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 800411A8  7D 89 03 A6 */	mtctr r12
/* 800411AC  4E 80 04 21 */	bctrl 
/* 800411B0  7C 76 1B 78 */	mr r22, r3
/* 800411B4  3A 94 00 01 */	addi r20, r20, 1
lbl_800411B8:
/* 800411B8  7C 14 E0 00 */	cmpw r20, r28
/* 800411BC  40 80 00 0C */	bge lbl_800411C8
/* 800411C0  28 16 00 00 */	cmplwi r22, 0
/* 800411C4  40 82 FE 68 */	bne lbl_8004102C
lbl_800411C8:
/* 800411C8  3A F7 00 01 */	addi r23, r23, 1
/* 800411CC  2C 17 00 0B */	cmpwi r23, 0xb
/* 800411D0  3B DE 00 0C */	addi r30, r30, 0xc
/* 800411D4  41 80 FD 6C */	blt lbl_80040F40
/* 800411D8  7F E3 FB 78 */	mr r3, r31
/* 800411DC  4B FF BC 9D */	bl setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv
/* 800411E0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, 0 /* qr0 */
/* 800411E4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 800411E8  E3 C1 00 58 */	psq_l f30, 88(r1), 0, 0 /* qr0 */
/* 800411EC  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 800411F0  39 61 00 50 */	addi r11, r1, 0x50
/* 800411F4  48 32 10 11 */	bl _restgpr_20
/* 800411F8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 800411FC  7C 08 03 A6 */	mtlr r0
/* 80041200  38 21 00 70 */	addi r1, r1, 0x70
/* 80041204  4E 80 00 20 */	blr 
