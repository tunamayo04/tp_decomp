lbl_802258A0:
/* 802258A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802258A4  7C 08 02 A6 */	mflr r0
/* 802258A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802258AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802258B0  7C 7F 1B 78 */	mr r31, r3
/* 802258B4  88 63 01 E5 */	lbz r3, 0x1e5(r3)
/* 802258B8  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 802258BC  7C 03 00 40 */	cmplw r3, r0
/* 802258C0  41 82 00 8C */	beq lbl_8022594C
/* 802258C4  28 03 00 00 */	cmplwi r3, 0
/* 802258C8  41 82 00 84 */	beq lbl_8022594C
/* 802258CC  38 00 00 00 */	li r0, 0
/* 802258D0  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 802258D4  28 03 00 00 */	cmplwi r3, 0
/* 802258D8  41 82 00 28 */	beq lbl_80225900
/* 802258DC  41 82 00 18 */	beq lbl_802258F4
/* 802258E0  38 80 00 01 */	li r4, 1
/* 802258E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802258E8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802258EC  7D 89 03 A6 */	mtctr r12
/* 802258F0  4E 80 04 21 */	bctrl 
lbl_802258F4:
/* 802258F4  38 00 00 00 */	li r0, 0
/* 802258F8  90 1F 01 10 */	stw r0, 0x110(r31)
/* 802258FC  38 00 00 01 */	li r0, 1
lbl_80225900:
/* 80225900  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80225904  28 03 00 00 */	cmplwi r3, 0
/* 80225908  41 82 00 28 */	beq lbl_80225930
/* 8022590C  41 82 00 18 */	beq lbl_80225924
/* 80225910  38 80 00 01 */	li r4, 1
/* 80225914  81 83 00 00 */	lwz r12, 0(r3)
/* 80225918  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8022591C  7D 89 03 A6 */	mtctr r12
/* 80225920  4E 80 04 21 */	bctrl 
lbl_80225924:
/* 80225924  38 00 00 00 */	li r0, 0
/* 80225928  90 1F 01 14 */	stw r0, 0x114(r31)
/* 8022592C  38 00 00 01 */	li r0, 1
lbl_80225930:
/* 80225930  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80225934  41 82 00 0C */	beq lbl_80225940
/* 80225938  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 8022593C  48 0A 8C 91 */	bl freeAll__7JKRHeapFv
lbl_80225940:
/* 80225940  38 00 00 00 */	li r0, 0
/* 80225944  98 1F 01 E5 */	stb r0, 0x1e5(r31)
/* 80225948  B0 1F 01 B6 */	sth r0, 0x1b6(r31)
lbl_8022594C:
/* 8022594C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80225950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80225954  7C 08 03 A6 */	mtlr r0
/* 80225958  38 21 00 10 */	addi r1, r1, 0x10
/* 8022595C  4E 80 00 20 */	blr 
