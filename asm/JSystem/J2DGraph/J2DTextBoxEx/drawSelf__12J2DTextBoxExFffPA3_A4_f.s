lbl_803075AC:
/* 803075AC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 803075B0  7C 08 02 A6 */	mflr r0
/* 803075B4  90 01 01 24 */	stw r0, 0x124(r1)
/* 803075B8  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 803075BC  F3 E1 01 18 */	psq_st f31, 280(r1), 0, 0 /* qr0 */
/* 803075C0  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 803075C4  F3 C1 01 08 */	psq_st f30, 264(r1), 0, 0 /* qr0 */
/* 803075C8  93 E1 00 FC */	stw r31, 0xfc(r1)
/* 803075CC  93 C1 00 F8 */	stw r30, 0xf8(r1)
/* 803075D0  7C 7E 1B 78 */	mr r30, r3
/* 803075D4  FF C0 08 90 */	fmr f30, f1
/* 803075D8  FF E0 10 90 */	fmr f31, f2
/* 803075DC  7C 9F 23 78 */	mr r31, r4
/* 803075E0  38 80 00 00 */	li r4, 0
/* 803075E4  80 63 01 38 */	lwz r3, 0x138(r3)
/* 803075E8  28 03 00 00 */	cmplwi r3, 0
/* 803075EC  41 82 00 24 */	beq lbl_80307610
/* 803075F0  80 63 00 70 */	lwz r3, 0x70(r3)
/* 803075F4  28 03 00 00 */	cmplwi r3, 0
/* 803075F8  41 82 00 18 */	beq lbl_80307610
/* 803075FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80307600  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80307604  7D 89 03 A6 */	mtctr r12
/* 80307608  4E 80 04 21 */	bctrl 
/* 8030760C  7C 64 1B 78 */	mr r4, r3
lbl_80307610:
/* 80307610  80 1E 01 28 */	lwz r0, 0x128(r30)
/* 80307614  90 01 00 10 */	stw r0, 0x10(r1)
/* 80307618  80 1E 01 2C */	lwz r0, 0x12c(r30)
/* 8030761C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307620  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 80307624  90 01 00 18 */	stw r0, 0x18(r1)
/* 80307628  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 8030762C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80307630  38 61 00 50 */	addi r3, r1, 0x50
/* 80307634  C0 1E 01 14 */	lfs f0, 0x114(r30)
/* 80307638  FC 00 00 1E */	fctiwz f0, f0
/* 8030763C  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80307640  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80307644  C8 42 C8 E0 */	lfd f2, lit_1536(r2)
/* 80307648  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8030764C  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80307650  3C A0 43 30 */	lis r5, 0x4330
/* 80307654  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 80307658  C8 01 00 B8 */	lfd f0, 0xb8(r1)
/* 8030765C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80307660  C0 1E 01 18 */	lfs f0, 0x118(r30)
/* 80307664  FC 00 00 1E */	fctiwz f0, f0
/* 80307668  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 8030766C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80307670  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80307674  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80307678  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 8030767C  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 80307680  EC 40 10 28 */	fsubs f2, f0, f2
/* 80307684  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80307688  38 C1 00 18 */	addi r6, r1, 0x18
/* 8030768C  38 E1 00 14 */	addi r7, r1, 0x14
/* 80307690  39 01 00 10 */	addi r8, r1, 0x10
/* 80307694  4B FE CD 01 */	bl __ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 80307698  C0 1E 01 20 */	lfs f0, 0x120(r30)
/* 8030769C  FC 00 00 1E */	fctiwz f0, f0
/* 803076A0  D8 01 00 D0 */	stfd f0, 0xd0(r1)
/* 803076A4  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 803076A8  C8 22 C8 E0 */	lfd f1, lit_1536(r2)
/* 803076AC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803076B0  90 01 00 DC */	stw r0, 0xdc(r1)
/* 803076B4  3C 60 43 30 */	lis r3, 0x4330
/* 803076B8  90 61 00 D8 */	stw r3, 0xd8(r1)
/* 803076BC  C8 01 00 D8 */	lfd f0, 0xd8(r1)
/* 803076C0  EC 40 08 28 */	fsubs f2, f0, f1
/* 803076C4  C0 1E 01 1C */	lfs f0, 0x11c(r30)
/* 803076C8  FC 00 00 1E */	fctiwz f0, f0
/* 803076CC  D8 01 00 E0 */	stfd f0, 0xe0(r1)
/* 803076D0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803076D4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803076D8  90 01 00 EC */	stw r0, 0xec(r1)
/* 803076DC  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 803076E0  C8 01 00 E8 */	lfd f0, 0xe8(r1)
/* 803076E4  EC 20 08 28 */	fsubs f1, f0, f1
/* 803076E8  C0 02 C8 D8 */	lfs f0, lit_1534(r2)
/* 803076EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803076F0  40 81 00 08 */	ble lbl_803076F8
/* 803076F4  48 00 00 08 */	b lbl_803076FC
lbl_803076F8:
/* 803076F8  FC 20 00 90 */	fmr f1, f0
lbl_803076FC:
/* 803076FC  D0 21 00 A0 */	stfs f1, 0xa0(r1)
/* 80307700  C0 02 C8 D8 */	lfs f0, lit_1534(r2)
/* 80307704  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80307708  40 81 00 08 */	ble lbl_80307710
/* 8030770C  48 00 00 08 */	b lbl_80307714
lbl_80307710:
/* 80307710  FC 40 00 90 */	fmr f2, f0
lbl_80307714:
/* 80307714  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 80307718  80 7E 01 38 */	lwz r3, 0x138(r30)
/* 8030771C  28 03 00 00 */	cmplwi r3, 0
/* 80307720  41 82 01 58 */	beq lbl_80307878
/* 80307724  4B FE 2C 69 */	bl setGX__11J2DMaterialFv
/* 80307728  7F E3 FB 78 */	mr r3, r31
/* 8030772C  38 9E 00 80 */	addi r4, r30, 0x80
/* 80307730  38 A1 00 20 */	addi r5, r1, 0x20
/* 80307734  48 03 ED B1 */	bl PSMTXConcat
/* 80307738  38 61 00 20 */	addi r3, r1, 0x20
/* 8030773C  38 80 00 00 */	li r4, 0
/* 80307740  48 05 8B 0D */	bl GXLoadPosMtxImm
/* 80307744  48 05 3E 49 */	bl GXClearVtxDesc
/* 80307748  38 60 00 09 */	li r3, 9
/* 8030774C  38 80 00 01 */	li r4, 1
/* 80307750  48 05 37 69 */	bl GXSetVtxDesc
/* 80307754  38 60 00 0B */	li r3, 0xb
/* 80307758  38 80 00 01 */	li r4, 1
/* 8030775C  48 05 37 5D */	bl GXSetVtxDesc
/* 80307760  38 60 00 0D */	li r3, 0xd
/* 80307764  38 80 00 01 */	li r4, 1
/* 80307768  48 05 37 51 */	bl GXSetVtxDesc
/* 8030776C  38 61 00 50 */	addi r3, r1, 0x50
/* 80307770  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80307774  EC 3E 00 2A */	fadds f1, f30, f0
/* 80307778  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 8030777C  EC 5F 00 2A */	fadds f2, f31, f0
/* 80307780  4B FE CF DD */	bl locate__8J2DPrintFff
/* 80307784  80 7E 01 38 */	lwz r3, 0x138(r30)
/* 80307788  88 03 00 0E */	lbz r0, 0xe(r3)
/* 8030778C  28 00 00 00 */	cmplwi r0, 0
/* 80307790  41 82 00 E8 */	beq lbl_80307878
/* 80307794  80 1E 01 24 */	lwz r0, 0x124(r30)
/* 80307798  28 00 00 00 */	cmplwi r0, 0
/* 8030779C  41 82 00 DC */	beq lbl_80307878
/* 803077A0  3B E0 00 FF */	li r31, 0xff
/* 803077A4  A0 03 00 1C */	lhz r0, 0x1c(r3)
/* 803077A8  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 803077AC  28 00 00 01 */	cmplwi r0, 1
/* 803077B0  40 82 00 18 */	bne lbl_803077C8
/* 803077B4  88 03 00 0F */	lbz r0, 0xf(r3)
/* 803077B8  2C 00 00 01 */	cmpwi r0, 1
/* 803077BC  40 82 00 30 */	bne lbl_803077EC
/* 803077C0  8B FE 00 B3 */	lbz r31, 0xb3(r30)
/* 803077C4  48 00 00 28 */	b lbl_803077EC
lbl_803077C8:
/* 803077C8  88 1E 00 B4 */	lbz r0, 0xb4(r30)
/* 803077CC  28 00 00 00 */	cmplwi r0, 0
/* 803077D0  41 82 00 1C */	beq lbl_803077EC
/* 803077D4  88 1E 00 B3 */	lbz r0, 0xb3(r30)
/* 803077D8  90 01 00 08 */	stw r0, 8(r1)
/* 803077DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 803077E0  38 60 00 02 */	li r3, 2
/* 803077E4  38 81 00 0C */	addi r4, r1, 0xc
/* 803077E8  48 05 62 61 */	bl GXSetChanMatColor
lbl_803077EC:
/* 803077EC  88 DE 01 30 */	lbz r6, 0x130(r30)
/* 803077F0  38 61 00 50 */	addi r3, r1, 0x50
/* 803077F4  80 9E 01 24 */	lwz r4, 0x124(r30)
/* 803077F8  C0 42 C8 F0 */	lfs f2, lit_1731(r2)
/* 803077FC  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 80307800  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80307804  EC 01 00 28 */	fsubs f0, f1, f0
/* 80307808  EC 02 00 2A */	fadds f0, f2, f0
/* 8030780C  FC 00 00 1E */	fctiwz f0, f0
/* 80307810  D8 01 00 E8 */	stfd f0, 0xe8(r1)
/* 80307814  80 01 00 EC */	lwz r0, 0xec(r1)
/* 80307818  C8 62 C8 E0 */	lfd f3, lit_1536(r2)
/* 8030781C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80307820  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80307824  3C A0 43 30 */	lis r5, 0x4330
/* 80307828  90 A1 00 E0 */	stw r5, 0xe0(r1)
/* 8030782C  C8 01 00 E0 */	lfd f0, 0xe0(r1)
/* 80307830  EC 20 18 28 */	fsubs f1, f0, f3
/* 80307834  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 80307838  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 8030783C  EC 02 00 28 */	fsubs f0, f2, f0
/* 80307840  FC 00 00 1E */	fctiwz f0, f0
/* 80307844  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 80307848  80 01 00 DC */	lwz r0, 0xdc(r1)
/* 8030784C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80307850  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80307854  90 A1 00 D0 */	stw r5, 0xd0(r1)
/* 80307858  C8 01 00 D0 */	lfd f0, 0xd0(r1)
/* 8030785C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80307860  54 C5 F7 BE */	rlwinm r5, r6, 0x1e, 0x1e, 0x1f
/* 80307864  54 C6 07 BE */	clrlwi r6, r6, 0x1e
/* 80307868  C0 7E 01 0C */	lfs f3, 0x10c(r30)
/* 8030786C  C0 9E 01 10 */	lfs f4, 0x110(r30)
/* 80307870  7F E7 FB 78 */	mr r7, r31
/* 80307874  4B FE CF B5 */	bl printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc
lbl_80307878:
/* 80307878  38 61 00 50 */	addi r3, r1, 0x50
/* 8030787C  38 80 FF FF */	li r4, -1
/* 80307880  4B FE CB A1 */	bl __dt__8J2DPrintFv
/* 80307884  E3 E1 01 18 */	psq_l f31, 280(r1), 0, 0 /* qr0 */
/* 80307888  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 8030788C  E3 C1 01 08 */	psq_l f30, 264(r1), 0, 0 /* qr0 */
/* 80307890  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 80307894  83 E1 00 FC */	lwz r31, 0xfc(r1)
/* 80307898  83 C1 00 F8 */	lwz r30, 0xf8(r1)
/* 8030789C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 803078A0  7C 08 03 A6 */	mtlr r0
/* 803078A4  38 21 01 20 */	addi r1, r1, 0x120
/* 803078A8  4E 80 00 20 */	blr 
