lbl_80D10618:
/* 80D10618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D1061C  7C 08 02 A6 */	mflr r0
/* 80D10620  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D10624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D10628  7C 7F 1B 78 */	mr r31, r3
/* 80D1062C  A0 03 0D DE */	lhz r0, 0xdde(r3)
/* 80D10630  2C 00 00 01 */	cmpwi r0, 1
/* 80D10634  41 82 00 80 */	beq lbl_80D106B4
/* 80D10638  40 80 00 7C */	bge lbl_80D106B4
/* 80D1063C  2C 00 00 00 */	cmpwi r0, 0
/* 80D10640  40 80 00 0C */	bge lbl_80D1064C
/* 80D10644  48 00 00 70 */	b lbl_80D106B4
/* 80D10648  48 00 00 6C */	b lbl_80D106B4
lbl_80D1064C:
/* 80D1064C  38 80 00 01 */	li r4, 1
/* 80D10650  3C A0 80 D1 */	lis r5, lit_4324@ha
/* 80D10654  C0 25 27 D4 */	lfs f1, lit_4324@l(r5)
/* 80D10658  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80D1065C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80D10660  7D 89 03 A6 */	mtctr r12
/* 80D10664  4E 80 04 21 */	bctrl 
/* 80D10668  7F E3 FB 78 */	mr r3, r31
/* 80D1066C  38 80 00 00 */	li r4, 0
/* 80D10670  3C A0 80 D1 */	lis r5, lit_4324@ha
/* 80D10674  C0 25 27 D4 */	lfs f1, lit_4324@l(r5)
/* 80D10678  38 A0 00 00 */	li r5, 0
/* 80D1067C  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 80D10680  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80D10684  7D 89 03 A6 */	mtctr r12
/* 80D10688  4E 80 04 21 */	bctrl 
/* 80D1068C  A8 1F 0D DC */	lha r0, 0xddc(r31)
/* 80D10690  2C 00 00 02 */	cmpwi r0, 2
/* 80D10694  41 82 00 0C */	beq lbl_80D106A0
/* 80D10698  38 00 00 02 */	li r0, 2
/* 80D1069C  B0 1F 0D DC */	sth r0, 0xddc(r31)
lbl_80D106A0:
/* 80D106A0  3C 60 80 D1 */	lis r3, lit_4599@ha
/* 80D106A4  C0 03 27 F0 */	lfs f0, lit_4599@l(r3)
/* 80D106A8  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 80D106AC  38 00 00 02 */	li r0, 2
/* 80D106B0  B0 1F 0D DE */	sth r0, 0xdde(r31)
lbl_80D106B4:
/* 80D106B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D106B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D106BC  7C 08 03 A6 */	mtlr r0
/* 80D106C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80D106C4  4E 80 00 20 */	blr 
