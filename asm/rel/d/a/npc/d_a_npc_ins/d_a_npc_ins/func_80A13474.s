lbl_80A13474:
/* 80A13474  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80A13478  7C 08 02 A6 */	mflr r0
/* 80A1347C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80A13480  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80A13484  7C 7F 1B 78 */	mr r31, r3
/* 80A13488  3C 60 80 A1 */	lis r3, lit_4998@ha
/* 80A1348C  C8 23 41 24 */	lfd f1, lit_4998@l(r3)
/* 80A13490  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80A13494  90 01 00 0C */	stw r0, 0xc(r1)
/* 80A13498  3C 00 43 30 */	lis r0, 0x4330
/* 80A1349C  90 01 00 08 */	stw r0, 8(r1)
/* 80A134A0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80A134A4  EC 20 08 28 */	fsubs f1, f0, f1
/* 80A134A8  4B 85 44 AC */	b cM_rndF__Ff
/* 80A134AC  3C 60 80 A1 */	lis r3, lit_4998@ha
/* 80A134B0  C8 43 41 24 */	lfd f2, lit_4998@l(r3)
/* 80A134B4  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 80A134B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A134BC  3C 00 43 30 */	lis r0, 0x4330
/* 80A134C0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80A134C4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80A134C8  EC 00 10 28 */	fsubs f0, f0, f2
/* 80A134CC  EC 00 08 2A */	fadds f0, f0, f1
/* 80A134D0  FC 00 00 1E */	fctiwz f0, f0
/* 80A134D4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80A134D8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80A134DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80A134E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80A134E4  7C 08 03 A6 */	mtlr r0
/* 80A134E8  38 21 00 30 */	addi r1, r1, 0x30
/* 80A134EC  4E 80 00 20 */	blr 
