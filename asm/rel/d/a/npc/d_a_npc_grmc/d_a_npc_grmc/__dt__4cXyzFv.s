lbl_809D8F98:
/* 809D8F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809D8F9C  7C 08 02 A6 */	mflr r0
/* 809D8FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809D8FA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809D8FA8  7C 7F 1B 79 */	or. r31, r3, r3
/* 809D8FAC  41 82 00 10 */	beq lbl_809D8FBC
/* 809D8FB0  7C 80 07 35 */	extsh. r0, r4
/* 809D8FB4  40 81 00 08 */	ble lbl_809D8FBC
/* 809D8FB8  4B 8F 5D 84 */	b __dl__FPv
lbl_809D8FBC:
/* 809D8FBC  7F E3 FB 78 */	mr r3, r31
/* 809D8FC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809D8FC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809D8FC8  7C 08 03 A6 */	mtlr r0
/* 809D8FCC  38 21 00 10 */	addi r1, r1, 0x10
/* 809D8FD0  4E 80 00 20 */	blr 
