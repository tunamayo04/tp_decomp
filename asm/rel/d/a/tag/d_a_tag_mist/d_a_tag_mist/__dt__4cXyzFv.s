lbl_8048F518:
/* 8048F518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8048F51C  7C 08 02 A6 */	mflr r0
/* 8048F520  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048F524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8048F528  7C 7F 1B 79 */	or. r31, r3, r3
/* 8048F52C  41 82 00 10 */	beq lbl_8048F53C
/* 8048F530  7C 80 07 35 */	extsh. r0, r4
/* 8048F534  40 81 00 08 */	ble lbl_8048F53C
/* 8048F538  4B E3 F8 04 */	b __dl__FPv
lbl_8048F53C:
/* 8048F53C  7F E3 FB 78 */	mr r3, r31
/* 8048F540  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8048F544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8048F548  7C 08 03 A6 */	mtlr r0
/* 8048F54C  38 21 00 10 */	addi r1, r1, 0x10
/* 8048F550  4E 80 00 20 */	blr 
