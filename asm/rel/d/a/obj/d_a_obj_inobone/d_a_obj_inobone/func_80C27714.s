lbl_80C27714:
/* 80C27714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C27718  7C 08 02 A6 */	mflr r0
/* 80C2771C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C27720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C27724  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C27728  41 82 00 44 */	beq lbl_80C2776C
/* 80C2772C  28 05 00 00 */	cmplwi r5, 0
/* 80C27730  41 82 00 3C */	beq lbl_80C2776C
/* 80C27734  A8 05 00 08 */	lha r0, 8(r5)
/* 80C27738  2C 00 00 EE */	cmpwi r0, 0xee
/* 80C2773C  40 82 00 30 */	bne lbl_80C2776C
/* 80C27740  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80C27744  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80C27748  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80C2774C  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80C27750  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 80C27754  7D 89 03 A6 */	mtctr r12
/* 80C27758  4E 80 04 21 */	bctrl 
/* 80C2775C  28 03 00 00 */	cmplwi r3, 0
/* 80C27760  41 82 00 0C */	beq lbl_80C2776C
/* 80C27764  38 00 00 01 */	li r0, 1
/* 80C27768  98 1F 08 28 */	stb r0, 0x828(r31)
lbl_80C2776C:
/* 80C2776C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C27770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C27774  7C 08 03 A6 */	mtlr r0
/* 80C27778  38 21 00 10 */	addi r1, r1, 0x10
/* 80C2777C  4E 80 00 20 */	blr 
