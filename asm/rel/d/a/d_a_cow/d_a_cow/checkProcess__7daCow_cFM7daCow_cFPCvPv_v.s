lbl_806590E8:
/* 806590E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806590EC  7C 08 02 A6 */	mflr r0
/* 806590F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806590F4  38 63 0C 48 */	addi r3, r3, 0xc48
/* 806590F8  4B D0 8F 50 */	b __ptmf_cmpr
/* 806590FC  7C 60 00 34 */	cntlzw r0, r3
/* 80659100  54 03 D9 7E */	srwi r3, r0, 5
/* 80659104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80659108  7C 08 03 A6 */	mtlr r0
/* 8065910C  38 21 00 10 */	addi r1, r1, 0x10
/* 80659110  4E 80 00 20 */	blr 
