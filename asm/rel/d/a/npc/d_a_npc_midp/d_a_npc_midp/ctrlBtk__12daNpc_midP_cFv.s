lbl_80A71860:
/* 80A71860  80 C3 09 6C */	lwz r6, 0x96c(r3)
/* 80A71864  28 06 00 00 */	cmplwi r6, 0
/* 80A71868  41 82 01 2C */	beq lbl_80A71994
/* 80A7186C  80 03 09 70 */	lwz r0, 0x970(r3)
/* 80A71870  28 00 00 00 */	cmplwi r0, 0
/* 80A71874  41 82 01 20 */	beq lbl_80A71994
/* 80A71878  88 03 0E 29 */	lbz r0, 0xe29(r3)
/* 80A7187C  28 00 00 00 */	cmplwi r0, 0
/* 80A71880  41 82 00 DC */	beq lbl_80A7195C
/* 80A71884  80 03 06 58 */	lwz r0, 0x658(r3)
/* 80A71888  28 00 00 00 */	cmplwi r0, 0
/* 80A7188C  41 82 00 D0 */	beq lbl_80A7195C
/* 80A71890  A8 03 0C D6 */	lha r0, 0xcd6(r3)
/* 80A71894  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80A71898  7C 00 1E 70 */	srawi r0, r0, 3
/* 80A7189C  54 00 18 38 */	slwi r0, r0, 3
/* 80A718A0  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha
/* 80A718A4  38 A4 9A 20 */	addi r5, r4, sincosTable___5JMath@l
/* 80A718A8  7C 45 04 2E */	lfsx f2, r5, r0
/* 80A718AC  3C 80 80 A7 */	lis r4, lit_4551@ha
/* 80A718B0  C0 24 3A 70 */	lfs f1, lit_4551@l(r4)
/* 80A718B4  C0 03 0D E4 */	lfs f0, 0xde4(r3)
/* 80A718B8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80A718BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80A718C0  D0 06 00 FC */	stfs f0, 0xfc(r6)
/* 80A718C4  A8 03 0C D4 */	lha r0, 0xcd4(r3)
/* 80A718C8  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80A718CC  7C 25 04 2E */	lfsx f1, r5, r0
/* 80A718D0  C0 03 0D E0 */	lfs f0, 0xde0(r3)
/* 80A718D4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80A718D8  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80A718DC  D0 04 01 00 */	stfs f0, 0x100(r4)
/* 80A718E0  A8 03 0C D6 */	lha r0, 0xcd6(r3)
/* 80A718E4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80A718E8  7C 25 04 2E */	lfsx f1, r5, r0
/* 80A718EC  C0 03 0D E4 */	lfs f0, 0xde4(r3)
/* 80A718F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80A718F4  80 83 09 70 */	lwz r4, 0x970(r3)
/* 80A718F8  D0 04 00 FC */	stfs f0, 0xfc(r4)
/* 80A718FC  A8 03 0C D4 */	lha r0, 0xcd4(r3)
/* 80A71900  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80A71904  7C 25 04 2E */	lfsx f1, r5, r0
/* 80A71908  C0 03 0D E0 */	lfs f0, 0xde0(r3)
/* 80A7190C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80A71910  80 83 09 70 */	lwz r4, 0x970(r3)
/* 80A71914  D0 04 01 00 */	stfs f0, 0x100(r4)
/* 80A71918  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80A7191C  28 00 00 00 */	cmplwi r0, 0
/* 80A71920  41 82 00 20 */	beq lbl_80A71940
/* 80A71924  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80A71928  98 04 01 05 */	stb r0, 0x105(r4)
/* 80A7192C  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80A71930  80 83 09 70 */	lwz r4, 0x970(r3)
/* 80A71934  98 04 01 05 */	stb r0, 0x105(r4)
/* 80A71938  38 00 00 00 */	li r0, 0
/* 80A7193C  98 03 0E 2A */	stb r0, 0xe2a(r3)
lbl_80A71940:
/* 80A71940  38 00 00 01 */	li r0, 1
/* 80A71944  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80A71948  98 04 01 04 */	stb r0, 0x104(r4)
/* 80A7194C  80 63 09 70 */	lwz r3, 0x970(r3)
/* 80A71950  98 03 01 04 */	stb r0, 0x104(r3)
/* 80A71954  38 60 00 01 */	li r3, 1
/* 80A71958  4E 80 00 20 */	blr 
lbl_80A7195C:
/* 80A7195C  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80A71960  28 00 00 00 */	cmplwi r0, 0
/* 80A71964  41 82 00 1C */	beq lbl_80A71980
/* 80A71968  98 06 01 05 */	stb r0, 0x105(r6)
/* 80A7196C  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80A71970  80 83 09 70 */	lwz r4, 0x970(r3)
/* 80A71974  98 04 01 05 */	stb r0, 0x105(r4)
/* 80A71978  38 00 00 00 */	li r0, 0
/* 80A7197C  98 03 0E 2A */	stb r0, 0xe2a(r3)
lbl_80A71980:
/* 80A71980  38 00 00 00 */	li r0, 0
/* 80A71984  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80A71988  98 04 01 04 */	stb r0, 0x104(r4)
/* 80A7198C  80 63 09 70 */	lwz r3, 0x970(r3)
/* 80A71990  98 03 01 04 */	stb r0, 0x104(r3)
lbl_80A71994:
/* 80A71994  38 60 00 00 */	li r3, 0
/* 80A71998  4E 80 00 20 */	blr 
