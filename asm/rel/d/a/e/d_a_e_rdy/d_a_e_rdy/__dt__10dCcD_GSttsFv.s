lbl_807796C0:
/* 807796C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807796C4  7C 08 02 A6 */	mflr r0
/* 807796C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 807796CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807796D0  7C 7F 1B 79 */	or. r31, r3, r3
/* 807796D4  41 82 00 30 */	beq lbl_80779704
/* 807796D8  3C 60 80 78 */	lis r3, __vt__10dCcD_GStts@ha
/* 807796DC  38 03 A7 A4 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 807796E0  90 1F 00 00 */	stw r0, 0(r31)
/* 807796E4  41 82 00 10 */	beq lbl_807796F4
/* 807796E8  3C 60 80 78 */	lis r3, __vt__10cCcD_GStts@ha
/* 807796EC  38 03 A7 98 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 807796F0  90 1F 00 00 */	stw r0, 0(r31)
lbl_807796F4:
/* 807796F4  7C 80 07 35 */	extsh. r0, r4
/* 807796F8  40 81 00 0C */	ble lbl_80779704
/* 807796FC  7F E3 FB 78 */	mr r3, r31
/* 80779700  4B B5 56 3C */	b __dl__FPv
lbl_80779704:
/* 80779704  7F E3 FB 78 */	mr r3, r31
/* 80779708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8077970C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80779710  7C 08 03 A6 */	mtlr r0
/* 80779714  38 21 00 10 */	addi r1, r1, 0x10
/* 80779718  4E 80 00 20 */	blr 
