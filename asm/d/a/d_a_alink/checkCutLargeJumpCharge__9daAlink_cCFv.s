lbl_800D0688:
/* 800D0688  38 80 00 00 */	li r4, 0
/* 800D068C  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 800D0690  28 00 00 2A */	cmplwi r0, 0x2a
/* 800D0694  40 82 00 14 */	bne lbl_800D06A8
/* 800D0698  A8 03 30 0C */	lha r0, 0x300c(r3)
/* 800D069C  2C 00 00 00 */	cmpwi r0, 0
/* 800D06A0  41 82 00 08 */	beq lbl_800D06A8
/* 800D06A4  38 80 00 01 */	li r4, 1
lbl_800D06A8:
/* 800D06A8  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 800D06AC  4E 80 00 20 */	blr 
