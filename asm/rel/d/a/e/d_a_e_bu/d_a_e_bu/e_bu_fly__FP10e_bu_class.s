lbl_8069243C:
/* 8069243C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80692440  7C 08 02 A6 */	mflr r0
/* 80692444  90 01 00 34 */	stw r0, 0x34(r1)
/* 80692448  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8069244C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80692450  7C 7E 1B 78 */	mr r30, r3
/* 80692454  3C 60 80 69 */	lis r3, lit_3788@ha
/* 80692458  3B E3 46 90 */	addi r31, r3, lit_3788@l
/* 8069245C  A8 1E 06 74 */	lha r0, 0x674(r30)
/* 80692460  2C 00 00 01 */	cmpwi r0, 1
/* 80692464  41 82 00 44 */	beq lbl_806924A8
/* 80692468  40 80 01 60 */	bge lbl_806925C8
/* 8069246C  2C 00 00 00 */	cmpwi r0, 0
/* 80692470  40 80 00 08 */	bge lbl_80692478
/* 80692474  48 00 01 54 */	b lbl_806925C8
lbl_80692478:
/* 80692478  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 8069247C  4B BD 54 D8 */	b cM_rndF__Ff
/* 80692480  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80692484  EC 40 08 2A */	fadds f2, f0, f1
/* 80692488  7F C3 F3 78 */	mr r3, r30
/* 8069248C  38 80 00 07 */	li r4, 7
/* 80692490  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 80692494  38 A0 00 02 */	li r5, 2
/* 80692498  4B FF ED B9 */	bl anm_init__FP10e_bu_classifUcf
/* 8069249C  38 00 00 01 */	li r0, 1
/* 806924A0  B0 1E 06 74 */	sth r0, 0x674(r30)
/* 806924A4  48 00 01 24 */	b lbl_806925C8
lbl_806924A8:
/* 806924A8  A8 1E 06 AC */	lha r0, 0x6ac(r30)
/* 806924AC  2C 00 00 00 */	cmpwi r0, 0
/* 806924B0  40 82 01 18 */	bne lbl_806925C8
/* 806924B4  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 806924B8  4B BD 54 D4 */	b cM_rndFX__Ff
/* 806924BC  C0 1E 04 A8 */	lfs f0, 0x4a8(r30)
/* 806924C0  EC 00 08 2A */	fadds f0, f0, f1
/* 806924C4  D0 1E 06 78 */	stfs f0, 0x678(r30)
/* 806924C8  C0 3F 00 88 */	lfs f1, 0x88(r31)
/* 806924CC  4B BD 54 C0 */	b cM_rndFX__Ff
/* 806924D0  C0 1E 04 AC */	lfs f0, 0x4ac(r30)
/* 806924D4  EC 00 08 2A */	fadds f0, f0, f1
/* 806924D8  D0 1E 06 7C */	stfs f0, 0x67c(r30)
/* 806924DC  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 806924E0  4B BD 54 AC */	b cM_rndFX__Ff
/* 806924E4  C0 1E 04 B0 */	lfs f0, 0x4b0(r30)
/* 806924E8  EC 00 08 2A */	fadds f0, f0, f1
/* 806924EC  D0 1E 06 80 */	stfs f0, 0x680(r30)
/* 806924F0  38 61 00 08 */	addi r3, r1, 8
/* 806924F4  38 9E 06 78 */	addi r4, r30, 0x678
/* 806924F8  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 806924FC  4B BD 46 38 */	b __mi__4cXyzCFRC3Vec
/* 80692500  C0 21 00 08 */	lfs f1, 8(r1)
/* 80692504  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80692508  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8069250C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80692510  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80692514  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80692518  4B BD 51 5C */	b cM_atan2s__Fff
/* 8069251C  7C 64 1B 78 */	mr r4, r3
/* 80692520  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 80692524  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 80692528  80 63 00 00 */	lwz r3, 0(r3)
/* 8069252C  4B 97 9E B0 */	b mDoMtx_YrotS__FPA4_fs
/* 80692530  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80692534  EC 20 00 32 */	fmuls f1, f0, f0
/* 80692538  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8069253C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80692540  EC 41 00 2A */	fadds f2, f1, f0
/* 80692544  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80692548  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8069254C  40 81 00 0C */	ble lbl_80692558
/* 80692550  FC 00 10 34 */	frsqrte f0, f2
/* 80692554  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_80692558:
/* 80692558  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8069255C  4B BD 51 18 */	b cM_atan2s__Fff
/* 80692560  7C 03 00 D0 */	neg r0, r3
/* 80692564  7C 04 07 34 */	extsh r4, r0
/* 80692568  3C 60 80 45 */	lis r3, calc_mtx@ha
/* 8069256C  38 63 07 68 */	addi r3, r3, calc_mtx@l
/* 80692570  80 63 00 00 */	lwz r3, 0(r3)
/* 80692574  4B 97 9E 28 */	b mDoMtx_XrotM__FPA4_fs
/* 80692578  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8069257C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80692580  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80692584  3C 60 80 69 */	lis r3, l_HIO@ha
/* 80692588  38 63 49 68 */	addi r3, r3, l_HIO@l
/* 8069258C  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80692590  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80692594  38 61 00 14 */	addi r3, r1, 0x14
/* 80692598  38 9E 04 F8 */	addi r4, r30, 0x4f8
/* 8069259C  4B BD E9 50 */	b MtxPosition__FP4cXyzP4cXyz
/* 806925A0  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 806925A4  4B BD 53 B0 */	b cM_rndF__Ff
/* 806925A8  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 806925AC  EC 00 08 2A */	fadds f0, f0, f1
/* 806925B0  FC 00 00 1E */	fctiwz f0, f0
/* 806925B4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 806925B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806925BC  B0 1E 06 AC */	sth r0, 0x6ac(r30)
/* 806925C0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 806925C4  D0 1E 06 90 */	stfs f0, 0x690(r30)
lbl_806925C8:
/* 806925C8  3C 60 80 69 */	lis r3, l_HIO@ha
/* 806925CC  38 63 49 68 */	addi r3, r3, l_HIO@l
/* 806925D0  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 806925D4  38 7E 05 2C */	addi r3, r30, 0x52c
/* 806925D8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 806925DC  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 806925E0  EC 60 00 72 */	fmuls f3, f0, f1
/* 806925E4  4B BD D4 58 */	b cLib_addCalc2__FPffff
/* 806925E8  7F C3 F3 78 */	mr r3, r30
/* 806925EC  4B FF F4 A9 */	bl fly_move__FP10e_bu_class
/* 806925F0  7F C3 F3 78 */	mr r3, r30
/* 806925F4  C0 3E 06 8C */	lfs f1, 0x68c(r30)
/* 806925F8  38 80 00 01 */	li r4, 1
/* 806925FC  4B FF EF E1 */	bl pl_check__FP10e_bu_classfs
/* 80692600  2C 03 00 00 */	cmpwi r3, 0
/* 80692604  41 82 00 10 */	beq lbl_80692614
/* 80692608  38 00 00 01 */	li r0, 1
/* 8069260C  B0 1E 06 72 */	sth r0, 0x672(r30)
/* 80692610  B0 1E 06 74 */	sth r0, 0x674(r30)
lbl_80692614:
/* 80692614  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80692618  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8069261C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80692620  7C 08 03 A6 */	mtlr r0
/* 80692624  38 21 00 30 */	addi r1, r1, 0x30
/* 80692628  4E 80 00 20 */	blr 
