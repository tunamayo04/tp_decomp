lbl_80699F18:
/* 80699F18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80699F1C  7C 08 02 A6 */	mflr r0
/* 80699F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80699F24  4B BC 91 6C */	b ModuleUnresolved
/* 80699F28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80699F2C  7C 08 03 A6 */	mtlr r0
/* 80699F30  38 21 00 10 */	addi r1, r1, 0x10
/* 80699F34  4E 80 00 20 */	blr 
