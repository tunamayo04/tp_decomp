lbl_8070FF98:
/* 8070FF98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8070FF9C  7C 08 02 A6 */	mflr r0
/* 8070FFA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8070FFA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8070FFA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8070FFAC  7C 7F 1B 78 */	mr r31, r3
/* 8070FFB0  3C 60 80 71 */	lis r3, lit_3828@ha
/* 8070FFB4  3B C3 39 74 */	addi r30, r3, lit_3828@l
/* 8070FFB8  A8 9F 10 A2 */	lha r4, 0x10a2(r31)
/* 8070FFBC  A8 7F 04 E6 */	lha r3, 0x4e6(r31)
/* 8070FFC0  38 03 80 00 */	addi r0, r3, -32768
/* 8070FFC4  7C 04 00 50 */	subf r0, r4, r0
/* 8070FFC8  B0 1F 07 30 */	sth r0, 0x730(r31)
/* 8070FFCC  C0 1E 00 BC */	lfs f0, 0xbc(r30)
/* 8070FFD0  D0 1F 07 2C */	stfs f0, 0x72c(r31)
/* 8070FFD4  38 00 00 15 */	li r0, 0x15
/* 8070FFD8  B0 1F 06 AE */	sth r0, 0x6ae(r31)
/* 8070FFDC  38 00 00 00 */	li r0, 0
/* 8070FFE0  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 8070FFE4  A8 1F 10 A2 */	lha r0, 0x10a2(r31)
/* 8070FFE8  B0 1F 07 06 */	sth r0, 0x706(r31)
/* 8070FFEC  C0 3E 00 60 */	lfs f1, 0x60(r30)
/* 8070FFF0  4B B5 79 64 */	b cM_rndF__Ff
/* 8070FFF4  C0 1E 00 E8 */	lfs f0, 0xe8(r30)
/* 8070FFF8  EC 00 08 2A */	fadds f0, f0, f1
/* 8070FFFC  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 80710000  C0 1E 01 0C */	lfs f0, 0x10c(r30)
/* 80710004  D0 1F 06 E4 */	stfs f0, 0x6e4(r31)
/* 80710008  38 00 00 32 */	li r0, 0x32
/* 8071000C  B0 1F 08 08 */	sth r0, 0x808(r31)
/* 80710010  80 7F 10 A8 */	lwz r3, 0x10a8(r31)
/* 80710014  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 80710018  41 82 00 28 */	beq lbl_80710040
/* 8071001C  C0 3E 01 1C */	lfs f1, 0x11c(r30)
/* 80710020  4B B5 79 6C */	b cM_rndFX__Ff
/* 80710024  C0 1E 01 18 */	lfs f0, 0x118(r30)
/* 80710028  EC 00 08 2A */	fadds f0, f0, f1
/* 8071002C  FC 00 00 1E */	fctiwz f0, f0
/* 80710030  D8 01 00 08 */	stfd f0, 8(r1)
/* 80710034  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80710038  B0 1F 06 EE */	sth r0, 0x6ee(r31)
/* 8071003C  48 00 00 4C */	b lbl_80710088
lbl_80710040:
/* 80710040  54 60 05 29 */	rlwinm. r0, r3, 0, 0x14, 0x14
/* 80710044  41 82 00 2C */	beq lbl_80710070
/* 80710048  C0 3E 01 1C */	lfs f1, 0x11c(r30)
/* 8071004C  4B B5 79 40 */	b cM_rndFX__Ff
/* 80710050  C0 1E 01 18 */	lfs f0, 0x118(r30)
/* 80710054  EC 00 08 2A */	fadds f0, f0, f1
/* 80710058  FC 00 00 50 */	fneg f0, f0
/* 8071005C  FC 00 00 1E */	fctiwz f0, f0
/* 80710060  D8 01 00 08 */	stfd f0, 8(r1)
/* 80710064  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80710068  B0 1F 06 EE */	sth r0, 0x6ee(r31)
/* 8071006C  48 00 00 1C */	b lbl_80710088
lbl_80710070:
/* 80710070  C0 3E 01 20 */	lfs f1, 0x120(r30)
/* 80710074  4B B5 79 18 */	b cM_rndFX__Ff
/* 80710078  FC 00 08 1E */	fctiwz f0, f1
/* 8071007C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80710080  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80710084  B0 1F 06 EE */	sth r0, 0x6ee(r31)
lbl_80710088:
/* 80710088  38 00 00 00 */	li r0, 0
/* 8071008C  98 1F 06 F0 */	stb r0, 0x6f0(r31)
/* 80710090  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80710094  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80710098  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8071009C  7C 08 03 A6 */	mtlr r0
/* 807100A0  38 21 00 20 */	addi r1, r1, 0x20
/* 807100A4  4E 80 00 20 */	blr 
