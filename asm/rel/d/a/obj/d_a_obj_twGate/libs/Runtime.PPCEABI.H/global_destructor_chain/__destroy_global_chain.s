lbl_80D1FA54:
/* 80D1FA54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D1FA58  7C 08 02 A6 */	mflr r0
/* 80D1FA5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D1FA60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D1FA64  3C 60 80 D2 */	lis r3, __global_destructor_chain@ha
/* 80D1FA68  3B E3 06 98 */	addi r31, r3, __global_destructor_chain@l
/* 80D1FA6C  48 00 00 20 */	b lbl_80D1FA8C
lbl_80D1FA70:
/* 80D1FA70  80 05 00 00 */	lwz r0, 0(r5)
/* 80D1FA74  90 1F 00 00 */	stw r0, 0(r31)
/* 80D1FA78  80 65 00 08 */	lwz r3, 8(r5)
/* 80D1FA7C  38 80 FF FF */	li r4, -1
/* 80D1FA80  81 85 00 04 */	lwz r12, 4(r5)
/* 80D1FA84  7D 89 03 A6 */	mtctr r12
/* 80D1FA88  4E 80 04 21 */	bctrl 
lbl_80D1FA8C:
/* 80D1FA8C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80D1FA90  28 05 00 00 */	cmplwi r5, 0
/* 80D1FA94  40 82 FF DC */	bne lbl_80D1FA70
/* 80D1FA98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D1FA9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D1FAA0  7C 08 03 A6 */	mtlr r0
/* 80D1FAA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80D1FAA8  4E 80 00 20 */	blr 
