lbl_80848204:
/* 80848204  3C 80 80 85 */	lis r4, lit_3697@ha
/* 80848208  C0 04 8E 54 */	lfs f0, lit_3697@l(r4)
/* 8084820C  80 83 06 10 */	lwz r4, 0x610(r3)
/* 80848210  D0 04 00 FC */	stfs f0, 0xfc(r4)
/* 80848214  80 83 06 14 */	lwz r4, 0x614(r3)
/* 80848218  D0 04 00 FC */	stfs f0, 0xfc(r4)
/* 8084821C  80 83 06 10 */	lwz r4, 0x610(r3)
/* 80848220  D0 04 01 00 */	stfs f0, 0x100(r4)
/* 80848224  80 63 06 14 */	lwz r3, 0x614(r3)
/* 80848228  D0 03 01 00 */	stfs f0, 0x100(r3)
/* 8084822C  3C 60 80 85 */	lis r3, struct_80849010+0x0@ha
/* 80848230  8C 03 90 10 */	lbzu r0, struct_80849010+0x0@l(r3)
/* 80848234  28 00 00 00 */	cmplwi r0, 0
/* 80848238  4D 82 00 20 */	beqlr 
/* 8084823C  38 00 00 00 */	li r0, 0
/* 80848240  98 03 00 00 */	stb r0, 0(r3)
/* 80848244  38 00 00 03 */	li r0, 3
/* 80848248  3C 60 80 85 */	lis r3, struct_80849010+0x1@ha
/* 8084824C  98 03 90 11 */	stb r0, struct_80849010+0x1@l(r3)
/* 80848250  4E 80 00 20 */	blr 
