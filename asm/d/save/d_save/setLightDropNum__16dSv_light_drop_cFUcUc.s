lbl_80034320:
/* 80034320  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80034324  28 00 00 04 */	cmplwi r0, 4
/* 80034328  41 80 00 0C */	blt lbl_80034334
/* 8003432C  28 00 00 06 */	cmplwi r0, 6
/* 80034330  4C 81 00 20 */	blelr 
lbl_80034334:
/* 80034334  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80034338  7C A3 01 AE */	stbx r5, r3, r0
/* 8003433C  4E 80 00 20 */	blr 
