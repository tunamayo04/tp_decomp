lbl_8047DA00:
/* 8047DA00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8047DA04  7C 08 02 A6 */	mflr r0
/* 8047DA08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8047DA0C  3C 60 80 48 */	lis r3, data_80480F14@ha
/* 8047DA10  38 63 0F 14 */	addi r3, r3, data_80480F14@l
/* 8047DA14  4B DE 57 38 */	b ModuleConstructorsX
/* 8047DA18  4B DE 56 70 */	b ModuleProlog
/* 8047DA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8047DA20  7C 08 03 A6 */	mtlr r0
/* 8047DA24  38 21 00 10 */	addi r1, r1, 0x10
/* 8047DA28  4E 80 00 20 */	blr 
