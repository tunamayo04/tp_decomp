lbl_805757C8:
/* 805757C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805757CC  7C 08 02 A6 */	mflr r0
/* 805757D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805757D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805757D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 805757DC  41 82 00 10 */	beq lbl_805757EC
/* 805757E0  7C 80 07 35 */	extsh. r0, r4
/* 805757E4  40 81 00 08 */	ble lbl_805757EC
/* 805757E8  4B D5 95 54 */	b __dl__FPv
lbl_805757EC:
/* 805757EC  7F E3 FB 78 */	mr r3, r31
/* 805757F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805757F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805757F8  7C 08 03 A6 */	mtlr r0
/* 805757FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80575800  4E 80 00 20 */	blr 
