lbl_80282DD8:
/* 80282DD8  90 83 00 44 */	stw r4, 0x44(r3)
/* 80282DDC  90 A3 00 48 */	stw r5, 0x48(r3)
/* 80282DE0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80282DE4  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80282DE8  80 83 00 44 */	lwz r4, 0x44(r3)
/* 80282DEC  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80282DF0  54 00 18 38 */	slwi r0, r0, 3
/* 80282DF4  7C 04 02 14 */	add r0, r4, r0
/* 80282DF8  90 03 00 50 */	stw r0, 0x50(r3)
/* 80282DFC  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80282E00  90 03 00 54 */	stw r0, 0x54(r3)
/* 80282E04  4E 80 00 20 */	blr 
