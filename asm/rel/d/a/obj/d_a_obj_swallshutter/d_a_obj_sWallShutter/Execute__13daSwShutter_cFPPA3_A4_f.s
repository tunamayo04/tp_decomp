lbl_80598564:
/* 80598564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80598568  7C 08 02 A6 */	mflr r0
/* 8059856C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80598570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80598574  93 C1 00 08 */	stw r30, 8(r1)
/* 80598578  7C 7E 1B 78 */	mr r30, r3
/* 8059857C  7C 9F 23 78 */	mr r31, r4
/* 80598580  48 00 00 35 */	bl moveMain__13daSwShutter_cFv
/* 80598584  80 7E 05 A8 */	lwz r3, 0x5a8(r30)
/* 80598588  38 03 00 24 */	addi r0, r3, 0x24
/* 8059858C  90 1F 00 00 */	stw r0, 0(r31)
/* 80598590  7F C3 F3 78 */	mr r3, r30
/* 80598594  4B FF FD 11 */	bl setBaseMtx__13daSwShutter_cFv
/* 80598598  38 60 00 01 */	li r3, 1
/* 8059859C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805985A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 805985A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805985A8  7C 08 03 A6 */	mtlr r0
/* 805985AC  38 21 00 10 */	addi r1, r1, 0x10
/* 805985B0  4E 80 00 20 */	blr 
