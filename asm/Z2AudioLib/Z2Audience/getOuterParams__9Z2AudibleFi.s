lbl_802BBED0:
/* 802BBED0  7C 60 1B 78 */	mr r0, r3
/* 802BBED4  1C 64 00 38 */	mulli r3, r4, 0x38
/* 802BBED8  38 63 00 2C */	addi r3, r3, 0x2c
/* 802BBEDC  7C 60 1A 14 */	add r3, r0, r3
/* 802BBEE0  4E 80 00 20 */	blr 
