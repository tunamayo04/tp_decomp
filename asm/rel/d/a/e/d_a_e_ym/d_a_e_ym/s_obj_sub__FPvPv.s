lbl_80808698:
/* 80808698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8080869C  7C 08 02 A6 */	mflr r0
/* 808086A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 808086A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808086A8  93 C1 00 08 */	stw r30, 8(r1)
/* 808086AC  7C 7E 1B 78 */	mr r30, r3
/* 808086B0  7C 9F 23 78 */	mr r31, r4
/* 808086B4  4B 81 06 2C */	b fopAc_IsActor__FPv
/* 808086B8  2C 03 00 00 */	cmpwi r3, 0
/* 808086BC  41 82 00 90 */	beq lbl_8080874C
/* 808086C0  A8 1E 00 08 */	lha r0, 8(r30)
/* 808086C4  2C 00 02 FC */	cmpwi r0, 0x2fc
/* 808086C8  40 82 00 84 */	bne lbl_8080874C
/* 808086CC  28 1E 00 00 */	cmplwi r30, 0
/* 808086D0  41 82 00 0C */	beq lbl_808086DC
/* 808086D4  80 7E 00 04 */	lwz r3, 4(r30)
/* 808086D8  48 00 00 08 */	b lbl_808086E0
lbl_808086DC:
/* 808086DC  38 60 FF FF */	li r3, -1
lbl_808086E0:
/* 808086E0  4B 81 9A 58 */	b fpcM_IsCreating__FUi
/* 808086E4  2C 03 00 00 */	cmpwi r3, 0
/* 808086E8  40 82 00 64 */	bne lbl_8080874C
/* 808086EC  7F C3 F3 78 */	mr r3, r30
/* 808086F0  7F E4 FB 78 */	mr r4, r31
/* 808086F4  4B 81 22 70 */	b fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 808086F8  3C 60 80 81 */	lis r3, lit_3925@ha
/* 808086FC  C0 03 59 94 */	lfs f0, lit_3925@l(r3)
/* 80808700  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80808704  40 80 00 48 */	bge lbl_8080874C
/* 80808708  3C 60 80 81 */	lis r3, m_obj_dist@ha
/* 8080870C  38 83 5D 60 */	addi r4, r3, m_obj_dist@l
/* 80808710  C0 04 00 00 */	lfs f0, 0(r4)
/* 80808714  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80808718  40 80 00 34 */	bge lbl_8080874C
/* 8080871C  C0 5F 04 D4 */	lfs f2, 0x4d4(r31)
/* 80808720  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80808724  EC 02 00 28 */	fsubs f0, f2, f0
/* 80808728  FC 00 02 10 */	fabs f0, f0
/* 8080872C  FC 40 00 18 */	frsp f2, f0
/* 80808730  3C 60 80 81 */	lis r3, lit_3947@ha
/* 80808734  C0 03 59 C4 */	lfs f0, lit_3947@l(r3)
/* 80808738  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8080873C  40 80 00 10 */	bge lbl_8080874C
/* 80808740  3C 60 80 81 */	lis r3, m_near_obj@ha
/* 80808744  93 C3 5D 5C */	stw r30, m_near_obj@l(r3)
/* 80808748  D0 24 00 00 */	stfs f1, 0(r4)
lbl_8080874C:
/* 8080874C  38 60 00 00 */	li r3, 0
/* 80808750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80808754  83 C1 00 08 */	lwz r30, 8(r1)
/* 80808758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8080875C  7C 08 03 A6 */	mtlr r0
/* 80808760  38 21 00 10 */	addi r1, r1, 0x10
/* 80808764  4E 80 00 20 */	blr 
