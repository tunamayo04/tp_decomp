lbl_80670C18:
/* 80670C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80670C1C  7C 08 02 A6 */	mflr r0
/* 80670C20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80670C24  4B BF 24 6C */	b ModuleUnresolved
/* 80670C28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80670C2C  7C 08 03 A6 */	mtlr r0
/* 80670C30  38 21 00 10 */	addi r1, r1, 0x10
/* 80670C34  4E 80 00 20 */	blr 
