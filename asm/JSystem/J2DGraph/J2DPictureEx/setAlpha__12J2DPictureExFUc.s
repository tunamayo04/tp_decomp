lbl_803069B8:
/* 803069B8  98 83 00 B2 */	stb r4, 0xb2(r3)
/* 803069BC  80 63 01 50 */	lwz r3, 0x150(r3)
/* 803069C0  28 03 00 00 */	cmplwi r3, 0
/* 803069C4  4D 82 00 20 */	beqlr 
/* 803069C8  34 63 00 10 */	addic. r3, r3, 0x10
/* 803069CC  4D 82 00 20 */	beqlr 
/* 803069D0  98 83 00 03 */	stb r4, 3(r3)
/* 803069D4  4E 80 00 20 */	blr 
