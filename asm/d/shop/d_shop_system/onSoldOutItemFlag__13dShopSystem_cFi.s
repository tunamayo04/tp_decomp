lbl_80197618:
/* 80197618  88 A3 0F 74 */	lbz r5, 0xf74(r3)
/* 8019761C  38 00 00 01 */	li r0, 1
/* 80197620  7C 00 20 30 */	slw r0, r0, r4
/* 80197624  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80197628  7C A0 03 78 */	or r0, r5, r0
/* 8019762C  98 03 0F 74 */	stb r0, 0xf74(r3)
/* 80197630  4E 80 00 20 */	blr 
