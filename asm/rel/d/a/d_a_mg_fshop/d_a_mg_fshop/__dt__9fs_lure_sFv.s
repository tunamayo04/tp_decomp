lbl_8086FFDC:
/* 8086FFDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8086FFE0  7C 08 02 A6 */	mflr r0
/* 8086FFE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8086FFE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8086FFEC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8086FFF0  41 82 00 10 */	beq lbl_80870000
/* 8086FFF4  7C 80 07 35 */	extsh. r0, r4
/* 8086FFF8  40 81 00 08 */	ble lbl_80870000
/* 8086FFFC  4B A5 ED 40 */	b __dl__FPv
lbl_80870000:
/* 80870000  7F E3 FB 78 */	mr r3, r31
/* 80870004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80870008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8087000C  7C 08 03 A6 */	mtlr r0
/* 80870010  38 21 00 10 */	addi r1, r1, 0x10
/* 80870014  4E 80 00 20 */	blr 
