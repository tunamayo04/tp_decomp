lbl_8024B0F0:
/* 8024B0F0  A0 06 00 00 */	lhz r0, 0(r6)
/* 8024B0F4  B0 04 00 00 */	sth r0, 0(r4)
/* 8024B0F8  A0 06 00 02 */	lhz r0, 2(r6)
/* 8024B0FC  B0 05 00 00 */	sth r0, 0(r5)
/* 8024B100  80 66 00 00 */	lwz r3, 0(r6)
/* 8024B104  4E 80 00 20 */	blr 
