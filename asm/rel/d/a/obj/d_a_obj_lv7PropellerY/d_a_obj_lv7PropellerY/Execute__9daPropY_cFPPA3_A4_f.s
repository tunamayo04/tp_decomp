lbl_80C85810:
/* 80C85810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C85814  7C 08 02 A6 */	mflr r0
/* 80C85818  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8581C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C85820  93 C1 00 08 */	stw r30, 8(r1)
/* 80C85824  7C 7E 1B 78 */	mr r30, r3
/* 80C85828  7C 9F 23 78 */	mr r31, r4
/* 80C8582C  48 00 00 35 */	bl procMain__9daPropY_cFv
/* 80C85830  80 7E 05 A8 */	lwz r3, 0x5a8(r30)
/* 80C85834  38 03 00 24 */	addi r0, r3, 0x24
/* 80C85838  90 1F 00 00 */	stw r0, 0(r31)
/* 80C8583C  7F C3 F3 78 */	mr r3, r30
/* 80C85840  4B FF FC CD */	bl setBaseMtx__9daPropY_cFv
/* 80C85844  38 60 00 01 */	li r3, 1
/* 80C85848  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C8584C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C85850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C85854  7C 08 03 A6 */	mtlr r0
/* 80C85858  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8585C  4E 80 00 20 */	blr 
