lbl_80D55E18:
/* 80D55E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D55E1C  7C 08 02 A6 */	mflr r0
/* 80D55E20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D55E24  4B 50 D2 6C */	b ModuleUnresolved
/* 80D55E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D55E2C  7C 08 03 A6 */	mtlr r0
/* 80D55E30  38 21 00 10 */	addi r1, r1, 0x10
/* 80D55E34  4E 80 00 20 */	blr 
