lbl_800571C8:
/* 800571C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800571CC  7C 08 02 A6 */	mflr r0
/* 800571D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800571D4  38 60 00 01 */	li r3, 1
/* 800571D8  4B FF FF C1 */	bl dKyw_drawRain__Fi
/* 800571DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800571E0  7C 08 03 A6 */	mtlr r0
/* 800571E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800571E8  4E 80 00 20 */	blr 
