lbl_80CDCE00:
/* 80CDCE00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CDCE04  7C 08 02 A6 */	mflr r0
/* 80CDCE08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CDCE0C  3C 60 80 CE */	lis r3, data_80CDD158@ha
/* 80CDCE10  38 63 D1 58 */	addi r3, r3, data_80CDD158@l
/* 80CDCE14  4B 58 63 38 */	b ModuleConstructorsX
/* 80CDCE18  4B 58 62 70 */	b ModuleProlog
/* 80CDCE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CDCE20  7C 08 03 A6 */	mtlr r0
/* 80CDCE24  38 21 00 10 */	addi r1, r1, 0x10
/* 80CDCE28  4E 80 00 20 */	blr 
