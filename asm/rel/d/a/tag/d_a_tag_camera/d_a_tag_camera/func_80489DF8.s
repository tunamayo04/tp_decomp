lbl_80489DF8:
/* 80489DF8  3C 60 80 49 */	lis r3, data_8048A670@ha
/* 80489DFC  38 63 A6 70 */	addi r3, r3, data_8048A670@l
/* 80489E00  80 63 00 00 */	lwz r3, 0(r3)
/* 80489E04  88 03 05 6A */	lbz r0, 0x56a(r3)
/* 80489E08  20 00 00 2C */	subfic r0, r0, 0x2c
/* 80489E0C  7C 00 00 34 */	cntlzw r0, r0
/* 80489E10  54 03 D9 7E */	srwi r3, r0, 5
/* 80489E14  4E 80 00 20 */	blr 
