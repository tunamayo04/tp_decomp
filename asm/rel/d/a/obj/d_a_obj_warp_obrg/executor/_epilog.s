lbl_80D2996C:
/* 80D2996C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D29970  7C 08 02 A6 */	mflr r0
/* 80D29974  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D29978  4B 53 97 14 */	b ModuleEpilog
/* 80D2997C  3C 60 80 D3 */	lis r3, data_80D2B7F4@ha
/* 80D29980  38 63 B7 F4 */	addi r3, r3, data_80D2B7F4@l
/* 80D29984  4B 53 98 0C */	b ModuleDestructorsX
/* 80D29988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D2998C  7C 08 03 A6 */	mtlr r0
/* 80D29990  38 21 00 10 */	addi r1, r1, 0x10
/* 80D29994  4E 80 00 20 */	blr 
