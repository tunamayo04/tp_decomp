lbl_8035C8FC:
/* 8035C8FC  80 E2 CB 80 */	lwz r7, __GXData(r2)
/* 8035C900  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8035C904  38 60 00 61 */	li r3, 0x61
/* 8035C908  80 C7 00 7C */	lwz r6, 0x7c(r7)
/* 8035C90C  50 06 44 2E */	rlwimi r6, r0, 8, 0x10, 0x17
/* 8035C910  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8035C914  90 C7 00 7C */	stw r6, 0x7c(r7)
/* 8035C918  38 00 00 00 */	li r0, 0
/* 8035C91C  80 C7 00 7C */	lwz r6, 0x7c(r7)
/* 8035C920  50 86 9A 98 */	rlwimi r6, r4, 0x13, 0xa, 0xc
/* 8035C924  90 C7 00 7C */	stw r6, 0x7c(r7)
/* 8035C928  98 65 80 00 */	stb r3, 0x8000(r5)
/* 8035C92C  80 67 00 7C */	lwz r3, 0x7c(r7)
/* 8035C930  90 65 80 00 */	stw r3, -0x8000(r5)
/* 8035C934  B0 07 00 02 */	sth r0, 2(r7)
/* 8035C938  4E 80 00 20 */	blr 
