lbl_808472C0:
/* 808472C0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 808472C4  7C 08 02 A6 */	mflr r0
/* 808472C8  90 01 00 74 */	stw r0, 0x74(r1)
/* 808472CC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 808472D0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, 0 /* qr0 */
/* 808472D4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 808472D8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, 0 /* qr0 */
/* 808472DC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 808472E0  F3 A1 00 48 */	psq_st f29, 72(r1), 0, 0 /* qr0 */
/* 808472E4  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 808472E8  F3 81 00 38 */	psq_st f28, 56(r1), 0, 0 /* qr0 */
/* 808472EC  39 61 00 30 */	addi r11, r1, 0x30
/* 808472F0  4B B1 AE E4 */	b _savegpr_27
/* 808472F4  7C 7F 1B 78 */	mr r31, r3
/* 808472F8  7C 9B 23 78 */	mr r27, r4
/* 808472FC  FF 80 08 90 */	fmr f28, f1
/* 80847300  FF A0 10 90 */	fmr f29, f2
/* 80847304  7C BC 2B 78 */	mr r28, r5
/* 80847308  FF C0 18 90 */	fmr f30, f3
/* 8084730C  3C 60 80 85 */	lis r3, l_arcName@ha
/* 80847310  3B A3 8E 3C */	addi r29, r3, l_arcName@l
/* 80847314  38 7D 00 00 */	addi r3, r29, 0
/* 80847318  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 8084731C  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha
/* 80847320  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l
/* 80847324  3C A5 00 02 */	addis r5, r5, 2
/* 80847328  38 C0 00 80 */	li r6, 0x80
/* 8084732C  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80847330  4B 7F 4F BC */	b getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80847334  7C 7E 1B 78 */	mr r30, r3
/* 80847338  B3 7F 06 E4 */	sth r27, 0x6e4(r31)
/* 8084733C  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000FFFF@ha */
/* 80847340  38 03 FF FF */	addi r0, r3, 0xFFFF /* 0x0000FFFF@l */
/* 80847344  B0 1F 06 E6 */	sth r0, 0x6e6(r31)
/* 80847348  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8084734C  D0 1F 05 AC */	stfs f0, 0x5ac(r31)
/* 80847350  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80847354  D0 1F 05 B4 */	stfs f0, 0x5b4(r31)
/* 80847358  93 DF 05 B0 */	stw r30, 0x5b0(r31)
/* 8084735C  38 00 00 00 */	li r0, 0
/* 80847360  90 1F 05 B8 */	stw r0, 0x5b8(r31)
/* 80847364  7F 80 07 35 */	extsh. r0, r28
/* 80847368  40 80 00 0C */	bge lbl_80847374
/* 8084736C  A8 DE 00 06 */	lha r6, 6(r30)
/* 80847370  48 00 00 08 */	b lbl_80847378
lbl_80847374:
/* 80847374  7F 86 E3 78 */	mr r6, r28
lbl_80847378:
/* 80847378  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 8084737C  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80847380  40 80 00 28 */	bge lbl_808473A8
/* 80847384  7C C0 07 34 */	extsh r0, r6
/* 80847388  C8 3D 00 20 */	lfd f1, 0x20(r29)
/* 8084738C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80847390  90 01 00 0C */	stw r0, 0xc(r1)
/* 80847394  3C 00 43 30 */	lis r0, 0x4330
/* 80847398  90 01 00 08 */	stw r0, 8(r1)
/* 8084739C  C8 01 00 08 */	lfd f0, 8(r1)
/* 808473A0  EF E0 08 28 */	fsubs f31, f0, f1
/* 808473A4  48 00 00 08 */	b lbl_808473AC
lbl_808473A8:
/* 808473A8  FF E0 E8 90 */	fmr f31, f29
lbl_808473AC:
/* 808473AC  38 7F 05 C8 */	addi r3, r31, 0x5c8
/* 808473B0  88 9E 00 04 */	lbz r4, 4(r30)
/* 808473B4  FC 00 E8 1E */	fctiwz f0, f29
/* 808473B8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 808473BC  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 808473C0  FC 20 E0 90 */	fmr f1, f28
/* 808473C4  FC 40 F8 90 */	fmr f2, f31
/* 808473C8  4B 91 71 7C */	b setFrameCtrl__16daPy_frameCtrl_cFUcssff
/* 808473CC  D3 FE 00 08 */	stfs f31, 8(r30)
/* 808473D0  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 808473D4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 808473D8  4C 41 13 82 */	cror 2, 1, 2
/* 808473DC  40 82 00 18 */	bne lbl_808473F4
/* 808473E0  80 7F 05 C4 */	lwz r3, 0x5c4(r31)
/* 808473E4  FC 20 F0 90 */	fmr f1, f30
/* 808473E8  38 80 00 00 */	li r4, 0
/* 808473EC  38 A0 00 2F */	li r5, 0x2f
/* 808473F0  4B 7C 84 58 */	b initOldFrameMorf__22mDoExt_MtxCalcOldFrameFfUsUs
lbl_808473F4:
/* 808473F4  38 60 00 01 */	li r3, 1
/* 808473F8  E3 E1 00 68 */	psq_l f31, 104(r1), 0, 0 /* qr0 */
/* 808473FC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80847400  E3 C1 00 58 */	psq_l f30, 88(r1), 0, 0 /* qr0 */
/* 80847404  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80847408  E3 A1 00 48 */	psq_l f29, 72(r1), 0, 0 /* qr0 */
/* 8084740C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80847410  E3 81 00 38 */	psq_l f28, 56(r1), 0, 0 /* qr0 */
/* 80847414  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80847418  39 61 00 30 */	addi r11, r1, 0x30
/* 8084741C  4B B1 AE 04 */	b _restgpr_27
/* 80847420  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80847424  7C 08 03 A6 */	mtlr r0
/* 80847428  38 21 00 70 */	addi r1, r1, 0x70
/* 8084742C  4E 80 00 20 */	blr 
