lbl_8061A564:
/* 8061A564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8061A568  7C 08 02 A6 */	mflr r0
/* 8061A56C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8061A570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8061A574  7C 7F 1B 79 */	or. r31, r3, r3
/* 8061A578  41 82 00 1C */	beq lbl_8061A594
/* 8061A57C  3C A0 80 62 */	lis r5, __vt__8cM3dGSph@ha
/* 8061A580  38 05 B4 88 */	addi r0, r5, __vt__8cM3dGSph@l
/* 8061A584  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8061A588  7C 80 07 35 */	extsh. r0, r4
/* 8061A58C  40 81 00 08 */	ble lbl_8061A594
/* 8061A590  4B CB 47 AC */	b __dl__FPv
lbl_8061A594:
/* 8061A594  7F E3 FB 78 */	mr r3, r31
/* 8061A598  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8061A59C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8061A5A0  7C 08 03 A6 */	mtlr r0
/* 8061A5A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8061A5A8  4E 80 00 20 */	blr 
