lbl_80B750D4:
/* 80B750D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B750D8  7C 08 02 A6 */	mflr r0
/* 80B750DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B750E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B750E4  3C 60 80 B8 */	lis r3, __global_destructor_chain@ha
/* 80B750E8  3B E3 84 00 */	addi r31, r3, __global_destructor_chain@l
/* 80B750EC  48 00 00 20 */	b lbl_80B7510C
lbl_80B750F0:
/* 80B750F0  80 05 00 00 */	lwz r0, 0(r5)
/* 80B750F4  90 1F 00 00 */	stw r0, 0(r31)
/* 80B750F8  80 65 00 08 */	lwz r3, 8(r5)
/* 80B750FC  38 80 FF FF */	li r4, -1
/* 80B75100  81 85 00 04 */	lwz r12, 4(r5)
/* 80B75104  7D 89 03 A6 */	mtctr r12
/* 80B75108  4E 80 04 21 */	bctrl 
lbl_80B7510C:
/* 80B7510C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80B75110  28 05 00 00 */	cmplwi r5, 0
/* 80B75114  40 82 FF DC */	bne lbl_80B750F0
/* 80B75118  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B7511C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B75120  7C 08 03 A6 */	mtlr r0
/* 80B75124  38 21 00 10 */	addi r1, r1, 0x10
/* 80B75128  4E 80 00 20 */	blr 
