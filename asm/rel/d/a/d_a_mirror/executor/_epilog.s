lbl_80870B6C:
/* 80870B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80870B70  7C 08 02 A6 */	mflr r0
/* 80870B74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80870B78  4B 9F 25 14 */	b ModuleEpilog
/* 80870B7C  3C 60 80 87 */	lis r3, data_80872588@ha
/* 80870B80  38 63 25 88 */	addi r3, r3, data_80872588@l
/* 80870B84  4B 9F 26 0C */	b ModuleDestructorsX
/* 80870B88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80870B8C  7C 08 03 A6 */	mtlr r0
/* 80870B90  38 21 00 10 */	addi r1, r1, 0x10
/* 80870B94  4E 80 00 20 */	blr 
