lbl_809F7D44:
/* 809F7D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809F7D48  7C 08 02 A6 */	mflr r0
/* 809F7D4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 809F7D50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809F7D54  7C 7F 1B 79 */	or. r31, r3, r3
/* 809F7D58  41 82 00 10 */	beq lbl_809F7D68
/* 809F7D5C  7C 80 07 35 */	extsh. r0, r4
/* 809F7D60  40 81 00 08 */	ble lbl_809F7D68
/* 809F7D64  4B 8D 6F D8 */	b __dl__FPv
lbl_809F7D68:
/* 809F7D68  7F E3 FB 78 */	mr r3, r31
/* 809F7D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809F7D70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809F7D74  7C 08 03 A6 */	mtlr r0
/* 809F7D78  38 21 00 10 */	addi r1, r1, 0x10
/* 809F7D7C  4E 80 00 20 */	blr 
