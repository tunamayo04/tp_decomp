lbl_80552158:
/* 80552158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8055215C  7C 08 02 A6 */	mflr r0
/* 80552160  90 01 00 14 */	stw r0, 0x14(r1)
/* 80552164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80552168  7C 7F 1B 79 */	or. r31, r3, r3
/* 8055216C  41 82 00 1C */	beq lbl_80552188
/* 80552170  3C A0 80 55 */	lis r5, __vt__10cCcD_GStts@ha
/* 80552174  38 05 3D A8 */	addi r0, r5, __vt__10cCcD_GStts@l
/* 80552178  90 1F 00 00 */	stw r0, 0(r31)
/* 8055217C  7C 80 07 35 */	extsh. r0, r4
/* 80552180  40 81 00 08 */	ble lbl_80552188
/* 80552184  4B D7 CB B8 */	b __dl__FPv
lbl_80552188:
/* 80552188  7F E3 FB 78 */	mr r3, r31
/* 8055218C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80552190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80552194  7C 08 03 A6 */	mtlr r0
/* 80552198  38 21 00 10 */	addi r1, r1, 0x10
/* 8055219C  4E 80 00 20 */	blr 
