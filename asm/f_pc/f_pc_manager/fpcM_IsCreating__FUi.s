lbl_80022138:
/* 80022138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002213C  7C 08 02 A6 */	mflr r0
/* 80022140  90 01 00 14 */	stw r0, 0x14(r1)
/* 80022144  4B FF ED 65 */	bl fpcCt_IsCreatingByID__FUi
/* 80022148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002214C  7C 08 03 A6 */	mtlr r0
/* 80022150  38 21 00 10 */	addi r1, r1, 0x10
/* 80022154  4E 80 00 20 */	blr 
