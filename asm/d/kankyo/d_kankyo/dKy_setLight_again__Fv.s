lbl_801A75C0:
/* 801A75C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A75C4  7C 08 02 A6 */	mflr r0
/* 801A75C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A75CC  4B FF EB 15 */	bl dKy_GlobalLight_set__Fv
/* 801A75D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A75D4  7C 08 03 A6 */	mtlr r0
/* 801A75D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801A75DC  4E 80 00 20 */	blr 
