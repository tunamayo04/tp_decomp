lbl_80632660:
/* 80632660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80632664  7C 08 02 A6 */	mflr r0
/* 80632668  90 01 00 24 */	stw r0, 0x24(r1)
/* 8063266C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80632670  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80632674  7C 7E 1B 78 */	mr r30, r3
/* 80632678  3C 60 80 64 */	lis r3, lit_3788@ha
/* 8063267C  3B E3 97 F4 */	addi r31, r3, lit_3788@l
/* 80632680  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80632684  C0 5F 01 00 */	lfs f2, 0x100(r31)
/* 80632688  4B C3 E0 B8 */	b cLib_chaseF__FPfff
/* 8063268C  88 1E 0F AF */	lbz r0, 0xfaf(r30)
/* 80632690  2C 00 00 02 */	cmpwi r0, 2
/* 80632694  41 82 00 A4 */	beq lbl_80632738
/* 80632698  40 80 00 14 */	bge lbl_806326AC
/* 8063269C  2C 00 00 00 */	cmpwi r0, 0
/* 806326A0  41 82 00 18 */	beq lbl_806326B8
/* 806326A4  40 80 00 54 */	bge lbl_806326F8
/* 806326A8  48 00 00 E8 */	b lbl_80632790
lbl_806326AC:
/* 806326AC  2C 00 00 04 */	cmpwi r0, 4
/* 806326B0  40 80 00 E0 */	bge lbl_80632790
/* 806326B4  48 00 00 A8 */	b lbl_8063275C
lbl_806326B8:
/* 806326B8  38 7E 0F 82 */	addi r3, r30, 0xf82
/* 806326BC  38 80 01 00 */	li r4, 0x100
/* 806326C0  38 A0 00 08 */	li r5, 8
/* 806326C4  4B C3 E4 CC */	b cLib_chaseAngleS__FPsss
/* 806326C8  7F C3 F3 78 */	mr r3, r30
/* 806326CC  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 806326D0  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 806326D4  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 806326D8  4B 9E 80 38 */	b fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 806326DC  7C 64 1B 78 */	mr r4, r3
/* 806326E0  38 7E 04 E6 */	addi r3, r30, 0x4e6
/* 806326E4  38 A0 00 20 */	li r5, 0x20
/* 806326E8  A8 DE 0F 82 */	lha r6, 0xf82(r30)
/* 806326EC  38 E0 00 08 */	li r7, 8
/* 806326F0  4B C3 DE 50 */	b cLib_addCalcAngleS__FPsssss
/* 806326F4  48 00 00 9C */	b lbl_80632790
lbl_806326F8:
/* 806326F8  38 7E 0F 82 */	addi r3, r30, 0xf82
/* 806326FC  38 80 00 00 */	li r4, 0
/* 80632700  38 A0 00 08 */	li r5, 8
/* 80632704  4B C3 E4 8C */	b cLib_chaseAngleS__FPsss
/* 80632708  2C 03 00 00 */	cmpwi r3, 0
/* 8063270C  41 82 00 18 */	beq lbl_80632724
/* 80632710  38 00 00 10 */	li r0, 0x10
/* 80632714  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 80632718  38 00 00 00 */	li r0, 0
/* 8063271C  98 1E 0F AF */	stb r0, 0xfaf(r30)
/* 80632720  48 00 00 70 */	b lbl_80632790
lbl_80632724:
/* 80632724  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 80632728  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 8063272C  7C 03 02 14 */	add r0, r3, r0
/* 80632730  B0 1E 04 E6 */	sth r0, 0x4e6(r30)
/* 80632734  48 00 00 5C */	b lbl_80632790
lbl_80632738:
/* 80632738  38 7E 0F 82 */	addi r3, r30, 0xf82
/* 8063273C  38 80 08 00 */	li r4, 0x800
/* 80632740  38 A0 00 40 */	li r5, 0x40
/* 80632744  4B C3 E4 4C */	b cLib_chaseAngleS__FPsss
/* 80632748  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 8063274C  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 80632750  7C 03 02 14 */	add r0, r3, r0
/* 80632754  B0 1E 04 E6 */	sth r0, 0x4e6(r30)
/* 80632758  48 00 00 38 */	b lbl_80632790
lbl_8063275C:
/* 8063275C  38 7E 0F 82 */	addi r3, r30, 0xf82
/* 80632760  38 80 02 00 */	li r4, 0x200
/* 80632764  38 A0 00 40 */	li r5, 0x40
/* 80632768  4B C3 E4 28 */	b cLib_chaseAngleS__FPsss
/* 8063276C  2C 03 00 00 */	cmpwi r3, 0
/* 80632770  41 82 00 10 */	beq lbl_80632780
/* 80632774  38 00 00 01 */	li r0, 1
/* 80632778  98 1E 0F AF */	stb r0, 0xfaf(r30)
/* 8063277C  48 00 00 14 */	b lbl_80632790
lbl_80632780:
/* 80632780  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 80632784  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 80632788  7C 03 02 14 */	add r0, r3, r0
/* 8063278C  B0 1E 04 E6 */	sth r0, 0x4e6(r30)
lbl_80632790:
/* 80632790  80 1E 10 88 */	lwz r0, 0x1088(r30)
/* 80632794  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80632798  41 82 01 5C */	beq lbl_806328F4
/* 8063279C  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 806327A0  D0 21 00 08 */	stfs f1, 8(r1)
/* 806327A4  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 806327A8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 806327AC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 806327B0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 806327B4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 806327B8  38 63 5B D4 */	addi r3, r3, 0x5bd4
/* 806327BC  88 1E 0F A8 */	lbz r0, 0xfa8(r30)
/* 806327C0  20 80 00 08 */	subfic r4, r0, 8
/* 806327C4  38 A0 00 1F */	li r5, 0x1f
/* 806327C8  38 C1 00 08 */	addi r6, r1, 8
/* 806327CC  4B A3 D2 58 */	b StartShock__12dVibration_cFii4cXyz
/* 806327D0  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 806327D4  4B C3 51 80 */	b cM_rndF__Ff
/* 806327D8  3C 60 80 64 */	lis r3, l_HIO@ha
/* 806327DC  38 63 9F 84 */	addi r3, r3, l_HIO@l
/* 806327E0  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 806327E4  EC 20 08 2A */	fadds f1, f0, f1
/* 806327E8  C0 1E 05 2C */	lfs f0, 0x52c(r30)
/* 806327EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 806327F0  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 806327F4  C0 5E 05 2C */	lfs f2, 0x52c(r30)
/* 806327F8  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 806327FC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80632800  EC 21 00 32 */	fmuls f1, f1, f0
/* 80632804  88 1E 0F A8 */	lbz r0, 0xfa8(r30)
/* 80632808  54 00 10 3A */	slwi r0, r0, 2
/* 8063280C  3C 60 80 64 */	lis r3, yo_max_bound_speed@ha
/* 80632810  38 63 9D 0C */	addi r3, r3, yo_max_bound_speed@l
/* 80632814  7C 03 04 2E */	lfsx f0, r3, r0
/* 80632818  EC 01 00 2A */	fadds f0, f1, f0
/* 8063281C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80632820  40 81 00 08 */	ble lbl_80632828
/* 80632824  D0 1E 05 2C */	stfs f0, 0x52c(r30)
lbl_80632828:
/* 80632828  88 1E 0F AF */	lbz r0, 0xfaf(r30)
/* 8063282C  28 00 00 02 */	cmplwi r0, 2
/* 80632830  41 82 00 B4 */	beq lbl_806328E4
/* 80632834  28 00 00 00 */	cmplwi r0, 0
/* 80632838  40 82 00 2C */	bne lbl_80632864
/* 8063283C  4B C3 50 30 */	b cM_rnd__Fv
/* 80632840  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 80632844  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80632848  40 80 00 10 */	bge lbl_80632858
/* 8063284C  38 00 02 00 */	li r0, 0x200
/* 80632850  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 80632854  48 00 00 88 */	b lbl_806328DC
lbl_80632858:
/* 80632858  38 00 FE 00 */	li r0, -512
/* 8063285C  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 80632860  48 00 00 7C */	b lbl_806328DC
lbl_80632864:
/* 80632864  80 1E 0F 94 */	lwz r0, 0xf94(r30)
/* 80632868  2C 00 00 00 */	cmpwi r0, 0
/* 8063286C  40 82 00 28 */	bne lbl_80632894
/* 80632870  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 80632874  2C 00 00 00 */	cmpwi r0, 0
/* 80632878  40 81 00 10 */	ble lbl_80632888
/* 8063287C  38 00 02 00 */	li r0, 0x200
/* 80632880  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 80632884  48 00 00 58 */	b lbl_806328DC
lbl_80632888:
/* 80632888  38 00 FE 00 */	li r0, -512
/* 8063288C  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 80632890  48 00 00 4C */	b lbl_806328DC
lbl_80632894:
/* 80632894  A8 7E 0F 82 */	lha r3, 0xf82(r30)
/* 80632898  2C 03 00 00 */	cmpwi r3, 0
/* 8063289C  40 81 00 24 */	ble lbl_806328C0
/* 806328A0  38 03 02 00 */	addi r0, r3, 0x200
/* 806328A4  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 806328A8  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 806328AC  2C 00 06 00 */	cmpwi r0, 0x600
/* 806328B0  40 81 00 2C */	ble lbl_806328DC
/* 806328B4  38 00 06 00 */	li r0, 0x600
/* 806328B8  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 806328BC  48 00 00 20 */	b lbl_806328DC
lbl_806328C0:
/* 806328C0  38 03 FE 00 */	addi r0, r3, -512
/* 806328C4  B0 1E 0F 82 */	sth r0, 0xf82(r30)
/* 806328C8  A8 1E 0F 82 */	lha r0, 0xf82(r30)
/* 806328CC  2C 00 FA 00 */	cmpwi r0, -1536
/* 806328D0  40 80 00 0C */	bge lbl_806328DC
/* 806328D4  38 00 FA 00 */	li r0, -1536
/* 806328D8  B0 1E 0F 82 */	sth r0, 0xf82(r30)
lbl_806328DC:
/* 806328DC  38 00 00 01 */	li r0, 1
/* 806328E0  98 1E 0F AF */	stb r0, 0xfaf(r30)
lbl_806328E4:
/* 806328E4  A8 1E 10 58 */	lha r0, 0x1058(r30)
/* 806328E8  B0 1E 0F 84 */	sth r0, 0xf84(r30)
/* 806328EC  7F C3 F3 78 */	mr r3, r30
/* 806328F0  48 00 00 1D */	bl setReflectAngle__8daB_YO_cFv
lbl_806328F4:
/* 806328F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806328F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806328FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80632900  7C 08 03 A6 */	mtlr r0
/* 80632904  38 21 00 20 */	addi r1, r1, 0x20
/* 80632908  4E 80 00 20 */	blr 
