lbl_80335F5C:
/* 80335F5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80335F60  7C 08 02 A6 */	mflr r0
/* 80335F64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80335F68  39 61 00 20 */	addi r11, r1, 0x20
/* 80335F6C  48 02 C2 69 */	bl _savegpr_27
/* 80335F70  7C 7B 1B 78 */	mr r27, r3
/* 80335F74  7C 9C 23 78 */	mr r28, r4
/* 80335F78  A3 A4 00 08 */	lhz r29, 8(r4)
/* 80335F7C  7F 83 E3 78 */	mr r3, r28
/* 80335F80  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80335F84  48 00 07 69 */	bl func_803366EC
/* 80335F88  7C 7F 1B 78 */	mr r31, r3
/* 80335F8C  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80335F90  28 00 00 00 */	cmplwi r0, 0
/* 80335F94  41 82 00 3C */	beq lbl_80335FD0
/* 80335F98  38 60 00 10 */	li r3, 0x10
/* 80335F9C  4B F9 8C B1 */	bl __nw__FUl
/* 80335FA0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80335FA4  41 82 00 20 */	beq lbl_80335FC4
/* 80335FA8  7F 83 E3 78 */	mr r3, r28
/* 80335FAC  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 80335FB0  4B FD 45 81 */	bl func_8030A530
/* 80335FB4  7C 64 1B 78 */	mr r4, r3
/* 80335FB8  7F C3 F3 78 */	mr r3, r30
/* 80335FBC  4B FA 8A 25 */	bl __ct__10JUTNameTabFPC7ResNTAB
/* 80335FC0  7C 7E 1B 78 */	mr r30, r3
lbl_80335FC4:
/* 80335FC4  80 7B 00 08 */	lwz r3, 8(r27)
/* 80335FC8  93 C3 00 18 */	stw r30, 0x18(r3)
/* 80335FCC  48 00 00 10 */	b lbl_80335FDC
lbl_80335FD0:
/* 80335FD0  38 00 00 00 */	li r0, 0
/* 80335FD4  80 7B 00 08 */	lwz r3, 8(r27)
/* 80335FD8  90 03 00 18 */	stw r0, 0x18(r3)
lbl_80335FDC:
/* 80335FDC  38 60 00 0C */	li r3, 0xc
/* 80335FE0  4B F9 8C 6D */	bl __nw__FUl
/* 80335FE4  28 03 00 00 */	cmplwi r3, 0
/* 80335FE8  41 82 00 20 */	beq lbl_80336008
/* 80335FEC  3C 80 80 3D */	lis r4, __vt__10J3DTexture@ha
/* 80335FF0  38 04 F1 E8 */	addi r0, r4, __vt__10J3DTexture@l
/* 80335FF4  90 03 00 08 */	stw r0, 8(r3)
/* 80335FF8  B3 A3 00 00 */	sth r29, 0(r3)
/* 80335FFC  38 00 00 00 */	li r0, 0
/* 80336000  B0 03 00 02 */	sth r0, 2(r3)
/* 80336004  93 E3 00 04 */	stw r31, 4(r3)
lbl_80336008:
/* 80336008  80 9B 00 08 */	lwz r4, 8(r27)
/* 8033600C  90 64 00 14 */	stw r3, 0x14(r4)
/* 80336010  39 61 00 20 */	addi r11, r1, 0x20
/* 80336014  48 02 C2 0D */	bl _restgpr_27
/* 80336018  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8033601C  7C 08 03 A6 */	mtlr r0
/* 80336020  38 21 00 20 */	addi r1, r1, 0x20
/* 80336024  4E 80 00 20 */	blr 
