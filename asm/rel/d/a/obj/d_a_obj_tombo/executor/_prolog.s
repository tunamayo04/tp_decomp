lbl_80D190E0:
/* 80D190E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D190E4  7C 08 02 A6 */	mflr r0
/* 80D190E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D190EC  3C 60 80 D2 */	lis r3, data_80D1B6C4@ha
/* 80D190F0  38 63 B6 C4 */	addi r3, r3, data_80D1B6C4@l
/* 80D190F4  4B 54 A0 58 */	b ModuleConstructorsX
/* 80D190F8  4B 54 9F 90 */	b ModuleProlog
/* 80D190FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D19100  7C 08 03 A6 */	mtlr r0
/* 80D19104  38 21 00 10 */	addi r1, r1, 0x10
/* 80D19108  4E 80 00 20 */	blr 
