lbl_80BE3198:
/* 80BE3198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BE319C  7C 08 02 A6 */	mflr r0
/* 80BE31A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BE31A4  48 00 04 1D */	bl Delete__15daObjE_CREATE_cFv
/* 80BE31A8  38 60 00 01 */	li r3, 1
/* 80BE31AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BE31B0  7C 08 03 A6 */	mtlr r0
/* 80BE31B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80BE31B8  4E 80 00 20 */	blr 
