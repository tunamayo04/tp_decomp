lbl_80833F1C:
/* 80833F1C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80833F20  7C 08 02 A6 */	mflr r0
/* 80833F24  90 01 00 54 */	stw r0, 0x54(r1)
/* 80833F28  39 61 00 50 */	addi r11, r1, 0x50
/* 80833F2C  4B B2 E2 A4 */	b _savegpr_26
/* 80833F30  7C 7F 1B 78 */	mr r31, r3
/* 80833F34  3C 80 80 83 */	lis r4, lit_3909@ha
/* 80833F38  3B 64 52 D0 */	addi r27, r4, lit_3909@l
/* 80833F3C  80 03 06 64 */	lwz r0, 0x664(r3)
/* 80833F40  2C 00 00 02 */	cmpwi r0, 2
/* 80833F44  41 82 00 B0 */	beq lbl_80833FF4
/* 80833F48  40 80 00 14 */	bge lbl_80833F5C
/* 80833F4C  2C 00 00 00 */	cmpwi r0, 0
/* 80833F50  41 82 00 18 */	beq lbl_80833F68
/* 80833F54  40 80 00 5C */	bge lbl_80833FB0
/* 80833F58  48 00 01 98 */	b lbl_808340F0
lbl_80833F5C:
/* 80833F5C  2C 00 00 04 */	cmpwi r0, 4
/* 80833F60  40 80 01 90 */	bge lbl_808340F0
/* 80833F64  48 00 00 D8 */	b lbl_8083403C
lbl_80833F68:
/* 80833F68  38 80 00 05 */	li r4, 5
/* 80833F6C  38 A0 00 00 */	li r5, 0
/* 80833F70  C0 3B 00 48 */	lfs f1, 0x48(r27)
/* 80833F74  C0 5B 00 08 */	lfs f2, 8(r27)
/* 80833F78  4B FF F2 6D */	bl setBck__8daE_ZS_cFiUcff
/* 80833F7C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000704B8@ha */
/* 80833F80  38 03 04 B8 */	addi r0, r3, 0x04B8 /* 0x000704B8@l */
/* 80833F84  90 01 00 24 */	stw r0, 0x24(r1)
/* 80833F88  38 7F 05 B8 */	addi r3, r31, 0x5b8
/* 80833F8C  38 81 00 24 */	addi r4, r1, 0x24
/* 80833F90  38 A0 FF FF */	li r5, -1
/* 80833F94  81 9F 05 B8 */	lwz r12, 0x5b8(r31)
/* 80833F98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80833F9C  7D 89 03 A6 */	mtctr r12
/* 80833FA0  4E 80 04 21 */	bctrl 
/* 80833FA4  38 00 00 01 */	li r0, 1
/* 80833FA8  90 1F 06 64 */	stw r0, 0x664(r31)
/* 80833FAC  48 00 01 44 */	b lbl_808340F0
lbl_80833FB0:
/* 80833FB0  80 7F 05 B4 */	lwz r3, 0x5b4(r31)
/* 80833FB4  38 80 00 01 */	li r4, 1
/* 80833FB8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80833FBC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80833FC0  40 82 00 18 */	bne lbl_80833FD8
/* 80833FC4  C0 3B 00 04 */	lfs f1, 4(r27)
/* 80833FC8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80833FCC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80833FD0  41 82 00 08 */	beq lbl_80833FD8
/* 80833FD4  38 80 00 00 */	li r4, 0
lbl_80833FD8:
/* 80833FD8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80833FDC  41 82 01 14 */	beq lbl_808340F0
/* 80833FE0  7F E3 FB 78 */	mr r3, r31
/* 80833FE4  38 80 00 01 */	li r4, 1
/* 80833FE8  38 A0 00 00 */	li r5, 0
/* 80833FEC  4B FF F2 A5 */	bl setActionMode__8daE_ZS_cFii
/* 80833FF0  48 00 01 00 */	b lbl_808340F0
lbl_80833FF4:
/* 80833FF4  38 80 00 06 */	li r4, 6
/* 80833FF8  38 A0 00 00 */	li r5, 0
/* 80833FFC  C0 3B 00 48 */	lfs f1, 0x48(r27)
/* 80834000  C0 5B 00 08 */	lfs f2, 8(r27)
/* 80834004  4B FF F1 E1 */	bl setBck__8daE_ZS_cFiUcff
/* 80834008  3C 60 00 07 */	lis r3, 0x0007 /* 0x000704B9@ha */
/* 8083400C  38 03 04 B9 */	addi r0, r3, 0x04B9 /* 0x000704B9@l */
/* 80834010  90 01 00 20 */	stw r0, 0x20(r1)
/* 80834014  38 7F 05 B8 */	addi r3, r31, 0x5b8
/* 80834018  38 81 00 20 */	addi r4, r1, 0x20
/* 8083401C  38 A0 FF FF */	li r5, -1
/* 80834020  81 9F 05 B8 */	lwz r12, 0x5b8(r31)
/* 80834024  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80834028  7D 89 03 A6 */	mtctr r12
/* 8083402C  4E 80 04 21 */	bctrl 
/* 80834030  38 00 00 03 */	li r0, 3
/* 80834034  90 1F 06 64 */	stw r0, 0x664(r31)
/* 80834038  48 00 00 B8 */	b lbl_808340F0
lbl_8083403C:
/* 8083403C  80 7F 05 B4 */	lwz r3, 0x5b4(r31)
/* 80834040  38 80 00 01 */	li r4, 1
/* 80834044  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80834048  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8083404C  40 82 00 18 */	bne lbl_80834064
/* 80834050  C0 3B 00 04 */	lfs f1, 4(r27)
/* 80834054  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80834058  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8083405C  41 82 00 08 */	beq lbl_80834064
/* 80834060  38 80 00 00 */	li r4, 0
lbl_80834064:
/* 80834064  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80834068  41 82 00 88 */	beq lbl_808340F0
/* 8083406C  C0 1B 00 58 */	lfs f0, 0x58(r27)
/* 80834070  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80834074  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80834078  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8083407C  3B 40 00 00 */	li r26, 0
/* 80834080  3B C0 00 00 */	li r30, 0
/* 80834084  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80834088  3B 83 61 C0 */	addi r28, r3, g_dComIfG_gameInfo@l
/* 8083408C  3C 60 80 83 */	lis r3, w_eff_id@ha
/* 80834090  3B A3 53 D4 */	addi r29, r3, w_eff_id@l
lbl_80834094:
/* 80834094  80 7C 5D 3C */	lwz r3, 0x5d3c(r28)
/* 80834098  38 80 00 00 */	li r4, 0
/* 8083409C  90 81 00 08 */	stw r4, 8(r1)
/* 808340A0  38 00 FF FF */	li r0, -1
/* 808340A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 808340A8  90 81 00 10 */	stw r4, 0x10(r1)
/* 808340AC  90 81 00 14 */	stw r4, 0x14(r1)
/* 808340B0  90 81 00 18 */	stw r4, 0x18(r1)
/* 808340B4  38 80 00 00 */	li r4, 0
/* 808340B8  7C BD F2 2E */	lhzx r5, r29, r30
/* 808340BC  38 DF 04 D0 */	addi r6, r31, 0x4d0
/* 808340C0  38 FF 01 0C */	addi r7, r31, 0x10c
/* 808340C4  39 00 00 00 */	li r8, 0
/* 808340C8  39 20 00 00 */	li r9, 0
/* 808340CC  39 40 00 FF */	li r10, 0xff
/* 808340D0  C0 3B 00 08 */	lfs f1, 8(r27)
/* 808340D4  4B 81 89 BC */	b set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 808340D8  3B 5A 00 01 */	addi r26, r26, 1
/* 808340DC  2C 1A 00 04 */	cmpwi r26, 4
/* 808340E0  3B DE 00 02 */	addi r30, r30, 2
/* 808340E4  41 80 FF B0 */	blt lbl_80834094
/* 808340E8  7F E3 FB 78 */	mr r3, r31
/* 808340EC  4B 7E 5B 90 */	b fopAcM_delete__FP10fopAc_ac_c
lbl_808340F0:
/* 808340F0  39 61 00 50 */	addi r11, r1, 0x50
/* 808340F4  4B B2 E1 28 */	b _restgpr_26
/* 808340F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 808340FC  7C 08 03 A6 */	mtlr r0
/* 80834100  38 21 00 50 */	addi r1, r1, 0x50
/* 80834104  4E 80 00 20 */	blr 
