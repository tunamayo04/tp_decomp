lbl_800B4938:
/* 800B4938  80 63 28 00 */	lwz r3, 0x2800(r3)
/* 800B493C  28 03 00 00 */	cmplwi r3, 0
/* 800B4940  4D 82 00 20 */	beqlr 
/* 800B4944  38 00 00 01 */	li r0, 1
/* 800B4948  98 03 05 6C */	stb r0, 0x56c(r3)
/* 800B494C  4E 80 00 20 */	blr 
