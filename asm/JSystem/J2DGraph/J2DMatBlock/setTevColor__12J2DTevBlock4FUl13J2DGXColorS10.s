lbl_802F22D4:
/* 802F22D4  A8 05 00 00 */	lha r0, 0(r5)
/* 802F22D8  54 84 18 38 */	slwi r4, r4, 3
/* 802F22DC  7C 63 22 14 */	add r3, r3, r4
/* 802F22E0  B0 03 00 1E */	sth r0, 0x1e(r3)
/* 802F22E4  A8 05 00 02 */	lha r0, 2(r5)
/* 802F22E8  B0 03 00 20 */	sth r0, 0x20(r3)
/* 802F22EC  A8 05 00 04 */	lha r0, 4(r5)
/* 802F22F0  B0 03 00 22 */	sth r0, 0x22(r3)
/* 802F22F4  A8 05 00 06 */	lha r0, 6(r5)
/* 802F22F8  B0 03 00 24 */	sth r0, 0x24(r3)
/* 802F22FC  4E 80 00 20 */	blr 
