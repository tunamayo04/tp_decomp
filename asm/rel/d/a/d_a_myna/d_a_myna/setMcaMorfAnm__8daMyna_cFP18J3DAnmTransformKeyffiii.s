lbl_8094983C:
/* 8094983C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80949840  7C 08 02 A6 */	mflr r0
/* 80949844  90 01 00 24 */	stw r0, 0x24(r1)
/* 80949848  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8094984C  7C 7F 1B 78 */	mr r31, r3
/* 80949850  FC 00 08 90 */	fmr f0, f1
/* 80949854  80 63 05 74 */	lwz r3, 0x574(r3)
/* 80949858  FC 20 10 90 */	fmr f1, f2
/* 8094985C  FC 40 00 90 */	fmr f2, f0
/* 80949860  3D 00 80 95 */	lis r8, lit_5332@ha
/* 80949864  C8 88 B2 38 */	lfd f4, lit_5332@l(r8)
/* 80949868  6C C0 80 00 */	xoris r0, r6, 0x8000
/* 8094986C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80949870  3C C0 43 30 */	lis r6, 0x4330
/* 80949874  90 C1 00 08 */	stw r6, 8(r1)
/* 80949878  C8 01 00 08 */	lfd f0, 8(r1)
/* 8094987C  EC 60 20 28 */	fsubs f3, f0, f4
/* 80949880  6C E0 80 00 */	xoris r0, r7, 0x8000
/* 80949884  90 01 00 14 */	stw r0, 0x14(r1)
/* 80949888  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8094988C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80949890  EC 80 20 28 */	fsubs f4, f0, f4
/* 80949894  4B 6C 75 DC */	b setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff
/* 80949898  38 00 00 00 */	li r0, 0
/* 8094989C  B0 1F 09 1E */	sth r0, 0x91e(r31)
/* 809498A0  38 60 00 01 */	li r3, 1
/* 809498A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 809498A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 809498AC  7C 08 03 A6 */	mtlr r0
/* 809498B0  38 21 00 20 */	addi r1, r1, 0x20
/* 809498B4  4E 80 00 20 */	blr 
