lbl_80245F90:
/* 80245F90  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80245F94  7C 08 02 A6 */	mflr r0
/* 80245F98  90 01 00 84 */	stw r0, 0x84(r1)
/* 80245F9C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80245FA0  F3 E1 00 78 */	psq_st f31, 120(r1), 0, 0 /* qr0 */
/* 80245FA4  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80245FA8  F3 C1 00 68 */	psq_st f30, 104(r1), 0, 0 /* qr0 */
/* 80245FAC  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80245FB0  F3 A1 00 58 */	psq_st f29, 88(r1), 0, 0 /* qr0 */
/* 80245FB4  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 80245FB8  F3 81 00 48 */	psq_st f28, 72(r1), 0, 0 /* qr0 */
/* 80245FBC  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 80245FC0  F3 61 00 38 */	psq_st f27, 56(r1), 0, 0 /* qr0 */
/* 80245FC4  DB 41 00 20 */	stfd f26, 0x20(r1)
/* 80245FC8  F3 41 00 28 */	psq_st f26, 40(r1), 0, 0 /* qr0 */
/* 80245FCC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80245FD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80245FD4  7C 7E 1B 78 */	mr r30, r3
/* 80245FD8  7C 9F 23 78 */	mr r31, r4
/* 80245FDC  FF 40 08 90 */	fmr f26, f1
/* 80245FE0  FF 60 10 90 */	fmr f27, f2
/* 80245FE4  FF 80 18 90 */	fmr f28, f3
/* 80245FE8  FF A0 20 90 */	fmr f29, f4
/* 80245FEC  FF C0 28 90 */	fmr f30, f5
/* 80245FF0  FF E0 30 90 */	fmr f31, f6
/* 80245FF4  80 06 00 00 */	lwz r0, 0(r6)
/* 80245FF8  90 01 00 08 */	stw r0, 8(r1)
/* 80245FFC  80 05 00 00 */	lwz r0, 0(r5)
/* 80246000  90 01 00 0C */	stw r0, 0xc(r1)
/* 80246004  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80246008  38 81 00 0C */	addi r4, r1, 0xc
/* 8024600C  38 A1 00 08 */	addi r5, r1, 8
/* 80246010  48 00 E4 49 */	bl setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor
/* 80246014  88 1E 00 22 */	lbz r0, 0x22(r30)
/* 80246018  28 00 00 00 */	cmplwi r0, 0
/* 8024601C  41 82 00 5C */	beq lbl_80246078
/* 80246020  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80246024  EC 00 F8 2A */	fadds f0, f0, f31
/* 80246028  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8024602C  80 7E 00 08 */	lwz r3, 8(r30)
/* 80246030  A8 03 00 06 */	lha r0, 6(r3)
/* 80246034  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80246038  C8 22 B2 E0 */	lfd f1, lit_3871(r2)
/* 8024603C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80246040  90 01 00 14 */	stw r0, 0x14(r1)
/* 80246044  3C 00 43 30 */	lis r0, 0x4330
/* 80246048  90 01 00 10 */	stw r0, 0x10(r1)
/* 8024604C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80246050  EC 00 08 28 */	fsubs f0, f0, f1
/* 80246054  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80246058  4C 41 13 82 */	cror 2, 1, 2
/* 8024605C  40 82 00 0C */	bne lbl_80246068
/* 80246060  C0 02 B2 D8 */	lfs f0, lit_3808(r2)
/* 80246064  D0 1F 00 00 */	stfs f0, 0(r31)
lbl_80246068:
/* 80246068  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8024606C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80246070  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80246074  D0 1E 00 18 */	stfs f0, 0x18(r30)
lbl_80246078:
/* 80246078  7F C3 F3 78 */	mr r3, r30
/* 8024607C  FC 20 D0 90 */	fmr f1, f26
/* 80246080  FC 40 D8 90 */	fmr f2, f27
/* 80246084  FC 60 E0 90 */	fmr f3, f28
/* 80246088  FC 80 E8 90 */	fmr f4, f29
/* 8024608C  FC A0 F0 90 */	fmr f5, f30
/* 80246090  48 00 00 4D */	bl drawCommon__15dMsgScrnLight_cFfffff
/* 80246094  E3 E1 00 78 */	psq_l f31, 120(r1), 0, 0 /* qr0 */
/* 80246098  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8024609C  E3 C1 00 68 */	psq_l f30, 104(r1), 0, 0 /* qr0 */
/* 802460A0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802460A4  E3 A1 00 58 */	psq_l f29, 88(r1), 0, 0 /* qr0 */
/* 802460A8  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802460AC  E3 81 00 48 */	psq_l f28, 72(r1), 0, 0 /* qr0 */
/* 802460B0  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 802460B4  E3 61 00 38 */	psq_l f27, 56(r1), 0, 0 /* qr0 */
/* 802460B8  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 802460BC  E3 41 00 28 */	psq_l f26, 40(r1), 0, 0 /* qr0 */
/* 802460C0  CB 41 00 20 */	lfd f26, 0x20(r1)
/* 802460C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802460C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802460CC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802460D0  7C 08 03 A6 */	mtlr r0
/* 802460D4  38 21 00 80 */	addi r1, r1, 0x80
/* 802460D8  4E 80 00 20 */	blr 
