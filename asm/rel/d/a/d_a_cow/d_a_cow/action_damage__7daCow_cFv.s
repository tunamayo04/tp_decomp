lbl_806612DC:
/* 806612DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806612E0  7C 08 02 A6 */	mflr r0
/* 806612E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 806612E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806612EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806612F0  7C 7F 1B 78 */	mr r31, r3
/* 806612F4  3C 80 80 66 */	lis r4, lit_3987@ha
/* 806612F8  3B C4 2D B0 */	addi r30, r4, lit_3987@l
/* 806612FC  A0 03 0C 5C */	lhz r0, 0xc5c(r3)
/* 80661300  2C 00 00 02 */	cmpwi r0, 2
/* 80661304  41 82 00 D0 */	beq lbl_806613D4
/* 80661308  40 80 00 CC */	bge lbl_806613D4
/* 8066130C  2C 00 00 00 */	cmpwi r0, 0
/* 80661310  41 82 00 10 */	beq lbl_80661320
/* 80661314  40 80 00 4C */	bge lbl_80661360
/* 80661318  48 00 00 BC */	b lbl_806613D4
/* 8066131C  48 00 00 B8 */	b lbl_806613D4
lbl_80661320:
/* 80661320  38 80 00 18 */	li r4, 0x18
/* 80661324  38 A0 00 00 */	li r5, 0
/* 80661328  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8066132C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80661330  4B FF 74 01 */	bl setBck__7daCow_cFiUcff
/* 80661334  38 00 00 01 */	li r0, 1
/* 80661338  B0 1F 0C 5C */	sth r0, 0xc5c(r31)
/* 8066133C  38 00 00 C8 */	li r0, 0xc8
/* 80661340  90 1F 0C 98 */	stw r0, 0xc98(r31)
/* 80661344  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80661348  D0 1F 0C B0 */	stfs f0, 0xcb0(r31)
/* 8066134C  38 00 00 00 */	li r0, 0
/* 80661350  98 1F 0C B4 */	stb r0, 0xcb4(r31)
/* 80661354  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80661358  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 8066135C  48 00 00 78 */	b lbl_806613D4
lbl_80661360:
/* 80661360  4B FF BE D1 */	bl setRedTev__7daCow_cFv
/* 80661364  80 7F 05 74 */	lwz r3, 0x574(r31)
/* 80661368  38 80 00 01 */	li r4, 1
/* 8066136C  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80661370  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80661374  40 82 00 18 */	bne lbl_8066138C
/* 80661378  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8066137C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80661380  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80661384  41 82 00 08 */	beq lbl_8066138C
/* 80661388  38 80 00 00 */	li r4, 0
lbl_8066138C:
/* 8066138C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80661390  41 82 00 44 */	beq lbl_806613D4
/* 80661394  38 00 00 00 */	li r0, 0
/* 80661398  98 1F 0C A0 */	stb r0, 0xca0(r31)
/* 8066139C  38 00 00 01 */	li r0, 1
/* 806613A0  98 1F 0C A1 */	stb r0, 0xca1(r31)
/* 806613A4  3C 60 80 66 */	lis r3, lit_7505@ha
/* 806613A8  38 83 33 30 */	addi r4, r3, lit_7505@l
/* 806613AC  80 64 00 00 */	lwz r3, 0(r4)
/* 806613B0  80 04 00 04 */	lwz r0, 4(r4)
/* 806613B4  90 61 00 08 */	stw r3, 8(r1)
/* 806613B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 806613BC  80 04 00 08 */	lwz r0, 8(r4)
/* 806613C0  90 01 00 10 */	stw r0, 0x10(r1)
/* 806613C4  7F E3 FB 78 */	mr r3, r31
/* 806613C8  38 81 00 08 */	addi r4, r1, 8
/* 806613CC  38 A0 00 00 */	li r5, 0
/* 806613D0  4B FF 7D 45 */	bl setProcess__7daCow_cFM7daCow_cFPCvPv_vi
lbl_806613D4:
/* 806613D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806613D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806613DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806613E0  7C 08 03 A6 */	mtlr r0
/* 806613E4  38 21 00 20 */	addi r1, r1, 0x20
/* 806613E8  4E 80 00 20 */	blr 
