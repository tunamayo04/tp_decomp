lbl_80273A44:
/* 80273A44  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 80273A48  7C 08 02 A6 */	mflr r0
/* 80273A4C  90 01 01 94 */	stw r0, 0x194(r1)
/* 80273A50  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 80273A54  F3 E1 01 88 */	psq_st f31, 392(r1), 0, 0 /* qr0 */
/* 80273A58  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 80273A5C  F3 C1 01 78 */	psq_st f30, 376(r1), 0, 0 /* qr0 */
/* 80273A60  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 80273A64  F3 A1 01 68 */	psq_st f29, 360(r1), 0, 0 /* qr0 */
/* 80273A68  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 80273A6C  F3 81 01 58 */	psq_st f28, 344(r1), 0, 0 /* qr0 */
/* 80273A70  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 80273A74  F3 61 01 48 */	psq_st f27, 328(r1), 0, 0 /* qr0 */
/* 80273A78  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 80273A7C  F3 41 01 38 */	psq_st f26, 312(r1), 0, 0 /* qr0 */
/* 80273A80  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 80273A84  F3 21 01 28 */	psq_st f25, 296(r1), 0, 0 /* qr0 */
/* 80273A88  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 80273A8C  F3 01 01 18 */	psq_st f24, 280(r1), 0, 0 /* qr0 */
/* 80273A90  DA E1 01 00 */	stfd f23, 0x100(r1)
/* 80273A94  F2 E1 01 08 */	psq_st f23, 264(r1), 0, 0 /* qr0 */
/* 80273A98  DA C1 00 F0 */	stfd f22, 0xf0(r1)
/* 80273A9C  F2 C1 00 F8 */	psq_st f22, 248(r1), 0, 0 /* qr0 */
/* 80273AA0  DA A1 00 E0 */	stfd f21, 0xe0(r1)
/* 80273AA4  F2 A1 00 E8 */	psq_st f21, 232(r1), 0, 0 /* qr0 */
/* 80273AA8  DA 81 00 D0 */	stfd f20, 0xd0(r1)
/* 80273AAC  F2 81 00 D8 */	psq_st f20, 216(r1), 0, 0 /* qr0 */
/* 80273AB0  DA 61 00 C0 */	stfd f19, 0xc0(r1)
/* 80273AB4  F2 61 00 C8 */	psq_st f19, 200(r1), 0, 0 /* qr0 */
/* 80273AB8  DA 41 00 B0 */	stfd f18, 0xb0(r1)
/* 80273ABC  F2 41 00 B8 */	psq_st f18, 184(r1), 0, 0 /* qr0 */
/* 80273AC0  DA 21 00 A0 */	stfd f17, 0xa0(r1)
/* 80273AC4  F2 21 00 A8 */	psq_st f17, 168(r1), 0, 0 /* qr0 */
/* 80273AC8  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80273ACC  48 0E E7 11 */	bl _savegpr_29
/* 80273AD0  7C 9F 23 78 */	mr r31, r4
/* 80273AD4  38 80 00 00 */	li r4, 0
/* 80273AD8  7C 88 23 78 */	mr r8, r4
/* 80273ADC  38 E1 00 14 */	addi r7, r1, 0x14
/* 80273AE0  38 00 00 06 */	li r0, 6
/* 80273AE4  7C 09 03 A6 */	mtctr r0
lbl_80273AE8:
/* 80273AE8  7D 07 21 2E */	stwx r8, r7, r4
/* 80273AEC  38 84 00 04 */	addi r4, r4, 4
/* 80273AF0  42 00 FF F8 */	bdnz lbl_80273AE8
/* 80273AF4  C0 86 00 00 */	lfs f4, 0(r6)
/* 80273AF8  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 80273AFC  C0 06 00 04 */	lfs f0, 4(r6)
/* 80273B00  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80273B04  C0 65 00 08 */	lfs f3, 8(r5)
/* 80273B08  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 80273B0C  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80273B10  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80273B14  C0 46 00 08 */	lfs f2, 8(r6)
/* 80273B18  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80273B1C  C0 25 00 00 */	lfs f1, 0(r5)
/* 80273B20  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80273B24  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80273B28  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 80273B2C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80273B30  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80273B34  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 80273B38  D0 81 00 5C */	stfs f4, 0x5c(r1)
/* 80273B3C  C0 05 00 04 */	lfs f0, 4(r5)
/* 80273B40  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80273B44  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80273B48  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 80273B4C  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80273B50  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 80273B54  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80273B58  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80273B5C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 80273B60  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 80273B64  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80273B68  D0 61 00 88 */	stfs f3, 0x88(r1)
/* 80273B6C  3B A0 00 00 */	li r29, 0
/* 80273B70  3B C0 00 00 */	li r30, 0
/* 80273B74  C2 43 00 54 */	lfs f18, 0x54(r3)
/* 80273B78  C2 63 00 58 */	lfs f19, 0x58(r3)
/* 80273B7C  C2 83 00 0C */	lfs f20, 0xc(r3)
/* 80273B80  C2 A3 00 04 */	lfs f21, 4(r3)
/* 80273B84  C2 C3 00 08 */	lfs f22, 8(r3)
/* 80273B88  C2 E2 B8 88 */	lfs f23, lit_991(r2)
/* 80273B8C  C3 03 00 18 */	lfs f24, 0x18(r3)
/* 80273B90  C3 23 00 10 */	lfs f25, 0x10(r3)
/* 80273B94  C3 43 00 14 */	lfs f26, 0x14(r3)
/* 80273B98  C3 63 00 24 */	lfs f27, 0x24(r3)
/* 80273B9C  C3 83 00 1C */	lfs f28, 0x1c(r3)
/* 80273BA0  C3 A3 00 20 */	lfs f29, 0x20(r3)
/* 80273BA4  C3 C3 00 30 */	lfs f30, 0x30(r3)
/* 80273BA8  C3 E3 00 28 */	lfs f31, 0x28(r3)
/* 80273BAC  C2 23 00 2C */	lfs f17, 0x2c(r3)
lbl_80273BB0:
/* 80273BB0  7F E3 FB 78 */	mr r3, r31
/* 80273BB4  38 81 00 2C */	addi r4, r1, 0x2c
/* 80273BB8  7C 84 F2 14 */	add r4, r4, r30
/* 80273BBC  38 A1 00 08 */	addi r5, r1, 8
/* 80273BC0  48 0D 31 AD */	bl PSMTXMultVec
/* 80273BC4  38 80 00 00 */	li r4, 0
/* 80273BC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273BCC  FC 00 00 50 */	fneg f0, f0
/* 80273BD0  FC 00 90 40 */	fcmpo cr0, f0, f18
/* 80273BD4  40 80 00 14 */	bge lbl_80273BE8
/* 80273BD8  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80273BDC  38 03 00 01 */	addi r0, r3, 1
/* 80273BE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80273BE4  38 80 00 01 */	li r4, 1
lbl_80273BE8:
/* 80273BE8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273BEC  FC 00 00 50 */	fneg f0, f0
/* 80273BF0  FC 00 98 40 */	fcmpo cr0, f0, f19
/* 80273BF4  40 81 00 14 */	ble lbl_80273C08
/* 80273BF8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80273BFC  38 03 00 01 */	addi r0, r3, 1
/* 80273C00  90 01 00 28 */	stw r0, 0x28(r1)
/* 80273C04  38 84 00 01 */	addi r4, r4, 1
lbl_80273C08:
/* 80273C08  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273C0C  EC 40 05 32 */	fmuls f2, f0, f20
/* 80273C10  C0 61 00 08 */	lfs f3, 8(r1)
/* 80273C14  EC 23 05 72 */	fmuls f1, f3, f21
/* 80273C18  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80273C1C  EC 00 05 B2 */	fmuls f0, f0, f22
/* 80273C20  EC 01 00 2A */	fadds f0, f1, f0
/* 80273C24  EC 02 00 2A */	fadds f0, f2, f0
/* 80273C28  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 80273C2C  40 81 00 14 */	ble lbl_80273C40
/* 80273C30  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80273C34  38 03 00 01 */	addi r0, r3, 1
/* 80273C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273C3C  38 84 00 01 */	addi r4, r4, 1
lbl_80273C40:
/* 80273C40  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273C44  EC 40 06 32 */	fmuls f2, f0, f24
/* 80273C48  EC 23 06 72 */	fmuls f1, f3, f25
/* 80273C4C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80273C50  EC 00 06 B2 */	fmuls f0, f0, f26
/* 80273C54  EC 01 00 2A */	fadds f0, f1, f0
/* 80273C58  EC 02 00 2A */	fadds f0, f2, f0
/* 80273C5C  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 80273C60  40 81 00 14 */	ble lbl_80273C74
/* 80273C64  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80273C68  38 03 00 01 */	addi r0, r3, 1
/* 80273C6C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80273C70  38 84 00 01 */	addi r4, r4, 1
lbl_80273C74:
/* 80273C74  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273C78  EC 40 06 F2 */	fmuls f2, f0, f27
/* 80273C7C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80273C80  EC 20 07 32 */	fmuls f1, f0, f28
/* 80273C84  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80273C88  EC 00 07 72 */	fmuls f0, f0, f29
/* 80273C8C  EC 01 00 2A */	fadds f0, f1, f0
/* 80273C90  EC 02 00 2A */	fadds f0, f2, f0
/* 80273C94  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 80273C98  40 81 00 14 */	ble lbl_80273CAC
/* 80273C9C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80273CA0  38 03 00 01 */	addi r0, r3, 1
/* 80273CA4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80273CA8  38 84 00 01 */	addi r4, r4, 1
lbl_80273CAC:
/* 80273CAC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80273CB0  EC 40 07 B2 */	fmuls f2, f0, f30
/* 80273CB4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80273CB8  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80273CBC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80273CC0  EC 00 04 72 */	fmuls f0, f0, f17
/* 80273CC4  EC 01 00 2A */	fadds f0, f1, f0
/* 80273CC8  EC 02 00 2A */	fadds f0, f2, f0
/* 80273CCC  FC 00 B8 40 */	fcmpo cr0, f0, f23
/* 80273CD0  40 81 00 14 */	ble lbl_80273CE4
/* 80273CD4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80273CD8  38 03 00 01 */	addi r0, r3, 1
/* 80273CDC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80273CE0  38 84 00 01 */	addi r4, r4, 1
lbl_80273CE4:
/* 80273CE4  2C 04 00 00 */	cmpwi r4, 0
/* 80273CE8  40 82 00 0C */	bne lbl_80273CF4
/* 80273CEC  38 60 00 00 */	li r3, 0
/* 80273CF0  48 00 00 88 */	b lbl_80273D78
lbl_80273CF4:
/* 80273CF4  3B BD 00 01 */	addi r29, r29, 1
/* 80273CF8  28 1D 00 08 */	cmplwi r29, 8
/* 80273CFC  3B DE 00 0C */	addi r30, r30, 0xc
/* 80273D00  41 80 FE B0 */	blt lbl_80273BB0
/* 80273D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80273D08  2C 00 00 08 */	cmpwi r0, 8
/* 80273D0C  40 82 00 0C */	bne lbl_80273D18
/* 80273D10  38 60 00 01 */	li r3, 1
/* 80273D14  48 00 00 64 */	b lbl_80273D78
lbl_80273D18:
/* 80273D18  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80273D1C  2C 00 00 08 */	cmpwi r0, 8
/* 80273D20  40 82 00 0C */	bne lbl_80273D2C
/* 80273D24  38 60 00 01 */	li r3, 1
/* 80273D28  48 00 00 50 */	b lbl_80273D78
lbl_80273D2C:
/* 80273D2C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80273D30  2C 00 00 08 */	cmpwi r0, 8
/* 80273D34  40 82 00 0C */	bne lbl_80273D40
/* 80273D38  38 60 00 01 */	li r3, 1
/* 80273D3C  48 00 00 3C */	b lbl_80273D78
lbl_80273D40:
/* 80273D40  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80273D44  2C 00 00 08 */	cmpwi r0, 8
/* 80273D48  40 82 00 0C */	bne lbl_80273D54
/* 80273D4C  38 60 00 01 */	li r3, 1
/* 80273D50  48 00 00 28 */	b lbl_80273D78
lbl_80273D54:
/* 80273D54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80273D58  2C 00 00 08 */	cmpwi r0, 8
/* 80273D5C  40 82 00 0C */	bne lbl_80273D68
/* 80273D60  38 60 00 01 */	li r3, 1
/* 80273D64  48 00 00 14 */	b lbl_80273D78
lbl_80273D68:
/* 80273D68  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80273D6C  20 00 00 08 */	subfic r0, r0, 8
/* 80273D70  7C 00 00 34 */	cntlzw r0, r0
/* 80273D74  54 03 D9 7E */	srwi r3, r0, 5
lbl_80273D78:
/* 80273D78  E3 E1 01 88 */	psq_l f31, 392(r1), 0, 0 /* qr0 */
/* 80273D7C  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 80273D80  E3 C1 01 78 */	psq_l f30, 376(r1), 0, 0 /* qr0 */
/* 80273D84  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 80273D88  E3 A1 01 68 */	psq_l f29, 360(r1), 0, 0 /* qr0 */
/* 80273D8C  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 80273D90  E3 81 01 58 */	psq_l f28, 344(r1), 0, 0 /* qr0 */
/* 80273D94  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 80273D98  E3 61 01 48 */	psq_l f27, 328(r1), 0, 0 /* qr0 */
/* 80273D9C  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 80273DA0  E3 41 01 38 */	psq_l f26, 312(r1), 0, 0 /* qr0 */
/* 80273DA4  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 80273DA8  E3 21 01 28 */	psq_l f25, 296(r1), 0, 0 /* qr0 */
/* 80273DAC  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 80273DB0  E3 01 01 18 */	psq_l f24, 280(r1), 0, 0 /* qr0 */
/* 80273DB4  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 80273DB8  E2 E1 01 08 */	psq_l f23, 264(r1), 0, 0 /* qr0 */
/* 80273DBC  CA E1 01 00 */	lfd f23, 0x100(r1)
/* 80273DC0  E2 C1 00 F8 */	psq_l f22, 248(r1), 0, 0 /* qr0 */
/* 80273DC4  CA C1 00 F0 */	lfd f22, 0xf0(r1)
/* 80273DC8  E2 A1 00 E8 */	psq_l f21, 232(r1), 0, 0 /* qr0 */
/* 80273DCC  CA A1 00 E0 */	lfd f21, 0xe0(r1)
/* 80273DD0  E2 81 00 D8 */	psq_l f20, 216(r1), 0, 0 /* qr0 */
/* 80273DD4  CA 81 00 D0 */	lfd f20, 0xd0(r1)
/* 80273DD8  E2 61 00 C8 */	psq_l f19, 200(r1), 0, 0 /* qr0 */
/* 80273DDC  CA 61 00 C0 */	lfd f19, 0xc0(r1)
/* 80273DE0  E2 41 00 B8 */	psq_l f18, 184(r1), 0, 0 /* qr0 */
/* 80273DE4  CA 41 00 B0 */	lfd f18, 0xb0(r1)
/* 80273DE8  E2 21 00 A8 */	psq_l f17, 168(r1), 0, 0 /* qr0 */
/* 80273DEC  CA 21 00 A0 */	lfd f17, 0xa0(r1)
/* 80273DF0  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80273DF4  48 0E E4 35 */	bl _restgpr_29
/* 80273DF8  80 01 01 94 */	lwz r0, 0x194(r1)
/* 80273DFC  7C 08 03 A6 */	mtlr r0
/* 80273E00  38 21 01 90 */	addi r1, r1, 0x190
/* 80273E04  4E 80 00 20 */	blr 
