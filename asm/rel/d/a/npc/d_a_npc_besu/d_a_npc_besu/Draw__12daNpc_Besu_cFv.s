lbl_80537968:
/* 80537968  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8053796C  7C 08 02 A6 */	mflr r0
/* 80537970  90 01 00 24 */	stw r0, 0x24(r1)
/* 80537974  39 61 00 20 */	addi r11, r1, 0x20
/* 80537978  4B E2 A8 64 */	b _savegpr_29
/* 8053797C  7C 7D 1B 78 */	mr r29, r3
/* 80537980  83 C3 09 6C */	lwz r30, 0x96c(r3)
/* 80537984  28 1E 00 00 */	cmplwi r30, 0
/* 80537988  41 82 00 30 */	beq lbl_805379B8
/* 8053798C  80 9D 05 78 */	lwz r4, 0x578(r29)
/* 80537990  80 84 00 04 */	lwz r4, 4(r4)
/* 80537994  83 E4 00 04 */	lwz r31, 4(r4)
/* 80537998  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8053799C  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 805379A0  7D 89 03 A6 */	mtctr r12
/* 805379A4  4E 80 04 21 */	bctrl 
/* 805379A8  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 805379AC  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 805379B0  7C 64 00 2E */	lwzx r3, r4, r0
/* 805379B4  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_805379B8:
/* 805379B8  7F A3 EB 78 */	mr r3, r29
/* 805379BC  38 80 00 00 */	li r4, 0
/* 805379C0  38 A0 00 00 */	li r5, 0
/* 805379C4  C0 3D 0D E8 */	lfs f1, 0xde8(r29)
/* 805379C8  38 C0 00 00 */	li r6, 0
/* 805379CC  3C E0 80 54 */	lis r7, lit_4580@ha
/* 805379D0  C0 47 E8 54 */	lfs f2, lit_4580@l(r7)
/* 805379D4  38 E0 00 00 */	li r7, 0
/* 805379D8  39 00 00 00 */	li r8, 0
/* 805379DC  39 20 00 00 */	li r9, 0
/* 805379E0  4B C1 0E 8C */	b draw__8daNpcT_cFiifP11_GXColorS10fiii
/* 805379E4  39 61 00 20 */	addi r11, r1, 0x20
/* 805379E8  4B E2 A8 40 */	b _restgpr_29
/* 805379EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 805379F0  7C 08 03 A6 */	mtlr r0
/* 805379F4  38 21 00 20 */	addi r1, r1, 0x20
/* 805379F8  4E 80 00 20 */	blr 
