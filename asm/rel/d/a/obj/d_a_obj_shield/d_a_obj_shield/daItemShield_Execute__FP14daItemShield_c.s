lbl_80CD8198:
/* 80CD8198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CD819C  7C 08 02 A6 */	mflr r0
/* 80CD81A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CD81A4  4B FF FE 45 */	bl execute__14daItemShield_cFv
/* 80CD81A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CD81AC  7C 08 03 A6 */	mtlr r0
/* 80CD81B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80CD81B4  4E 80 00 20 */	blr 
