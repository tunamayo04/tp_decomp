lbl_80A9CB84:
/* 80A9CB84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A9CB88  7C 08 02 A6 */	mflr r0
/* 80A9CB8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9CB90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A9CB94  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A9CB98  41 82 00 10 */	beq lbl_80A9CBA8
/* 80A9CB9C  7C 80 07 35 */	extsh. r0, r4
/* 80A9CBA0  40 81 00 08 */	ble lbl_80A9CBA8
/* 80A9CBA4  4B 83 21 98 */	b __dl__FPv
lbl_80A9CBA8:
/* 80A9CBA8  7F E3 FB 78 */	mr r3, r31
/* 80A9CBAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A9CBB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A9CBB4  7C 08 03 A6 */	mtlr r0
/* 80A9CBB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A9CBBC  4E 80 00 20 */	blr 
