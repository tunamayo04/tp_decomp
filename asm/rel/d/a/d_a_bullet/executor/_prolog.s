lbl_80655860:
/* 80655860  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80655864  7C 08 02 A6 */	mflr r0
/* 80655868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8065586C  3C 60 80 65 */	lis r3, data_80656700@ha
/* 80655870  38 63 67 00 */	addi r3, r3, data_80656700@l
/* 80655874  4B C0 D8 D8 */	b ModuleConstructorsX
/* 80655878  4B C0 D8 10 */	b ModuleProlog
/* 8065587C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80655880  7C 08 03 A6 */	mtlr r0
/* 80655884  38 21 00 10 */	addi r1, r1, 0x10
/* 80655888  4E 80 00 20 */	blr 
