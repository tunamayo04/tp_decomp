lbl_80265750:
/* 80265750  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80265754  7C 08 02 A6 */	mflr r0
/* 80265758  90 01 00 84 */	stw r0, 0x84(r1)
/* 8026575C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80265760  F3 E1 00 78 */	psq_st f31, 120(r1), 0, 0 /* qr0 */
/* 80265764  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80265768  F3 C1 00 68 */	psq_st f30, 104(r1), 0, 0 /* qr0 */
/* 8026576C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80265770  F3 A1 00 58 */	psq_st f29, 88(r1), 0, 0 /* qr0 */
/* 80265774  39 61 00 50 */	addi r11, r1, 0x50
/* 80265778  48 0F CA 55 */	bl _savegpr_25
/* 8026577C  7C 7A 1B 78 */	mr r26, r3
/* 80265780  7C 9B 23 78 */	mr r27, r4
/* 80265784  7C BC 2B 78 */	mr r28, r5
/* 80265788  7C DD 33 78 */	mr r29, r6
/* 8026578C  7C FE 3B 78 */	mr r30, r7
/* 80265790  FF A0 08 90 */	fmr f29, f1
/* 80265794  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 80265798  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8026579C  40 82 03 E8 */	bne lbl_80265B84
/* 802657A0  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 802657A4  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 802657A8  41 82 00 08 */	beq lbl_802657B0
/* 802657AC  48 00 03 D8 */	b lbl_80265B84
lbl_802657B0:
/* 802657B0  80 7B 00 44 */	lwz r3, 0x44(r27)
/* 802657B4  28 03 00 00 */	cmplwi r3, 0
/* 802657B8  41 82 03 CC */	beq lbl_80265B84
/* 802657BC  80 9D 00 44 */	lwz r4, 0x44(r29)
/* 802657C0  28 04 00 00 */	cmplwi r4, 0
/* 802657C4  40 82 00 08 */	bne lbl_802657CC
/* 802657C8  48 00 03 BC */	b lbl_80265B84
lbl_802657CC:
/* 802657CC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802657D0  28 00 00 00 */	cmplwi r0, 0
/* 802657D4  41 82 00 10 */	beq lbl_802657E4
/* 802657D8  80 64 00 0C */	lwz r3, 0xc(r4)
/* 802657DC  7C 00 18 40 */	cmplw r0, r3
/* 802657E0  41 82 03 A4 */	beq lbl_80265B84
lbl_802657E4:
/* 802657E4  FC 00 EA 10 */	fabs f0, f29
/* 802657E8  FC 20 00 18 */	frsp f1, f0
/* 802657EC  C0 02 B6 3C */	lfs f0, lit_2759(r2)
/* 802657F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802657F4  41 80 03 90 */	blt lbl_80265B84
/* 802657F8  7F 43 D3 78 */	mr r3, r26
/* 802657FC  7F 64 DB 78 */	mr r4, r27
/* 80265800  7F A5 EB 78 */	mr r5, r29
/* 80265804  81 9A 28 48 */	lwz r12, 0x2848(r26)
/* 80265808  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8026580C  7D 89 03 A6 */	mtctr r12
/* 80265810  4E 80 04 21 */	bctrl 
/* 80265814  3B E0 00 00 */	li r31, 0
/* 80265818  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 8026581C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80265820  41 82 00 14 */	beq lbl_80265834
/* 80265824  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 80265828  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8026582C  41 82 00 08 */	beq lbl_80265834
/* 80265830  3B E0 00 01 */	li r31, 1
lbl_80265834:
/* 80265834  80 7B 00 44 */	lwz r3, 0x44(r27)
/* 80265838  88 83 00 14 */	lbz r4, 0x14(r3)
/* 8026583C  7F 43 D3 78 */	mr r3, r26
/* 80265840  4B FF F3 41 */	bl GetWt__4cCcSCFUc
/* 80265844  7C 79 1B 78 */	mr r25, r3
/* 80265848  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8026584C  88 83 00 14 */	lbz r4, 0x14(r3)
/* 80265850  7F 43 D3 78 */	mr r3, r26
/* 80265854  4B FF F3 2D */	bl GetWt__4cCcSCFUc
/* 80265858  7C 7A 1B 78 */	mr r26, r3
/* 8026585C  80 7B 00 44 */	lwz r3, 0x44(r27)
/* 80265860  4B FF E1 25 */	bl GetWeightF__9cCcD_SttsCFv
/* 80265864  FF C0 08 90 */	fmr f30, f1
/* 80265868  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8026586C  4B FF E1 19 */	bl GetWeightF__9cCcD_SttsCFv
/* 80265870  EC 7E 08 2A */	fadds f3, f30, f1
/* 80265874  FC 00 1A 10 */	fabs f0, f3
/* 80265878  FC 40 00 18 */	frsp f2, f0
/* 8026587C  C0 0D 8C 00 */	lfs f0, G_CM3D_F_ABS_MIN(r13)
/* 80265880  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80265884  40 80 00 10 */	bge lbl_80265894
/* 80265888  C3 C2 B6 40 */	lfs f30, lit_2760(r2)
/* 8026588C  FC 20 F0 90 */	fmr f1, f30
/* 80265890  C0 62 B6 44 */	lfs f3, lit_2761(r2)
lbl_80265894:
/* 80265894  C0 02 B6 40 */	lfs f0, lit_2760(r2)
/* 80265898  EC 40 18 24 */	fdivs f2, f0, f3
/* 8026589C  2C 19 00 00 */	cmpwi r25, 0
/* 802658A0  40 82 00 18 */	bne lbl_802658B8
/* 802658A4  2C 1A 00 00 */	cmpwi r26, 0
/* 802658A8  41 82 02 DC */	beq lbl_80265B84
/* 802658AC  C3 E2 B6 38 */	lfs f31, lit_2532(r2)
/* 802658B0  FF C0 00 90 */	fmr f30, f0
/* 802658B4  48 00 00 5C */	b lbl_80265910
lbl_802658B8:
/* 802658B8  2C 19 00 01 */	cmpwi r25, 1
/* 802658BC  40 82 00 38 */	bne lbl_802658F4
/* 802658C0  2C 1A 00 00 */	cmpwi r26, 0
/* 802658C4  40 82 00 10 */	bne lbl_802658D4
/* 802658C8  FF E0 00 90 */	fmr f31, f0
/* 802658CC  C3 C2 B6 38 */	lfs f30, lit_2532(r2)
/* 802658D0  48 00 00 40 */	b lbl_80265910
lbl_802658D4:
/* 802658D4  2C 1A 00 01 */	cmpwi r26, 1
/* 802658D8  40 82 00 10 */	bne lbl_802658E8
/* 802658DC  C3 E2 B6 48 */	lfs f31, lit_2762(r2)
/* 802658E0  FF C0 F8 90 */	fmr f30, f31
/* 802658E4  48 00 00 2C */	b lbl_80265910
lbl_802658E8:
/* 802658E8  C3 E2 B6 38 */	lfs f31, lit_2532(r2)
/* 802658EC  FF C0 00 90 */	fmr f30, f0
/* 802658F0  48 00 00 20 */	b lbl_80265910
lbl_802658F4:
/* 802658F4  2C 1A 00 02 */	cmpwi r26, 2
/* 802658F8  40 82 00 10 */	bne lbl_80265908
/* 802658FC  EF E1 00 B2 */	fmuls f31, f1, f2
/* 80265900  EF DE 00 B2 */	fmuls f30, f30, f2
/* 80265904  48 00 00 0C */	b lbl_80265910
lbl_80265908:
/* 80265908  FF E0 00 90 */	fmr f31, f0
/* 8026590C  C3 C2 B6 38 */	lfs f30, lit_2532(r2)
lbl_80265910:
/* 80265910  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80265914  41 82 00 20 */	beq lbl_80265934
/* 80265918  7F C3 F3 78 */	mr r3, r30
/* 8026591C  7F 84 E3 78 */	mr r4, r28
/* 80265920  38 A1 00 0C */	addi r5, r1, 0xc
/* 80265924  48 0E 17 91 */	bl PSVECSubtract
/* 80265928  38 61 00 0C */	addi r3, r1, 0xc
/* 8026592C  48 0E 18 25 */	bl PSVECMag
/* 80265930  48 00 01 18 */	b lbl_80265A48
lbl_80265934:
/* 80265934  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80265938  C0 1C 00 00 */	lfs f0, 0(r28)
/* 8026593C  EC 61 00 28 */	fsubs f3, f1, f0
/* 80265940  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80265944  C0 42 B6 38 */	lfs f2, lit_2532(r2)
/* 80265948  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8026594C  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80265950  C0 1C 00 08 */	lfs f0, 8(r28)
/* 80265954  EC 01 00 28 */	fsubs f0, f1, f0
/* 80265958  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8026595C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80265960  EC 00 00 32 */	fmuls f0, f0, f0
/* 80265964  EC 21 00 2A */	fadds f1, f1, f0
/* 80265968  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8026596C  40 81 00 58 */	ble lbl_802659C4
/* 80265970  FC 00 08 34 */	frsqrte f0, f1
/* 80265974  C8 82 B6 50 */	lfd f4, lit_2763(r2)
/* 80265978  FC 44 00 32 */	fmul f2, f4, f0
/* 8026597C  C8 62 B6 58 */	lfd f3, lit_2764(r2)
/* 80265980  FC 00 00 32 */	fmul f0, f0, f0
/* 80265984  FC 01 00 32 */	fmul f0, f1, f0
/* 80265988  FC 03 00 28 */	fsub f0, f3, f0
/* 8026598C  FC 02 00 32 */	fmul f0, f2, f0
/* 80265990  FC 44 00 32 */	fmul f2, f4, f0
/* 80265994  FC 00 00 32 */	fmul f0, f0, f0
/* 80265998  FC 01 00 32 */	fmul f0, f1, f0
/* 8026599C  FC 03 00 28 */	fsub f0, f3, f0
/* 802659A0  FC 02 00 32 */	fmul f0, f2, f0
/* 802659A4  FC 44 00 32 */	fmul f2, f4, f0
/* 802659A8  FC 00 00 32 */	fmul f0, f0, f0
/* 802659AC  FC 01 00 32 */	fmul f0, f1, f0
/* 802659B0  FC 03 00 28 */	fsub f0, f3, f0
/* 802659B4  FC 02 00 32 */	fmul f0, f2, f0
/* 802659B8  FC 21 00 32 */	fmul f1, f1, f0
/* 802659BC  FC 20 08 18 */	frsp f1, f1
/* 802659C0  48 00 00 88 */	b lbl_80265A48
lbl_802659C4:
/* 802659C4  C8 02 B6 60 */	lfd f0, lit_2765(r2)
/* 802659C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802659CC  40 80 00 10 */	bge lbl_802659DC
/* 802659D0  3C 60 80 45 */	lis r3, __float_nan@ha
/* 802659D4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 802659D8  48 00 00 70 */	b lbl_80265A48
lbl_802659DC:
/* 802659DC  D0 21 00 08 */	stfs f1, 8(r1)
/* 802659E0  80 81 00 08 */	lwz r4, 8(r1)
/* 802659E4  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 802659E8  3C 00 7F 80 */	lis r0, 0x7f80
/* 802659EC  7C 03 00 00 */	cmpw r3, r0
/* 802659F0  41 82 00 14 */	beq lbl_80265A04
/* 802659F4  40 80 00 40 */	bge lbl_80265A34
/* 802659F8  2C 03 00 00 */	cmpwi r3, 0
/* 802659FC  41 82 00 20 */	beq lbl_80265A1C
/* 80265A00  48 00 00 34 */	b lbl_80265A34
lbl_80265A04:
/* 80265A04  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80265A08  41 82 00 0C */	beq lbl_80265A14
/* 80265A0C  38 00 00 01 */	li r0, 1
/* 80265A10  48 00 00 28 */	b lbl_80265A38
lbl_80265A14:
/* 80265A14  38 00 00 02 */	li r0, 2
/* 80265A18  48 00 00 20 */	b lbl_80265A38
lbl_80265A1C:
/* 80265A1C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80265A20  41 82 00 0C */	beq lbl_80265A2C
/* 80265A24  38 00 00 05 */	li r0, 5
/* 80265A28  48 00 00 10 */	b lbl_80265A38
lbl_80265A2C:
/* 80265A2C  38 00 00 03 */	li r0, 3
/* 80265A30  48 00 00 08 */	b lbl_80265A38
lbl_80265A34:
/* 80265A34  38 00 00 04 */	li r0, 4
lbl_80265A38:
/* 80265A38  2C 00 00 01 */	cmpwi r0, 1
/* 80265A3C  40 82 00 0C */	bne lbl_80265A48
/* 80265A40  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80265A44  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80265A48:
/* 80265A48  FC 00 0A 10 */	fabs f0, f1
/* 80265A4C  FC 00 00 18 */	frsp f0, f0
/* 80265A50  C0 4D 8C 00 */	lfs f2, G_CM3D_F_ABS_MIN(r13)
/* 80265A54  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80265A58  41 80 00 9C */	blt lbl_80265AF4
/* 80265A5C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80265A60  41 82 00 40 */	beq lbl_80265AA0
/* 80265A64  38 61 00 0C */	addi r3, r1, 0xc
/* 80265A68  7C 64 1B 78 */	mr r4, r3
/* 80265A6C  EC 3D 08 24 */	fdivs f1, f29, f1
/* 80265A70  48 0E 16 69 */	bl PSVECScale
/* 80265A74  C0 02 B6 68 */	lfs f0, lit_2766(r2)
/* 80265A78  EF FF 00 32 */	fmuls f31, f31, f0
/* 80265A7C  38 61 00 0C */	addi r3, r1, 0xc
/* 80265A80  38 81 00 24 */	addi r4, r1, 0x24
/* 80265A84  FC 20 F8 90 */	fmr f1, f31
/* 80265A88  48 0E 16 51 */	bl PSVECScale
/* 80265A8C  38 61 00 0C */	addi r3, r1, 0xc
/* 80265A90  38 81 00 18 */	addi r4, r1, 0x18
/* 80265A94  FC 20 F0 90 */	fmr f1, f30
/* 80265A98  48 0E 16 41 */	bl PSVECScale
/* 80265A9C  48 00 00 A0 */	b lbl_80265B3C
lbl_80265AA0:
/* 80265AA0  EC 3D 08 24 */	fdivs f1, f29, f1
/* 80265AA4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80265AA8  EC 60 00 72 */	fmuls f3, f0, f1
/* 80265AAC  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80265AB0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80265AB4  EC 40 00 72 */	fmuls f2, f0, f1
/* 80265AB8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80265ABC  FC 00 18 50 */	fneg f0, f3
/* 80265AC0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80265AC4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80265AC8  C0 22 B6 38 */	lfs f1, lit_2532(r2)
/* 80265ACC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80265AD0  FC 00 10 50 */	fneg f0, f2
/* 80265AD4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80265AD8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80265ADC  EC 03 07 B2 */	fmuls f0, f3, f30
/* 80265AE0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80265AE4  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80265AE8  EC 02 07 B2 */	fmuls f0, f2, f30
/* 80265AEC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80265AF0  48 00 00 4C */	b lbl_80265B3C
lbl_80265AF4:
/* 80265AF4  C0 02 B6 38 */	lfs f0, lit_2532(r2)
/* 80265AF8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80265AFC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80265B00  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80265B04  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80265B08  FC 00 EA 10 */	fabs f0, f29
/* 80265B0C  FC 00 00 18 */	frsp f0, f0
/* 80265B10  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80265B14  41 80 00 1C */	blt lbl_80265B30
/* 80265B18  FC 00 E8 50 */	fneg f0, f29
/* 80265B1C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80265B20  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80265B24  EC 1D 07 B2 */	fmuls f0, f29, f30
/* 80265B28  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80265B2C  48 00 00 10 */	b lbl_80265B3C
lbl_80265B30:
/* 80265B30  FC 00 F8 50 */	fneg f0, f31
/* 80265B34  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80265B38  D3 C1 00 18 */	stfs f30, 0x18(r1)
lbl_80265B3C:
/* 80265B3C  80 7B 00 44 */	lwz r3, 0x44(r27)
/* 80265B40  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80265B44  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80265B48  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 80265B4C  4B FF DD E9 */	bl PlusCcMove__9cCcD_SttsFfff
/* 80265B50  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 80265B54  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80265B58  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80265B5C  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 80265B60  4B FF DD D5 */	bl PlusCcMove__9cCcD_SttsFfff
/* 80265B64  7F 83 E3 78 */	mr r3, r28
/* 80265B68  38 81 00 24 */	addi r4, r1, 0x24
/* 80265B6C  7F 85 E3 78 */	mr r5, r28
/* 80265B70  48 0E 15 21 */	bl PSVECAdd
/* 80265B74  7F C3 F3 78 */	mr r3, r30
/* 80265B78  38 81 00 18 */	addi r4, r1, 0x18
/* 80265B7C  7F C5 F3 78 */	mr r5, r30
/* 80265B80  48 0E 15 11 */	bl PSVECAdd
lbl_80265B84:
/* 80265B84  E3 E1 00 78 */	psq_l f31, 120(r1), 0, 0 /* qr0 */
/* 80265B88  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80265B8C  E3 C1 00 68 */	psq_l f30, 104(r1), 0, 0 /* qr0 */
/* 80265B90  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80265B94  E3 A1 00 58 */	psq_l f29, 88(r1), 0, 0 /* qr0 */
/* 80265B98  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80265B9C  39 61 00 50 */	addi r11, r1, 0x50
/* 80265BA0  48 0F C6 79 */	bl _restgpr_25
/* 80265BA4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80265BA8  7C 08 03 A6 */	mtlr r0
/* 80265BAC  38 21 00 80 */	addi r1, r1, 0x80
/* 80265BB0  4E 80 00 20 */	blr 
