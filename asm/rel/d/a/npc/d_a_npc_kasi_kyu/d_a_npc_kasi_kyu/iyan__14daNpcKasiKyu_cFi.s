lbl_80A246FC:
/* 80A246FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A24700  7C 08 02 A6 */	mflr r0
/* 80A24704  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A24708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A2470C  7C 7F 1B 78 */	mr r31, r3
/* 80A24710  A8 03 14 04 */	lha r0, 0x1404(r3)
/* 80A24714  2C 00 00 00 */	cmpwi r0, 0
/* 80A24718  41 82 00 10 */	beq lbl_80A24728
/* 80A2471C  40 80 00 40 */	bge lbl_80A2475C
/* 80A24720  48 00 00 3C */	b lbl_80A2475C
/* 80A24724  48 00 00 38 */	b lbl_80A2475C
lbl_80A24728:
/* 80A24728  38 80 00 01 */	li r4, 1
/* 80A2472C  3C A0 80 A2 */	lis r5, lit_4249@ha
/* 80A24730  C0 25 59 44 */	lfs f1, lit_4249@l(r5)
/* 80A24734  38 A0 00 00 */	li r5, 0
/* 80A24738  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80A2473C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80A24740  7D 89 03 A6 */	mtctr r12
/* 80A24744  4E 80 04 21 */	bctrl 
/* 80A24748  3C 60 80 A2 */	lis r3, lit_4449@ha
/* 80A2474C  C0 03 59 5C */	lfs f0, lit_4449@l(r3)
/* 80A24750  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 80A24754  38 00 00 01 */	li r0, 1
/* 80A24758  B0 1F 14 04 */	sth r0, 0x1404(r31)
lbl_80A2475C:
/* 80A2475C  38 60 00 01 */	li r3, 1
/* 80A24760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A24764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A24768  7C 08 03 A6 */	mtlr r0
/* 80A2476C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A24770  4E 80 00 20 */	blr 
