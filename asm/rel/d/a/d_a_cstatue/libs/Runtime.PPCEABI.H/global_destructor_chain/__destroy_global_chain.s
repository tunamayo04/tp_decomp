lbl_80663654:
/* 80663654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80663658  7C 08 02 A6 */	mflr r0
/* 8066365C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80663660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80663664  3C 60 80 66 */	lis r3, __global_destructor_chain@ha
/* 80663668  3B E3 7B 78 */	addi r31, r3, __global_destructor_chain@l
/* 8066366C  48 00 00 20 */	b lbl_8066368C
lbl_80663670:
/* 80663670  80 05 00 00 */	lwz r0, 0(r5)
/* 80663674  90 1F 00 00 */	stw r0, 0(r31)
/* 80663678  80 65 00 08 */	lwz r3, 8(r5)
/* 8066367C  38 80 FF FF */	li r4, -1
/* 80663680  81 85 00 04 */	lwz r12, 4(r5)
/* 80663684  7D 89 03 A6 */	mtctr r12
/* 80663688  4E 80 04 21 */	bctrl 
lbl_8066368C:
/* 8066368C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80663690  28 05 00 00 */	cmplwi r5, 0
/* 80663694  40 82 FF DC */	bne lbl_80663670
/* 80663698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8066369C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806636A0  7C 08 03 A6 */	mtlr r0
/* 806636A4  38 21 00 10 */	addi r1, r1, 0x10
/* 806636A8  4E 80 00 20 */	blr 
