lbl_80AE4508:
/* 80AE4508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AE450C  7C 08 02 A6 */	mflr r0
/* 80AE4510  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AE4514  38 63 0F 90 */	addi r3, r3, 0xf90
/* 80AE4518  4B 87 DB 30 */	b __ptmf_cmpr
/* 80AE451C  7C 60 00 34 */	cntlzw r0, r3
/* 80AE4520  54 03 D9 7E */	srwi r3, r0, 5
/* 80AE4524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AE4528  7C 08 03 A6 */	mtlr r0
/* 80AE452C  38 21 00 10 */	addi r1, r1, 0x10
/* 80AE4530  4E 80 00 20 */	blr 
