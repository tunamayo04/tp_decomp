lbl_800C0084:
/* 800C0084  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800C0088  7C 08 02 A6 */	mflr r0
/* 800C008C  90 01 00 34 */	stw r0, 0x34(r1)
/* 800C0090  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 800C0094  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 800C0098  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800C009C  7C 7F 1B 78 */	mr r31, r3
/* 800C00A0  FF E0 08 90 */	fmr f31, f1
/* 800C00A4  38 7F 21 D8 */	addi r3, r31, 0x21d8
/* 800C00A8  48 09 EF C1 */	bl loadDataIdx__14daPy_anmHeap_cFUs
/* 800C00AC  7C 64 1B 79 */	or. r4, r3, r3
/* 800C00B0  41 82 00 0C */	beq lbl_800C00BC
/* 800C00B4  38 7F 07 30 */	addi r3, r31, 0x730
/* 800C00B8  4B F4 D8 D9 */	bl changeBckOnly__13mDoExt_bckAnmFP15J3DAnmTransform
lbl_800C00BC:
/* 800C00BC  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800C00C0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800C00C4  40 80 00 30 */	bge lbl_800C00F4
/* 800C00C8  80 7F 07 44 */	lwz r3, 0x744(r31)
/* 800C00CC  A8 03 00 06 */	lha r0, 6(r3)
/* 800C00D0  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 800C00D4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 800C00D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 800C00DC  3C 00 43 30 */	lis r0, 0x4330
/* 800C00E0  90 01 00 08 */	stw r0, 8(r1)
/* 800C00E4  C8 01 00 08 */	lfd f0, 8(r1)
/* 800C00E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 800C00EC  D0 1F 33 DC */	stfs f0, 0x33dc(r31)
/* 800C00F0  48 00 00 08 */	b lbl_800C00F8
lbl_800C00F4:
/* 800C00F4  D3 FF 33 DC */	stfs f31, 0x33dc(r31)
lbl_800C00F8:
/* 800C00F8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 800C00FC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 800C0100  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800C0104  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800C0108  7C 08 03 A6 */	mtlr r0
/* 800C010C  38 21 00 30 */	addi r1, r1, 0x30
/* 800C0110  4E 80 00 20 */	blr 
