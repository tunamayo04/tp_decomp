lbl_80690798:
/* 80690798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069079C  7C 08 02 A6 */	mflr r0
/* 806907A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806907A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806907A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 806907AC  41 82 00 30 */	beq lbl_806907DC
/* 806907B0  3C 60 80 69 */	lis r3, __vt__10dCcD_GStts@ha
/* 806907B4  38 03 10 30 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 806907B8  90 1F 00 00 */	stw r0, 0(r31)
/* 806907BC  41 82 00 10 */	beq lbl_806907CC
/* 806907C0  3C 60 80 69 */	lis r3, __vt__10cCcD_GStts@ha
/* 806907C4  38 03 10 24 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 806907C8  90 1F 00 00 */	stw r0, 0(r31)
lbl_806907CC:
/* 806907CC  7C 80 07 35 */	extsh. r0, r4
/* 806907D0  40 81 00 0C */	ble lbl_806907DC
/* 806907D4  7F E3 FB 78 */	mr r3, r31
/* 806907D8  4B C3 E5 64 */	b __dl__FPv
lbl_806907DC:
/* 806907DC  7F E3 FB 78 */	mr r3, r31
/* 806907E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806907E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806907E8  7C 08 03 A6 */	mtlr r0
/* 806907EC  38 21 00 10 */	addi r1, r1, 0x10
/* 806907F0  4E 80 00 20 */	blr 
