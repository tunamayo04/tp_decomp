lbl_80BA9D40:
/* 80BA9D40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BA9D44  7C 08 02 A6 */	mflr r0
/* 80BA9D48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BA9D4C  3C 60 80 BB */	lis r3, data_80BAC95C@ha
/* 80BA9D50  38 63 C9 5C */	addi r3, r3, data_80BAC95C@l
/* 80BA9D54  4B 6B 93 F8 */	b ModuleConstructorsX
/* 80BA9D58  4B 6B 93 30 */	b ModuleProlog
/* 80BA9D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BA9D60  7C 08 03 A6 */	mtlr r0
/* 80BA9D64  38 21 00 10 */	addi r1, r1, 0x10
/* 80BA9D68  4E 80 00 20 */	blr 
