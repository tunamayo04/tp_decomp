lbl_80AEA158:
/* 80AEA158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AEA15C  7C 08 02 A6 */	mflr r0
/* 80AEA160  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AEA164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AEA168  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AEA16C  41 82 00 30 */	beq lbl_80AEA19C
/* 80AEA170  3C 60 80 AF */	lis r3, __vt__10dCcD_GStts@ha
/* 80AEA174  38 03 A6 DC */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80AEA178  90 1F 00 00 */	stw r0, 0(r31)
/* 80AEA17C  41 82 00 10 */	beq lbl_80AEA18C
/* 80AEA180  3C 60 80 AF */	lis r3, __vt__10cCcD_GStts@ha
/* 80AEA184  38 03 A6 D0 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80AEA188  90 1F 00 00 */	stw r0, 0(r31)
lbl_80AEA18C:
/* 80AEA18C  7C 80 07 35 */	extsh. r0, r4
/* 80AEA190  40 81 00 0C */	ble lbl_80AEA19C
/* 80AEA194  7F E3 FB 78 */	mr r3, r31
/* 80AEA198  4B 7E 4B A4 */	b __dl__FPv
lbl_80AEA19C:
/* 80AEA19C  7F E3 FB 78 */	mr r3, r31
/* 80AEA1A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AEA1A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AEA1A8  7C 08 03 A6 */	mtlr r0
/* 80AEA1AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80AEA1B0  4E 80 00 20 */	blr 
