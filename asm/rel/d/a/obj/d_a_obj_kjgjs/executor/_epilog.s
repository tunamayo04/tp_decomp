lbl_80C4604C:
/* 80C4604C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C46050  7C 08 02 A6 */	mflr r0
/* 80C46054  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C46058  4B 61 D0 34 */	b ModuleEpilog
/* 80C4605C  3C 60 80 C4 */	lis r3, data_80C46540@ha
/* 80C46060  38 63 65 40 */	addi r3, r3, data_80C46540@l
/* 80C46064  4B 61 D1 2C */	b ModuleDestructorsX
/* 80C46068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C4606C  7C 08 03 A6 */	mtlr r0
/* 80C46070  38 21 00 10 */	addi r1, r1, 0x10
/* 80C46074  4E 80 00 20 */	blr 
