lbl_802A6440:
/* 802A6440  A0 84 00 02 */	lhz r4, 2(r4)
/* 802A6444  80 03 00 04 */	lwz r0, 4(r3)
/* 802A6448  7C 04 00 40 */	cmplw r4, r0
/* 802A644C  41 80 00 0C */	blt lbl_802A6458
/* 802A6450  38 60 FF FF */	li r3, -1
/* 802A6454  4E 80 00 20 */	blr 
lbl_802A6458:
/* 802A6458  80 63 00 08 */	lwz r3, 8(r3)
/* 802A645C  54 80 10 3A */	slwi r0, r4, 2
/* 802A6460  7C 63 00 2E */	lwzx r3, r3, r0
/* 802A6464  4E 80 00 20 */	blr 
