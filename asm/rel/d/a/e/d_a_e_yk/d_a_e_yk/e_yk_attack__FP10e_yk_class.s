lbl_808059BC:
/* 808059BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 808059C0  7C 08 02 A6 */	mflr r0
/* 808059C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 808059C8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 808059CC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 808059D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 808059D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 808059D8  7C 7E 1B 78 */	mr r30, r3
/* 808059DC  3C 80 80 80 */	lis r4, lit_3941@ha
/* 808059E0  3B E4 7C 9C */	addi r31, r4, lit_3941@l
/* 808059E4  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 808059E8  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 808059EC  80 A4 5D AC */	lwz r5, 0x5dac(r4)
/* 808059F0  C3 FF 00 04 */	lfs f31, 4(r31)
/* 808059F4  FC 20 F8 90 */	fmr f1, f31
/* 808059F8  D3 E3 06 8C */	stfs f31, 0x68c(r3)
/* 808059FC  A8 03 06 70 */	lha r0, 0x670(r3)
/* 80805A00  2C 00 00 02 */	cmpwi r0, 2
/* 80805A04  41 82 00 C4 */	beq lbl_80805AC8
/* 80805A08  40 80 00 14 */	bge lbl_80805A1C
/* 80805A0C  2C 00 00 00 */	cmpwi r0, 0
/* 80805A10  41 82 00 18 */	beq lbl_80805A28
/* 80805A14  40 80 00 3C */	bge lbl_80805A50
/* 80805A18  48 00 01 50 */	b lbl_80805B68
lbl_80805A1C:
/* 80805A1C  2C 00 00 04 */	cmpwi r0, 4
/* 80805A20  40 80 01 48 */	bge lbl_80805B68
/* 80805A24  48 00 01 20 */	b lbl_80805B44
lbl_80805A28:
/* 80805A28  38 80 00 05 */	li r4, 5
/* 80805A2C  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 80805A30  38 A0 00 02 */	li r5, 2
/* 80805A34  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 80805A38  4B FF EF AD */	bl anm_init__FP10e_yk_classifUcf
/* 80805A3C  38 00 00 01 */	li r0, 1
/* 80805A40  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 80805A44  38 00 00 14 */	li r0, 0x14
/* 80805A48  B0 1E 06 A4 */	sth r0, 0x6a4(r30)
/* 80805A4C  48 00 01 1C */	b lbl_80805B68
lbl_80805A50:
/* 80805A50  C0 05 04 D0 */	lfs f0, 0x4d0(r5)
/* 80805A54  D0 1E 06 74 */	stfs f0, 0x674(r30)
/* 80805A58  C0 05 04 D4 */	lfs f0, 0x4d4(r5)
/* 80805A5C  D0 1E 06 78 */	stfs f0, 0x678(r30)
/* 80805A60  C0 05 04 D8 */	lfs f0, 0x4d8(r5)
/* 80805A64  D0 1E 06 7C */	stfs f0, 0x67c(r30)
/* 80805A68  C0 3E 06 78 */	lfs f1, 0x678(r30)
/* 80805A6C  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 80805A70  EC 01 00 2A */	fadds f0, f1, f0
/* 80805A74  D0 1E 06 78 */	stfs f0, 0x678(r30)
/* 80805A78  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80805A7C  D0 1E 06 8C */	stfs f0, 0x68c(r30)
/* 80805A80  A8 1E 06 A4 */	lha r0, 0x6a4(r30)
/* 80805A84  2C 00 00 00 */	cmpwi r0, 0
/* 80805A88  40 82 00 E0 */	bne lbl_80805B68
/* 80805A8C  38 00 00 02 */	li r0, 2
/* 80805A90  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 80805A94  38 00 00 0F */	li r0, 0xf
/* 80805A98  B0 1E 06 A2 */	sth r0, 0x6a2(r30)
/* 80805A9C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701C9@ha */
/* 80805AA0  38 03 01 C9 */	addi r0, r3, 0x01C9 /* 0x000701C9@l */
/* 80805AA4  90 01 00 08 */	stw r0, 8(r1)
/* 80805AA8  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 80805AAC  38 81 00 08 */	addi r4, r1, 8
/* 80805AB0  38 A0 FF FF */	li r5, -1
/* 80805AB4  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80805AB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80805ABC  7D 89 03 A6 */	mtctr r12
/* 80805AC0  4E 80 04 21 */	bctrl 
/* 80805AC4  48 00 00 A4 */	b lbl_80805B68
lbl_80805AC8:
/* 80805AC8  3C 60 80 80 */	lis r3, l_HIO@ha
/* 80805ACC  38 63 7F 08 */	addi r3, r3, l_HIO@l
/* 80805AD0  C3 E3 00 18 */	lfs f31, 0x18(r3)
/* 80805AD4  80 1E 09 78 */	lwz r0, 0x978(r30)
/* 80805AD8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80805ADC  41 82 00 50 */	beq lbl_80805B2C
/* 80805AE0  38 00 00 0A */	li r0, 0xa
/* 80805AE4  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80805AE8  38 60 00 00 */	li r3, 0
/* 80805AEC  B0 7E 06 70 */	sth r3, 0x670(r30)
/* 80805AF0  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 80805AF4  D0 1E 06 94 */	stfs f0, 0x694(r30)
/* 80805AF8  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 80805AFC  B0 1E 06 98 */	sth r0, 0x698(r30)
/* 80805B00  98 7E 06 A0 */	stb r3, 0x6a0(r30)
/* 80805B04  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80805B08  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80805B0C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80805B10  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80805B14  38 64 5B D4 */	addi r3, r4, 0x5bd4
/* 80805B18  38 80 00 02 */	li r4, 2
/* 80805B1C  38 A0 00 1F */	li r5, 0x1f
/* 80805B20  38 C1 00 0C */	addi r6, r1, 0xc
/* 80805B24  4B 86 9F 00 */	b StartShock__12dVibration_cFii4cXyz
/* 80805B28  48 00 00 40 */	b lbl_80805B68
lbl_80805B2C:
/* 80805B2C  A8 1E 06 A2 */	lha r0, 0x6a2(r30)
/* 80805B30  2C 00 00 00 */	cmpwi r0, 0
/* 80805B34  40 82 00 34 */	bne lbl_80805B68
/* 80805B38  38 00 00 03 */	li r0, 3
/* 80805B3C  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 80805B40  48 00 00 28 */	b lbl_80805B68
lbl_80805B44:
/* 80805B44  C0 3E 05 2C */	lfs f1, 0x52c(r30)
/* 80805B48  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80805B4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80805B50  4C 40 13 82 */	cror 2, 0, 2
/* 80805B54  40 82 00 14 */	bne lbl_80805B68
/* 80805B58  38 00 00 02 */	li r0, 2
/* 80805B5C  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80805B60  38 00 00 00 */	li r0, 0
/* 80805B64  B0 1E 06 70 */	sth r0, 0x670(r30)
lbl_80805B68:
/* 80805B68  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80805B6C  FC 20 F8 90 */	fmr f1, f31
/* 80805B70  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80805B74  C0 7F 00 4C */	lfs f3, 0x4c(r31)
/* 80805B78  3C 80 80 80 */	lis r4, l_HIO@ha
/* 80805B7C  38 84 7F 08 */	addi r4, r4, l_HIO@l
/* 80805B80  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80805B84  EC 63 00 32 */	fmuls f3, f3, f0
/* 80805B88  4B A6 9E B4 */	b cLib_addCalc2__FPffff
/* 80805B8C  7F C3 F3 78 */	mr r3, r30
/* 80805B90  4B FF F6 41 */	bl fly_move__FP10e_yk_class
/* 80805B94  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 80805B98  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80805B9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80805BA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80805BA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80805BA8  7C 08 03 A6 */	mtlr r0
/* 80805BAC  38 21 00 30 */	addi r1, r1, 0x30
/* 80805BB0  4E 80 00 20 */	blr 
