lbl_80252E70:
/* 80252E70  88 83 00 00 */	lbz r4, 0(r3)
/* 80252E74  7C 80 07 75 */	extsb. r0, r4
/* 80252E78  41 82 00 0C */	beq lbl_80252E84
/* 80252E7C  38 04 FF FF */	addi r0, r4, -1
/* 80252E80  98 03 00 00 */	stb r0, 0(r3)
lbl_80252E84:
/* 80252E84  88 63 00 00 */	lbz r3, 0(r3)
/* 80252E88  4E 80 00 20 */	blr 
