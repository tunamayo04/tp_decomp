lbl_80B4BB7C:
/* 80B4BB7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B4BB80  7C 08 02 A6 */	mflr r0
/* 80B4BB84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B4BB88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B4BB8C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B4BB90  41 82 00 1C */	beq lbl_80B4BBAC
/* 80B4BB94  3C A0 80 B5 */	lis r5, __vt__10cCcD_GStts@ha
/* 80B4BB98  38 05 D0 BC */	addi r0, r5, __vt__10cCcD_GStts@l
/* 80B4BB9C  90 1F 00 00 */	stw r0, 0(r31)
/* 80B4BBA0  7C 80 07 35 */	extsh. r0, r4
/* 80B4BBA4  40 81 00 08 */	ble lbl_80B4BBAC
/* 80B4BBA8  4B 78 31 94 */	b __dl__FPv
lbl_80B4BBAC:
/* 80B4BBAC  7F E3 FB 78 */	mr r3, r31
/* 80B4BBB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B4BBB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B4BBB8  7C 08 03 A6 */	mtlr r0
/* 80B4BBBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80B4BBC0  4E 80 00 20 */	blr 
