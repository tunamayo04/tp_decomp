lbl_80098190:
/* 80098190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80098194  7C 08 02 A6 */	mflr r0
/* 80098198  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009819C  38 60 00 71 */	li r3, 0x71
/* 800981A0  38 80 00 0F */	li r4, 0xf
/* 800981A4  48 00 37 9D */	bl addBombCount__FUcUc
/* 800981A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800981AC  7C 08 03 A6 */	mtlr r0
/* 800981B0  38 21 00 10 */	addi r1, r1, 0x10
/* 800981B4  4E 80 00 20 */	blr 
