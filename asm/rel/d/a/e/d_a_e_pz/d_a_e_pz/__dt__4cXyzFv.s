lbl_80761108:
/* 80761108  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8076110C  7C 08 02 A6 */	mflr r0
/* 80761110  90 01 00 14 */	stw r0, 0x14(r1)
/* 80761114  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80761118  7C 7F 1B 79 */	or. r31, r3, r3
/* 8076111C  41 82 00 10 */	beq lbl_8076112C
/* 80761120  7C 80 07 35 */	extsh. r0, r4
/* 80761124  40 81 00 08 */	ble lbl_8076112C
/* 80761128  4B B6 DC 14 */	b __dl__FPv
lbl_8076112C:
/* 8076112C  7F E3 FB 78 */	mr r3, r31
/* 80761130  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80761134  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80761138  7C 08 03 A6 */	mtlr r0
/* 8076113C  38 21 00 10 */	addi r1, r1, 0x10
/* 80761140  4E 80 00 20 */	blr 
