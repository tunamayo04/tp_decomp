lbl_80CCBB6C:
/* 80CCBB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CCBB70  7C 08 02 A6 */	mflr r0
/* 80CCBB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CCBB78  48 00 00 19 */	bl middleExe__17daObjSCannonTen_cFv
/* 80CCBB7C  38 60 00 01 */	li r3, 1
/* 80CCBB80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CCBB84  7C 08 03 A6 */	mtlr r0
/* 80CCBB88  38 21 00 10 */	addi r1, r1, 0x10
/* 80CCBB8C  4E 80 00 20 */	blr 
