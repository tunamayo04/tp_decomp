lbl_809E62F0:
/* 809E62F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809E62F4  7C 08 02 A6 */	mflr r0
/* 809E62F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809E62FC  38 63 0D D8 */	addi r3, r3, 0xdd8
/* 809E6300  4B 97 BD 48 */	b __ptmf_cmpr
/* 809E6304  7C 60 00 34 */	cntlzw r0, r3
/* 809E6308  54 03 D9 7E */	srwi r3, r0, 5
/* 809E630C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809E6310  7C 08 03 A6 */	mtlr r0
/* 809E6314  38 21 00 10 */	addi r1, r1, 0x10
/* 809E6318  4E 80 00 20 */	blr 
