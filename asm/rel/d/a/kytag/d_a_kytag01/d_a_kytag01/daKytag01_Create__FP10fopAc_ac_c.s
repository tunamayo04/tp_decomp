lbl_808557EC:
/* 808557EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 808557F0  7C 08 02 A6 */	mflr r0
/* 808557F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 808557F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 808557FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80855800  7C 7E 1B 78 */	mr r30, r3
/* 80855804  3C 80 80 85 */	lis r4, lit_3796@ha
/* 80855808  3B E4 59 8C */	addi r31, r4, lit_3796@l
/* 8085580C  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 80855810  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80855814  40 82 00 1C */	bne lbl_80855830
/* 80855818  28 1E 00 00 */	cmplwi r30, 0
/* 8085581C  41 82 00 08 */	beq lbl_80855824
/* 80855820  4B 7C 33 44 */	b __ct__10fopAc_ac_cFv
lbl_80855824:
/* 80855824  80 1E 04 A0 */	lwz r0, 0x4a0(r30)
/* 80855828  60 00 00 08 */	ori r0, r0, 8
/* 8085582C  90 1E 04 A0 */	stw r0, 0x4a0(r30)
lbl_80855830:
/* 80855830  88 1E 04 99 */	lbz r0, 0x499(r30)
/* 80855834  2C 00 00 02 */	cmpwi r0, 2
/* 80855838  40 82 00 80 */	bne lbl_808558B8
/* 8085583C  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80855840  C0 1E 04 EC */	lfs f0, 0x4ec(r30)
/* 80855844  EC 01 00 32 */	fmuls f0, f1, f0
/* 80855848  D0 1E 05 88 */	stfs f0, 0x588(r30)
/* 8085584C  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80855850  98 1E 05 9D */	stb r0, 0x59d(r30)
/* 80855854  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80855858  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8085585C  98 1E 05 9F */	stb r0, 0x59f(r30)
/* 80855860  88 9E 05 9F */	lbz r4, 0x59f(r30)
/* 80855864  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80855868  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8085586C  A8 03 0D B8 */	lha r0, 0xdb8(r3)
/* 80855870  7C 04 00 00 */	cmpw r4, r0
/* 80855874  40 82 00 F4 */	bne lbl_80855968
/* 80855878  88 1E 04 BA */	lbz r0, 0x4ba(r30)
/* 8085587C  7C 04 07 74 */	extsb r4, r0
/* 80855880  3C 60 80 45 */	lis r3, struct_80450D64+0x0@ha
/* 80855884  88 03 0D 64 */	lbz r0, struct_80450D64+0x0@l(r3)
/* 80855888  7C 00 07 74 */	extsb r0, r0
/* 8085588C  7C 04 00 00 */	cmpw r4, r0
/* 80855890  40 82 00 D8 */	bne lbl_80855968
/* 80855894  3C 60 80 43 */	lis r3, g_env_light@ha
/* 80855898  38 63 CA 54 */	addi r3, r3, g_env_light@l
/* 8085589C  88 03 12 C2 */	lbz r0, 0x12c2(r3)
/* 808558A0  98 1E 05 9E */	stb r0, 0x59e(r30)
/* 808558A4  88 1E 05 9D */	lbz r0, 0x59d(r30)
/* 808558A8  98 03 12 C8 */	stb r0, 0x12c8(r3)
/* 808558AC  98 03 12 C2 */	stb r0, 0x12c2(r3)
/* 808558B0  98 03 12 C3 */	stb r0, 0x12c3(r3)
/* 808558B4  48 00 00 B4 */	b lbl_80855968
lbl_808558B8:
/* 808558B8  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 808558BC  54 00 86 3E */	rlwinm r0, r0, 0x10, 0x18, 0x1f
/* 808558C0  C8 3F 00 40 */	lfd f1, 0x40(r31)
/* 808558C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 808558C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 808558CC  3C 00 43 30 */	lis r0, 0x4330
/* 808558D0  90 01 00 08 */	stw r0, 8(r1)
/* 808558D4  C8 01 00 08 */	lfd f0, 8(r1)
/* 808558D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 808558DC  D0 1E 05 90 */	stfs f0, 0x590(r30)
/* 808558E0  A8 1E 04 DC */	lha r0, 0x4dc(r30)
/* 808558E4  98 1E 05 98 */	stb r0, 0x598(r30)
/* 808558E8  A8 1E 04 DC */	lha r0, 0x4dc(r30)
/* 808558EC  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 808558F0  98 1E 05 99 */	stb r0, 0x599(r30)
/* 808558F4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 808558F8  D0 1E 05 94 */	stfs f0, 0x594(r30)
/* 808558FC  88 1E 04 99 */	lbz r0, 0x499(r30)
/* 80855900  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80855904  40 82 00 64 */	bne lbl_80855968
/* 80855908  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8085590C  C0 1E 05 90 */	lfs f0, 0x590(r30)
/* 80855910  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80855914  40 82 00 0C */	bne lbl_80855920
/* 80855918  C0 1F 00 58 */	lfs f0, 0x58(r31)
/* 8085591C  D0 1E 05 90 */	stfs f0, 0x590(r30)
lbl_80855920:
/* 80855920  C0 5F 00 20 */	lfs f2, 0x20(r31)
/* 80855924  C0 1E 04 EC */	lfs f0, 0x4ec(r30)
/* 80855928  EC 02 00 32 */	fmuls f0, f2, f0
/* 8085592C  D0 1E 05 88 */	stfs f0, 0x588(r30)
/* 80855930  C0 3E 05 88 */	lfs f1, 0x588(r30)
/* 80855934  C0 1E 05 90 */	lfs f0, 0x590(r30)
/* 80855938  EC 02 00 32 */	fmuls f0, f2, f0
/* 8085593C  EC 01 00 2A */	fadds f0, f1, f0
/* 80855940  D0 1E 05 8C */	stfs f0, 0x58c(r30)
/* 80855944  C0 1E 05 88 */	lfs f0, 0x588(r30)
/* 80855948  EC 22 00 2A */	fadds f1, f2, f0
/* 8085594C  C0 1E 05 8C */	lfs f0, 0x58c(r30)
/* 80855950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80855954  4C 41 13 82 */	cror 2, 1, 2
/* 80855958  40 82 00 08 */	bne lbl_80855960
/* 8085595C  D0 3E 05 8C */	stfs f1, 0x58c(r30)
lbl_80855960:
/* 80855960  38 00 00 00 */	li r0, 0
/* 80855964  98 1E 05 9C */	stb r0, 0x59c(r30)
lbl_80855968:
/* 80855968  38 60 00 04 */	li r3, 4
/* 8085596C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80855970  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80855974  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80855978  7C 08 03 A6 */	mtlr r0
/* 8085597C  38 21 00 20 */	addi r1, r1, 0x20
/* 80855980  4E 80 00 20 */	blr 
