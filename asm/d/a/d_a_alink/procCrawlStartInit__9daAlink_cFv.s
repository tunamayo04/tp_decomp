lbl_800F9210:
/* 800F9210  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800F9214  7C 08 02 A6 */	mflr r0
/* 800F9218  90 01 00 24 */	stw r0, 0x24(r1)
/* 800F921C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800F9220  7C 7F 1B 78 */	mr r31, r3
/* 800F9224  A0 03 2F DC */	lhz r0, 0x2fdc(r3)
/* 800F9228  28 00 00 FF */	cmplwi r0, 0xff
/* 800F922C  41 82 00 14 */	beq lbl_800F9240
/* 800F9230  38 80 00 35 */	li r4, 0x35
/* 800F9234  38 A0 00 00 */	li r5, 0
/* 800F9238  4B FC 9B A5 */	bl procPreActionUnequipInit__9daAlink_cFiP10fopAc_ac_c
/* 800F923C  48 00 01 34 */	b lbl_800F9370
lbl_800F9240:
/* 800F9240  38 80 00 35 */	li r4, 0x35
/* 800F9244  4B FC 8D 29 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800F9248  3C 60 80 42 */	lis r3, l_waitBaseAnime@ha
/* 800F924C  C4 03 55 14 */	lfsu f0, l_waitBaseAnime@l(r3)
/* 800F9250  D0 1F 35 88 */	stfs f0, 0x3588(r31)
/* 800F9254  C0 03 00 04 */	lfs f0, 4(r3)
/* 800F9258  D0 1F 35 8C */	stfs f0, 0x358c(r31)
/* 800F925C  C0 03 00 08 */	lfs f0, 8(r3)
/* 800F9260  D0 1F 35 90 */	stfs f0, 0x3590(r31)
/* 800F9264  7F E3 FB 78 */	mr r3, r31
/* 800F9268  38 80 00 34 */	li r4, 0x34
/* 800F926C  3C A0 80 39 */	lis r5, m__20daAlinkHIO_crouch_c0@ha
/* 800F9270  38 A5 E0 1C */	addi r5, r5, m__20daAlinkHIO_crouch_c0@l
/* 800F9274  4B FB 3E 81 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800F9278  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800F927C  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 800F9280  A8 7F 30 6E */	lha r3, 0x306e(r31)
/* 800F9284  3C 63 00 01 */	addis r3, r3, 1
/* 800F9288  38 03 80 00 */	addi r0, r3, -32768
/* 800F928C  B0 1F 04 E6 */	sth r0, 0x4e6(r31)
/* 800F9290  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 800F9294  B0 1F 04 DE */	sth r0, 0x4de(r31)
/* 800F9298  A8 1F 30 6E */	lha r0, 0x306e(r31)
/* 800F929C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 800F92A0  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 800F92A4  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 800F92A8  7C 03 04 2E */	lfsx f0, r3, r0
/* 800F92AC  C0 3F 34 EC */	lfs f1, 0x34ec(r31)
/* 800F92B0  C0 42 93 BC */	lfs f2, lit_10042(r2)
/* 800F92B4  EC 02 00 32 */	fmuls f0, f2, f0
/* 800F92B8  EC 01 00 2A */	fadds f0, f1, f0
/* 800F92BC  D0 1F 04 D0 */	stfs f0, 0x4d0(r31)
/* 800F92C0  A8 1F 30 6E */	lha r0, 0x306e(r31)
/* 800F92C4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 800F92C8  7C 63 02 14 */	add r3, r3, r0
/* 800F92CC  C0 03 00 04 */	lfs f0, 4(r3)
/* 800F92D0  C0 3F 34 F4 */	lfs f1, 0x34f4(r31)
/* 800F92D4  EC 02 00 32 */	fmuls f0, f2, f0
/* 800F92D8  EC 01 00 2A */	fadds f0, f1, f0
/* 800F92DC  D0 1F 04 D8 */	stfs f0, 0x4d8(r31)
/* 800F92E0  3C 60 80 39 */	lis r3, m__20daAlinkHIO_crouch_c0@ha
/* 800F92E4  38 63 E0 1C */	addi r3, r3, m__20daAlinkHIO_crouch_c0@l
/* 800F92E8  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 800F92EC  A8 03 00 00 */	lha r0, 0(r3)
/* 800F92F0  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 800F92F4  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 800F92F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 800F92FC  3C 00 43 30 */	lis r0, 0x4330
/* 800F9300  90 01 00 08 */	stw r0, 8(r1)
/* 800F9304  C8 01 00 08 */	lfd f0, 8(r1)
/* 800F9308  EC 00 08 28 */	fsubs f0, f0, f1
/* 800F930C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800F9310  40 81 00 1C */	ble lbl_800F932C
/* 800F9314  90 61 00 0C */	stw r3, 0xc(r1)
/* 800F9318  90 01 00 08 */	stw r0, 8(r1)
/* 800F931C  C8 01 00 08 */	lfd f0, 8(r1)
/* 800F9320  EC 00 08 28 */	fsubs f0, f0, f1
/* 800F9324  D0 1F 34 7C */	stfs f0, 0x347c(r31)
/* 800F9328  48 00 00 08 */	b lbl_800F9330
lbl_800F932C:
/* 800F932C  D0 5F 34 7C */	stfs f2, 0x347c(r31)
lbl_800F9330:
/* 800F9330  C0 42 92 B8 */	lfs f2, lit_6040(r2)
/* 800F9334  C0 3F 34 7C */	lfs f1, 0x347c(r31)
/* 800F9338  3C 60 80 39 */	lis r3, m__20daAlinkHIO_crouch_c0@ha
/* 800F933C  38 63 E0 1C */	addi r3, r3, m__20daAlinkHIO_crouch_c0@l
/* 800F9340  C0 03 00 08 */	lfs f0, 8(r3)
/* 800F9344  EC 01 00 28 */	fsubs f0, f1, f0
/* 800F9348  EC 02 00 24 */	fdivs f0, f2, f0
/* 800F934C  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 800F9350  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800F9354  D0 1F 33 CC */	stfs f0, 0x33cc(r31)
/* 800F9358  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800F935C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800F9360  80 03 5F 18 */	lwz r0, 0x5f18(r3)
/* 800F9364  64 00 08 00 */	oris r0, r0, 0x800
/* 800F9368  90 03 5F 18 */	stw r0, 0x5f18(r3)
/* 800F936C  38 60 00 01 */	li r3, 1
lbl_800F9370:
/* 800F9370  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800F9374  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800F9378  7C 08 03 A6 */	mtlr r0
/* 800F937C  38 21 00 20 */	addi r1, r1, 0x20
/* 800F9380  4E 80 00 20 */	blr 
