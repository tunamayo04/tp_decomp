lbl_802E87F8:
/* 802E87F8  38 80 00 00 */	li r4, 0
/* 802E87FC  90 83 08 28 */	stw r4, 0x828(r3)
/* 802E8800  90 83 08 2C */	stw r4, 0x82c(r3)
/* 802E8804  90 83 08 24 */	stw r4, 0x824(r3)
/* 802E8808  38 03 00 1F */	addi r0, r3, 0x1f
/* 802E880C  54 00 00 34 */	rlwinm r0, r0, 0, 0, 0x1a
/* 802E8810  90 03 08 20 */	stw r0, 0x820(r3)
/* 802E8814  98 83 08 30 */	stb r4, 0x830(r3)
/* 802E8818  4E 80 00 20 */	blr 
