lbl_80151350:
/* 80151350  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80151354  7C 08 02 A6 */	mflr r0
/* 80151358  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8015135C  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80151360  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, 0 /* qr0 */
/* 80151364  39 61 00 E0 */	addi r11, r1, 0xe0
/* 80151368  48 21 0E 59 */	bl _savegpr_22
/* 8015136C  7C 78 1B 78 */	mr r24, r3
/* 80151370  7C D9 33 78 */	mr r25, r6
/* 80151374  7C FA 3B 78 */	mr r26, r7
/* 80151378  7D 1B 43 78 */	mr r27, r8
/* 8015137C  7D 37 4B 78 */	mr r23, r9
/* 80151380  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80151384  28 00 00 00 */	cmplwi r0, 0
/* 80151388  41 82 00 8C */	beq lbl_80151414
/* 8015138C  38 C1 00 4C */	addi r6, r1, 0x4c
/* 80151390  38 E1 00 34 */	addi r7, r1, 0x34
/* 80151394  39 01 00 18 */	addi r8, r1, 0x18
/* 80151398  39 21 00 28 */	addi r9, r1, 0x28
/* 8015139C  7E EA BB 78 */	mr r10, r23
/* 801513A0  48 00 02 A9 */	bl initCalc__15daNpcF_Lookat_cFP10fopAc_ac_cPA4_fP4cXyzP5csXyzPfR4cXyzi
/* 801513A4  3A C0 00 02 */	li r22, 2
lbl_801513A8:
/* 801513A8  7F 03 C3 78 */	mr r3, r24
/* 801513AC  38 81 00 4C */	addi r4, r1, 0x4c
/* 801513B0  38 A1 00 34 */	addi r5, r1, 0x34
/* 801513B4  38 C1 00 18 */	addi r6, r1, 0x18
/* 801513B8  48 00 06 9D */	bl update__15daNpcF_Lookat_cFP4cXyzP5csXyzPf
/* 801513BC  2C 16 00 00 */	cmpwi r22, 0
/* 801513C0  41 80 00 3C */	blt lbl_801513FC
/* 801513C4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801513C8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801513CC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801513D0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801513D4  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801513D8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801513DC  7F 03 C3 78 */	mr r3, r24
/* 801513E0  7E C4 B3 78 */	mr r4, r22
/* 801513E4  38 A1 00 4C */	addi r5, r1, 0x4c
/* 801513E8  38 C1 00 34 */	addi r6, r1, 0x34
/* 801513EC  38 E1 00 0C */	addi r7, r1, 0xc
/* 801513F0  7F 68 DB 78 */	mr r8, r27
/* 801513F4  7E E9 BB 78 */	mr r9, r23
/* 801513F8  48 00 07 71 */	bl calcMoveDisAngle__15daNpcF_Lookat_cFiP4cXyzP5csXyz4cXyzii
lbl_801513FC:
/* 801513FC  3A D6 FF FF */	addi r22, r22, -1
/* 80151400  2C 16 FF FF */	cmpwi r22, -1
/* 80151404  40 80 FF A4 */	bge lbl_801513A8
/* 80151408  7F 03 C3 78 */	mr r3, r24
/* 8015140C  48 00 0B 49 */	bl setRotAngle__15daNpcF_Lookat_cFv
/* 80151410  48 00 00 08 */	b lbl_80151418
lbl_80151414:
/* 80151414  48 00 0B CD */	bl clrRotAngle__15daNpcF_Lookat_cFv
lbl_80151418:
/* 80151418  3B A0 00 02 */	li r29, 2
/* 8015141C  3A E0 00 0C */	li r23, 0xc
/* 80151420  3A C0 00 08 */	li r22, 8
/* 80151424  3B 80 00 01 */	li r28, 1
lbl_80151428:
/* 80151428  2C 1A 00 00 */	cmpwi r26, 0
/* 8015142C  41 82 00 28 */	beq lbl_80151454
/* 80151430  7C 79 B0 2E */	lwzx r3, r25, r22
/* 80151434  7C 98 BA 14 */	add r4, r24, r23
/* 80151438  A8 04 00 7C */	lha r0, 0x7c(r4)
/* 8015143C  B0 03 00 00 */	sth r0, 0(r3)
/* 80151440  A8 04 00 7E */	lha r0, 0x7e(r4)
/* 80151444  B0 03 00 02 */	sth r0, 2(r3)
/* 80151448  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8015144C  B0 03 00 04 */	sth r0, 4(r3)
/* 80151450  48 00 01 50 */	b lbl_801515A0
lbl_80151454:
/* 80151454  7C 79 B0 2E */	lwzx r3, r25, r22
/* 80151458  A8 03 00 00 */	lha r0, 0(r3)
/* 8015145C  C8 62 99 E0 */	lfd f3, lit_4142(r2)
/* 80151460  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80151464  90 01 00 84 */	stw r0, 0x84(r1)
/* 80151468  3C 80 43 30 */	lis r4, 0x4330
/* 8015146C  90 81 00 80 */	stw r4, 0x80(r1)
/* 80151470  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80151474  EC 00 18 28 */	fsubs f0, f0, f3
/* 80151478  D0 01 00 08 */	stfs f0, 8(r1)
/* 8015147C  7F F8 BA 14 */	add r31, r24, r23
/* 80151480  A8 1F 00 7C */	lha r0, 0x7c(r31)
/* 80151484  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80151488  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8015148C  90 81 00 88 */	stw r4, 0x88(r1)
/* 80151490  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80151494  EC 20 18 28 */	fsubs f1, f0, f3
/* 80151498  38 61 00 08 */	addi r3, r1, 8
/* 8015149C  C0 42 9A 90 */	lfs f2, lit_8404(r2)
/* 801514A0  38 00 08 00 */	li r0, 0x800
/* 801514A4  7F C0 E3 D6 */	divw r30, r0, r28
/* 801514A8  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 801514AC  90 01 00 94 */	stw r0, 0x94(r1)
/* 801514B0  90 81 00 90 */	stw r4, 0x90(r1)
/* 801514B4  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 801514B8  EC 60 18 28 */	fsubs f3, f0, f3
/* 801514BC  48 11 E5 81 */	bl cLib_addCalc2__FPffff
/* 801514C0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801514C4  FC 00 00 1E */	fctiwz f0, f0
/* 801514C8  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 801514CC  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801514D0  7C 79 B0 2E */	lwzx r3, r25, r22
/* 801514D4  B0 03 00 00 */	sth r0, 0(r3)
/* 801514D8  7C 79 B0 2E */	lwzx r3, r25, r22
/* 801514DC  A8 03 00 02 */	lha r0, 2(r3)
/* 801514E0  C8 62 99 E0 */	lfd f3, lit_4142(r2)
/* 801514E4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801514E8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801514EC  3C 80 43 30 */	lis r4, 0x4330
/* 801514F0  90 81 00 A0 */	stw r4, 0xa0(r1)
/* 801514F4  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 801514F8  EC 00 18 28 */	fsubs f0, f0, f3
/* 801514FC  D0 01 00 08 */	stfs f0, 8(r1)
/* 80151500  A8 1F 00 7E */	lha r0, 0x7e(r31)
/* 80151504  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80151508  90 01 00 AC */	stw r0, 0xac(r1)
/* 8015150C  90 81 00 A8 */	stw r4, 0xa8(r1)
/* 80151510  C8 01 00 A8 */	lfd f0, 0xa8(r1)
/* 80151514  EF E0 18 28 */	fsubs f31, f0, f3
/* 80151518  38 61 00 08 */	addi r3, r1, 8
/* 8015151C  FC 20 F8 90 */	fmr f1, f31
/* 80151520  C0 42 9A 90 */	lfs f2, lit_8404(r2)
/* 80151524  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80151528  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8015152C  90 81 00 B0 */	stw r4, 0xb0(r1)
/* 80151530  C8 01 00 B0 */	lfd f0, 0xb0(r1)
/* 80151534  EC 60 18 28 */	fsubs f3, f0, f3
/* 80151538  48 11 E5 05 */	bl cLib_addCalc2__FPffff
/* 8015153C  2C 1B 00 00 */	cmpwi r27, 0
/* 80151540  40 81 00 1C */	ble lbl_8015155C
/* 80151544  C0 01 00 08 */	lfs f0, 8(r1)
/* 80151548  EC 3F 00 28 */	fsubs f1, f31, f0
/* 8015154C  C0 02 99 D8 */	lfs f0, lit_4116(r2)
/* 80151550  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80151554  40 80 00 08 */	bge lbl_8015155C
/* 80151558  D3 E1 00 08 */	stfs f31, 8(r1)
lbl_8015155C:
/* 8015155C  2C 1B 00 00 */	cmpwi r27, 0
/* 80151560  40 80 00 1C */	bge lbl_8015157C
/* 80151564  C0 22 99 D8 */	lfs f1, lit_4116(r2)
/* 80151568  C0 01 00 08 */	lfs f0, 8(r1)
/* 8015156C  EC 1F 00 28 */	fsubs f0, f31, f0
/* 80151570  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80151574  40 80 00 08 */	bge lbl_8015157C
/* 80151578  D3 E1 00 08 */	stfs f31, 8(r1)
lbl_8015157C:
/* 8015157C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80151580  FC 00 00 1E */	fctiwz f0, f0
/* 80151584  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80151588  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8015158C  7C 79 B0 2E */	lwzx r3, r25, r22
/* 80151590  B0 03 00 02 */	sth r0, 2(r3)
/* 80151594  38 00 00 00 */	li r0, 0
/* 80151598  7C 79 B0 2E */	lwzx r3, r25, r22
/* 8015159C  B0 03 00 04 */	sth r0, 4(r3)
lbl_801515A0:
/* 801515A0  37 BD FF FF */	addic. r29, r29, -1
/* 801515A4  3A F7 FF FA */	addi r23, r23, -6
/* 801515A8  3A D6 FF FC */	addi r22, r22, -4
/* 801515AC  3B 9C 00 01 */	addi r28, r28, 1
/* 801515B0  40 80 FE 78 */	bge lbl_80151428
/* 801515B4  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, 0 /* qr0 */
/* 801515B8  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 801515BC  39 61 00 E0 */	addi r11, r1, 0xe0
/* 801515C0  48 21 0C 4D */	bl _restgpr_22
/* 801515C4  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801515C8  7C 08 03 A6 */	mtlr r0
/* 801515CC  38 21 00 F0 */	addi r1, r1, 0xf0
/* 801515D0  4E 80 00 20 */	blr 
