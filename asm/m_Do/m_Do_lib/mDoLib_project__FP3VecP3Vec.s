lbl_80015310:
/* 80015310  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80015314  7C 08 02 A6 */	mflr r0
/* 80015318  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001531C  39 61 00 30 */	addi r11, r1, 0x30
/* 80015320  48 34 CE BD */	bl _savegpr_29
/* 80015324  7C 7D 1B 78 */	mr r29, r3
/* 80015328  7C 9E 23 78 */	mr r30, r4
/* 8001532C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80015330  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l
/* 80015334  80 7F 61 B0 */	lwz r3, 0x61b0(r31)
/* 80015338  28 03 00 00 */	cmplwi r3, 0
/* 8001533C  40 82 00 18 */	bne lbl_80015354
/* 80015340  C0 02 81 84 */	lfs f0, lit_3784(r2)
/* 80015344  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80015348  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8001534C  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80015350  48 00 01 84 */	b lbl_800154D4
lbl_80015354:
/* 80015354  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 80015358  7F A4 EB 78 */	mr r4, r29
/* 8001535C  38 A1 00 08 */	addi r5, r1, 8
/* 80015360  48 33 1A 0D */	bl PSMTXMultVec
/* 80015364  80 7F 61 B0 */	lwz r3, 0x61b0(r31)
/* 80015368  C0 83 01 DC */	lfs f4, 0x1dc(r3)
/* 8001536C  C0 3D 00 08 */	lfs f1, 8(r29)
/* 80015370  C0 03 01 D8 */	lfs f0, 0x1d8(r3)
/* 80015374  EC 61 00 32 */	fmuls f3, f1, f0
/* 80015378  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8001537C  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80015380  EC 41 00 32 */	fmuls f2, f1, f0
/* 80015384  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80015388  C0 03 01 D4 */	lfs f0, 0x1d4(r3)
/* 8001538C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80015390  EC 02 00 2A */	fadds f0, f2, f0
/* 80015394  EC 03 00 2A */	fadds f0, f3, f0
/* 80015398  EC 44 00 2A */	fadds f2, f4, f0
/* 8001539C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800153A0  C0 02 81 84 */	lfs f0, lit_3784(r2)
/* 800153A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800153A8  4C 41 13 82 */	cror 2, 1, 2
/* 800153AC  40 82 00 08 */	bne lbl_800153B4
/* 800153B0  D0 01 00 10 */	stfs f0, 0x10(r1)
lbl_800153B4:
/* 800153B4  C0 02 81 84 */	lfs f0, lit_3784(r2)
/* 800153B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800153BC  4C 40 13 82 */	cror 2, 0, 2
/* 800153C0  40 82 00 3C */	bne lbl_800153FC
/* 800153C4  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 800153C8  40 82 00 18 */	bne lbl_800153E0
/* 800153CC  C0 22 81 88 */	lfs f1, lit_3785(r2)
/* 800153D0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800153D4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800153D8  D0 1E 00 08 */	stfs f0, 8(r30)
/* 800153DC  48 00 00 18 */	b lbl_800153F4
lbl_800153E0:
/* 800153E0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800153E4  C0 02 81 8C */	lfs f0, lit_3786(r2)
/* 800153E8  EC 00 10 24 */	fdivs f0, f0, f2
/* 800153EC  EC 01 00 32 */	fmuls f0, f1, f0
/* 800153F0  D0 1E 00 08 */	stfs f0, 8(r30)
lbl_800153F4:
/* 800153F4  C0 62 81 88 */	lfs f3, lit_3785(r2)
/* 800153F8  48 00 00 18 */	b lbl_80015410
lbl_800153FC:
/* 800153FC  C0 02 81 8C */	lfs f0, lit_3786(r2)
/* 80015400  EC 60 10 24 */	fdivs f3, f0, f2
/* 80015404  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80015408  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8001540C  D0 1E 00 08 */	stfs f0, 8(r30)
lbl_80015410:
/* 80015410  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80015414  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80015418  80 63 61 AC */	lwz r3, 0x61ac(r3)
/* 8001541C  C0 02 81 84 */	lfs f0, lit_3784(r2)
/* 80015420  C0 23 00 00 */	lfs f1, 0(r3)
/* 80015424  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80015428  41 82 00 2C */	beq lbl_80015454
/* 8001542C  C0 42 81 8C */	lfs f2, lit_3786(r2)
/* 80015430  C0 02 81 90 */	lfs f0, lit_3787(r2)
/* 80015434  EC 20 00 72 */	fmuls f1, f0, f1
/* 80015438  C0 03 00 08 */	lfs f0, 8(r3)
/* 8001543C  EC 01 00 2A */	fadds f0, f1, f0
/* 80015440  EC 22 00 32 */	fmuls f1, f2, f0
/* 80015444  C0 02 81 94 */	lfs f0, lit_3788(r2)
/* 80015448  EC 81 00 28 */	fsubs f4, f1, f0
/* 8001544C  C0 C2 81 98 */	lfs f6, lit_3789(r2)
/* 80015450  48 00 00 0C */	b lbl_8001545C
lbl_80015454:
/* 80015454  FC 80 08 90 */	fmr f4, f1
/* 80015458  C0 C3 00 08 */	lfs f6, 8(r3)
lbl_8001545C:
/* 8001545C  C0 02 81 84 */	lfs f0, lit_3784(r2)
/* 80015460  C0 23 00 04 */	lfs f1, 4(r3)
/* 80015464  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80015468  41 82 00 2C */	beq lbl_80015494
/* 8001546C  C0 42 81 8C */	lfs f2, lit_3786(r2)
/* 80015470  C0 02 81 90 */	lfs f0, lit_3787(r2)
/* 80015474  EC 20 00 72 */	fmuls f1, f0, f1
/* 80015478  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8001547C  EC 01 00 2A */	fadds f0, f1, f0
/* 80015480  EC 22 00 32 */	fmuls f1, f2, f0
/* 80015484  C0 02 81 9C */	lfs f0, lit_3790(r2)
/* 80015488  EC A1 00 28 */	fsubs f5, f1, f0
/* 8001548C  C0 E2 81 A0 */	lfs f7, lit_3791(r2)
/* 80015490  48 00 00 0C */	b lbl_8001549C
lbl_80015494:
/* 80015494  FC A0 08 90 */	fmr f5, f1
/* 80015498  C0 E3 00 0C */	lfs f7, 0xc(r3)
lbl_8001549C:
/* 8001549C  C0 42 81 8C */	lfs f2, lit_3786(r2)
/* 800154A0  C0 01 00 08 */	lfs f0, 8(r1)
/* 800154A4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 800154A8  EC 02 00 2A */	fadds f0, f2, f0
/* 800154AC  EC 06 00 32 */	fmuls f0, f6, f0
/* 800154B0  EC 04 00 2A */	fadds f0, f4, f0
/* 800154B4  D0 1E 00 00 */	stfs f0, 0(r30)
/* 800154B8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800154BC  FC 00 18 50 */	fneg f0, f3
/* 800154C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800154C4  EC 02 00 2A */	fadds f0, f2, f0
/* 800154C8  EC 07 00 32 */	fmuls f0, f7, f0
/* 800154CC  EC 05 00 2A */	fadds f0, f5, f0
/* 800154D0  D0 1E 00 04 */	stfs f0, 4(r30)
lbl_800154D4:
/* 800154D4  39 61 00 30 */	addi r11, r1, 0x30
/* 800154D8  48 34 CD 51 */	bl _restgpr_29
/* 800154DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800154E0  7C 08 03 A6 */	mtlr r0
/* 800154E4  38 21 00 30 */	addi r1, r1, 0x30
/* 800154E8  4E 80 00 20 */	blr 
