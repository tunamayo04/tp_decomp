lbl_8004B168:
/* 8004B168  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8004B16C  7C 08 02 A6 */	mflr r0
/* 8004B170  90 01 00 74 */	stw r0, 0x74(r1)
/* 8004B174  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8004B178  F3 E1 00 68 */	psq_st f31, 104(r1), 0, 0 /* qr0 */
/* 8004B17C  39 61 00 60 */	addi r11, r1, 0x60
/* 8004B180  48 31 70 49 */	bl _savegpr_24
/* 8004B184  7C 78 1B 78 */	mr r24, r3
/* 8004B188  7C 99 23 78 */	mr r25, r4
/* 8004B18C  7C BA 2B 79 */	or. r26, r5, r5
/* 8004B190  7C DB 33 78 */	mr r27, r6
/* 8004B194  7C FC 3B 78 */	mr r28, r7
/* 8004B198  7D 1D 43 78 */	mr r29, r8
/* 8004B19C  7D 3E 4B 78 */	mr r30, r9
/* 8004B1A0  FF E0 08 90 */	fmr f31, f1
/* 8004B1A4  41 82 00 18 */	beq lbl_8004B1BC
/* 8004B1A8  88 1A 03 83 */	lbz r0, 0x383(r26)
/* 8004B1AC  28 00 00 7C */	cmplwi r0, 0x7c
/* 8004B1B0  41 82 00 0C */	beq lbl_8004B1BC
/* 8004B1B4  38 60 00 00 */	li r3, 0
/* 8004B1B8  48 00 03 08 */	b lbl_8004B4C0
lbl_8004B1BC:
/* 8004B1BC  80 98 00 10 */	lwz r4, 0x10(r24)
/* 8004B1C0  28 04 00 00 */	cmplwi r4, 0
/* 8004B1C4  41 82 00 14 */	beq lbl_8004B1D8
/* 8004B1C8  A8 78 00 0C */	lha r3, 0xc(r24)
/* 8004B1CC  A0 18 00 0E */	lhz r0, 0xe(r24)
/* 8004B1D0  7C 03 00 00 */	cmpw r3, r0
/* 8004B1D4  41 80 00 0C */	blt lbl_8004B1E0
lbl_8004B1D8:
/* 8004B1D8  38 60 00 00 */	li r3, 0
/* 8004B1DC  48 00 02 E4 */	b lbl_8004B4C0
lbl_8004B1E0:
/* 8004B1E0  1C 03 00 14 */	mulli r0, r3, 0x14
/* 8004B1E4  7F E4 02 14 */	add r31, r4, r0
/* 8004B1E8  C0 19 00 00 */	lfs f0, 0(r25)
/* 8004B1EC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8004B1F0  C0 19 00 04 */	lfs f0, 4(r25)
/* 8004B1F4  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8004B1F8  C0 19 00 08 */	lfs f0, 8(r25)
/* 8004B1FC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8004B200  A0 78 00 08 */	lhz r3, 8(r24)
/* 8004B204  48 00 09 6D */	bl getRM_ID__13dPa_control_cFUs
/* 8004B208  80 8D 89 20 */	lwz r4, mEmitterMng__13dPa_control_c(r13)
/* 8004B20C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8004B210  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 8004B214  7C 64 00 2E */	lwzx r3, r4, r0
/* 8004B218  A0 98 00 08 */	lhz r4, 8(r24)
/* 8004B21C  48 22 8D B1 */	bl getResUserWork__18JPAResourceManagerCFUs
/* 8004B220  74 60 00 EF */	andis. r0, r3, 0xef
/* 8004B224  54 04 84 3E */	srwi r4, r0, 0x10
/* 8004B228  28 04 00 64 */	cmplwi r4, 0x64
/* 8004B22C  40 80 00 24 */	bge lbl_8004B250
/* 8004B230  C8 22 85 68 */	lfd f1, lit_4093(r2)
/* 8004B234  90 81 00 34 */	stw r4, 0x34(r1)
/* 8004B238  3C 00 43 30 */	lis r0, 0x4330
/* 8004B23C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8004B240  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8004B244  EC 20 08 28 */	fsubs f1, f0, f1
/* 8004B248  C0 02 85 84 */	lfs f0, lit_4518(r2)
/* 8004B24C  EF E1 00 24 */	fdivs f31, f1, f0
lbl_8004B250:
/* 8004B250  28 04 00 64 */	cmplwi r4, 0x64
/* 8004B254  40 80 00 24 */	bge lbl_8004B278
/* 8004B258  C8 22 85 68 */	lfd f1, lit_4093(r2)
/* 8004B25C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8004B260  3C 00 43 30 */	lis r0, 0x4330
/* 8004B264  90 01 00 38 */	stw r0, 0x38(r1)
/* 8004B268  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8004B26C  EC 20 08 28 */	fsubs f1, f0, f1
/* 8004B270  C0 02 85 84 */	lfs f0, lit_4518(r2)
/* 8004B274  EF E1 00 24 */	fdivs f31, f1, f0
lbl_8004B278:
/* 8004B278  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 8004B27C  41 82 00 B8 */	beq lbl_8004B334
/* 8004B280  80 02 85 74 */	lwz r0, lit_4473(r2)
/* 8004B284  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004B288  80 02 85 78 */	lwz r0, lit_4474(r2)
/* 8004B28C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8004B290  28 1D 00 00 */	cmplwi r29, 0
/* 8004B294  41 82 00 24 */	beq lbl_8004B2B8
/* 8004B298  88 1D 00 00 */	lbz r0, 0(r29)
/* 8004B29C  98 01 00 24 */	stb r0, 0x24(r1)
/* 8004B2A0  88 1D 00 01 */	lbz r0, 1(r29)
/* 8004B2A4  98 01 00 25 */	stb r0, 0x25(r1)
/* 8004B2A8  88 1D 00 02 */	lbz r0, 2(r29)
/* 8004B2AC  98 01 00 26 */	stb r0, 0x26(r1)
/* 8004B2B0  88 1D 00 03 */	lbz r0, 3(r29)
/* 8004B2B4  98 01 00 27 */	stb r0, 0x27(r1)
lbl_8004B2B8:
/* 8004B2B8  28 1C 00 00 */	cmplwi r28, 0
/* 8004B2BC  41 82 00 24 */	beq lbl_8004B2E0
/* 8004B2C0  88 1C 00 00 */	lbz r0, 0(r28)
/* 8004B2C4  98 01 00 20 */	stb r0, 0x20(r1)
/* 8004B2C8  88 1C 00 01 */	lbz r0, 1(r28)
/* 8004B2CC  98 01 00 21 */	stb r0, 0x21(r1)
/* 8004B2D0  88 1C 00 02 */	lbz r0, 2(r28)
/* 8004B2D4  98 01 00 22 */	stb r0, 0x22(r1)
/* 8004B2D8  88 1C 00 03 */	lbz r0, 3(r28)
/* 8004B2DC  98 01 00 23 */	stb r0, 0x23(r1)
lbl_8004B2E0:
/* 8004B2E0  7F 23 CB 78 */	mr r3, r25
/* 8004B2E4  7F 44 D3 78 */	mr r4, r26
/* 8004B2E8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8004B2EC  38 C1 00 28 */	addi r6, r1, 0x28
/* 8004B2F0  38 E1 00 24 */	addi r7, r1, 0x24
/* 8004B2F4  39 01 00 20 */	addi r8, r1, 0x20
/* 8004B2F8  FC 20 F8 90 */	fmr f1, f31
/* 8004B2FC  48 15 E8 E9 */	bl dKy_ParticleColor_get_actor__FP4cXyzP12dKy_tevstr_cP8_GXColorP8_GXColorP8_GXColorP8_GXColorf
/* 8004B300  88 01 00 28 */	lbz r0, 0x28(r1)
/* 8004B304  98 1F 00 0C */	stb r0, 0xc(r31)
/* 8004B308  88 01 00 29 */	lbz r0, 0x29(r1)
/* 8004B30C  98 1F 00 0D */	stb r0, 0xd(r31)
/* 8004B310  88 01 00 2A */	lbz r0, 0x2a(r1)
/* 8004B314  98 1F 00 0E */	stb r0, 0xe(r31)
/* 8004B318  88 01 00 2C */	lbz r0, 0x2c(r1)
/* 8004B31C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 8004B320  88 01 00 2D */	lbz r0, 0x2d(r1)
/* 8004B324  98 1F 00 11 */	stb r0, 0x11(r31)
/* 8004B328  88 01 00 2E */	lbz r0, 0x2e(r1)
/* 8004B32C  98 1F 00 12 */	stb r0, 0x12(r31)
/* 8004B330  48 00 01 78 */	b lbl_8004B4A8
lbl_8004B334:
/* 8004B334  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 8004B338  41 82 01 30 */	beq lbl_8004B468
/* 8004B33C  80 02 85 7C */	lwz r0, lit_4482(r2)
/* 8004B340  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004B344  80 02 85 80 */	lwz r0, lit_4483(r2)
/* 8004B348  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004B34C  28 1D 00 00 */	cmplwi r29, 0
/* 8004B350  41 82 00 24 */	beq lbl_8004B374
/* 8004B354  88 1D 00 00 */	lbz r0, 0(r29)
/* 8004B358  98 01 00 14 */	stb r0, 0x14(r1)
/* 8004B35C  88 1D 00 01 */	lbz r0, 1(r29)
/* 8004B360  98 01 00 15 */	stb r0, 0x15(r1)
/* 8004B364  88 1D 00 02 */	lbz r0, 2(r29)
/* 8004B368  98 01 00 16 */	stb r0, 0x16(r1)
/* 8004B36C  88 1D 00 03 */	lbz r0, 3(r29)
/* 8004B370  98 01 00 17 */	stb r0, 0x17(r1)
lbl_8004B374:
/* 8004B374  28 1C 00 00 */	cmplwi r28, 0
/* 8004B378  41 82 00 24 */	beq lbl_8004B39C
/* 8004B37C  88 1C 00 00 */	lbz r0, 0(r28)
/* 8004B380  98 01 00 10 */	stb r0, 0x10(r1)
/* 8004B384  88 1C 00 01 */	lbz r0, 1(r28)
/* 8004B388  98 01 00 11 */	stb r0, 0x11(r1)
/* 8004B38C  88 1C 00 02 */	lbz r0, 2(r28)
/* 8004B390  98 01 00 12 */	stb r0, 0x12(r1)
/* 8004B394  88 1C 00 03 */	lbz r0, 3(r28)
/* 8004B398  98 01 00 13 */	stb r0, 0x13(r1)
lbl_8004B39C:
/* 8004B39C  7F 23 CB 78 */	mr r3, r25
/* 8004B3A0  7F 44 D3 78 */	mr r4, r26
/* 8004B3A4  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8004B3A8  38 C1 00 18 */	addi r6, r1, 0x18
/* 8004B3AC  38 E1 00 14 */	addi r7, r1, 0x14
/* 8004B3B0  39 01 00 10 */	addi r8, r1, 0x10
/* 8004B3B4  FC 20 F8 90 */	fmr f1, f31
/* 8004B3B8  48 15 E9 05 */	bl dKy_ParticleColor_get_bg__FP4cXyzP12dKy_tevstr_cP8_GXColorP8_GXColorP8_GXColorP8_GXColorf
/* 8004B3BC  3C 60 80 43 */	lis r3, g_env_light@ha
/* 8004B3C0  38 63 CA 54 */	addi r3, r3, g_env_light@l
/* 8004B3C4  C0 23 12 5C */	lfs f1, 0x125c(r3)
/* 8004B3C8  C0 02 85 88 */	lfs f0, lit_4519(r2)
/* 8004B3CC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8004B3D0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8004B3D4  EF E1 00 2A */	fadds f31, f1, f0
/* 8004B3D8  38 61 00 1C */	addi r3, r1, 0x1c
/* 8004B3DC  FC 20 F8 90 */	fmr f1, f31
/* 8004B3E0  48 15 30 51 */	bl dKy_light_influence_col__FP8_GXColorf
/* 8004B3E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8004B3E8  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8004B3EC  98 01 00 1C */	stb r0, 0x1c(r1)
/* 8004B3F0  88 01 00 0D */	lbz r0, 0xd(r1)
/* 8004B3F4  98 01 00 1D */	stb r0, 0x1d(r1)
/* 8004B3F8  88 01 00 0E */	lbz r0, 0xe(r1)
/* 8004B3FC  98 01 00 1E */	stb r0, 0x1e(r1)
/* 8004B400  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8004B404  98 01 00 1F */	stb r0, 0x1f(r1)
/* 8004B408  38 61 00 18 */	addi r3, r1, 0x18
/* 8004B40C  FC 20 F8 90 */	fmr f1, f31
/* 8004B410  48 15 30 21 */	bl dKy_light_influence_col__FP8_GXColorf
/* 8004B414  90 61 00 08 */	stw r3, 8(r1)
/* 8004B418  88 61 00 08 */	lbz r3, 8(r1)
/* 8004B41C  98 61 00 18 */	stb r3, 0x18(r1)
/* 8004B420  88 01 00 09 */	lbz r0, 9(r1)
/* 8004B424  98 01 00 19 */	stb r0, 0x19(r1)
/* 8004B428  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8004B42C  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8004B430  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004B434  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8004B438  98 7F 00 0C */	stb r3, 0xc(r31)
/* 8004B43C  88 01 00 19 */	lbz r0, 0x19(r1)
/* 8004B440  98 1F 00 0D */	stb r0, 0xd(r31)
/* 8004B444  88 01 00 1A */	lbz r0, 0x1a(r1)
/* 8004B448  98 1F 00 0E */	stb r0, 0xe(r31)
/* 8004B44C  88 01 00 1C */	lbz r0, 0x1c(r1)
/* 8004B450  98 1F 00 10 */	stb r0, 0x10(r31)
/* 8004B454  88 01 00 1D */	lbz r0, 0x1d(r1)
/* 8004B458  98 1F 00 11 */	stb r0, 0x11(r31)
/* 8004B45C  88 01 00 1E */	lbz r0, 0x1e(r1)
/* 8004B460  98 1F 00 12 */	stb r0, 0x12(r31)
/* 8004B464  48 00 00 44 */	b lbl_8004B4A8
lbl_8004B468:
/* 8004B468  28 1C 00 00 */	cmplwi r28, 0
/* 8004B46C  41 82 00 1C */	beq lbl_8004B488
/* 8004B470  88 1C 00 00 */	lbz r0, 0(r28)
/* 8004B474  98 1F 00 0C */	stb r0, 0xc(r31)
/* 8004B478  88 1C 00 01 */	lbz r0, 1(r28)
/* 8004B47C  98 1F 00 0D */	stb r0, 0xd(r31)
/* 8004B480  88 1C 00 02 */	lbz r0, 2(r28)
/* 8004B484  98 1F 00 0E */	stb r0, 0xe(r31)
lbl_8004B488:
/* 8004B488  28 1D 00 00 */	cmplwi r29, 0
/* 8004B48C  41 82 00 1C */	beq lbl_8004B4A8
/* 8004B490  88 1D 00 00 */	lbz r0, 0(r29)
/* 8004B494  98 1F 00 10 */	stb r0, 0x10(r31)
/* 8004B498  88 1D 00 01 */	lbz r0, 1(r29)
/* 8004B49C  98 1F 00 11 */	stb r0, 0x11(r31)
/* 8004B4A0  88 1D 00 02 */	lbz r0, 2(r29)
/* 8004B4A4  98 1F 00 12 */	stb r0, 0x12(r31)
lbl_8004B4A8:
/* 8004B4A8  9B 7F 00 0F */	stb r27, 0xf(r31)
/* 8004B4AC  9B DF 00 13 */	stb r30, 0x13(r31)
/* 8004B4B0  A8 78 00 0C */	lha r3, 0xc(r24)
/* 8004B4B4  38 03 00 01 */	addi r0, r3, 1
/* 8004B4B8  B0 18 00 0C */	sth r0, 0xc(r24)
/* 8004B4BC  38 60 00 01 */	li r3, 1
lbl_8004B4C0:
/* 8004B4C0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, 0 /* qr0 */
/* 8004B4C4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8004B4C8  39 61 00 60 */	addi r11, r1, 0x60
/* 8004B4CC  48 31 6D 49 */	bl _restgpr_24
/* 8004B4D0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8004B4D4  7C 08 03 A6 */	mtlr r0
/* 8004B4D8  38 21 00 70 */	addi r1, r1, 0x70
/* 8004B4DC  4E 80 00 20 */	blr 
