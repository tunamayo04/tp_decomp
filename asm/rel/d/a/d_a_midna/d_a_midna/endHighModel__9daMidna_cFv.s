lbl_804C0134:
/* 804C0134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804C0138  7C 08 02 A6 */	mflr r0
/* 804C013C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804C0140  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804C0144  7C 7F 1B 78 */	mr r31, r3
/* 804C0148  80 83 06 B4 */	lwz r4, 0x6b4(r3)
/* 804C014C  28 04 00 00 */	cmplwi r4, 0
/* 804C0150  41 82 00 14 */	beq lbl_804C0164
/* 804C0154  80 7F 06 B0 */	lwz r3, 0x6b0(r31)
/* 804C0158  80 63 00 04 */	lwz r3, 4(r3)
/* 804C015C  38 63 00 58 */	addi r3, r3, 0x58
/* 804C0160  4B E6 F6 54 */	b removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
lbl_804C0164:
/* 804C0164  80 1F 08 90 */	lwz r0, 0x890(r31)
/* 804C0168  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 804C016C  90 1F 08 90 */	stw r0, 0x890(r31)
/* 804C0170  38 00 00 00 */	li r0, 0
/* 804C0174  90 1F 06 C0 */	stw r0, 0x6c0(r31)
/* 804C0178  90 1F 06 B4 */	stw r0, 0x6b4(r31)
/* 804C017C  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C0180  28 03 00 00 */	cmplwi r3, 0
/* 804C0184  41 82 00 A0 */	beq lbl_804C0224
/* 804C0188  80 63 00 04 */	lwz r3, 4(r3)
/* 804C018C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C0190  80 63 00 24 */	lwz r3, 0x24(r3)
/* 804C0194  80 63 00 08 */	lwz r3, 8(r3)
/* 804C0198  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C019C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 804C01A0  90 03 00 0C */	stw r0, 0xc(r3)
/* 804C01A4  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C01A8  80 63 00 04 */	lwz r3, 4(r3)
/* 804C01AC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C01B0  80 63 00 04 */	lwz r3, 4(r3)
/* 804C01B4  80 63 00 08 */	lwz r3, 8(r3)
/* 804C01B8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C01BC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 804C01C0  90 03 00 0C */	stw r0, 0xc(r3)
/* 804C01C4  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C01C8  80 63 00 04 */	lwz r3, 4(r3)
/* 804C01CC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C01D0  80 63 00 08 */	lwz r3, 8(r3)
/* 804C01D4  80 63 00 08 */	lwz r3, 8(r3)
/* 804C01D8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C01DC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 804C01E0  90 03 00 0C */	stw r0, 0xc(r3)
/* 804C01E4  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C01E8  80 63 00 04 */	lwz r3, 4(r3)
/* 804C01EC  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C01F0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 804C01F4  80 63 00 08 */	lwz r3, 8(r3)
/* 804C01F8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C01FC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 804C0200  90 03 00 0C */	stw r0, 0xc(r3)
/* 804C0204  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C0208  80 63 00 04 */	lwz r3, 4(r3)
/* 804C020C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C0210  80 63 00 20 */	lwz r3, 0x20(r3)
/* 804C0214  80 63 00 08 */	lwz r3, 8(r3)
/* 804C0218  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C021C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 804C0220  90 03 00 0C */	stw r0, 0xc(r3)
lbl_804C0224:
/* 804C0224  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804C0228  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804C022C  7C 08 03 A6 */	mtlr r0
/* 804C0230  38 21 00 10 */	addi r1, r1, 0x10
/* 804C0234  4E 80 00 20 */	blr 
