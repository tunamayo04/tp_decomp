lbl_8065B034:
/* 8065B034  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 8065B038  7C 08 02 A6 */	mflr r0
/* 8065B03C  90 01 01 74 */	stw r0, 0x174(r1)
/* 8065B040  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 8065B044  F3 E1 01 68 */	psq_st f31, 360(r1), 0, 0 /* qr0 */
/* 8065B048  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 8065B04C  F3 C1 01 58 */	psq_st f30, 344(r1), 0, 0 /* qr0 */
/* 8065B050  39 61 01 50 */	addi r11, r1, 0x150
/* 8065B054  4B D0 71 60 */	b _savegpr_19
/* 8065B058  7C 76 1B 78 */	mr r22, r3
/* 8065B05C  3C 60 80 66 */	lis r3, lit_3987@ha
/* 8065B060  3B C3 2D B0 */	addi r30, r3, lit_3987@l
/* 8065B064  80 1E 00 9C */	lwz r0, 0x9c(r30)
/* 8065B068  90 01 00 18 */	stw r0, 0x18(r1)
/* 8065B06C  A0 1E 00 A0 */	lhz r0, 0xa0(r30)
/* 8065B070  B0 01 00 1C */	sth r0, 0x1c(r1)
/* 8065B074  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B078  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B07C  90 01 00 78 */	stw r0, 0x78(r1)
/* 8065B080  3B 01 00 7C */	addi r24, r1, 0x7c
/* 8065B084  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8065B088  3B 21 00 90 */	addi r25, r1, 0x90
/* 8065B08C  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8065B090  C0 16 04 D0 */	lfs f0, 0x4d0(r22)
/* 8065B094  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8065B098  C0 36 04 D4 */	lfs f1, 0x4d4(r22)
/* 8065B09C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8065B0A0  C0 16 04 D8 */	lfs f0, 0x4d8(r22)
/* 8065B0A4  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8065B0A8  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 8065B0AC  EC 01 00 2A */	fadds f0, f1, f0
/* 8065B0B0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8065B0B4  38 80 00 00 */	li r4, 0
/* 8065B0B8  38 61 00 0C */	addi r3, r1, 0xc
/* 8065B0BC  38 00 00 03 */	li r0, 3
/* 8065B0C0  7C 09 03 A6 */	mtctr r0
lbl_8065B0C4:
/* 8065B0C4  98 83 00 00 */	stb r4, 0(r3)
/* 8065B0C8  38 63 00 01 */	addi r3, r3, 1
/* 8065B0CC  42 00 FF F8 */	bdnz lbl_8065B0C4
/* 8065B0D0  C3 FE 00 A8 */	lfs f31, 0xa8(r30)
/* 8065B0D4  C3 DE 00 AC */	lfs f30, 0xac(r30)
/* 8065B0D8  7E C3 B3 78 */	mr r3, r22
/* 8065B0DC  FC 20 F8 90 */	fmr f1, f31
/* 8065B0E0  C0 5E 00 18 */	lfs f2, 0x18(r30)
/* 8065B0E4  48 00 09 4D */	bl checkCowIn__7daCow_cFff
/* 8065B0E8  2C 03 00 00 */	cmpwi r3, 0
/* 8065B0EC  41 82 00 0C */	beq lbl_8065B0F8
/* 8065B0F0  C3 FE 00 B0 */	lfs f31, 0xb0(r30)
/* 8065B0F4  C3 DE 00 B4 */	lfs f30, 0xb4(r30)
lbl_8065B0F8:
/* 8065B0F8  C0 36 05 2C */	lfs f1, 0x52c(r22)
/* 8065B0FC  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8065B100  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8065B104  41 82 02 B0 */	beq lbl_8065B3B4
/* 8065B108  3A E0 00 00 */	li r23, 0
/* 8065B10C  3A A0 00 00 */	li r21, 0
/* 8065B110  3A 80 00 00 */	li r20, 0
/* 8065B114  3A 60 00 00 */	li r19, 0
/* 8065B118  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8065B11C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8065B120  3B A3 0F 38 */	addi r29, r3, 0xf38
/* 8065B124  3B 81 00 B8 */	addi r28, r1, 0xb8
/* 8065B128  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 8065B12C  3B E3 9A 20 */	addi r31, r3, sincosTable___5JMath@l
/* 8065B130  3B 61 00 D4 */	addi r27, r1, 0xd4
lbl_8065B134:
/* 8065B134  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 8065B138  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8065B13C  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8065B140  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8065B144  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 8065B148  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8065B14C  2C 17 00 00 */	cmpwi r23, 0
/* 8065B150  40 82 00 48 */	bne lbl_8065B198
/* 8065B154  A8 16 0C 34 */	lha r0, 0xc34(r22)
/* 8065B158  38 61 00 18 */	addi r3, r1, 0x18
/* 8065B15C  7C 63 9A AE */	lhax r3, r3, r19
/* 8065B160  7C 00 1A 14 */	add r0, r0, r3
/* 8065B164  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8065B168  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 8065B16C  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 8065B170  7C 03 04 2E */	lfsx f0, r3, r0
/* 8065B174  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8065B178  EC 02 00 2A */	fadds f0, f2, f0
/* 8065B17C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8065B180  7C 63 02 14 */	add r3, r3, r0
/* 8065B184  C0 03 00 04 */	lfs f0, 4(r3)
/* 8065B188  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8065B18C  EC 01 00 2A */	fadds f0, f1, f0
/* 8065B190  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8065B194  48 00 00 44 */	b lbl_8065B1D8
lbl_8065B198:
/* 8065B198  A8 16 0C 34 */	lha r0, 0xc34(r22)
/* 8065B19C  38 61 00 18 */	addi r3, r1, 0x18
/* 8065B1A0  7C 63 9A AE */	lhax r3, r3, r19
/* 8065B1A4  7C 00 1A 14 */	add r0, r0, r3
/* 8065B1A8  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8065B1AC  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 8065B1B0  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 8065B1B4  7C 03 04 2E */	lfsx f0, r3, r0
/* 8065B1B8  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8065B1BC  EC 02 00 2A */	fadds f0, f2, f0
/* 8065B1C0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8065B1C4  7C 63 02 14 */	add r3, r3, r0
/* 8065B1C8  C0 03 00 04 */	lfs f0, 4(r3)
/* 8065B1CC  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8065B1D0  EC 01 00 2A */	fadds f0, f1, f0
/* 8065B1D4  D0 01 00 40 */	stfs f0, 0x40(r1)
lbl_8065B1D8:
/* 8065B1D8  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8065B1DC  4B A1 CA 8C */	b __ct__11dBgS_LinChkFv
/* 8065B1E0  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8065B1E4  38 81 00 44 */	addi r4, r1, 0x44
/* 8065B1E8  38 A1 00 38 */	addi r5, r1, 0x38
/* 8065B1EC  7E C6 B3 78 */	mr r6, r22
/* 8065B1F0  4B A1 CB 74 */	b Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c
/* 8065B1F4  7F A3 EB 78 */	mr r3, r29
/* 8065B1F8  38 81 00 A4 */	addi r4, r1, 0xa4
/* 8065B1FC  4B A1 91 B8 */	b LineCross__4cBgSFP11cBgS_LinChk
/* 8065B200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8065B204  41 82 01 8C */	beq lbl_8065B390
/* 8065B208  7F A3 EB 78 */	mr r3, r29
/* 8065B20C  7F 84 E3 78 */	mr r4, r28
/* 8065B210  3B 41 00 68 */	addi r26, r1, 0x68
/* 8065B214  7F 5A A2 14 */	add r26, r26, r20
/* 8065B218  7F 45 D3 78 */	mr r5, r26
/* 8065B21C  4B A1 95 28 */	b GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla
/* 8065B220  38 81 00 0C */	addi r4, r1, 0xc
/* 8065B224  7C 64 B9 AE */	stbx r3, r4, r23
/* 8065B228  C0 3F 60 00 */	lfs f1, 0x6000(r31)
/* 8065B22C  C0 1A 00 04 */	lfs f0, 4(r26)
/* 8065B230  FC 00 02 10 */	fabs f0, f0
/* 8065B234  FC 00 00 18 */	frsp f0, f0
/* 8065B238  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8065B23C  4C 40 13 82 */	cror 2, 0, 2
/* 8065B240  40 82 01 48 */	bne lbl_8065B388
/* 8065B244  38 61 00 2C */	addi r3, r1, 0x2c
/* 8065B248  38 96 04 D0 */	addi r4, r22, 0x4d0
/* 8065B24C  7F 65 DB 78 */	mr r5, r27
/* 8065B250  4B C0 B8 E4 */	b __mi__4cXyzCFRC3Vec
/* 8065B254  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8065B258  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 8065B25C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8065B260  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8065B264  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8065B268  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8065B26C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8065B270  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8065B274  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8065B278  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8065B27C  38 61 00 20 */	addi r3, r1, 0x20
/* 8065B280  4B CE BE B8 */	b PSVECSquareMag
/* 8065B284  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8065B288  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8065B28C  40 81 00 58 */	ble lbl_8065B2E4
/* 8065B290  FC 00 08 34 */	frsqrte f0, f1
/* 8065B294  C8 9E 00 68 */	lfd f4, 0x68(r30)
/* 8065B298  FC 44 00 32 */	fmul f2, f4, f0
/* 8065B29C  C8 7E 00 70 */	lfd f3, 0x70(r30)
/* 8065B2A0  FC 00 00 32 */	fmul f0, f0, f0
/* 8065B2A4  FC 01 00 32 */	fmul f0, f1, f0
/* 8065B2A8  FC 03 00 28 */	fsub f0, f3, f0
/* 8065B2AC  FC 02 00 32 */	fmul f0, f2, f0
/* 8065B2B0  FC 44 00 32 */	fmul f2, f4, f0
/* 8065B2B4  FC 00 00 32 */	fmul f0, f0, f0
/* 8065B2B8  FC 01 00 32 */	fmul f0, f1, f0
/* 8065B2BC  FC 03 00 28 */	fsub f0, f3, f0
/* 8065B2C0  FC 02 00 32 */	fmul f0, f2, f0
/* 8065B2C4  FC 44 00 32 */	fmul f2, f4, f0
/* 8065B2C8  FC 00 00 32 */	fmul f0, f0, f0
/* 8065B2CC  FC 01 00 32 */	fmul f0, f1, f0
/* 8065B2D0  FC 03 00 28 */	fsub f0, f3, f0
/* 8065B2D4  FC 02 00 32 */	fmul f0, f2, f0
/* 8065B2D8  FC 21 00 32 */	fmul f1, f1, f0
/* 8065B2DC  FC 20 08 18 */	frsp f1, f1
/* 8065B2E0  48 00 00 88 */	b lbl_8065B368
lbl_8065B2E4:
/* 8065B2E4  C8 1E 00 78 */	lfd f0, 0x78(r30)
/* 8065B2E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8065B2EC  40 80 00 10 */	bge lbl_8065B2FC
/* 8065B2F0  3C 60 80 45 */	lis r3, __float_nan@ha
/* 8065B2F4  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 8065B2F8  48 00 00 70 */	b lbl_8065B368
lbl_8065B2FC:
/* 8065B2FC  D0 21 00 08 */	stfs f1, 8(r1)
/* 8065B300  80 81 00 08 */	lwz r4, 8(r1)
/* 8065B304  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8065B308  3C 00 7F 80 */	lis r0, 0x7f80
/* 8065B30C  7C 03 00 00 */	cmpw r3, r0
/* 8065B310  41 82 00 14 */	beq lbl_8065B324
/* 8065B314  40 80 00 40 */	bge lbl_8065B354
/* 8065B318  2C 03 00 00 */	cmpwi r3, 0
/* 8065B31C  41 82 00 20 */	beq lbl_8065B33C
/* 8065B320  48 00 00 34 */	b lbl_8065B354
lbl_8065B324:
/* 8065B324  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8065B328  41 82 00 0C */	beq lbl_8065B334
/* 8065B32C  38 00 00 01 */	li r0, 1
/* 8065B330  48 00 00 28 */	b lbl_8065B358
lbl_8065B334:
/* 8065B334  38 00 00 02 */	li r0, 2
/* 8065B338  48 00 00 20 */	b lbl_8065B358
lbl_8065B33C:
/* 8065B33C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8065B340  41 82 00 0C */	beq lbl_8065B34C
/* 8065B344  38 00 00 05 */	li r0, 5
/* 8065B348  48 00 00 10 */	b lbl_8065B358
lbl_8065B34C:
/* 8065B34C  38 00 00 03 */	li r0, 3
/* 8065B350  48 00 00 08 */	b lbl_8065B358
lbl_8065B354:
/* 8065B354  38 00 00 04 */	li r0, 4
lbl_8065B358:
/* 8065B358  2C 00 00 01 */	cmpwi r0, 1
/* 8065B35C  40 82 00 0C */	bne lbl_8065B368
/* 8065B360  3C 60 80 45 */	lis r3, __float_nan@ha
/* 8065B364  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_8065B368:
/* 8065B368  38 61 00 50 */	addi r3, r1, 0x50
/* 8065B36C  7C 23 AD 2E */	stfsx f1, r3, r21
/* 8065B370  C0 3A 00 00 */	lfs f1, 0(r26)
/* 8065B374  C0 5A 00 08 */	lfs f2, 8(r26)
/* 8065B378  4B C0 C2 FC */	b cM_atan2s__Fff
/* 8065B37C  38 81 00 10 */	addi r4, r1, 0x10
/* 8065B380  7C 64 9B 2E */	sthx r3, r4, r19
/* 8065B384  48 00 00 0C */	b lbl_8065B390
lbl_8065B388:
/* 8065B388  38 00 00 00 */	li r0, 0
/* 8065B38C  7C 04 B9 AE */	stbx r0, r4, r23
lbl_8065B390:
/* 8065B390  38 61 00 A4 */	addi r3, r1, 0xa4
/* 8065B394  38 80 FF FF */	li r4, -1
/* 8065B398  4B A1 C9 44 */	b __dt__11dBgS_LinChkFv
/* 8065B39C  3A F7 00 01 */	addi r23, r23, 1
/* 8065B3A0  2C 17 00 03 */	cmpwi r23, 3
/* 8065B3A4  3A B5 00 04 */	addi r21, r21, 4
/* 8065B3A8  3A 94 00 14 */	addi r20, r20, 0x14
/* 8065B3AC  3A 73 00 02 */	addi r19, r19, 2
/* 8065B3B0  41 80 FD 84 */	blt lbl_8065B134
lbl_8065B3B4:
/* 8065B3B4  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 8065B3B8  D0 16 0C 6C */	stfs f0, 0xc6c(r22)
/* 8065B3BC  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8065B3C0  28 00 00 00 */	cmplwi r0, 0
/* 8065B3C4  41 82 00 20 */	beq lbl_8065B3E4
/* 8065B3C8  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 8065B3CC  C0 16 0C 6C */	lfs f0, 0xc6c(r22)
/* 8065B3D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8065B3D4  40 80 00 10 */	bge lbl_8065B3E4
/* 8065B3D8  D0 36 0C 6C */	stfs f1, 0xc6c(r22)
/* 8065B3DC  A8 01 00 10 */	lha r0, 0x10(r1)
/* 8065B3E0  B0 16 0C 70 */	sth r0, 0xc70(r22)
lbl_8065B3E4:
/* 8065B3E4  38 00 00 00 */	li r0, 0
/* 8065B3E8  98 16 0C A2 */	stb r0, 0xca2(r22)
/* 8065B3EC  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8065B3F0  28 00 00 00 */	cmplwi r0, 0
/* 8065B3F4  41 82 00 10 */	beq lbl_8065B404
/* 8065B3F8  88 16 0C A2 */	lbz r0, 0xca2(r22)
/* 8065B3FC  60 00 00 01 */	ori r0, r0, 1
/* 8065B400  98 16 0C A2 */	stb r0, 0xca2(r22)
lbl_8065B404:
/* 8065B404  8A 61 00 0D */	lbz r19, 0xd(r1)
/* 8065B408  28 13 00 00 */	cmplwi r19, 0
/* 8065B40C  41 82 00 10 */	beq lbl_8065B41C
/* 8065B410  88 16 0C A2 */	lbz r0, 0xca2(r22)
/* 8065B414  60 00 00 02 */	ori r0, r0, 2
/* 8065B418  98 16 0C A2 */	stb r0, 0xca2(r22)
lbl_8065B41C:
/* 8065B41C  8A 81 00 0E */	lbz r20, 0xe(r1)
/* 8065B420  28 14 00 00 */	cmplwi r20, 0
/* 8065B424  41 82 00 10 */	beq lbl_8065B434
/* 8065B428  88 16 0C A2 */	lbz r0, 0xca2(r22)
/* 8065B42C  60 00 00 04 */	ori r0, r0, 4
/* 8065B430  98 16 0C A2 */	stb r0, 0xca2(r22)
lbl_8065B434:
/* 8065B434  38 76 0C 54 */	addi r3, r22, 0xc54
/* 8065B438  48 00 78 79 */	bl func_80662CB0
/* 8065B43C  2C 03 00 00 */	cmpwi r3, 0
/* 8065B440  41 82 00 3C */	beq lbl_8065B47C
/* 8065B444  28 19 00 00 */	cmplwi r25, 0
/* 8065B448  41 82 00 10 */	beq lbl_8065B458
/* 8065B44C  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B450  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B454  90 01 00 A0 */	stw r0, 0xa0(r1)
lbl_8065B458:
/* 8065B458  28 18 00 00 */	cmplwi r24, 0
/* 8065B45C  41 82 00 10 */	beq lbl_8065B46C
/* 8065B460  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B464  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B468  90 01 00 8C */	stw r0, 0x8c(r1)
lbl_8065B46C:
/* 8065B46C  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B470  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B474  90 01 00 78 */	stw r0, 0x78(r1)
/* 8065B478  48 00 02 C0 */	b lbl_8065B738
lbl_8065B47C:
/* 8065B47C  28 13 00 00 */	cmplwi r19, 0
/* 8065B480  41 82 00 7C */	beq lbl_8065B4FC
/* 8065B484  28 14 00 00 */	cmplwi r20, 0
/* 8065B488  41 82 00 74 */	beq lbl_8065B4FC
/* 8065B48C  88 16 0C 61 */	lbz r0, 0xc61(r22)
/* 8065B490  2C 00 00 03 */	cmpwi r0, 3
/* 8065B494  41 82 00 24 */	beq lbl_8065B4B8
/* 8065B498  40 80 00 14 */	bge lbl_8065B4AC
/* 8065B49C  2C 00 00 01 */	cmpwi r0, 1
/* 8065B4A0  41 82 00 18 */	beq lbl_8065B4B8
/* 8065B4A4  40 80 00 20 */	bge lbl_8065B4C4
/* 8065B4A8  48 00 00 28 */	b lbl_8065B4D0
lbl_8065B4AC:
/* 8065B4AC  2C 00 00 05 */	cmpwi r0, 5
/* 8065B4B0  40 80 00 20 */	bge lbl_8065B4D0
/* 8065B4B4  48 00 00 10 */	b lbl_8065B4C4
lbl_8065B4B8:
/* 8065B4B8  38 00 00 03 */	li r0, 3
/* 8065B4BC  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B4C0  48 00 00 30 */	b lbl_8065B4F0
lbl_8065B4C4:
/* 8065B4C4  38 00 00 04 */	li r0, 4
/* 8065B4C8  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B4CC  48 00 00 24 */	b lbl_8065B4F0
lbl_8065B4D0:
/* 8065B4D0  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B4D4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8065B4D8  41 82 00 10 */	beq lbl_8065B4E8
/* 8065B4DC  38 00 00 04 */	li r0, 4
/* 8065B4E0  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B4E4  48 00 00 0C */	b lbl_8065B4F0
lbl_8065B4E8:
/* 8065B4E8  38 00 00 03 */	li r0, 3
/* 8065B4EC  98 16 0C 61 */	stb r0, 0xc61(r22)
lbl_8065B4F0:
/* 8065B4F0  38 00 00 0A */	li r0, 0xa
/* 8065B4F4  90 16 0C 54 */	stw r0, 0xc54(r22)
/* 8065B4F8  48 00 02 0C */	b lbl_8065B704
lbl_8065B4FC:
/* 8065B4FC  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8065B500  28 00 00 00 */	cmplwi r0, 0
/* 8065B504  41 82 00 C0 */	beq lbl_8065B5C4
/* 8065B508  28 13 00 00 */	cmplwi r19, 0
/* 8065B50C  41 82 00 28 */	beq lbl_8065B534
/* 8065B510  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B514  28 00 00 04 */	cmplwi r0, 4
/* 8065B518  41 80 00 10 */	blt lbl_8065B528
/* 8065B51C  38 00 00 02 */	li r0, 2
/* 8065B520  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B524  48 00 01 E0 */	b lbl_8065B704
lbl_8065B528:
/* 8065B528  38 00 00 04 */	li r0, 4
/* 8065B52C  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B530  48 00 01 D4 */	b lbl_8065B704
lbl_8065B534:
/* 8065B534  28 14 00 00 */	cmplwi r20, 0
/* 8065B538  41 82 00 28 */	beq lbl_8065B560
/* 8065B53C  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B540  28 00 00 04 */	cmplwi r0, 4
/* 8065B544  41 80 00 10 */	blt lbl_8065B554
/* 8065B548  38 00 00 01 */	li r0, 1
/* 8065B54C  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B550  48 00 01 B4 */	b lbl_8065B704
lbl_8065B554:
/* 8065B554  38 00 00 03 */	li r0, 3
/* 8065B558  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B55C  48 00 01 A8 */	b lbl_8065B704
lbl_8065B560:
/* 8065B560  A8 76 0C 34 */	lha r3, 0xc34(r22)
/* 8065B564  A8 01 00 10 */	lha r0, 0x10(r1)
/* 8065B568  7C 03 00 50 */	subf r0, r3, r0
/* 8065B56C  7C 13 07 34 */	extsh r19, r0
/* 8065B570  7E 63 9B 78 */	mr r3, r19
/* 8065B574  4B D0 9B 5C */	b abs
/* 8065B578  2C 03 78 00 */	cmpwi r3, 0x7800
/* 8065B57C  40 81 00 28 */	ble lbl_8065B5A4
/* 8065B580  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B584  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8065B588  41 82 00 10 */	beq lbl_8065B598
/* 8065B58C  38 00 00 04 */	li r0, 4
/* 8065B590  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B594  48 00 01 70 */	b lbl_8065B704
lbl_8065B598:
/* 8065B598  38 00 00 03 */	li r0, 3
/* 8065B59C  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B5A0  48 00 01 64 */	b lbl_8065B704
lbl_8065B5A4:
/* 8065B5A4  7E 60 07 35 */	extsh. r0, r19
/* 8065B5A8  40 81 00 10 */	ble lbl_8065B5B8
/* 8065B5AC  38 00 00 04 */	li r0, 4
/* 8065B5B0  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B5B4  48 00 01 50 */	b lbl_8065B704
lbl_8065B5B8:
/* 8065B5B8  38 00 00 03 */	li r0, 3
/* 8065B5BC  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B5C0  48 00 01 44 */	b lbl_8065B704
lbl_8065B5C4:
/* 8065B5C4  28 13 00 00 */	cmplwi r19, 0
/* 8065B5C8  41 82 00 70 */	beq lbl_8065B638
/* 8065B5CC  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B5D0  2C 00 00 02 */	cmpwi r0, 2
/* 8065B5D4  41 82 00 40 */	beq lbl_8065B614
/* 8065B5D8  40 80 00 10 */	bge lbl_8065B5E8
/* 8065B5DC  2C 00 00 00 */	cmpwi r0, 0
/* 8065B5E0  40 80 00 14 */	bge lbl_8065B5F4
/* 8065B5E4  48 00 00 30 */	b lbl_8065B614
lbl_8065B5E8:
/* 8065B5E8  2C 00 00 04 */	cmpwi r0, 4
/* 8065B5EC  40 80 00 28 */	bge lbl_8065B614
/* 8065B5F0  48 00 00 18 */	b lbl_8065B608
lbl_8065B5F4:
/* 8065B5F4  38 00 00 04 */	li r0, 4
/* 8065B5F8  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B5FC  38 00 00 0A */	li r0, 0xa
/* 8065B600  90 16 0C 54 */	stw r0, 0xc54(r22)
/* 8065B604  48 00 01 00 */	b lbl_8065B704
lbl_8065B608:
/* 8065B608  38 00 00 02 */	li r0, 2
/* 8065B60C  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B610  48 00 00 F4 */	b lbl_8065B704
lbl_8065B614:
/* 8065B614  38 00 00 00 */	li r0, 0
/* 8065B618  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B61C  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 8065B620  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8065B624  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8065B628  40 80 00 DC */	bge lbl_8065B704
/* 8065B62C  38 00 00 02 */	li r0, 2
/* 8065B630  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B634  48 00 00 D0 */	b lbl_8065B704
lbl_8065B638:
/* 8065B638  28 14 00 00 */	cmplwi r20, 0
/* 8065B63C  41 82 00 64 */	beq lbl_8065B6A0
/* 8065B640  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B644  2C 00 00 02 */	cmpwi r0, 2
/* 8065B648  41 82 00 28 */	beq lbl_8065B670
/* 8065B64C  40 80 00 30 */	bge lbl_8065B67C
/* 8065B650  2C 00 00 00 */	cmpwi r0, 0
/* 8065B654  40 80 00 08 */	bge lbl_8065B65C
/* 8065B658  48 00 00 24 */	b lbl_8065B67C
lbl_8065B65C:
/* 8065B65C  38 00 00 03 */	li r0, 3
/* 8065B660  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B664  38 00 00 0A */	li r0, 0xa
/* 8065B668  90 16 0C 54 */	stw r0, 0xc54(r22)
/* 8065B66C  48 00 00 98 */	b lbl_8065B704
lbl_8065B670:
/* 8065B670  38 00 00 01 */	li r0, 1
/* 8065B674  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B678  48 00 00 8C */	b lbl_8065B704
lbl_8065B67C:
/* 8065B67C  38 00 00 00 */	li r0, 0
/* 8065B680  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B684  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 8065B688  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8065B68C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8065B690  40 80 00 74 */	bge lbl_8065B704
/* 8065B694  38 00 00 01 */	li r0, 1
/* 8065B698  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B69C  48 00 00 68 */	b lbl_8065B704
lbl_8065B6A0:
/* 8065B6A0  88 16 0C 60 */	lbz r0, 0xc60(r22)
/* 8065B6A4  2C 00 00 02 */	cmpwi r0, 2
/* 8065B6A8  41 82 00 3C */	beq lbl_8065B6E4
/* 8065B6AC  40 80 00 14 */	bge lbl_8065B6C0
/* 8065B6B0  2C 00 00 00 */	cmpwi r0, 0
/* 8065B6B4  41 82 00 18 */	beq lbl_8065B6CC
/* 8065B6B8  40 80 00 20 */	bge lbl_8065B6D8
/* 8065B6BC  48 00 00 40 */	b lbl_8065B6FC
lbl_8065B6C0:
/* 8065B6C0  2C 00 00 04 */	cmpwi r0, 4
/* 8065B6C4  40 80 00 38 */	bge lbl_8065B6FC
/* 8065B6C8  48 00 00 28 */	b lbl_8065B6F0
lbl_8065B6CC:
/* 8065B6CC  38 00 00 03 */	li r0, 3
/* 8065B6D0  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B6D4  48 00 00 30 */	b lbl_8065B704
lbl_8065B6D8:
/* 8065B6D8  38 00 00 04 */	li r0, 4
/* 8065B6DC  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B6E0  48 00 00 24 */	b lbl_8065B704
lbl_8065B6E4:
/* 8065B6E4  38 00 00 01 */	li r0, 1
/* 8065B6E8  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B6EC  48 00 00 18 */	b lbl_8065B704
lbl_8065B6F0:
/* 8065B6F0  38 00 00 02 */	li r0, 2
/* 8065B6F4  98 16 0C 61 */	stb r0, 0xc61(r22)
/* 8065B6F8  48 00 00 0C */	b lbl_8065B704
lbl_8065B6FC:
/* 8065B6FC  38 00 00 00 */	li r0, 0
/* 8065B700  98 16 0C 61 */	stb r0, 0xc61(r22)
lbl_8065B704:
/* 8065B704  28 19 00 00 */	cmplwi r25, 0
/* 8065B708  41 82 00 10 */	beq lbl_8065B718
/* 8065B70C  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B710  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B714  90 01 00 A0 */	stw r0, 0xa0(r1)
lbl_8065B718:
/* 8065B718  28 18 00 00 */	cmplwi r24, 0
/* 8065B71C  41 82 00 10 */	beq lbl_8065B72C
/* 8065B720  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B724  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B728  90 01 00 8C */	stw r0, 0x8c(r1)
lbl_8065B72C:
/* 8065B72C  3C 60 80 66 */	lis r3, __vt__8cM3dGPla@ha
/* 8065B730  38 03 34 4C */	addi r0, r3, __vt__8cM3dGPla@l
/* 8065B734  90 01 00 78 */	stw r0, 0x78(r1)
lbl_8065B738:
/* 8065B738  E3 E1 01 68 */	psq_l f31, 360(r1), 0, 0 /* qr0 */
/* 8065B73C  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 8065B740  E3 C1 01 58 */	psq_l f30, 344(r1), 0, 0 /* qr0 */
/* 8065B744  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 8065B748  39 61 01 50 */	addi r11, r1, 0x150
/* 8065B74C  4B D0 6A B4 */	b _restgpr_19
/* 8065B750  80 01 01 74 */	lwz r0, 0x174(r1)
/* 8065B754  7C 08 03 A6 */	mtlr r0
/* 8065B758  38 21 01 70 */	addi r1, r1, 0x170
/* 8065B75C  4E 80 00 20 */	blr 
