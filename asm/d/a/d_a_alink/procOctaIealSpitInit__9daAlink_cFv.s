lbl_801058A0:
/* 801058A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801058A4  7C 08 02 A6 */	mflr r0
/* 801058A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801058AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801058B0  93 C1 00 08 */	stw r30, 8(r1)
/* 801058B4  7C 7F 1B 78 */	mr r31, r3
/* 801058B8  80 03 31 A0 */	lwz r0, 0x31a0(r3)
/* 801058BC  54 1E 03 5A */	rlwinm r30, r0, 0, 0xd, 0xd
/* 801058C0  38 80 00 DD */	li r4, 0xdd
/* 801058C4  4B FB C6 A9 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 801058C8  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 801058CC  54 00 02 11 */	rlwinm. r0, r0, 0, 8, 8
/* 801058D0  41 82 00 10 */	beq lbl_801058E0
/* 801058D4  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 801058D8  54 00 02 4E */	rlwinm r0, r0, 0, 9, 7
/* 801058DC  90 1F 05 70 */	stw r0, 0x570(r31)
lbl_801058E0:
/* 801058E0  7F E3 FB 78 */	mr r3, r31
/* 801058E4  38 80 01 6F */	li r4, 0x16f
/* 801058E8  4B FA 76 99 */	bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 801058EC  3C 60 80 43 */	lis r3, Zero__4cXyz@ha
/* 801058F0  C4 03 0C F4 */	lfsu f0, Zero__4cXyz@l(r3)
/* 801058F4  D0 1F 37 50 */	stfs f0, 0x3750(r31)
/* 801058F8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801058FC  D0 1F 37 54 */	stfs f0, 0x3754(r31)
/* 80105900  C0 03 00 08 */	lfs f0, 8(r3)
/* 80105904  D0 1F 37 58 */	stfs f0, 0x3758(r31)
/* 80105908  38 00 00 00 */	li r0, 0
/* 8010590C  B0 1F 30 80 */	sth r0, 0x3080(r31)
/* 80105910  B0 1F 30 00 */	sth r0, 0x3000(r31)
/* 80105914  C0 1F 34 0C */	lfs f0, 0x340c(r31)
/* 80105918  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 8010591C  C0 1F 34 08 */	lfs f0, 0x3408(r31)
/* 80105920  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 80105924  C0 22 93 A0 */	lfs f1, lit_9054(r2)
/* 80105928  C0 1F 34 08 */	lfs f0, 0x3408(r31)
/* 8010592C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80105930  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 80105934  7F E3 FB 78 */	mr r3, r31
/* 80105938  80 9F 31 8C */	lwz r4, 0x318c(r31)
/* 8010593C  4B FD 1B 3D */	bl setDamagePointNormal__9daAlink_cFi
/* 80105940  C0 3F 34 78 */	lfs f1, 0x3478(r31)
/* 80105944  C0 02 92 B8 */	lfs f0, lit_6040(r2)
/* 80105948  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8010594C  40 80 00 08 */	bge lbl_80105954
/* 80105950  D0 1F 34 78 */	stfs f0, 0x3478(r31)
lbl_80105954:
/* 80105954  28 1E 00 00 */	cmplwi r30, 0
/* 80105958  41 82 00 18 */	beq lbl_80105970
/* 8010595C  38 00 00 0F */	li r0, 0xf
/* 80105960  98 1F 2F 99 */	stb r0, 0x2f99(r31)
/* 80105964  C0 02 95 E0 */	lfs f0, lit_28016(r2)
/* 80105968  D0 1F 33 B0 */	stfs f0, 0x33b0(r31)
/* 8010596C  48 00 00 1C */	b lbl_80105988
lbl_80105970:
/* 80105970  38 00 00 10 */	li r0, 0x10
/* 80105974  98 1F 2F 99 */	stb r0, 0x2f99(r31)
/* 80105978  C0 3F 04 D4 */	lfs f1, 0x4d4(r31)
/* 8010597C  C0 02 95 E4 */	lfs f0, lit_28017(r2)
/* 80105980  EC 01 00 2A */	fadds f0, f1, f0
/* 80105984  D0 1F 04 D4 */	stfs f0, 0x4d4(r31)
lbl_80105988:
/* 80105988  3C 60 80 42 */	lis r3, l_waitBaseAnime@ha
/* 8010598C  C4 03 55 14 */	lfsu f0, l_waitBaseAnime@l(r3)
/* 80105990  D0 1F 35 88 */	stfs f0, 0x3588(r31)
/* 80105994  C0 03 00 04 */	lfs f0, 4(r3)
/* 80105998  D0 1F 35 8C */	stfs f0, 0x358c(r31)
/* 8010599C  C0 03 00 08 */	lfs f0, 8(r3)
/* 801059A0  D0 1F 35 90 */	stfs f0, 0x3590(r31)
/* 801059A4  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 801059A8  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 801059AC  90 1F 05 70 */	stw r0, 0x570(r31)
/* 801059B0  A8 1F 2F FE */	lha r0, 0x2ffe(r31)
/* 801059B4  B0 1F 04 DE */	sth r0, 0x4de(r31)
/* 801059B8  C0 3F 33 98 */	lfs f1, 0x3398(r31)
/* 801059BC  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 801059C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801059C4  40 81 00 18 */	ble lbl_801059DC
/* 801059C8  A8 7F 04 DE */	lha r3, 0x4de(r31)
/* 801059CC  3C 63 00 01 */	addis r3, r3, 1
/* 801059D0  38 03 80 00 */	addi r0, r3, -32768
/* 801059D4  B0 1F 04 E6 */	sth r0, 0x4e6(r31)
/* 801059D8  48 00 00 0C */	b lbl_801059E4
lbl_801059DC:
/* 801059DC  A8 1F 04 DE */	lha r0, 0x4de(r31)
/* 801059E0  B0 1F 04 E6 */	sth r0, 0x4e6(r31)
lbl_801059E4:
/* 801059E4  38 60 00 01 */	li r3, 1
/* 801059E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801059EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801059F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801059F4  7C 08 03 A6 */	mtlr r0
/* 801059F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801059FC  4E 80 00 20 */	blr 
