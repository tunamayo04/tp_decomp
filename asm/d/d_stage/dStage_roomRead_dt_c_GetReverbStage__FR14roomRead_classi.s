lbl_80025E40:
/* 80025E40  2C 04 00 00 */	cmpwi r4, 0
/* 80025E44  41 80 00 10 */	blt lbl_80025E54
/* 80025E48  80 03 00 00 */	lwz r0, 0(r3)
/* 80025E4C  7C 04 00 00 */	cmpw r4, r0
/* 80025E50  41 80 00 08 */	blt lbl_80025E58
lbl_80025E54:
/* 80025E54  38 80 00 00 */	li r4, 0
lbl_80025E58:
/* 80025E58  80 63 00 04 */	lwz r3, 4(r3)
/* 80025E5C  54 80 10 3A */	slwi r0, r4, 2
/* 80025E60  7C 63 00 2E */	lwzx r3, r3, r0
/* 80025E64  88 03 00 01 */	lbz r0, 1(r3)
/* 80025E68  54 03 06 7E */	clrlwi r3, r0, 0x19
/* 80025E6C  4E 80 00 20 */	blr 
