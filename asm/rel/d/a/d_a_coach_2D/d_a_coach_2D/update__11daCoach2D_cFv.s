lbl_80657260:
/* 80657260  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80657264  7C 08 02 A6 */	mflr r0
/* 80657268  90 01 00 44 */	stw r0, 0x44(r1)
/* 8065726C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80657270  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 80657274  39 61 00 30 */	addi r11, r1, 0x30
/* 80657278  4B D0 AF 64 */	b _savegpr_29
/* 8065727C  7C 7E 1B 78 */	mr r30, r3
/* 80657280  3C 60 80 65 */	lis r3, lit_4003@ha
/* 80657284  3B E3 79 24 */	addi r31, r3, lit_4003@l
/* 80657288  3C 60 80 65 */	lis r3, l_HOSTIO@ha
/* 8065728C  38 83 7A 9C */	addi r4, r3, l_HOSTIO@l
/* 80657290  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 80657294  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 80657298  88 7E 07 81 */	lbz r3, 0x781(r30)
/* 8065729C  38 03 FF FF */	addi r0, r3, -1
/* 806572A0  C8 3F 00 20 */	lfd f1, 0x20(r31)
/* 806572A4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 806572A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806572AC  3C 00 43 30 */	lis r0, 0x4330
/* 806572B0  90 01 00 10 */	stw r0, 0x10(r1)
/* 806572B4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 806572B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 806572BC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 806572C0  EC 02 00 2A */	fadds f0, f2, f0
/* 806572C4  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 806572C8  38 60 00 00 */	li r3, 0
/* 806572CC  38 00 00 14 */	li r0, 0x14
/* 806572D0  7C 09 03 A6 */	mtctr r0
lbl_806572D4:
/* 806572D4  7C 9E 1A 14 */	add r4, r30, r3
/* 806572D8  D0 04 05 90 */	stfs f0, 0x590(r4)
/* 806572DC  D0 24 05 94 */	stfs f1, 0x594(r4)
/* 806572E0  EC 00 18 28 */	fsubs f0, f0, f3
/* 806572E4  38 63 00 18 */	addi r3, r3, 0x18
/* 806572E8  42 00 FF EC */	bdnz lbl_806572D4
/* 806572EC  80 7E 05 74 */	lwz r3, 0x574(r30)
/* 806572F0  3C 80 61 5F */	lis r4, 0x615F /* 0x615F7030@ha */
/* 806572F4  38 C4 70 30 */	addi r6, r4, 0x7030 /* 0x615F7030@l */
/* 806572F8  3C 80 62 61 */	lis r4, 0x6261 /* 0x62617368@ha */
/* 806572FC  38 A4 73 68 */	addi r5, r4, 0x7368 /* 0x62617368@l */
/* 80657300  81 83 00 00 */	lwz r12, 0(r3)
/* 80657304  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80657308  7D 89 03 A6 */	mtctr r12
/* 8065730C  4E 80 04 21 */	bctrl 
/* 80657310  7C 64 1B 78 */	mr r4, r3
/* 80657314  38 61 00 08 */	addi r3, r1, 8
/* 80657318  81 84 00 00 */	lwz r12, 0(r4)
/* 8065731C  81 8C 01 38 */	lwz r12, 0x138(r12)
/* 80657320  7D 89 03 A6 */	mtctr r12
/* 80657324  4E 80 04 21 */	bctrl 
/* 80657328  88 01 00 08 */	lbz r0, 8(r1)
/* 8065732C  C8 3F 00 28 */	lfd f1, 0x28(r31)
/* 80657330  90 01 00 14 */	stw r0, 0x14(r1)
/* 80657334  3C 00 43 30 */	lis r0, 0x4330
/* 80657338  90 01 00 10 */	stw r0, 0x10(r1)
/* 8065733C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80657340  EC 20 08 28 */	fsubs f1, f0, f1
/* 80657344  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80657348  EF E0 00 72 */	fmuls f31, f0, f1
/* 8065734C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80657350  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80657354  40 81 00 08 */	ble lbl_8065735C
/* 80657358  FF E0 00 90 */	fmr f31, f0
lbl_8065735C:
/* 8065735C  80 7E 05 80 */	lwz r3, 0x580(r30)
/* 80657360  3C 80 80 65 */	lis r4, l_HOSTIO@ha
/* 80657364  38 84 7A 9C */	addi r4, r4, l_HOSTIO@l
/* 80657368  C0 24 00 04 */	lfs f1, 4(r4)
/* 8065736C  C0 44 00 08 */	lfs f2, 8(r4)
/* 80657370  4B BF D2 40 */	b paneTrans__8CPaneMgrFff
/* 80657374  3C 60 80 65 */	lis r3, l_HOSTIO@ha
/* 80657378  38 63 7A 9C */	addi r3, r3, l_HOSTIO@l
/* 8065737C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80657380  80 7E 05 80 */	lwz r3, 0x580(r30)
/* 80657384  80 63 00 04 */	lwz r3, 4(r3)
/* 80657388  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8065738C  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80657390  81 83 00 00 */	lwz r12, 0(r3)
/* 80657394  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80657398  7D 89 03 A6 */	mtctr r12
/* 8065739C  4E 80 04 21 */	bctrl 
/* 806573A0  80 7E 05 80 */	lwz r3, 0x580(r30)
/* 806573A4  3C 80 80 65 */	lis r4, l_HOSTIO@ha
/* 806573A8  3B A4 7A 9C */	addi r29, r4, l_HOSTIO@l
/* 806573AC  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 806573B0  4B BF E4 20 */	b setAlphaRate__13CPaneMgrAlphaFf
/* 806573B4  80 7E 05 88 */	lwz r3, 0x588(r30)
/* 806573B8  C0 7F 00 14 */	lfs f3, 0x14(r31)
/* 806573BC  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 806573C0  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 806573C4  EC 1F 08 24 */	fdivs f0, f31, f1
/* 806573C8  EC 02 00 32 */	fmuls f0, f2, f0
/* 806573CC  EC 03 00 2A */	fadds f0, f3, f0
/* 806573D0  EC 40 08 24 */	fdivs f2, f0, f1
/* 806573D4  3C 80 80 65 */	lis r4, l_HOSTIO@ha
/* 806573D8  3B E4 7A 9C */	addi r31, r4, l_HOSTIO@l
/* 806573DC  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 806573E0  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 806573E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 806573E8  EC 22 00 32 */	fmuls f1, f2, f0
/* 806573EC  4B BF E3 E4 */	b setAlphaRate__13CPaneMgrAlphaFf
/* 806573F0  80 7E 05 8C */	lwz r3, 0x58c(r30)
/* 806573F4  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 806573F8  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 806573FC  EC 21 00 32 */	fmuls f1, f1, f0
/* 80657400  4B BF E3 D0 */	b setAlphaRate__13CPaneMgrAlphaFf
/* 80657404  3C 60 80 65 */	lis r3, l_HOSTIO@ha
/* 80657408  38 63 7A 9C */	addi r3, r3, l_HOSTIO@l
/* 8065740C  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80657410  80 7E 05 84 */	lwz r3, 0x584(r30)
/* 80657414  80 63 00 04 */	lwz r3, 4(r3)
/* 80657418  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8065741C  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80657420  81 83 00 00 */	lwz r12, 0(r3)
/* 80657424  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80657428  7D 89 03 A6 */	mtctr r12
/* 8065742C  4E 80 04 21 */	bctrl 
/* 80657430  80 7E 05 84 */	lwz r3, 0x584(r30)
/* 80657434  3C 80 80 65 */	lis r4, l_HOSTIO@ha
/* 80657438  38 84 7A 9C */	addi r4, r4, l_HOSTIO@l
/* 8065743C  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 80657440  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 80657444  EC 21 00 32 */	fmuls f1, f1, f0
/* 80657448  4B BF E3 88 */	b setAlphaRate__13CPaneMgrAlphaFf
/* 8065744C  3C 60 80 65 */	lis r3, l_HOSTIO@ha
/* 80657450  38 63 7A 9C */	addi r3, r3, l_HOSTIO@l
/* 80657454  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80657458  28 00 00 00 */	cmplwi r0, 0
/* 8065745C  41 82 00 14 */	beq lbl_80657470
/* 80657460  88 03 00 59 */	lbz r0, 0x59(r3)
/* 80657464  98 1E 07 81 */	stb r0, 0x781(r30)
/* 80657468  88 03 00 5A */	lbz r0, 0x5a(r3)
/* 8065746C  98 1E 07 80 */	stb r0, 0x780(r30)
lbl_80657470:
/* 80657470  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 80657474  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80657478  39 61 00 30 */	addi r11, r1, 0x30
/* 8065747C  4B D0 AD AC */	b _restgpr_29
/* 80657480  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80657484  7C 08 03 A6 */	mtlr r0
/* 80657488  38 21 00 40 */	addi r1, r1, 0x40
/* 8065748C  4E 80 00 20 */	blr 
