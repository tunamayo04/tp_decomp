lbl_8014852C:
/* 8014852C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148530  7C 08 02 A6 */	mflr r0
/* 80148534  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014853C  93 C1 00 08 */	stw r30, 8(r1)
/* 80148540  7C 7E 1B 78 */	mr r30, r3
/* 80148544  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80148548  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8014854C  7D 89 03 A6 */	mtctr r12
/* 80148550  4E 80 04 21 */	bctrl 
/* 80148554  7F C3 F3 78 */	mr r3, r30
/* 80148558  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 8014855C  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80148560  7D 89 03 A6 */	mtctr r12
/* 80148564  4E 80 04 21 */	bctrl 
/* 80148568  2C 03 00 00 */	cmpwi r3, 0
/* 8014856C  40 82 00 18 */	bne lbl_80148584
/* 80148570  7F C3 F3 78 */	mr r3, r30
/* 80148574  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 80148578  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8014857C  7D 89 03 A6 */	mtctr r12
/* 80148580  4E 80 04 21 */	bctrl 
lbl_80148584:
/* 80148584  7F C3 F3 78 */	mr r3, r30
/* 80148588  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 8014858C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80148590  7D 89 03 A6 */	mtctr r12
/* 80148594  4E 80 04 21 */	bctrl 
/* 80148598  7F C3 F3 78 */	mr r3, r30
/* 8014859C  38 9E 08 64 */	addi r4, r30, 0x864
/* 801485A0  4B ED 21 2D */	bl fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz
/* 801485A4  38 7E 06 8C */	addi r3, r30, 0x68c
/* 801485A8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 801485AC  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 801485B0  3B E4 0F 38 */	addi r31, r4, 0xf38
/* 801485B4  7F E4 FB 78 */	mr r4, r31
/* 801485B8  4B F2 E4 F5 */	bl CrrPos__9dBgS_AcchFR4dBgS
/* 801485BC  80 1E 07 68 */	lwz r0, 0x768(r30)
/* 801485C0  90 1E 09 30 */	stw r0, 0x930(r30)
/* 801485C4  80 1E 07 6C */	lwz r0, 0x76c(r30)
/* 801485C8  90 1E 09 34 */	stw r0, 0x934(r30)
/* 801485CC  80 1E 07 70 */	lwz r0, 0x770(r30)
/* 801485D0  90 1E 09 38 */	stw r0, 0x938(r30)
/* 801485D4  88 1E 07 74 */	lbz r0, 0x774(r30)
/* 801485D8  98 1E 09 3C */	stb r0, 0x93c(r30)
/* 801485DC  A0 1E 07 7C */	lhz r0, 0x77c(r30)
/* 801485E0  B0 1E 09 44 */	sth r0, 0x944(r30)
/* 801485E4  A0 1E 07 7E */	lhz r0, 0x77e(r30)
/* 801485E8  B0 1E 09 46 */	sth r0, 0x946(r30)
/* 801485EC  80 1E 07 80 */	lwz r0, 0x780(r30)
/* 801485F0  90 1E 09 48 */	stw r0, 0x948(r30)
/* 801485F4  80 1E 07 84 */	lwz r0, 0x784(r30)
/* 801485F8  90 1E 09 4C */	stw r0, 0x94c(r30)
/* 801485FC  C0 1E 07 8C */	lfs f0, 0x78c(r30)
/* 80148600  D0 1E 09 54 */	stfs f0, 0x954(r30)
/* 80148604  C0 1E 07 90 */	lfs f0, 0x790(r30)
/* 80148608  D0 1E 09 58 */	stfs f0, 0x958(r30)
/* 8014860C  C0 1E 07 94 */	lfs f0, 0x794(r30)
/* 80148610  D0 1E 09 5C */	stfs f0, 0x95c(r30)
/* 80148614  80 1E 07 98 */	lwz r0, 0x798(r30)
/* 80148618  90 1E 09 60 */	stw r0, 0x960(r30)
/* 8014861C  C0 1E 07 9C */	lfs f0, 0x79c(r30)
/* 80148620  D0 1E 09 64 */	stfs f0, 0x964(r30)
/* 80148624  80 1E 07 A0 */	lwz r0, 0x7a0(r30)
/* 80148628  90 1E 09 68 */	stw r0, 0x968(r30)
/* 8014862C  38 7E 09 44 */	addi r3, r30, 0x944
/* 80148630  A8 9E 04 DE */	lha r4, 0x4de(r30)
/* 80148634  4B ED 54 B1 */	bl fopAcM_getPolygonAngle__FRC13cBgS_PolyInfos
/* 80148638  B0 7E 0D CA */	sth r3, 0xdca(r30)
/* 8014863C  C0 1E 07 24 */	lfs f0, 0x724(r30)
/* 80148640  D0 1E 0D F4 */	stfs f0, 0xdf4(r30)
/* 80148644  C0 22 9A 40 */	lfs f1, lit_5667(r2)
/* 80148648  C0 1E 0D F4 */	lfs f0, 0xdf4(r30)
/* 8014864C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80148650  41 82 00 4C */	beq lbl_8014869C
/* 80148654  38 7E 07 7C */	addi r3, r30, 0x77c
/* 80148658  48 06 2E 69 */	bl dKy_pol_sound_get__FPC13cBgS_PolyInfo
/* 8014865C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80148660  90 1E 0D A8 */	stw r0, 0xda8(r30)
/* 80148664  88 7E 08 86 */	lbz r3, 0x886(r30)
/* 80148668  4B EE 4A 05 */	bl dComIfGp_getReverb__Fi
/* 8014866C  98 7E 0E 24 */	stb r3, 0xe24(r30)
/* 80148670  80 1E 06 B8 */	lwz r0, 0x6b8(r30)
/* 80148674  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80148678  41 82 00 24 */	beq lbl_8014869C
/* 8014867C  C0 3E 08 58 */	lfs f1, 0x858(r30)
/* 80148680  C0 1E 0D F4 */	lfs f0, 0xdf4(r30)
/* 80148684  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80148688  40 81 00 14 */	ble lbl_8014869C
/* 8014868C  38 7E 08 0C */	addi r3, r30, 0x80c
/* 80148690  48 06 2E 31 */	bl dKy_pol_sound_get__FPC13cBgS_PolyInfo
/* 80148694  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80148698  90 1E 0D A8 */	stw r0, 0xda8(r30)
lbl_8014869C:
/* 8014869C  7F C3 F3 78 */	mr r3, r30
/* 801486A0  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 801486A4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801486A8  7D 89 03 A6 */	mtctr r12
/* 801486AC  4E 80 04 21 */	bctrl 
/* 801486B0  C0 22 9A 40 */	lfs f1, lit_5667(r2)
/* 801486B4  C0 1E 0D F4 */	lfs f0, 0xdf4(r30)
/* 801486B8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 801486BC  41 82 00 14 */	beq lbl_801486D0
/* 801486C0  7F C3 F3 78 */	mr r3, r30
/* 801486C4  48 00 05 AD */	bl setEnvTevColor__8daNpcT_cFv
/* 801486C8  7F C3 F3 78 */	mr r3, r30
/* 801486CC  48 00 06 01 */	bl setRoomNo__8daNpcT_cFv
lbl_801486D0:
/* 801486D0  38 60 00 00 */	li r3, 0
/* 801486D4  80 1E 0B 60 */	lwz r0, 0xb60(r30)
/* 801486D8  2C 00 00 00 */	cmpwi r0, 0
/* 801486DC  40 82 00 14 */	bne lbl_801486F0
/* 801486E0  80 1E 0B 64 */	lwz r0, 0xb64(r30)
/* 801486E4  2C 00 FF FF */	cmpwi r0, -1
/* 801486E8  40 82 00 08 */	bne lbl_801486F0
/* 801486EC  38 60 00 01 */	li r3, 1
lbl_801486F0:
/* 801486F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801486F4  41 82 00 24 */	beq lbl_80148718
/* 801486F8  7F C3 F3 78 */	mr r3, r30
/* 801486FC  48 00 0B 51 */	bl ctrlFaceMotion__8daNpcT_cFv
/* 80148700  7F C3 F3 78 */	mr r3, r30
/* 80148704  38 80 00 01 */	li r4, 1
/* 80148708  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 8014870C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80148710  7D 89 03 A6 */	mtctr r12
/* 80148714  4E 80 04 21 */	bctrl 
lbl_80148718:
/* 80148718  38 60 00 00 */	li r3, 0
/* 8014871C  80 1E 0B 84 */	lwz r0, 0xb84(r30)
/* 80148720  2C 00 00 00 */	cmpwi r0, 0
/* 80148724  40 82 00 14 */	bne lbl_80148738
/* 80148728  80 1E 0B 88 */	lwz r0, 0xb88(r30)
/* 8014872C  2C 00 FF FF */	cmpwi r0, -1
/* 80148730  40 82 00 08 */	bne lbl_80148738
/* 80148734  38 60 00 01 */	li r3, 1
lbl_80148738:
/* 80148738  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014873C  41 82 00 0C */	beq lbl_80148748
/* 80148740  7F C3 F3 78 */	mr r3, r30
/* 80148744  48 00 0B BD */	bl ctrlMotion__8daNpcT_cFv
lbl_80148748:
/* 80148748  7F C3 F3 78 */	mr r3, r30
/* 8014874C  48 00 07 01 */	bl playAllAnm__8daNpcT_cFv
/* 80148750  7F C3 F3 78 */	mr r3, r30
/* 80148754  48 00 0A F9 */	bl ctrlFaceMotion__8daNpcT_cFv
/* 80148758  7F C3 F3 78 */	mr r3, r30
/* 8014875C  38 80 00 00 */	li r4, 0
/* 80148760  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 80148764  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80148768  7D 89 03 A6 */	mtctr r12
/* 8014876C  4E 80 04 21 */	bctrl 
/* 80148770  7F C3 F3 78 */	mr r3, r30
/* 80148774  48 00 0B 8D */	bl ctrlMotion__8daNpcT_cFv
/* 80148778  7F C3 F3 78 */	mr r3, r30
/* 8014877C  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 80148780  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80148784  7D 89 03 A6 */	mtctr r12
/* 80148788  4E 80 04 21 */	bctrl 
/* 8014878C  38 7E 0D FC */	addi r3, r30, 0xdfc
/* 80148790  C0 22 99 D8 */	lfs f1, lit_4116(r2)
/* 80148794  C0 42 99 DC */	lfs f2, lit_4140(r2)
/* 80148798  48 12 7F A9 */	bl cLib_chaseF__FPfff
/* 8014879C  7F C3 F3 78 */	mr r3, r30
/* 801487A0  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 801487A4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 801487A8  7D 89 03 A6 */	mtctr r12
/* 801487AC  4E 80 04 21 */	bctrl 
/* 801487B0  7F C3 F3 78 */	mr r3, r30
/* 801487B4  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 801487B8  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801487BC  7D 89 03 A6 */	mtctr r12
/* 801487C0  4E 80 04 21 */	bctrl 
/* 801487C4  88 1E 0E 2C */	lbz r0, 0xe2c(r30)
/* 801487C8  28 00 00 00 */	cmplwi r0, 0
/* 801487CC  40 82 00 5C */	bne lbl_80148828
/* 801487D0  88 1E 0E 33 */	lbz r0, 0xe33(r30)
/* 801487D4  28 00 00 00 */	cmplwi r0, 0
/* 801487D8  41 82 00 28 */	beq lbl_80148800
/* 801487DC  38 00 00 00 */	li r0, 0
/* 801487E0  88 7F 40 75 */	lbz r3, 0x4075(r31)
/* 801487E4  28 03 00 00 */	cmplwi r3, 0
/* 801487E8  41 82 00 0C */	beq lbl_801487F4
/* 801487EC  28 03 00 02 */	cmplwi r3, 2
/* 801487F0  40 82 00 08 */	bne lbl_801487F8
lbl_801487F4:
/* 801487F4  38 00 00 01 */	li r0, 1
lbl_801487F8:
/* 801487F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801487FC  40 82 00 18 */	bne lbl_80148814
lbl_80148800:
/* 80148800  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80148804  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80148808  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 8014880C  28 00 00 00 */	cmplwi r0, 0
/* 80148810  40 82 00 18 */	bne lbl_80148828
lbl_80148814:
/* 80148814  7F C3 F3 78 */	mr r3, r30
/* 80148818  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 8014881C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80148820  7D 89 03 A6 */	mtctr r12
/* 80148824  4E 80 04 21 */	bctrl 
lbl_80148828:
/* 80148828  7F C3 F3 78 */	mr r3, r30
/* 8014882C  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 80148830  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 80148834  7D 89 03 A6 */	mtctr r12
/* 80148838  4E 80 04 21 */	bctrl 
/* 8014883C  7F C3 F3 78 */	mr r3, r30
/* 80148840  81 9E 0E 3C */	lwz r12, 0xe3c(r30)
/* 80148844  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80148848  7D 89 03 A6 */	mtctr r12
/* 8014884C  4E 80 04 21 */	bctrl 
/* 80148850  38 60 00 01 */	li r3, 1
/* 80148854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80148858  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014885C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148860  7C 08 03 A6 */	mtlr r0
/* 80148864  38 21 00 10 */	addi r1, r1, 0x10
/* 80148868  4E 80 00 20 */	blr 
