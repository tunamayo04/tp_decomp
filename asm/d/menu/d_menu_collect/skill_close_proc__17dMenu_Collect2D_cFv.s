lbl_801B59E4:
/* 801B59E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B59E8  7C 08 02 A6 */	mflr r0
/* 801B59EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B59F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B59F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801B59F8  7C 7E 1B 78 */	mr r30, r3
/* 801B59FC  80 63 00 08 */	lwz r3, 8(r3)
/* 801B5A00  4B E5 97 CD */	bl mDoExt_setCurrentHeap__FP7JKRHeap
/* 801B5A04  7C 7F 1B 78 */	mr r31, r3
/* 801B5A08  80 7E 00 A0 */	lwz r3, 0xa0(r30)
/* 801B5A0C  88 03 02 04 */	lbz r0, 0x204(r3)
/* 801B5A10  28 00 00 03 */	cmplwi r0, 3
/* 801B5A14  40 82 00 08 */	bne lbl_801B5A1C
/* 801B5A18  48 04 22 05 */	bl _close__13dMenu_Skill_cFv
lbl_801B5A1C:
/* 801B5A1C  80 7E 00 A0 */	lwz r3, 0xa0(r30)
/* 801B5A20  88 03 02 04 */	lbz r0, 0x204(r3)
/* 801B5A24  28 00 00 00 */	cmplwi r0, 0
/* 801B5A28  40 82 00 18 */	bne lbl_801B5A40
/* 801B5A2C  38 00 00 00 */	li r0, 0
/* 801B5A30  98 1E 02 2C */	stb r0, 0x22c(r30)
/* 801B5A34  38 00 00 FF */	li r0, 0xff
/* 801B5A38  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 801B5A3C  98 03 00 B4 */	stb r0, 0xb4(r3)
lbl_801B5A40:
/* 801B5A40  7F E3 FB 78 */	mr r3, r31
/* 801B5A44  4B E5 97 89 */	bl mDoExt_setCurrentHeap__FP7JKRHeap
/* 801B5A48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B5A4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B5A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B5A54  7C 08 03 A6 */	mtlr r0
/* 801B5A58  38 21 00 10 */	addi r1, r1, 0x10
/* 801B5A5C  4E 80 00 20 */	blr 
