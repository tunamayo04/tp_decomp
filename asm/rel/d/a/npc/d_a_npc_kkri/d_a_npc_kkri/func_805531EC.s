lbl_805531EC:
/* 805531EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805531F0  7C 08 02 A6 */	mflr r0
/* 805531F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 805531F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 805531FC  7C 7F 1B 78 */	mr r31, r3
/* 80553200  3C 60 80 55 */	lis r3, lit_4799@ha
/* 80553204  C8 23 35 70 */	lfd f1, lit_4799@l(r3)
/* 80553208  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 8055320C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80553210  3C 00 43 30 */	lis r0, 0x4330
/* 80553214  90 01 00 08 */	stw r0, 8(r1)
/* 80553218  C8 01 00 08 */	lfd f0, 8(r1)
/* 8055321C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80553220  4B D1 47 34 */	b cM_rndF__Ff
/* 80553224  3C 60 80 55 */	lis r3, lit_4799@ha
/* 80553228  C8 43 35 70 */	lfd f2, lit_4799@l(r3)
/* 8055322C  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 80553230  90 01 00 14 */	stw r0, 0x14(r1)
/* 80553234  3C 00 43 30 */	lis r0, 0x4330
/* 80553238  90 01 00 10 */	stw r0, 0x10(r1)
/* 8055323C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80553240  EC 00 10 28 */	fsubs f0, f0, f2
/* 80553244  EC 00 08 2A */	fadds f0, f0, f1
/* 80553248  FC 00 00 1E */	fctiwz f0, f0
/* 8055324C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80553250  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80553254  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80553258  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8055325C  7C 08 03 A6 */	mtlr r0
/* 80553260  38 21 00 30 */	addi r1, r1, 0x30
/* 80553264  4E 80 00 20 */	blr 
