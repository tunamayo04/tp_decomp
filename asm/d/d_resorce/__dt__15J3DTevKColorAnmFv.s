lbl_8003B150:
/* 8003B150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003B154  7C 08 02 A6 */	mflr r0
/* 8003B158  90 01 00 14 */	stw r0, 0x14(r1)
/* 8003B15C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8003B160  7C 7F 1B 79 */	or. r31, r3, r3
/* 8003B164  41 82 00 10 */	beq lbl_8003B174
/* 8003B168  7C 80 07 35 */	extsh. r0, r4
/* 8003B16C  40 81 00 08 */	ble lbl_8003B174
/* 8003B170  48 29 3B CD */	bl __dl__FPv
lbl_8003B174:
/* 8003B174  7F E3 FB 78 */	mr r3, r31
/* 8003B178  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8003B17C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8003B180  7C 08 03 A6 */	mtlr r0
/* 8003B184  38 21 00 10 */	addi r1, r1, 0x10
/* 8003B188  4E 80 00 20 */	blr 
