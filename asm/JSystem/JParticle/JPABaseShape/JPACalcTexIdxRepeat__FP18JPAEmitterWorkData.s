lbl_80277A50:
/* 80277A50  80 83 00 04 */	lwz r4, 4(r3)
/* 80277A54  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80277A58  80 A6 00 08 */	lwz r5, 8(r6)
/* 80277A5C  80 E3 00 00 */	lwz r7, 0(r3)
/* 80277A60  80 87 01 00 */	lwz r4, 0x100(r7)
/* 80277A64  80 66 00 00 */	lwz r3, 0(r6)
/* 80277A68  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 80277A6C  7C 04 1B 96 */	divwu r0, r4, r3
/* 80277A70  7C 00 19 D6 */	mullw r0, r0, r3
/* 80277A74  7C 00 20 50 */	subf r0, r0, r4
/* 80277A78  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80277A7C  7C 05 00 AE */	lbzx r0, r5, r0
/* 80277A80  98 07 01 11 */	stb r0, 0x111(r7)
/* 80277A84  4E 80 00 20 */	blr 
