lbl_80972088:
/* 80972088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8097208C  7C 08 02 A6 */	mflr r0
/* 80972090  90 01 00 14 */	stw r0, 0x14(r1)
/* 80972094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80972098  7C 7F 1B 79 */	or. r31, r3, r3
/* 8097209C  41 82 00 30 */	beq lbl_809720CC
/* 809720A0  3C 60 80 97 */	lis r3, __vt__10dCcD_GStts@ha
/* 809720A4  38 03 33 18 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 809720A8  90 1F 00 00 */	stw r0, 0(r31)
/* 809720AC  41 82 00 10 */	beq lbl_809720BC
/* 809720B0  3C 60 80 97 */	lis r3, __vt__10cCcD_GStts@ha
/* 809720B4  38 03 33 0C */	addi r0, r3, __vt__10cCcD_GStts@l
/* 809720B8  90 1F 00 00 */	stw r0, 0(r31)
lbl_809720BC:
/* 809720BC  7C 80 07 35 */	extsh. r0, r4
/* 809720C0  40 81 00 0C */	ble lbl_809720CC
/* 809720C4  7F E3 FB 78 */	mr r3, r31
/* 809720C8  4B 95 CC 74 */	b __dl__FPv
lbl_809720CC:
/* 809720CC  7F E3 FB 78 */	mr r3, r31
/* 809720D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809720D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809720D8  7C 08 03 A6 */	mtlr r0
/* 809720DC  38 21 00 10 */	addi r1, r1, 0x10
/* 809720E0  4E 80 00 20 */	blr 
