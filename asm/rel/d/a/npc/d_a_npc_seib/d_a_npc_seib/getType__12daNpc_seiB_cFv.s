lbl_80AC5628:
/* 80AC5628  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80AC562C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80AC5630  41 82 00 08 */	beq lbl_80AC5638
/* 80AC5634  48 00 00 0C */	b lbl_80AC5640
lbl_80AC5638:
/* 80AC5638  38 60 00 00 */	li r3, 0
/* 80AC563C  4E 80 00 20 */	blr 
lbl_80AC5640:
/* 80AC5640  38 60 00 01 */	li r3, 1
/* 80AC5644  4E 80 00 20 */	blr 
