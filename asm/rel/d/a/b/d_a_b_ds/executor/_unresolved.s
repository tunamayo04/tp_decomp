lbl_805CB198:
/* 805CB198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805CB19C  7C 08 02 A6 */	mflr r0
/* 805CB1A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805CB1A4  4B C9 7E EC */	b ModuleUnresolved
/* 805CB1A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805CB1AC  7C 08 03 A6 */	mtlr r0
/* 805CB1B0  38 21 00 10 */	addi r1, r1, 0x10
/* 805CB1B4  4E 80 00 20 */	blr 
