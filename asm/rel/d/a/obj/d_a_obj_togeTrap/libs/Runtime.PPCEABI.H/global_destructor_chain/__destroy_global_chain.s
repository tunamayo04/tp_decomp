lbl_80D17B14:
/* 80D17B14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D17B18  7C 08 02 A6 */	mflr r0
/* 80D17B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D17B20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D17B24  3C 60 80 D2 */	lis r3, __global_destructor_chain@ha
/* 80D17B28  3B E3 90 A0 */	addi r31, r3, __global_destructor_chain@l
/* 80D17B2C  48 00 00 20 */	b lbl_80D17B4C
lbl_80D17B30:
/* 80D17B30  80 05 00 00 */	lwz r0, 0(r5)
/* 80D17B34  90 1F 00 00 */	stw r0, 0(r31)
/* 80D17B38  80 65 00 08 */	lwz r3, 8(r5)
/* 80D17B3C  38 80 FF FF */	li r4, -1
/* 80D17B40  81 85 00 04 */	lwz r12, 4(r5)
/* 80D17B44  7D 89 03 A6 */	mtctr r12
/* 80D17B48  4E 80 04 21 */	bctrl 
lbl_80D17B4C:
/* 80D17B4C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80D17B50  28 05 00 00 */	cmplwi r5, 0
/* 80D17B54  40 82 FF DC */	bne lbl_80D17B30
/* 80D17B58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D17B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D17B60  7C 08 03 A6 */	mtlr r0
/* 80D17B64  38 21 00 10 */	addi r1, r1, 0x10
/* 80D17B68  4E 80 00 20 */	blr 
