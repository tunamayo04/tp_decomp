lbl_8018E130:
/* 8018E130  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8018E134  7C 08 02 A6 */	mflr r0
/* 8018E138  90 01 00 24 */	stw r0, 0x24(r1)
/* 8018E13C  39 61 00 20 */	addi r11, r1, 0x20
/* 8018E140  48 1D 40 9D */	bl _savegpr_29
/* 8018E144  7C 7D 1B 78 */	mr r29, r3
/* 8018E148  7C 9E 23 78 */	mr r30, r4
/* 8018E14C  7C BF 2B 78 */	mr r31, r5
/* 8018E150  80 63 01 2C */	lwz r3, 0x12c(r3)
/* 8018E154  80 9D 00 90 */	lwz r4, 0x90(r29)
/* 8018E158  81 83 00 00 */	lwz r12, 0(r3)
/* 8018E15C  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8018E160  7D 89 03 A6 */	mtctr r12
/* 8018E164  4E 80 04 21 */	bctrl 
/* 8018E168  93 DD 01 30 */	stw r30, 0x130(r29)
/* 8018E16C  93 FD 01 34 */	stw r31, 0x134(r29)
/* 8018E170  80 1D 01 30 */	lwz r0, 0x130(r29)
/* 8018E174  C8 22 9F 38 */	lfd f1, lit_4342(r2)
/* 8018E178  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8018E17C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018E180  3C 00 43 30 */	lis r0, 0x4330
/* 8018E184  90 01 00 08 */	stw r0, 8(r1)
/* 8018E188  C8 01 00 08 */	lfd f0, 8(r1)
/* 8018E18C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8018E190  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 8018E194  D0 03 00 08 */	stfs f0, 8(r3)
/* 8018E198  80 7D 01 2C */	lwz r3, 0x12c(r29)
/* 8018E19C  48 16 9E 31 */	bl animationTransform__7J2DPaneFv
/* 8018E1A0  38 00 00 01 */	li r0, 1
/* 8018E1A4  98 1D 01 4B */	stb r0, 0x14b(r29)
/* 8018E1A8  39 61 00 20 */	addi r11, r1, 0x20
/* 8018E1AC  48 1D 40 7D */	bl _restgpr_29
/* 8018E1B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8018E1B4  7C 08 03 A6 */	mtlr r0
/* 8018E1B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8018E1BC  4E 80 00 20 */	blr 
