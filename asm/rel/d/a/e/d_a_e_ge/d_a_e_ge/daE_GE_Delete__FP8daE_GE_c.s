lbl_806CC258:
/* 806CC258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806CC25C  7C 08 02 A6 */	mflr r0
/* 806CC260  90 01 00 14 */	stw r0, 0x14(r1)
/* 806CC264  4B FF FF 81 */	bl _delete__8daE_GE_cFv
/* 806CC268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806CC26C  7C 08 03 A6 */	mtlr r0
/* 806CC270  38 21 00 10 */	addi r1, r1, 0x10
/* 806CC274  4E 80 00 20 */	blr 
