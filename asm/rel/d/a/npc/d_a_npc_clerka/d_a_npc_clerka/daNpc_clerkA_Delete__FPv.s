lbl_80994804:
/* 80994804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80994808  7C 08 02 A6 */	mflr r0
/* 8099480C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80994810  4B FF E5 41 */	bl Delete__14daNpc_clerkA_cFv
/* 80994814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80994818  7C 08 03 A6 */	mtlr r0
/* 8099481C  38 21 00 10 */	addi r1, r1, 0x10
/* 80994820  4E 80 00 20 */	blr 
