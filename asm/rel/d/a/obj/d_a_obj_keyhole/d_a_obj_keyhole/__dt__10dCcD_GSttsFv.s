lbl_80C43644:
/* 80C43644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C43648  7C 08 02 A6 */	mflr r0
/* 80C4364C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C43650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C43654  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C43658  41 82 00 30 */	beq lbl_80C43688
/* 80C4365C  3C 60 80 C4 */	lis r3, __vt__10dCcD_GStts@ha
/* 80C43660  38 03 3C 70 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80C43664  90 1F 00 00 */	stw r0, 0(r31)
/* 80C43668  41 82 00 10 */	beq lbl_80C43678
/* 80C4366C  3C 60 80 C4 */	lis r3, __vt__10cCcD_GStts@ha
/* 80C43670  38 03 3C 64 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80C43674  90 1F 00 00 */	stw r0, 0(r31)
lbl_80C43678:
/* 80C43678  7C 80 07 35 */	extsh. r0, r4
/* 80C4367C  40 81 00 0C */	ble lbl_80C43688
/* 80C43680  7F E3 FB 78 */	mr r3, r31
/* 80C43684  4B 68 B6 B8 */	b __dl__FPv
lbl_80C43688:
/* 80C43688  7F E3 FB 78 */	mr r3, r31
/* 80C4368C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C43690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C43694  7C 08 03 A6 */	mtlr r0
/* 80C43698  38 21 00 10 */	addi r1, r1, 0x10
/* 80C4369C  4E 80 00 20 */	blr 
