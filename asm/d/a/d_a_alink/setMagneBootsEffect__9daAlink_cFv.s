lbl_8012277C:
/* 8012277C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80122780  7C 08 02 A6 */	mflr r0
/* 80122784  90 01 00 64 */	stw r0, 0x64(r1)
/* 80122788  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8012278C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 80122790  39 61 00 50 */	addi r11, r1, 0x50
/* 80122794  48 23 FA 35 */	bl _savegpr_24
/* 80122798  7C 7B 1B 78 */	mr r27, r3
/* 8012279C  3B C0 00 00 */	li r30, 0
/* 801227A0  3B 40 00 00 */	li r26, 0
/* 801227A4  3B 20 00 00 */	li r25, 0
/* 801227A8  C3 E2 93 44 */	lfs f31, lit_7977(r2)
lbl_801227AC:
/* 801227AC  2C 1E 00 00 */	cmpwi r30, 0
/* 801227B0  40 82 00 30 */	bne lbl_801227E0
/* 801227B4  38 61 00 14 */	addi r3, r1, 0x14
/* 801227B8  38 9B 05 E0 */	addi r4, r27, 0x5e0
/* 801227BC  38 BB 04 D0 */	addi r5, r27, 0x4d0
/* 801227C0  48 14 43 75 */	bl __mi__4cXyzCFRC3Vec
/* 801227C4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801227C8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801227CC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801227D0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801227D4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801227D8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801227DC  48 00 00 2C */	b lbl_80122808
lbl_801227E0:
/* 801227E0  38 61 00 08 */	addi r3, r1, 8
/* 801227E4  38 9B 05 EC */	addi r4, r27, 0x5ec
/* 801227E8  38 BB 04 D0 */	addi r5, r27, 0x4d0
/* 801227EC  48 14 43 49 */	bl __mi__4cXyzCFRC3Vec
/* 801227F0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801227F4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801227F8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801227FC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80122800  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80122804  D0 01 00 28 */	stfs f0, 0x28(r1)
lbl_80122808:
/* 80122808  80 1B 05 70 */	lwz r0, 0x570(r27)
/* 8012280C  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 80122810  41 82 00 14 */	beq lbl_80122824
/* 80122814  38 7B 2C 78 */	addi r3, r27, 0x2c78
/* 80122818  38 81 00 20 */	addi r4, r1, 0x20
/* 8012281C  7C 85 23 78 */	mr r5, r4
/* 80122820  48 22 46 2D */	bl PSMTXMultVecSR
lbl_80122824:
/* 80122824  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80122828  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8012282C  40 80 00 94 */	bge lbl_801228C0
/* 80122830  3B 99 32 28 */	addi r28, r25, 0x3228
/* 80122834  7F 9B E2 14 */	add r28, r27, r28
/* 80122838  3B A0 00 00 */	li r29, 0
/* 8012283C  3B 00 00 00 */	li r24, 0
/* 80122840  3B FA 07 84 */	addi r31, r26, 0x784
lbl_80122844:
/* 80122844  7F 63 DB 78 */	mr r3, r27
/* 80122848  7F 84 E3 78 */	mr r4, r28
/* 8012284C  38 A2 96 94 */	la r5, effName_40765(r2) /* 80453094-_SDA2_BASE_ */
/* 80122850  7C A5 C2 2E */	lhzx r5, r5, r24
/* 80122854  38 DB 04 D0 */	addi r6, r27, 0x4d0
/* 80122858  38 E0 00 00 */	li r7, 0
/* 8012285C  4B FF DD 25 */	bl setEmitter__9daAlink_cFPUlUsPC4cXyzPC5csXyz
/* 80122860  7C 65 1B 79 */	or. r5, r3, r3
/* 80122864  41 82 00 48 */	beq lbl_801228AC
/* 80122868  2C 1D 00 01 */	cmpwi r29, 1
/* 8012286C  40 82 00 24 */	bne lbl_80122890
/* 80122870  7C 7B F8 2E */	lwzx r3, r27, r31
/* 80122874  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80122878  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8012287C  38 63 00 30 */	addi r3, r3, 0x30
/* 80122880  38 85 00 68 */	addi r4, r5, 0x68
/* 80122884  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 80122888  48 15 DF 59 */	bl func_802807E0
/* 8012288C  48 00 00 20 */	b lbl_801228AC
lbl_80122890:
/* 80122890  7C 7B F8 2E */	lwzx r3, r27, r31
/* 80122894  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80122898  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8012289C  38 63 00 60 */	addi r3, r3, 0x60
/* 801228A0  38 85 00 68 */	addi r4, r5, 0x68
/* 801228A4  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 801228A8  48 15 DF 39 */	bl func_802807E0
lbl_801228AC:
/* 801228AC  3B BD 00 01 */	addi r29, r29, 1
/* 801228B0  2C 1D 00 03 */	cmpwi r29, 3
/* 801228B4  3B 18 00 02 */	addi r24, r24, 2
/* 801228B8  3B 9C 00 04 */	addi r28, r28, 4
/* 801228BC  41 80 FF 88 */	blt lbl_80122844
lbl_801228C0:
/* 801228C0  3B DE 00 01 */	addi r30, r30, 1
/* 801228C4  2C 1E 00 02 */	cmpwi r30, 2
/* 801228C8  3B 5A 00 04 */	addi r26, r26, 4
/* 801228CC  3B 39 00 0C */	addi r25, r25, 0xc
/* 801228D0  41 80 FE DC */	blt lbl_801227AC
/* 801228D4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 801228D8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801228DC  39 61 00 50 */	addi r11, r1, 0x50
/* 801228E0  48 23 F9 35 */	bl _restgpr_24
/* 801228E4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801228E8  7C 08 03 A6 */	mtlr r0
/* 801228EC  38 21 00 60 */	addi r1, r1, 0x60
/* 801228F0  4E 80 00 20 */	blr 
