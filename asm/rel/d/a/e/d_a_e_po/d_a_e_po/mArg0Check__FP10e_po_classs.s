lbl_8074C5EC:
/* 8074C5EC  7C 84 07 34 */	extsh r4, r4
/* 8074C5F0  2C 04 00 FF */	cmpwi r4, 0xff
/* 8074C5F4  41 82 00 18 */	beq lbl_8074C60C
/* 8074C5F8  88 03 05 BC */	lbz r0, 0x5bc(r3)
/* 8074C5FC  7C 04 00 50 */	subf r0, r4, r0
/* 8074C600  7C 00 00 34 */	cntlzw r0, r0
/* 8074C604  54 03 D9 7E */	srwi r3, r0, 5
/* 8074C608  4E 80 00 20 */	blr 
lbl_8074C60C:
/* 8074C60C  88 03 05 BC */	lbz r0, 0x5bc(r3)
/* 8074C610  28 00 00 03 */	cmplwi r0, 3
/* 8074C614  41 80 00 14 */	blt lbl_8074C628
/* 8074C618  28 00 00 06 */	cmplwi r0, 6
/* 8074C61C  41 81 00 0C */	bgt lbl_8074C628
/* 8074C620  38 60 00 02 */	li r3, 2
/* 8074C624  4E 80 00 20 */	blr 
lbl_8074C628:
/* 8074C628  28 00 00 07 */	cmplwi r0, 7
/* 8074C62C  41 80 00 14 */	blt lbl_8074C640
/* 8074C630  28 00 00 0A */	cmplwi r0, 0xa
/* 8074C634  41 81 00 0C */	bgt lbl_8074C640
/* 8074C638  38 60 00 03 */	li r3, 3
/* 8074C63C  4E 80 00 20 */	blr 
lbl_8074C640:
/* 8074C640  28 00 00 0B */	cmplwi r0, 0xb
/* 8074C644  41 80 00 14 */	blt lbl_8074C658
/* 8074C648  28 00 00 0E */	cmplwi r0, 0xe
/* 8074C64C  41 81 00 0C */	bgt lbl_8074C658
/* 8074C650  38 60 00 04 */	li r3, 4
/* 8074C654  4E 80 00 20 */	blr 
lbl_8074C658:
/* 8074C658  38 60 00 00 */	li r3, 0
/* 8074C65C  4E 80 00 20 */	blr 
