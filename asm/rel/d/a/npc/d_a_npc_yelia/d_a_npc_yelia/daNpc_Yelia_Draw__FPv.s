lbl_80B50F40:
/* 80B50F40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B50F44  7C 08 02 A6 */	mflr r0
/* 80B50F48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B50F4C  4B FF CD 29 */	bl Draw__13daNpc_Yelia_cFv
/* 80B50F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B50F54  7C 08 03 A6 */	mtlr r0
/* 80B50F58  38 21 00 10 */	addi r1, r1, 0x10
/* 80B50F5C  4E 80 00 20 */	blr 
