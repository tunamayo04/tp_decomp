lbl_802772BC:
/* 802772BC  80 A3 00 04 */	lwz r5, 4(r3)
/* 802772C0  80 C5 00 1C */	lwz r6, 0x1c(r5)
/* 802772C4  88 A4 00 95 */	lbz r5, 0x95(r4)
/* 802772C8  80 C6 00 00 */	lwz r6, 0(r6)
/* 802772CC  88 06 00 2F */	lbz r0, 0x2f(r6)
/* 802772D0  7C A5 00 38 */	and r5, r5, r0
/* 802772D4  A8 04 00 80 */	lha r0, 0x80(r4)
/* 802772D8  7C E0 2A 14 */	add r7, r0, r5
/* 802772DC  A8 A6 00 24 */	lha r5, 0x24(r6)
/* 802772E0  7C 87 2B D6 */	divw r4, r7, r5
/* 802772E4  7C 04 29 D6 */	mullw r0, r4, r5
/* 802772E8  7C C0 38 50 */	subf r6, r0, r7
/* 802772EC  54 84 07 FE */	clrlwi r4, r4, 0x1f
/* 802772F0  54 C0 08 3C */	slwi r0, r6, 1
/* 802772F4  7C 00 28 50 */	subf r0, r0, r5
/* 802772F8  7C 04 01 D6 */	mullw r0, r4, r0
/* 802772FC  7C 06 02 14 */	add r0, r6, r0
/* 80277300  B0 03 02 14 */	sth r0, 0x214(r3)
/* 80277304  4E 80 00 20 */	blr 
