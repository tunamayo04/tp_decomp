lbl_8024C340:
/* 8024C340  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8024C344  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8024C348  80 83 5E 0C */	lwz r4, 0x5e0c(r3)
/* 8024C34C  2C 04 00 00 */	cmpwi r4, 0
/* 8024C350  40 82 00 0C */	bne lbl_8024C35C
/* 8024C354  38 00 00 00 */	li r0, 0
/* 8024C358  48 00 00 40 */	b lbl_8024C398
lbl_8024C35C:
/* 8024C35C  2C 04 03 E8 */	cmpwi r4, 0x3e8
/* 8024C360  40 80 00 0C */	bge lbl_8024C36C
/* 8024C364  38 00 00 01 */	li r0, 1
/* 8024C368  48 00 00 30 */	b lbl_8024C398
lbl_8024C36C:
/* 8024C36C  2C 04 27 10 */	cmpwi r4, 0x2710
/* 8024C370  40 80 00 0C */	bge lbl_8024C37C
/* 8024C374  38 00 00 02 */	li r0, 2
/* 8024C378  48 00 00 20 */	b lbl_8024C398
lbl_8024C37C:
/* 8024C37C  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000F00E@ha */
/* 8024C380  38 03 F0 0E */	addi r0, r3, 0xF00E /* 0x0000F00E@l */
/* 8024C384  7C 04 00 00 */	cmpw r4, r0
/* 8024C388  40 80 00 0C */	bge lbl_8024C394
/* 8024C38C  38 00 00 03 */	li r0, 3
/* 8024C390  48 00 00 08 */	b lbl_8024C398
lbl_8024C394:
/* 8024C394  38 00 00 04 */	li r0, 4
lbl_8024C398:
/* 8024C398  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8024C39C  4E 80 00 20 */	blr 
