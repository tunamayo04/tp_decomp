lbl_806E5D94:
/* 806E5D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806E5D98  7C 08 02 A6 */	mflr r0
/* 806E5D9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 806E5DA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806E5DA4  3C 60 80 6F */	lis r3, __global_destructor_chain@ha
/* 806E5DA8  3B E3 A4 E0 */	addi r31, r3, __global_destructor_chain@l
/* 806E5DAC  48 00 00 20 */	b lbl_806E5DCC
lbl_806E5DB0:
/* 806E5DB0  80 05 00 00 */	lwz r0, 0(r5)
/* 806E5DB4  90 1F 00 00 */	stw r0, 0(r31)
/* 806E5DB8  80 65 00 08 */	lwz r3, 8(r5)
/* 806E5DBC  38 80 FF FF */	li r4, -1
/* 806E5DC0  81 85 00 04 */	lwz r12, 4(r5)
/* 806E5DC4  7D 89 03 A6 */	mtctr r12
/* 806E5DC8  4E 80 04 21 */	bctrl 
lbl_806E5DCC:
/* 806E5DCC  80 BF 00 00 */	lwz r5, 0(r31)
/* 806E5DD0  28 05 00 00 */	cmplwi r5, 0
/* 806E5DD4  40 82 FF DC */	bne lbl_806E5DB0
/* 806E5DD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806E5DDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806E5DE0  7C 08 03 A6 */	mtlr r0
/* 806E5DE4  38 21 00 10 */	addi r1, r1, 0x10
/* 806E5DE8  4E 80 00 20 */	blr 
