lbl_802C328C:
/* 802C328C  98 83 00 C7 */	stb r4, 0xc7(r3)
/* 802C3290  20 05 00 01 */	subfic r0, r5, 1
/* 802C3294  7C 00 00 34 */	cntlzw r0, r0
/* 802C3298  54 04 D9 7E */	srwi r4, r0, 5
/* 802C329C  88 03 00 CB */	lbz r0, 0xcb(r3)
/* 802C32A0  50 80 1F 38 */	rlwimi r0, r4, 3, 0x1c, 0x1c
/* 802C32A4  98 03 00 CB */	stb r0, 0xcb(r3)
/* 802C32A8  88 03 00 C6 */	lbz r0, 0xc6(r3)
/* 802C32AC  28 00 00 00 */	cmplwi r0, 0
/* 802C32B0  41 82 00 2C */	beq lbl_802C32DC
/* 802C32B4  88 03 00 C7 */	lbz r0, 0xc7(r3)
/* 802C32B8  28 00 00 00 */	cmplwi r0, 0
/* 802C32BC  41 82 00 20 */	beq lbl_802C32DC
/* 802C32C0  88 83 00 CB */	lbz r4, 0xcb(r3)
/* 802C32C4  54 80 EF FF */	rlwinm. r0, r4, 0x1d, 0x1f, 0x1f
/* 802C32C8  40 82 00 14 */	bne lbl_802C32DC
/* 802C32CC  38 00 00 01 */	li r0, 1
/* 802C32D0  50 04 17 7A */	rlwimi r4, r0, 2, 0x1d, 0x1d
/* 802C32D4  98 83 00 CB */	stb r4, 0xcb(r3)
/* 802C32D8  4E 80 00 20 */	blr 
lbl_802C32DC:
/* 802C32DC  38 80 00 00 */	li r4, 0
/* 802C32E0  88 03 00 CB */	lbz r0, 0xcb(r3)
/* 802C32E4  50 80 17 7A */	rlwimi r0, r4, 2, 0x1d, 0x1d
/* 802C32E8  98 03 00 CB */	stb r0, 0xcb(r3)
/* 802C32EC  4E 80 00 20 */	blr 
