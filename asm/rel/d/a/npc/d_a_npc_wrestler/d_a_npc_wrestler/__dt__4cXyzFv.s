lbl_80B40FCC:
/* 80B40FCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B40FD0  7C 08 02 A6 */	mflr r0
/* 80B40FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B40FD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B40FDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B40FE0  41 82 00 10 */	beq lbl_80B40FF0
/* 80B40FE4  7C 80 07 35 */	extsh. r0, r4
/* 80B40FE8  40 81 00 08 */	ble lbl_80B40FF0
/* 80B40FEC  4B 78 DD 50 */	b __dl__FPv
lbl_80B40FF0:
/* 80B40FF0  7F E3 FB 78 */	mr r3, r31
/* 80B40FF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B40FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B40FFC  7C 08 03 A6 */	mtlr r0
/* 80B41000  38 21 00 10 */	addi r1, r1, 0x10
/* 80B41004  4E 80 00 20 */	blr 
