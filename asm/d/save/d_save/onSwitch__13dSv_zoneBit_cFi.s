lbl_80034D04:
/* 80034D04  7C 80 26 70 */	srawi r0, r4, 4
/* 80034D08  54 07 08 3C */	slwi r7, r0, 1
/* 80034D0C  7C C3 3A 2E */	lhzx r6, r3, r7
/* 80034D10  38 A0 00 01 */	li r5, 1
/* 80034D14  54 80 07 3E */	clrlwi r0, r4, 0x1c
/* 80034D18  7C A0 00 30 */	slw r0, r5, r0
/* 80034D1C  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80034D20  7C C0 03 78 */	or r0, r6, r0
/* 80034D24  7C 03 3B 2E */	sthx r0, r3, r7
/* 80034D28  4E 80 00 20 */	blr 
