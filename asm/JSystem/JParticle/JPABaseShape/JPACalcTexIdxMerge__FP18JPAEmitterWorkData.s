lbl_80277B78:
/* 80277B78  80 83 00 04 */	lwz r4, 4(r3)
/* 80277B7C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80277B80  80 84 00 00 */	lwz r4, 0(r4)
/* 80277B84  88 04 00 20 */	lbz r0, 0x20(r4)
/* 80277B88  80 63 00 00 */	lwz r3, 0(r3)
/* 80277B8C  98 03 01 11 */	stb r0, 0x111(r3)
/* 80277B90  4E 80 00 20 */	blr 
