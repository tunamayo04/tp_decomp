lbl_80CB288C:
/* 80CB288C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CB2890  7C 08 02 A6 */	mflr r0
/* 80CB2894  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CB2898  4B 5B 07 F4 */	b ModuleEpilog
/* 80CB289C  3C 60 80 CB */	lis r3, __destroy_global_chain_reference@ha
/* 80CB28A0  38 63 3E E0 */	addi r3, r3, __destroy_global_chain_reference@l
/* 80CB28A4  4B 5B 08 EC */	b ModuleDestructorsX
/* 80CB28A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CB28AC  7C 08 03 A6 */	mtlr r0
/* 80CB28B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80CB28B4  4E 80 00 20 */	blr 
