lbl_80772B0C:
/* 80772B0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80772B10  7C 08 02 A6 */	mflr r0
/* 80772B14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80772B18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80772B1C  7C 7F 1B 78 */	mr r31, r3
/* 80772B20  4B 8A 61 C0 */	b fopAc_IsActor__FPv
/* 80772B24  2C 03 00 00 */	cmpwi r3, 0
/* 80772B28  41 82 00 58 */	beq lbl_80772B80
/* 80772B2C  A8 1F 00 08 */	lha r0, 8(r31)
/* 80772B30  2C 00 01 D6 */	cmpwi r0, 0x1d6
/* 80772B34  40 82 00 4C */	bne lbl_80772B80
/* 80772B38  A8 1F 0A 42 */	lha r0, 0xa42(r31)
/* 80772B3C  2C 00 00 1A */	cmpwi r0, 0x1a
/* 80772B40  40 82 00 40 */	bne lbl_80772B80
/* 80772B44  A8 1F 05 B4 */	lha r0, 0x5b4(r31)
/* 80772B48  2C 00 00 0A */	cmpwi r0, 0xa
/* 80772B4C  40 80 00 34 */	bge lbl_80772B80
/* 80772B50  3C 60 80 78 */	lis r3, lit_4050@ha
/* 80772B54  C0 23 9E 54 */	lfs f1, lit_4050@l(r3)
/* 80772B58  4B AF 4D FC */	b cM_rndF__Ff
/* 80772B5C  3C 60 80 78 */	lis r3, lit_4050@ha
/* 80772B60  C0 03 9E 54 */	lfs f0, lit_4050@l(r3)
/* 80772B64  EC 00 08 2A */	fadds f0, f0, f1
/* 80772B68  FC 00 00 1E */	fctiwz f0, f0
/* 80772B6C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80772B70  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80772B74  B0 1F 0A 60 */	sth r0, 0xa60(r31)
/* 80772B78  38 00 00 0A */	li r0, 0xa
/* 80772B7C  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
lbl_80772B80:
/* 80772B80  38 60 00 00 */	li r3, 0
/* 80772B84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80772B88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80772B8C  7C 08 03 A6 */	mtlr r0
/* 80772B90  38 21 00 20 */	addi r1, r1, 0x20
/* 80772B94  4E 80 00 20 */	blr 
