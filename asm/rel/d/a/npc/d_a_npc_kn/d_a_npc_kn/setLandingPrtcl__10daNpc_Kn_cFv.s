lbl_80A37558:
/* 80A37558  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80A3755C  D0 03 16 9C */	stfs f0, 0x169c(r3)
/* 80A37560  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80A37564  D0 03 16 A0 */	stfs f0, 0x16a0(r3)
/* 80A37568  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 80A3756C  D0 03 16 A4 */	stfs f0, 0x16a4(r3)
/* 80A37570  A8 03 0D AC */	lha r0, 0xdac(r3)
/* 80A37574  B0 03 16 A8 */	sth r0, 0x16a8(r3)
/* 80A37578  A8 03 0D AE */	lha r0, 0xdae(r3)
/* 80A3757C  B0 03 16 AA */	sth r0, 0x16aa(r3)
/* 80A37580  A8 03 0D B0 */	lha r0, 0xdb0(r3)
/* 80A37584  B0 03 16 AC */	sth r0, 0x16ac(r3)
/* 80A37588  38 00 00 01 */	li r0, 1
/* 80A3758C  98 03 16 98 */	stb r0, 0x1698(r3)
/* 80A37590  38 60 00 01 */	li r3, 1
/* 80A37594  4E 80 00 20 */	blr 
