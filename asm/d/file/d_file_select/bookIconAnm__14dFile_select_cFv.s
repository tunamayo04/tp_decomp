lbl_801848A0:
/* 801848A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801848A4  80 83 01 DC */	lwz r4, 0x1dc(r3)
/* 801848A8  38 04 00 02 */	addi r0, r4, 2
/* 801848AC  90 03 01 DC */	stw r0, 0x1dc(r3)
/* 801848B0  80 83 01 D8 */	lwz r4, 0x1d8(r3)
/* 801848B4  A8 04 00 06 */	lha r0, 6(r4)
/* 801848B8  80 83 01 DC */	lwz r4, 0x1dc(r3)
/* 801848BC  7C 04 00 00 */	cmpw r4, r0
/* 801848C0  41 80 00 0C */	blt lbl_801848CC
/* 801848C4  7C 00 20 50 */	subf r0, r0, r4
/* 801848C8  90 03 01 DC */	stw r0, 0x1dc(r3)
lbl_801848CC:
/* 801848CC  80 03 01 DC */	lwz r0, 0x1dc(r3)
/* 801848D0  C8 22 9F 38 */	lfd f1, lit_4342(r2)
/* 801848D4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801848D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801848DC  3C 00 43 30 */	lis r0, 0x4330
/* 801848E0  90 01 00 08 */	stw r0, 8(r1)
/* 801848E4  C8 01 00 08 */	lfd f0, 8(r1)
/* 801848E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 801848EC  80 83 01 D8 */	lwz r4, 0x1d8(r3)
/* 801848F0  D0 04 00 08 */	stfs f0, 8(r4)
/* 801848F4  80 83 01 E4 */	lwz r4, 0x1e4(r3)
/* 801848F8  38 04 00 02 */	addi r0, r4, 2
/* 801848FC  90 03 01 E4 */	stw r0, 0x1e4(r3)
/* 80184900  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80184904  A8 04 00 06 */	lha r0, 6(r4)
/* 80184908  80 83 01 E4 */	lwz r4, 0x1e4(r3)
/* 8018490C  7C 04 00 00 */	cmpw r4, r0
/* 80184910  41 80 00 0C */	blt lbl_8018491C
/* 80184914  7C 00 20 50 */	subf r0, r0, r4
/* 80184918  90 03 01 E4 */	stw r0, 0x1e4(r3)
lbl_8018491C:
/* 8018491C  80 03 01 E4 */	lwz r0, 0x1e4(r3)
/* 80184920  C8 22 9F 38 */	lfd f1, lit_4342(r2)
/* 80184924  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80184928  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018492C  3C 00 43 30 */	lis r0, 0x4330
/* 80184930  90 01 00 08 */	stw r0, 8(r1)
/* 80184934  C8 01 00 08 */	lfd f0, 8(r1)
/* 80184938  EC 00 08 28 */	fsubs f0, f0, f1
/* 8018493C  80 83 01 E0 */	lwz r4, 0x1e0(r3)
/* 80184940  D0 04 00 08 */	stfs f0, 8(r4)
/* 80184944  80 83 01 EC */	lwz r4, 0x1ec(r3)
/* 80184948  38 04 00 02 */	addi r0, r4, 2
/* 8018494C  90 03 01 EC */	stw r0, 0x1ec(r3)
/* 80184950  80 83 01 E8 */	lwz r4, 0x1e8(r3)
/* 80184954  A8 04 00 06 */	lha r0, 6(r4)
/* 80184958  80 83 01 EC */	lwz r4, 0x1ec(r3)
/* 8018495C  7C 04 00 00 */	cmpw r4, r0
/* 80184960  41 80 00 0C */	blt lbl_8018496C
/* 80184964  7C 00 20 50 */	subf r0, r0, r4
/* 80184968  90 03 01 EC */	stw r0, 0x1ec(r3)
lbl_8018496C:
/* 8018496C  80 03 01 EC */	lwz r0, 0x1ec(r3)
/* 80184970  C8 22 9F 38 */	lfd f1, lit_4342(r2)
/* 80184974  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80184978  90 01 00 0C */	stw r0, 0xc(r1)
/* 8018497C  3C 00 43 30 */	lis r0, 0x4330
/* 80184980  90 01 00 08 */	stw r0, 8(r1)
/* 80184984  C8 01 00 08 */	lfd f0, 8(r1)
/* 80184988  EC 00 08 28 */	fsubs f0, f0, f1
/* 8018498C  80 63 01 E8 */	lwz r3, 0x1e8(r3)
/* 80184990  D0 03 00 08 */	stfs f0, 8(r3)
/* 80184994  38 21 00 10 */	addi r1, r1, 0x10
/* 80184998  4E 80 00 20 */	blr 
