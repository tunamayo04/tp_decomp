lbl_80D1B94C:
/* 80D1B94C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D1B950  7C 08 02 A6 */	mflr r0
/* 80D1B954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D1B958  4B 54 77 34 */	b ModuleEpilog
/* 80D1B95C  3C 60 80 D2 */	lis r3, data_80D1C350@ha
/* 80D1B960  38 63 C3 50 */	addi r3, r3, data_80D1C350@l
/* 80D1B964  4B 54 78 2C */	b ModuleDestructorsX
/* 80D1B968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D1B96C  7C 08 03 A6 */	mtlr r0
/* 80D1B970  38 21 00 10 */	addi r1, r1, 0x10
/* 80D1B974  4E 80 00 20 */	blr 
