lbl_8024B54C:
/* 8024B54C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024B550  7C 08 02 A6 */	mflr r0
/* 8024B554  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024B558  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8024B55C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8024B560  38 63 09 58 */	addi r3, r3, 0x958
/* 8024B564  A0 84 00 04 */	lhz r4, 4(r4)
/* 8024B568  4B DE 92 81 */	bl isTbox__12dSv_memBit_cCFi
/* 8024B56C  7C 60 00 34 */	cntlzw r0, r3
/* 8024B570  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8024B574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024B578  7C 08 03 A6 */	mtlr r0
/* 8024B57C  38 21 00 10 */	addi r1, r1, 0x10
/* 8024B580  4E 80 00 20 */	blr 
