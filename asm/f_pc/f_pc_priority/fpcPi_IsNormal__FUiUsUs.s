lbl_800232B4:
/* 800232B4  38 00 FF FE */	li r0, -2
/* 800232B8  7C 03 00 40 */	cmplw r3, r0
/* 800232BC  40 80 00 24 */	bge lbl_800232E0
/* 800232C0  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 800232C4  28 00 FF FE */	cmplwi r0, 0xfffe
/* 800232C8  40 80 00 18 */	bge lbl_800232E0
/* 800232CC  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 800232D0  28 00 FF FE */	cmplwi r0, 0xfffe
/* 800232D4  40 80 00 0C */	bge lbl_800232E0
/* 800232D8  38 60 00 01 */	li r3, 1
/* 800232DC  4E 80 00 20 */	blr 
lbl_800232E0:
/* 800232E0  38 60 00 00 */	li r3, 0
/* 800232E4  4E 80 00 20 */	blr 
