lbl_8046DC6C:
/* 8046DC6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046DC70  7C 08 02 A6 */	mflr r0
/* 8046DC74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046DC78  4B DF 54 14 */	b ModuleEpilog
/* 8046DC7C  3C 60 80 47 */	lis r3, data_8046E524@ha
/* 8046DC80  38 63 E5 24 */	addi r3, r3, data_8046E524@l
/* 8046DC84  4B DF 55 0C */	b ModuleDestructorsX
/* 8046DC88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046DC8C  7C 08 03 A6 */	mtlr r0
/* 8046DC90  38 21 00 10 */	addi r1, r1, 0x10
/* 8046DC94  4E 80 00 20 */	blr 
