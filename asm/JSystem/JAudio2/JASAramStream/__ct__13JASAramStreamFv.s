lbl_802963A8:
/* 802963A8  38 C0 00 00 */	li r6, 0
/* 802963AC  90 C3 00 A8 */	stw r6, 0xa8(r3)
/* 802963B0  98 C3 00 AC */	stb r6, 0xac(r3)
/* 802963B4  98 C3 00 AD */	stb r6, 0xad(r3)
/* 802963B8  98 C3 00 AE */	stb r6, 0xae(r3)
/* 802963BC  90 C3 00 B0 */	stw r6, 0xb0(r3)
/* 802963C0  90 C3 00 B4 */	stw r6, 0xb4(r3)
/* 802963C4  90 C3 00 B8 */	stw r6, 0xb8(r3)
/* 802963C8  90 C3 00 BC */	stw r6, 0xbc(r3)
/* 802963CC  98 C3 00 C0 */	stb r6, 0xc0(r3)
/* 802963D0  90 C3 00 C4 */	stw r6, 0xc4(r3)
/* 802963D4  C0 02 BC 10 */	lfs f0, lit_390(r2)
/* 802963D8  D0 03 00 C8 */	stfs f0, 0xc8(r3)
/* 802963DC  90 C3 01 08 */	stw r6, 0x108(r3)
/* 802963E0  90 C3 01 0C */	stw r6, 0x10c(r3)
/* 802963E4  90 C3 01 10 */	stw r6, 0x110(r3)
/* 802963E8  98 C3 01 14 */	stb r6, 0x114(r3)
/* 802963EC  90 C3 01 18 */	stw r6, 0x118(r3)
/* 802963F0  90 C3 01 2C */	stw r6, 0x12c(r3)
/* 802963F4  90 C3 01 48 */	stw r6, 0x148(r3)
/* 802963F8  90 C3 01 4C */	stw r6, 0x14c(r3)
/* 802963FC  90 C3 01 50 */	stw r6, 0x150(r3)
/* 80296400  90 C3 01 54 */	stw r6, 0x154(r3)
/* 80296404  B0 C3 01 58 */	sth r6, 0x158(r3)
/* 80296408  B0 C3 01 5A */	sth r6, 0x15a(r3)
/* 8029640C  90 C3 01 5C */	stw r6, 0x15c(r3)
/* 80296410  90 C3 01 60 */	stw r6, 0x160(r3)
/* 80296414  90 C3 01 64 */	stw r6, 0x164(r3)
/* 80296418  98 C3 01 68 */	stb r6, 0x168(r3)
/* 8029641C  90 C3 01 6C */	stw r6, 0x16c(r3)
/* 80296420  90 C3 01 70 */	stw r6, 0x170(r3)
/* 80296424  C0 42 BC 14 */	lfs f2, lit_391(r2)
/* 80296428  D0 43 01 74 */	stfs f2, 0x174(r3)
/* 8029642C  D0 43 01 78 */	stfs f2, 0x178(r3)
/* 80296430  38 80 00 00 */	li r4, 0
/* 80296434  7C C5 33 78 */	mr r5, r6
/* 80296438  C0 22 BC 18 */	lfs f1, lit_392(r2)
/* 8029643C  C0 02 BC 10 */	lfs f0, lit_390(r2)
/* 80296440  38 00 00 06 */	li r0, 6
/* 80296444  7C 09 03 A6 */	mtctr r0
lbl_80296448:
/* 80296448  7D 03 2A 14 */	add r8, r3, r5
/* 8029644C  90 C8 00 90 */	stw r6, 0x90(r8)
/* 80296450  7C E3 22 14 */	add r7, r3, r4
/* 80296454  B0 C7 01 30 */	sth r6, 0x130(r7)
/* 80296458  B0 C7 01 3C */	sth r6, 0x13c(r7)
/* 8029645C  D0 48 01 7C */	stfs f2, 0x17c(r8)
/* 80296460  D0 28 01 94 */	stfs f1, 0x194(r8)
/* 80296464  D0 08 01 AC */	stfs f0, 0x1ac(r8)
/* 80296468  D0 08 01 C4 */	stfs f0, 0x1c4(r8)
/* 8029646C  38 84 00 02 */	addi r4, r4, 2
/* 80296470  38 A5 00 04 */	addi r5, r5, 4
/* 80296474  42 00 FF D4 */	bdnz lbl_80296448
/* 80296478  38 80 00 00 */	li r4, 0
/* 8029647C  38 A0 00 00 */	li r5, 0
/* 80296480  38 00 00 06 */	li r0, 6
/* 80296484  7C 09 03 A6 */	mtctr r0
lbl_80296488:
/* 80296488  38 04 01 DC */	addi r0, r4, 0x1dc
/* 8029648C  7C A3 03 2E */	sthx r5, r3, r0
/* 80296490  38 84 00 02 */	addi r4, r4, 2
/* 80296494  42 00 FF F4 */	bdnz lbl_80296488
/* 80296498  4E 80 00 20 */	blr 
