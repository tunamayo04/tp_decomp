lbl_802F26E0:
/* 802F26E0  80 A5 00 00 */	lwz r5, 0(r5)
/* 802F26E4  54 80 10 3A */	slwi r0, r4, 2
/* 802F26E8  7C 63 02 14 */	add r3, r3, r0
/* 802F26EC  90 A3 00 5C */	stw r5, 0x5c(r3)
/* 802F26F0  4E 80 00 20 */	blr 
