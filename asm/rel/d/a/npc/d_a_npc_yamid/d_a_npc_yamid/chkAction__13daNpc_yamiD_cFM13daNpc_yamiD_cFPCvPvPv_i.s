lbl_80B44554:
/* 80B44554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B44558  7C 08 02 A6 */	mflr r0
/* 80B4455C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B44560  38 63 0F 90 */	addi r3, r3, 0xf90
/* 80B44564  4B 81 DA E4 */	b __ptmf_cmpr
/* 80B44568  7C 60 00 34 */	cntlzw r0, r3
/* 80B4456C  54 03 D9 7E */	srwi r3, r0, 5
/* 80B44570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B44574  7C 08 03 A6 */	mtlr r0
/* 80B44578  38 21 00 10 */	addi r1, r1, 0x10
/* 80B4457C  4E 80 00 20 */	blr 
