lbl_80B259B4:
/* 80B259B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B259B8  7C 08 02 A6 */	mflr r0
/* 80B259BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B259C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B259C4  3C 60 80 B2 */	lis r3, __global_destructor_chain@ha
/* 80B259C8  3B E3 66 70 */	addi r31, r3, __global_destructor_chain@l
/* 80B259CC  48 00 00 20 */	b lbl_80B259EC
lbl_80B259D0:
/* 80B259D0  80 05 00 00 */	lwz r0, 0(r5)
/* 80B259D4  90 1F 00 00 */	stw r0, 0(r31)
/* 80B259D8  80 65 00 08 */	lwz r3, 8(r5)
/* 80B259DC  38 80 FF FF */	li r4, -1
/* 80B259E0  81 85 00 04 */	lwz r12, 4(r5)
/* 80B259E4  7D 89 03 A6 */	mtctr r12
/* 80B259E8  4E 80 04 21 */	bctrl 
lbl_80B259EC:
/* 80B259EC  80 BF 00 00 */	lwz r5, 0(r31)
/* 80B259F0  28 05 00 00 */	cmplwi r5, 0
/* 80B259F4  40 82 FF DC */	bne lbl_80B259D0
/* 80B259F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B259FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B25A00  7C 08 03 A6 */	mtlr r0
/* 80B25A04  38 21 00 10 */	addi r1, r1, 0x10
/* 80B25A08  4E 80 00 20 */	blr 
