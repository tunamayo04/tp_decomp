lbl_8072606C:
/* 8072606C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80726070  7C 08 02 A6 */	mflr r0
/* 80726074  90 01 00 64 */	stw r0, 0x64(r1)
/* 80726078  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8072607C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 80726080  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80726084  F3 C1 00 48 */	psq_st f30, 72(r1), 0, 0 /* qr0 */
/* 80726088  39 61 00 40 */	addi r11, r1, 0x40
/* 8072608C  4B C3 C1 40 */	b _savegpr_25
/* 80726090  7C 64 1B 78 */	mr r4, r3
/* 80726094  3C 60 80 73 */	lis r3, lit_3800@ha
/* 80726098  3B E3 95 04 */	addi r31, r3, lit_3800@l
/* 8072609C  7C 9E 23 78 */	mr r30, r4
/* 807260A0  38 C0 00 00 */	li r6, 0
/* 807260A4  3C 60 80 73 */	lis r3, target_info_count@ha
/* 807260A8  90 C3 98 78 */	stw r6, target_info_count@l(r3)
/* 807260AC  7C C3 33 78 */	mr r3, r6
/* 807260B0  3C A0 80 73 */	lis r5, target_info@ha
/* 807260B4  38 A5 98 28 */	addi r5, r5, target_info@l
/* 807260B8  38 00 00 14 */	li r0, 0x14
/* 807260BC  7C 09 03 A6 */	mtctr r0
lbl_807260C0:
/* 807260C0  7C C5 19 2E */	stwx r6, r5, r3
/* 807260C4  38 63 00 04 */	addi r3, r3, 4
/* 807260C8  42 00 FF F8 */	bdnz lbl_807260C0
/* 807260CC  3C 60 80 72 */	lis r3, s_d_sub__FPvPv@ha
/* 807260D0  38 63 5F F0 */	addi r3, r3, s_d_sub__FPvPv@l
/* 807260D4  4B 8F B2 64 */	b fpcEx_Search__FPFPvPv_PvPv
/* 807260D8  C3 DF 00 00 */	lfs f30, 0(r31)
/* 807260DC  3C 60 80 73 */	lis r3, target_info_count@ha
/* 807260E0  3B 63 98 78 */	addi r27, r3, target_info_count@l
/* 807260E4  80 1B 00 00 */	lwz r0, 0(r27)
/* 807260E8  2C 00 00 00 */	cmpwi r0, 0
/* 807260EC  41 82 00 C8 */	beq lbl_807261B4
/* 807260F0  3B 20 00 00 */	li r25, 0
/* 807260F4  48 00 00 A4 */	b lbl_80726198
lbl_807260F8:
/* 807260F8  57 3C 10 3A */	slwi r28, r25, 2
/* 807260FC  7F 5D E0 2E */	lwzx r26, r29, r28
/* 80726100  38 61 00 08 */	addi r3, r1, 8
/* 80726104  38 9A 04 D0 */	addi r4, r26, 0x4d0
/* 80726108  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 8072610C  4B B4 0A 28 */	b __mi__4cXyzCFRC3Vec
/* 80726110  C0 21 00 08 */	lfs f1, 8(r1)
/* 80726114  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80726118  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8072611C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80726120  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80726124  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80726128  EC 21 00 72 */	fmuls f1, f1, f1
/* 8072612C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80726130  EC 21 00 2A */	fadds f1, f1, f0
/* 80726134  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80726138  40 81 00 0C */	ble lbl_80726144
/* 8072613C  FC 00 08 34 */	frsqrte f0, f1
/* 80726140  EC 20 00 72 */	fmuls f1, f0, f1
lbl_80726144:
/* 80726144  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80726148  40 80 00 20 */	bge lbl_80726168
/* 8072614C  7F C3 F3 78 */	mr r3, r30
/* 80726150  7C 9D E0 2E */	lwzx r4, r29, r28
/* 80726154  4B 8F 6C A8 */	b fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 80726158  2C 03 00 00 */	cmpwi r3, 0
/* 8072615C  40 82 00 0C */	bne lbl_80726168
/* 80726160  7F 43 D3 78 */	mr r3, r26
/* 80726164  48 00 00 5C */	b lbl_807261C0
lbl_80726168:
/* 80726168  80 1B 00 00 */	lwz r0, 0(r27)
/* 8072616C  3B 39 00 01 */	addi r25, r25, 1
/* 80726170  7C 19 00 00 */	cmpw r25, r0
/* 80726174  40 82 00 30 */	bne lbl_807261A4
/* 80726178  3B 20 00 00 */	li r25, 0
/* 8072617C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80726180  EF DE 00 2A */	fadds f30, f30, f0
/* 80726184  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80726188  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8072618C  40 81 00 18 */	ble lbl_807261A4
/* 80726190  38 60 00 00 */	li r3, 0
/* 80726194  48 00 00 2C */	b lbl_807261C0
lbl_80726198:
/* 80726198  3C 60 80 73 */	lis r3, target_info@ha
/* 8072619C  3B A3 98 28 */	addi r29, r3, target_info@l
/* 807261A0  C3 FF 00 04 */	lfs f31, 4(r31)
lbl_807261A4:
/* 807261A4  80 1B 00 00 */	lwz r0, 0(r27)
/* 807261A8  7C 19 00 00 */	cmpw r25, r0
/* 807261AC  41 80 FF 4C */	blt lbl_807260F8
/* 807261B0  48 00 00 0C */	b lbl_807261BC
lbl_807261B4:
/* 807261B4  38 60 00 00 */	li r3, 0
/* 807261B8  48 00 00 08 */	b lbl_807261C0
lbl_807261BC:
/* 807261BC  38 60 00 00 */	li r3, 0
lbl_807261C0:
/* 807261C0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 807261C4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 807261C8  E3 C1 00 48 */	psq_l f30, 72(r1), 0, 0 /* qr0 */
/* 807261CC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 807261D0  39 61 00 40 */	addi r11, r1, 0x40
/* 807261D4  4B C3 C0 44 */	b _restgpr_25
/* 807261D8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 807261DC  7C 08 03 A6 */	mtlr r0
/* 807261E0  38 21 00 60 */	addi r1, r1, 0x60
/* 807261E4  4E 80 00 20 */	blr 
