lbl_802674E8:
/* 802674E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802674EC  7C 08 02 A6 */	mflr r0
/* 802674F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802674F4  7C 87 23 78 */	mr r7, r4
/* 802674F8  A8 04 00 00 */	lha r0, 0(r4)
/* 802674FC  C8 42 B6 A0 */	lfd f2, lit_151(r2)
/* 80267500  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80267504  90 01 00 0C */	stw r0, 0xc(r1)
/* 80267508  3C C0 43 30 */	lis r6, 0x4330
/* 8026750C  90 C1 00 08 */	stw r6, 8(r1)
/* 80267510  C8 01 00 08 */	lfd f0, 8(r1)
/* 80267514  EC 00 10 28 */	fsubs f0, f0, f2
/* 80267518  EC 00 00 72 */	fmuls f0, f0, f1
/* 8026751C  FC 00 00 1E */	fctiwz f0, f0
/* 80267520  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80267524  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80267528  A8 07 00 02 */	lha r0, 2(r7)
/* 8026752C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80267530  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80267534  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80267538  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8026753C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80267540  EC 00 00 72 */	fmuls f0, f0, f1
/* 80267544  FC 00 00 1E */	fctiwz f0, f0
/* 80267548  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8026754C  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 80267550  A8 07 00 04 */	lha r0, 4(r7)
/* 80267554  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80267558  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8026755C  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80267560  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80267564  EC 00 10 28 */	fsubs f0, f0, f2
/* 80267568  EC 00 00 72 */	fmuls f0, f0, f1
/* 8026756C  FC 00 00 1E */	fctiwz f0, f0
/* 80267570  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80267574  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 80267578  4B FF FE 7D */	bl __ct__5csXyzFsss
/* 8026757C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80267580  7C 08 03 A6 */	mtlr r0
/* 80267584  38 21 00 40 */	addi r1, r1, 0x40
/* 80267588  4E 80 00 20 */	blr 
