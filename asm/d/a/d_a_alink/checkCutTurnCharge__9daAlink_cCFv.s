lbl_800D01E0:
/* 800D01E0  38 80 00 00 */	li r4, 0
/* 800D01E4  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 800D01E8  28 00 00 2A */	cmplwi r0, 0x2a
/* 800D01EC  40 82 00 14 */	bne lbl_800D0200
/* 800D01F0  A8 03 30 0C */	lha r0, 0x300c(r3)
/* 800D01F4  2C 00 00 00 */	cmpwi r0, 0
/* 800D01F8  40 82 00 08 */	bne lbl_800D0200
/* 800D01FC  38 80 00 01 */	li r4, 1
lbl_800D0200:
/* 800D0200  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 800D0204  4E 80 00 20 */	blr 
