lbl_80603320:
/* 80603320  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80603324  7C 08 02 A6 */	mflr r0
/* 80603328  90 01 00 24 */	stw r0, 0x24(r1)
/* 8060332C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80603330  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80603334  7C 7E 1B 78 */	mr r30, r3
/* 80603338  3C 80 80 60 */	lis r4, lit_3646@ha
/* 8060333C  3B E4 40 44 */	addi r31, r4, lit_3646@l
/* 80603340  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80603344  D0 03 05 2C */	stfs f0, 0x52c(r3)
/* 80603348  A8 03 06 6C */	lha r0, 0x66c(r3)
/* 8060334C  2C 00 00 01 */	cmpwi r0, 1
/* 80603350  41 82 00 54 */	beq lbl_806033A4
/* 80603354  40 80 00 84 */	bge lbl_806033D8
/* 80603358  2C 00 00 00 */	cmpwi r0, 0
/* 8060335C  40 80 00 08 */	bge lbl_80603364
/* 80603360  48 00 00 78 */	b lbl_806033D8
lbl_80603364:
/* 80603364  38 80 00 0F */	li r4, 0xf
/* 80603368  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8060336C  38 A0 00 02 */	li r5, 2
/* 80603370  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80603374  4B FF FE FD */	bl anm_init__FP10b_go_classifUcf
/* 80603378  38 00 00 01 */	li r0, 1
/* 8060337C  B0 1E 06 6C */	sth r0, 0x66c(r30)
/* 80603380  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80603384  4B C6 45 D0 */	b cM_rndF__Ff
/* 80603388  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8060338C  EC 00 08 2A */	fadds f0, f0, f1
/* 80603390  FC 00 00 1E */	fctiwz f0, f0
/* 80603394  D8 01 00 08 */	stfd f0, 8(r1)
/* 80603398  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8060339C  B0 1E 06 88 */	sth r0, 0x688(r30)
/* 806033A0  48 00 00 38 */	b lbl_806033D8
lbl_806033A4:
/* 806033A4  A8 1E 06 88 */	lha r0, 0x688(r30)
/* 806033A8  2C 00 00 00 */	cmpwi r0, 0
/* 806033AC  41 82 00 1C */	beq lbl_806033C8
/* 806033B0  C0 3E 06 80 */	lfs f1, 0x680(r30)
/* 806033B4  3C 60 80 60 */	lis r3, l_HIO@ha
/* 806033B8  38 63 41 50 */	addi r3, r3, l_HIO@l
/* 806033BC  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 806033C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806033C4  40 80 00 14 */	bge lbl_806033D8
lbl_806033C8:
/* 806033C8  38 00 00 01 */	li r0, 1
/* 806033CC  B0 1E 06 6A */	sth r0, 0x66a(r30)
/* 806033D0  38 00 00 00 */	li r0, 0
/* 806033D4  B0 1E 06 6C */	sth r0, 0x66c(r30)
lbl_806033D8:
/* 806033D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806033DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806033E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806033E4  7C 08 03 A6 */	mtlr r0
/* 806033E8  38 21 00 20 */	addi r1, r1, 0x20
/* 806033EC  4E 80 00 20 */	blr 
