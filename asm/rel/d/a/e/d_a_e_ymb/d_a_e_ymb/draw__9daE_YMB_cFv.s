lbl_80816554:
/* 80816554  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80816558  7C 08 02 A6 */	mflr r0
/* 8081655C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80816560  39 61 00 50 */	addi r11, r1, 0x50
/* 80816564  4B B4 BC 6C */	b _savegpr_26
/* 80816568  7C 7A 1B 78 */	mr r26, r3
/* 8081656C  3C 60 80 82 */	lis r3, lit_3791@ha
/* 80816570  3B E3 18 AC */	addi r31, r3, lit_3791@l
/* 80816574  3C 60 80 43 */	lis r3, g_env_light@ha
/* 80816578  38 63 CA 54 */	addi r3, r3, g_env_light@l
/* 8081657C  38 80 00 06 */	li r4, 6
/* 80816580  38 BA 04 D0 */	addi r5, r26, 0x4d0
/* 80816584  38 DA 01 0C */	addi r6, r26, 0x10c
/* 80816588  4B 98 D2 3C */	b settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c
/* 8081658C  C0 3A 06 D8 */	lfs f1, 0x6d8(r26)
/* 80816590  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80816594  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80816598  41 82 00 10 */	beq lbl_808165A8
/* 8081659C  88 1A 07 10 */	lbz r0, 0x710(r26)
/* 808165A0  28 00 00 00 */	cmplwi r0, 0
/* 808165A4  41 82 00 0C */	beq lbl_808165B0
lbl_808165A8:
/* 808165A8  38 60 00 01 */	li r3, 1
/* 808165AC  48 00 03 98 */	b lbl_80816944
lbl_808165B0:
/* 808165B0  80 7A 05 BC */	lwz r3, 0x5bc(r26)
/* 808165B4  83 C3 00 04 */	lwz r30, 4(r3)
/* 808165B8  80 7E 00 04 */	lwz r3, 4(r30)
/* 808165BC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 808165C0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 808165C4  80 63 00 08 */	lwz r3, 8(r3)
/* 808165C8  28 03 00 00 */	cmplwi r3, 0
/* 808165CC  41 82 00 2C */	beq lbl_808165F8
/* 808165D0  88 1A 07 17 */	lbz r0, 0x717(r26)
/* 808165D4  28 00 00 00 */	cmplwi r0, 0
/* 808165D8  41 82 00 14 */	beq lbl_808165EC
/* 808165DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 808165E0  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 808165E4  90 03 00 0C */	stw r0, 0xc(r3)
/* 808165E8  48 00 00 10 */	b lbl_808165F8
lbl_808165EC:
/* 808165EC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 808165F0  60 00 00 01 */	ori r0, r0, 1
/* 808165F4  90 03 00 0C */	stw r0, 0xc(r3)
lbl_808165F8:
/* 808165F8  3C 60 80 43 */	lis r3, g_env_light@ha
/* 808165FC  38 63 CA 54 */	addi r3, r3, g_env_light@l
/* 80816600  80 9E 00 04 */	lwz r4, 4(r30)
/* 80816604  38 BA 01 0C */	addi r5, r26, 0x10c
/* 80816608  4B 98 E7 98 */	b setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c
/* 8081660C  83 BE 00 04 */	lwz r29, 4(r30)
/* 80816610  3B 60 00 00 */	li r27, 0
/* 80816614  48 00 02 2C */	b lbl_80816840
lbl_80816618:
/* 80816618  80 9D 00 60 */	lwz r4, 0x60(r29)
/* 8081661C  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 80816620  57 60 13 BA */	rlwinm r0, r27, 2, 0xe, 0x1d
/* 80816624  7F 84 00 2E */	lwzx r28, r4, r0
/* 80816628  28 03 00 04 */	cmplwi r3, 4
/* 8081662C  40 82 00 34 */	bne lbl_80816660
/* 80816630  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80816634  38 80 00 03 */	li r4, 3
/* 80816638  81 83 00 00 */	lwz r12, 0(r3)
/* 8081663C  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80816640  7D 89 03 A6 */	mtctr r12
/* 80816644  4E 80 04 21 */	bctrl 
/* 80816648  C0 1A 06 DC */	lfs f0, 0x6dc(r26)
/* 8081664C  FC 00 00 1E */	fctiwz f0, f0
/* 80816650  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80816654  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80816658  98 03 00 03 */	stb r0, 3(r3)
/* 8081665C  48 00 01 4C */	b lbl_808167A8
lbl_80816660:
/* 80816660  28 03 00 03 */	cmplwi r3, 3
/* 80816664  40 82 00 34 */	bne lbl_80816698
/* 80816668  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 8081666C  38 80 00 03 */	li r4, 3
/* 80816670  81 83 00 00 */	lwz r12, 0(r3)
/* 80816674  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80816678  7D 89 03 A6 */	mtctr r12
/* 8081667C  4E 80 04 21 */	bctrl 
/* 80816680  C0 1A 06 D8 */	lfs f0, 0x6d8(r26)
/* 80816684  FC 00 00 1E */	fctiwz f0, f0
/* 80816688  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8081668C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80816690  98 03 00 03 */	stb r0, 3(r3)
/* 80816694  48 00 01 14 */	b lbl_808167A8
lbl_80816698:
/* 80816698  C0 3A 06 D8 */	lfs f1, 0x6d8(r26)
/* 8081669C  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 808166A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808166A4  4C 41 13 82 */	cror 2, 1, 2
/* 808166A8  40 82 00 70 */	bne lbl_80816718
/* 808166AC  38 00 00 01 */	li r0, 1
/* 808166B0  90 1C 00 10 */	stw r0, 0x10(r28)
/* 808166B4  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 808166B8  81 83 00 00 */	lwz r12, 0(r3)
/* 808166BC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 808166C0  7D 89 03 A6 */	mtctr r12
/* 808166C4  4E 80 04 21 */	bctrl 
/* 808166C8  A0 03 00 00 */	lhz r0, 0(r3)
/* 808166CC  1C A0 00 03 */	mulli r5, r0, 3
/* 808166D0  3C 80 80 43 */	lis r4, j3dZModeTable@ha
/* 808166D4  38 04 71 60 */	addi r0, r4, j3dZModeTable@l
/* 808166D8  7C 80 2A 14 */	add r4, r0, r5
/* 808166DC  88 04 00 01 */	lbz r0, 1(r4)
/* 808166E0  54 05 08 3C */	slwi r5, r0, 1
/* 808166E4  88 04 00 00 */	lbz r0, 0(r4)
/* 808166E8  54 04 20 36 */	slwi r4, r0, 4
/* 808166EC  38 04 00 01 */	addi r0, r4, 1
/* 808166F0  7C 05 02 14 */	add r0, r5, r0
/* 808166F4  B0 03 00 00 */	sth r0, 0(r3)
/* 808166F8  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 808166FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80816700  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80816704  7D 89 03 A6 */	mtctr r12
/* 80816708  4E 80 04 21 */	bctrl 
/* 8081670C  38 00 00 00 */	li r0, 0
/* 80816710  98 03 00 00 */	stb r0, 0(r3)
/* 80816714  48 00 00 94 */	b lbl_808167A8
lbl_80816718:
/* 80816718  38 00 00 04 */	li r0, 4
/* 8081671C  90 1C 00 10 */	stw r0, 0x10(r28)
/* 80816720  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 80816724  81 83 00 00 */	lwz r12, 0(r3)
/* 80816728  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8081672C  7D 89 03 A6 */	mtctr r12
/* 80816730  4E 80 04 21 */	bctrl 
/* 80816734  A0 03 00 00 */	lhz r0, 0(r3)
/* 80816738  1C A0 00 03 */	mulli r5, r0, 3
/* 8081673C  3C 80 80 43 */	lis r4, j3dZModeTable@ha
/* 80816740  38 04 71 60 */	addi r0, r4, j3dZModeTable@l
/* 80816744  7C A0 2A 14 */	add r5, r0, r5
/* 80816748  88 05 00 01 */	lbz r0, 1(r5)
/* 8081674C  54 04 08 3C */	slwi r4, r0, 1
/* 80816750  88 05 00 00 */	lbz r0, 0(r5)
/* 80816754  54 00 20 36 */	slwi r0, r0, 4
/* 80816758  7C 04 02 14 */	add r0, r4, r0
/* 8081675C  B0 03 00 00 */	sth r0, 0(r3)
/* 80816760  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 80816764  81 83 00 00 */	lwz r12, 0(r3)
/* 80816768  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8081676C  7D 89 03 A6 */	mtctr r12
/* 80816770  4E 80 04 21 */	bctrl 
/* 80816774  38 00 00 01 */	li r0, 1
/* 80816778  98 03 00 00 */	stb r0, 0(r3)
/* 8081677C  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80816780  38 80 00 03 */	li r4, 3
/* 80816784  81 83 00 00 */	lwz r12, 0(r3)
/* 80816788  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8081678C  7D 89 03 A6 */	mtctr r12
/* 80816790  4E 80 04 21 */	bctrl 
/* 80816794  C0 1A 06 D8 */	lfs f0, 0x6d8(r26)
/* 80816798  FC 00 00 1E */	fctiwz f0, f0
/* 8081679C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 808167A0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 808167A4  98 03 00 03 */	stb r0, 3(r3)
lbl_808167A8:
/* 808167A8  57 60 04 3F */	clrlwi. r0, r27, 0x10
/* 808167AC  41 82 00 0C */	beq lbl_808167B8
/* 808167B0  28 00 00 01 */	cmplwi r0, 1
/* 808167B4  40 82 00 88 */	bne lbl_8081683C
lbl_808167B8:
/* 808167B8  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 808167BC  38 80 00 00 */	li r4, 0
/* 808167C0  81 83 00 00 */	lwz r12, 0(r3)
/* 808167C4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 808167C8  7D 89 03 A6 */	mtctr r12
/* 808167CC  4E 80 04 21 */	bctrl 
/* 808167D0  C0 1A 06 E0 */	lfs f0, 0x6e0(r26)
/* 808167D4  FC 00 00 1E */	fctiwz f0, f0
/* 808167D8  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 808167DC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 808167E0  B0 03 00 00 */	sth r0, 0(r3)
/* 808167E4  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 808167E8  38 80 00 00 */	li r4, 0
/* 808167EC  81 83 00 00 */	lwz r12, 0(r3)
/* 808167F0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 808167F4  7D 89 03 A6 */	mtctr r12
/* 808167F8  4E 80 04 21 */	bctrl 
/* 808167FC  C0 1A 06 E0 */	lfs f0, 0x6e0(r26)
/* 80816800  FC 00 00 1E */	fctiwz f0, f0
/* 80816804  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80816808  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8081680C  B0 03 00 04 */	sth r0, 4(r3)
/* 80816810  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80816814  38 80 00 00 */	li r4, 0
/* 80816818  81 83 00 00 */	lwz r12, 0(r3)
/* 8081681C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80816820  7D 89 03 A6 */	mtctr r12
/* 80816824  4E 80 04 21 */	bctrl 
/* 80816828  C0 1A 06 E0 */	lfs f0, 0x6e0(r26)
/* 8081682C  FC 00 00 1E */	fctiwz f0, f0
/* 80816830  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80816834  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80816838  B0 03 00 02 */	sth r0, 2(r3)
lbl_8081683C:
/* 8081683C  3B 7B 00 01 */	addi r27, r27, 1
lbl_80816840:
/* 80816840  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 80816844  A0 1D 00 5C */	lhz r0, 0x5c(r29)
/* 80816848  7C 03 00 40 */	cmplw r3, r0
/* 8081684C  41 80 FD CC */	blt lbl_80816618
/* 80816850  80 9E 00 04 */	lwz r4, 4(r30)
/* 80816854  80 7A 05 C0 */	lwz r3, 0x5c0(r26)
/* 80816858  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8081685C  38 84 00 58 */	addi r4, r4, 0x58
/* 80816860  4B 7F 6F 48 */	b entry__13mDoExt_brkAnmFP16J3DMaterialTablef
/* 80816864  C0 3A 06 D8 */	lfs f1, 0x6d8(r26)
/* 80816868  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 8081686C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80816870  4C 41 13 82 */	cror 2, 1, 2
/* 80816874  40 82 00 48 */	bne lbl_808168BC
/* 80816878  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8081687C  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 80816880  80 04 5F 88 */	lwz r0, 0x5f88(r4)
/* 80816884  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80816888  3B 63 4A C8 */	addi r27, r3, j3dSys@l
/* 8081688C  90 1B 00 48 */	stw r0, 0x48(r27)
/* 80816890  80 04 5F 8C */	lwz r0, 0x5f8c(r4)
/* 80816894  90 1B 00 4C */	stw r0, 0x4c(r27)
/* 80816898  80 7A 05 BC */	lwz r3, 0x5bc(r26)
/* 8081689C  4B 7F A9 24 */	b entryDL__16mDoExt_McaMorfSOFv
/* 808168A0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 808168A4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 808168A8  80 03 5F 80 */	lwz r0, 0x5f80(r3)
/* 808168AC  90 1B 00 48 */	stw r0, 0x48(r27)
/* 808168B0  80 03 5F 84 */	lwz r0, 0x5f84(r3)
/* 808168B4  90 1B 00 4C */	stw r0, 0x4c(r27)
/* 808168B8  48 00 00 10 */	b lbl_808168C8
lbl_808168BC:
/* 808168BC  38 7A 05 B4 */	addi r3, r26, 0x5b4
/* 808168C0  38 80 00 00 */	li r4, 0
/* 808168C4  4B 7F 7E FC */	b entryDL__21mDoExt_invisibleModelFP4cXyz
lbl_808168C8:
/* 808168C8  C0 5A 04 D8 */	lfs f2, 0x4d8(r26)
/* 808168CC  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 808168D0  C0 1A 04 D4 */	lfs f0, 0x4d4(r26)
/* 808168D4  EC 21 00 2A */	fadds f1, f1, f0
/* 808168D8  C0 1A 04 D0 */	lfs f0, 0x4d0(r26)
/* 808168DC  D0 01 00 08 */	stfs f0, 8(r1)
/* 808168E0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 808168E4  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 808168E8  C0 3A 04 50 */	lfs f1, 0x450(r26)
/* 808168EC  C0 1A 06 D8 */	lfs f0, 0x6d8(r26)
/* 808168F0  EC 21 00 32 */	fmuls f1, f1, f0
/* 808168F4  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 808168F8  EC 01 00 24 */	fdivs f0, f1, f0
/* 808168FC  D0 1A 04 50 */	stfs f0, 0x450(r26)
/* 80816900  80 7A 06 BC */	lwz r3, 0x6bc(r26)
/* 80816904  38 80 00 00 */	li r4, 0
/* 80816908  7F C5 F3 78 */	mr r5, r30
/* 8081690C  38 C1 00 08 */	addi r6, r1, 8
/* 80816910  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80816914  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80816918  C0 7A 04 D4 */	lfs f3, 0x4d4(r26)
/* 8081691C  C0 9A 06 D4 */	lfs f4, 0x6d4(r26)
/* 80816920  38 FA 07 B0 */	addi r7, r26, 0x7b0
/* 80816924  39 1A 01 0C */	addi r8, r26, 0x10c
/* 80816928  39 20 00 00 */	li r9, 0
/* 8081692C  C0 BF 00 00 */	lfs f5, 0(r31)
/* 80816930  3D 40 80 42 */	lis r10, mSimpleTexObj__21dDlst_shadowControl_c@ha
/* 80816934  39 4A 48 D0 */	addi r10, r10, mSimpleTexObj__21dDlst_shadowControl_c@l
/* 80816938  4B 81 7F D8 */	b dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj
/* 8081693C  90 7A 06 BC */	stw r3, 0x6bc(r26)
/* 80816940  38 60 00 01 */	li r3, 1
lbl_80816944:
/* 80816944  39 61 00 50 */	addi r11, r1, 0x50
/* 80816948  4B B4 B8 D4 */	b _restgpr_26
/* 8081694C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80816950  7C 08 03 A6 */	mtlr r0
/* 80816954  38 21 00 50 */	addi r1, r1, 0x50
/* 80816958  4E 80 00 20 */	blr 
