lbl_80118308:
/* 80118308  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8011830C  7C 08 02 A6 */	mflr r0
/* 80118310  90 01 00 44 */	stw r0, 0x44(r1)
/* 80118314  39 61 00 40 */	addi r11, r1, 0x40
/* 80118318  48 24 9E C5 */	bl _savegpr_29
/* 8011831C  7C 7D 1B 78 */	mr r29, r3
/* 80118320  7C 9E 23 78 */	mr r30, r4
/* 80118324  4B F0 37 F1 */	bl fopAcM_getTalkEventPartner__FPC10fopAc_ac_c
/* 80118328  7C 7F 1B 79 */	or. r31, r3, r3
/* 8011832C  41 82 02 24 */	beq lbl_80118550
/* 80118330  A8 1F 00 08 */	lha r0, 8(r31)
/* 80118334  2C 00 00 FF */	cmpwi r0, 0xff
/* 80118338  41 82 00 24 */	beq lbl_8011835C
/* 8011833C  2C 00 02 C7 */	cmpwi r0, 0x2c7
/* 80118340  41 82 00 1C */	beq lbl_8011835C
/* 80118344  2C 00 02 C1 */	cmpwi r0, 0x2c1
/* 80118348  41 82 00 14 */	beq lbl_8011835C
/* 8011834C  2C 00 02 C4 */	cmpwi r0, 0x2c4
/* 80118350  41 82 00 0C */	beq lbl_8011835C
/* 80118354  2C 00 02 C3 */	cmpwi r0, 0x2c3
/* 80118358  40 82 00 0C */	bne lbl_80118364
lbl_8011835C:
/* 8011835C  38 60 00 00 */	li r3, 0
/* 80118360  48 00 01 F4 */	b lbl_80118554
lbl_80118364:
/* 80118364  38 61 00 18 */	addi r3, r1, 0x18
/* 80118368  38 9D 04 D0 */	addi r4, r29, 0x4d0
/* 8011836C  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80118370  48 14 E7 C5 */	bl __mi__4cXyzCFRC3Vec
/* 80118374  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80118378  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8011837C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80118380  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80118384  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80118388  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8011838C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80118390  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 80118394  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80118398  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8011839C  38 61 00 0C */	addi r3, r1, 0xc
/* 801183A0  48 22 ED 99 */	bl PSVECSquareMag
/* 801183A4  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 801183A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801183AC  40 81 00 58 */	ble lbl_80118404
/* 801183B0  FC 00 08 34 */	frsqrte f0, f1
/* 801183B4  C8 82 92 E8 */	lfd f4, lit_6846(r2)
/* 801183B8  FC 44 00 32 */	fmul f2, f4, f0
/* 801183BC  C8 62 92 F0 */	lfd f3, lit_6847(r2)
/* 801183C0  FC 00 00 32 */	fmul f0, f0, f0
/* 801183C4  FC 01 00 32 */	fmul f0, f1, f0
/* 801183C8  FC 03 00 28 */	fsub f0, f3, f0
/* 801183CC  FC 02 00 32 */	fmul f0, f2, f0
/* 801183D0  FC 44 00 32 */	fmul f2, f4, f0
/* 801183D4  FC 00 00 32 */	fmul f0, f0, f0
/* 801183D8  FC 01 00 32 */	fmul f0, f1, f0
/* 801183DC  FC 03 00 28 */	fsub f0, f3, f0
/* 801183E0  FC 02 00 32 */	fmul f0, f2, f0
/* 801183E4  FC 44 00 32 */	fmul f2, f4, f0
/* 801183E8  FC 00 00 32 */	fmul f0, f0, f0
/* 801183EC  FC 01 00 32 */	fmul f0, f1, f0
/* 801183F0  FC 03 00 28 */	fsub f0, f3, f0
/* 801183F4  FC 02 00 32 */	fmul f0, f2, f0
/* 801183F8  FC 21 00 32 */	fmul f1, f1, f0
/* 801183FC  FC 20 08 18 */	frsp f1, f1
/* 80118400  48 00 00 88 */	b lbl_80118488
lbl_80118404:
/* 80118404  C8 02 92 F8 */	lfd f0, lit_6848(r2)
/* 80118408  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011840C  40 80 00 10 */	bge lbl_8011841C
/* 80118410  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80118414  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80118418  48 00 00 70 */	b lbl_80118488
lbl_8011841C:
/* 8011841C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80118420  80 81 00 08 */	lwz r4, 8(r1)
/* 80118424  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80118428  3C 00 7F 80 */	lis r0, 0x7f80
/* 8011842C  7C 03 00 00 */	cmpw r3, r0
/* 80118430  41 82 00 14 */	beq lbl_80118444
/* 80118434  40 80 00 40 */	bge lbl_80118474
/* 80118438  2C 03 00 00 */	cmpwi r3, 0
/* 8011843C  41 82 00 20 */	beq lbl_8011845C
/* 80118440  48 00 00 34 */	b lbl_80118474
lbl_80118444:
/* 80118444  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80118448  41 82 00 0C */	beq lbl_80118454
/* 8011844C  38 00 00 01 */	li r0, 1
/* 80118450  48 00 00 28 */	b lbl_80118478
lbl_80118454:
/* 80118454  38 00 00 02 */	li r0, 2
/* 80118458  48 00 00 20 */	b lbl_80118478
lbl_8011845C:
/* 8011845C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80118460  41 82 00 0C */	beq lbl_8011846C
/* 80118464  38 00 00 05 */	li r0, 5
/* 80118468  48 00 00 10 */	b lbl_80118478
lbl_8011846C:
/* 8011846C  38 00 00 03 */	li r0, 3
/* 80118470  48 00 00 08 */	b lbl_80118478
lbl_80118474:
/* 80118474  38 00 00 04 */	li r0, 4
lbl_80118478:
/* 80118478  2C 00 00 01 */	cmpwi r0, 1
/* 8011847C  40 82 00 0C */	bne lbl_80118488
/* 80118480  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80118484  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80118488:
/* 80118488  C0 42 93 50 */	lfs f2, lit_8247(r2)
/* 8011848C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80118490  40 80 00 C0 */	bge lbl_80118550
/* 80118494  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 80118498  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011849C  40 81 00 B4 */	ble lbl_80118550
/* 801184A0  EC 42 08 24 */	fdivs f2, f2, f1
/* 801184A4  C0 3F 04 D0 */	lfs f1, 0x4d0(r31)
/* 801184A8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 801184AC  EC 02 00 32 */	fmuls f0, f2, f0
/* 801184B0  EC 01 00 2A */	fadds f0, f1, f0
/* 801184B4  D0 1E 00 00 */	stfs f0, 0(r30)
/* 801184B8  C0 3D 04 D4 */	lfs f1, 0x4d4(r29)
/* 801184BC  C0 0D 81 10 */	lfs f0, l_autoUpHeight(r13)
/* 801184C0  EC 01 00 2A */	fadds f0, f1, f0
/* 801184C4  D0 1E 00 04 */	stfs f0, 4(r30)
/* 801184C8  C0 3F 04 D8 */	lfs f1, 0x4d8(r31)
/* 801184CC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801184D0  EC 02 00 32 */	fmuls f0, f2, f0
/* 801184D4  EC 01 00 2A */	fadds f0, f1, f0
/* 801184D8  D0 1E 00 08 */	stfs f0, 8(r30)
/* 801184DC  38 7D 1D 08 */	addi r3, r29, 0x1d08
/* 801184E0  7F C4 F3 78 */	mr r4, r30
/* 801184E4  48 14 F8 45 */	bl SetPos__11cBgS_GndChkFPC4cXyz
/* 801184E8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 801184EC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801184F0  38 63 0F 38 */	addi r3, r3, 0xf38
/* 801184F4  38 9D 1D 08 */	addi r4, r29, 0x1d08
/* 801184F8  4B F5 BF A9 */	bl GroundCross__4cBgSFP11cBgS_GndChk
/* 801184FC  C0 1D 04 D4 */	lfs f0, 0x4d4(r29)
/* 80118500  EC 21 00 28 */	fsubs f1, f1, f0
/* 80118504  C0 0D 81 14 */	lfs f0, l_autoDownHeight(r13)
/* 80118508  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011850C  4C 41 13 82 */	cror 2, 1, 2
/* 80118510  40 82 00 40 */	bne lbl_80118550
/* 80118514  38 61 00 24 */	addi r3, r1, 0x24
/* 80118518  48 14 EC 11 */	bl atan2sX_Z__4cXyzCFv
/* 8011851C  B0 7D 04 DE */	sth r3, 0x4de(r29)
/* 80118520  C0 02 93 3C */	lfs f0, lit_7808(r2)
/* 80118524  D0 1D 33 98 */	stfs f0, 0x3398(r29)
/* 80118528  7F A3 EB 78 */	mr r3, r29
/* 8011852C  38 80 00 12 */	li r4, 0x12
/* 80118530  3C A0 80 39 */	lis r5, m__18daAlinkHIO_move_c0@ha
/* 80118534  38 A5 D6 BC */	addi r5, r5, m__18daAlinkHIO_move_c0@l
/* 80118538  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 8011853C  FC 20 00 50 */	fneg f1, f0
/* 80118540  C0 42 92 C4 */	lfs f2, lit_6109(r2)
/* 80118544  4B F9 4A 9D */	bl setSingleAnimeBaseSpeed__9daAlink_cFQ29daAlink_c11daAlink_ANMff
/* 80118548  38 60 00 01 */	li r3, 1
/* 8011854C  48 00 00 08 */	b lbl_80118554
lbl_80118550:
/* 80118550  38 60 00 00 */	li r3, 0
lbl_80118554:
/* 80118554  39 61 00 40 */	addi r11, r1, 0x40
/* 80118558  48 24 9C D1 */	bl _restgpr_29
/* 8011855C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80118560  7C 08 03 A6 */	mtlr r0
/* 80118564  38 21 00 40 */	addi r1, r1, 0x40
/* 80118568  4E 80 00 20 */	blr 
