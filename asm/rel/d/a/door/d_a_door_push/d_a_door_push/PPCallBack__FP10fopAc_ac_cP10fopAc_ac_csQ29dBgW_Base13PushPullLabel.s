lbl_80677DB8:
/* 80677DB8  54 C0 07 FF */	clrlwi. r0, r6, 0x1f
/* 80677DBC  4D 82 00 20 */	beqlr 
/* 80677DC0  88 83 06 2E */	lbz r4, 0x62e(r3)
/* 80677DC4  38 04 00 01 */	addi r0, r4, 1
/* 80677DC8  98 03 06 2E */	stb r0, 0x62e(r3)
/* 80677DCC  38 00 00 00 */	li r0, 0
/* 80677DD0  98 03 06 2F */	stb r0, 0x62f(r3)
/* 80677DD4  38 00 00 01 */	li r0, 1
/* 80677DD8  98 03 06 2C */	stb r0, 0x62c(r3)
/* 80677DDC  4E 80 00 20 */	blr 
