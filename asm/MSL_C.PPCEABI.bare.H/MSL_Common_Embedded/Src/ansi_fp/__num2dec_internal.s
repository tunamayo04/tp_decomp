lbl_803632C8:
/* 803632C8  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 803632CC  7C 08 02 A6 */	mflr r0
/* 803632D0  C8 02 CC 60 */	lfd f0, lit_824(r2)
/* 803632D4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 803632D8  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803632DC  DB E1 00 A8 */	stfd f31, 0xa8(r1)
/* 803632E0  BF 41 00 90 */	stmw r26, 0x90(r1)
/* 803632E4  7C 7E 1B 78 */	mr r30, r3
/* 803632E8  D8 21 00 08 */	stfd f1, 8(r1)
/* 803632EC  80 01 00 08 */	lwz r0, 8(r1)
/* 803632F0  54 00 0F FE */	srwi r0, r0, 0x1f
/* 803632F4  7C 1F 07 74 */	extsb r31, r0
/* 803632F8  40 82 00 20 */	bne lbl_80363318
/* 803632FC  9B FE 00 00 */	stb r31, 0(r30)
/* 80363300  38 60 00 00 */	li r3, 0
/* 80363304  38 00 00 01 */	li r0, 1
/* 80363308  B0 7E 00 02 */	sth r3, 2(r30)
/* 8036330C  98 1E 00 04 */	stb r0, 4(r30)
/* 80363310  98 7E 00 05 */	stb r3, 5(r30)
/* 80363314  48 00 03 50 */	b lbl_80363664
lbl_80363318:
/* 80363318  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8036331C  3C 00 7F F0 */	lis r0, 0x7ff0
/* 80363320  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80363324  54 83 00 56 */	rlwinm r3, r4, 0, 1, 0xb
/* 80363328  7C 03 00 00 */	cmpw r3, r0
/* 8036332C  41 82 00 14 */	beq lbl_80363340
/* 80363330  40 80 00 58 */	bge lbl_80363388
/* 80363334  2C 03 00 00 */	cmpwi r3, 0
/* 80363338  41 82 00 2C */	beq lbl_80363364
/* 8036333C  48 00 00 4C */	b lbl_80363388
lbl_80363340:
/* 80363340  54 80 03 3F */	clrlwi. r0, r4, 0xc
/* 80363344  40 82 00 10 */	bne lbl_80363354
/* 80363348  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8036334C  2C 00 00 00 */	cmpwi r0, 0
/* 80363350  41 82 00 0C */	beq lbl_8036335C
lbl_80363354:
/* 80363354  38 00 00 01 */	li r0, 1
/* 80363358  48 00 00 34 */	b lbl_8036338C
lbl_8036335C:
/* 8036335C  38 00 00 02 */	li r0, 2
/* 80363360  48 00 00 2C */	b lbl_8036338C
lbl_80363364:
/* 80363364  54 80 03 3F */	clrlwi. r0, r4, 0xc
/* 80363368  40 82 00 10 */	bne lbl_80363378
/* 8036336C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80363370  2C 00 00 00 */	cmpwi r0, 0
/* 80363374  41 82 00 0C */	beq lbl_80363380
lbl_80363378:
/* 80363378  38 00 00 05 */	li r0, 5
/* 8036337C  48 00 00 10 */	b lbl_8036338C
lbl_80363380:
/* 80363380  38 00 00 03 */	li r0, 3
/* 80363384  48 00 00 08 */	b lbl_8036338C
lbl_80363388:
/* 80363388  38 00 00 04 */	li r0, 4
lbl_8036338C:
/* 8036338C  2C 00 00 02 */	cmpwi r0, 2
/* 80363390  41 81 00 A8 */	bgt lbl_80363438
/* 80363394  C8 01 00 08 */	lfd f0, 8(r1)
/* 80363398  38 60 00 00 */	li r3, 0
/* 8036339C  9B FE 00 00 */	stb r31, 0(r30)
/* 803633A0  3C 00 7F F0 */	lis r0, 0x7ff0
/* 803633A4  38 80 00 01 */	li r4, 1
/* 803633A8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803633AC  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 803633B0  B0 7E 00 02 */	sth r3, 2(r30)
/* 803633B4  54 A3 00 56 */	rlwinm r3, r5, 0, 1, 0xb
/* 803633B8  7C 03 00 00 */	cmpw r3, r0
/* 803633BC  98 9E 00 04 */	stb r4, 4(r30)
/* 803633C0  41 82 00 14 */	beq lbl_803633D4
/* 803633C4  40 80 00 58 */	bge lbl_8036341C
/* 803633C8  2C 03 00 00 */	cmpwi r3, 0
/* 803633CC  41 82 00 2C */	beq lbl_803633F8
/* 803633D0  48 00 00 4C */	b lbl_8036341C
lbl_803633D4:
/* 803633D4  54 A0 03 3F */	clrlwi. r0, r5, 0xc
/* 803633D8  40 82 00 10 */	bne lbl_803633E8
/* 803633DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803633E0  2C 00 00 00 */	cmpwi r0, 0
/* 803633E4  41 82 00 0C */	beq lbl_803633F0
lbl_803633E8:
/* 803633E8  38 00 00 01 */	li r0, 1
/* 803633EC  48 00 00 34 */	b lbl_80363420
lbl_803633F0:
/* 803633F0  38 00 00 02 */	li r0, 2
/* 803633F4  48 00 00 2C */	b lbl_80363420
lbl_803633F8:
/* 803633F8  54 A0 03 3F */	clrlwi. r0, r5, 0xc
/* 803633FC  40 82 00 10 */	bne lbl_8036340C
/* 80363400  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80363404  2C 00 00 00 */	cmpwi r0, 0
/* 80363408  41 82 00 0C */	beq lbl_80363414
lbl_8036340C:
/* 8036340C  38 00 00 05 */	li r0, 5
/* 80363410  48 00 00 10 */	b lbl_80363420
lbl_80363414:
/* 80363414  38 00 00 03 */	li r0, 3
/* 80363418  48 00 00 08 */	b lbl_80363420
lbl_8036341C:
/* 8036341C  38 00 00 04 */	li r0, 4
lbl_80363420:
/* 80363420  2C 00 00 01 */	cmpwi r0, 1
/* 80363424  38 00 00 49 */	li r0, 0x49
/* 80363428  40 82 00 08 */	bne lbl_80363430
/* 8036342C  38 00 00 4E */	li r0, 0x4e
lbl_80363430:
/* 80363430  98 1E 00 05 */	stb r0, 5(r30)
/* 80363434  48 00 02 30 */	b lbl_80363664
lbl_80363438:
/* 80363438  7F E0 07 75 */	extsb. r0, r31
/* 8036343C  41 82 00 0C */	beq lbl_80363448
/* 80363440  FC 00 08 50 */	fneg f0, f1
/* 80363444  D8 01 00 08 */	stfd f0, 8(r1)
lbl_80363448:
/* 80363448  C8 21 00 08 */	lfd f1, 8(r1)
/* 8036344C  38 61 00 10 */	addi r3, r1, 0x10
/* 80363450  48 00 8D F5 */	bl frexp
/* 80363454  FF E0 08 90 */	fmr f31, f1
/* 80363458  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8036345C  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 80363460  28 08 00 00 */	cmplwi r8, 0
/* 80363464  41 82 00 70 */	beq lbl_803634D4
/* 80363468  38 A0 00 10 */	li r5, 0x10
/* 8036346C  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000FFFF@ha */
/* 80363470  38 E0 00 00 */	li r7, 0
/* 80363474  38 C0 00 20 */	li r6, 0x20
/* 80363478  7C A4 2B 78 */	mr r4, r5
/* 8036347C  38 63 FF FF */	addi r3, r3, 0xFFFF /* 0x0000FFFF@l */
/* 80363480  48 00 00 48 */	b lbl_803634C8
lbl_80363484:
/* 80363484  7D 00 18 39 */	and. r0, r8, r3
/* 80363488  40 82 00 14 */	bne lbl_8036349C
/* 8036348C  7C E7 22 14 */	add r7, r7, r4
/* 80363490  7D 08 24 30 */	srw r8, r8, r4
/* 80363494  7C C4 30 50 */	subf r6, r4, r6
/* 80363498  48 00 00 0C */	b lbl_803634A4
lbl_8036349C:
/* 8036349C  28 03 00 01 */	cmplwi r3, 1
/* 803634A0  41 82 00 A8 */	beq lbl_80363548
lbl_803634A4:
/* 803634A4  2C 05 00 01 */	cmpwi r5, 1
/* 803634A8  40 81 00 10 */	ble lbl_803634B8
/* 803634AC  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 803634B0  7C 00 2A 14 */	add r0, r0, r5
/* 803634B4  7C 05 0E 70 */	srawi r5, r0, 1
lbl_803634B8:
/* 803634B8  28 03 00 01 */	cmplwi r3, 1
/* 803634BC  40 81 00 0C */	ble lbl_803634C8
/* 803634C0  7C 63 2C 30 */	srw r3, r3, r5
/* 803634C4  7C 85 20 50 */	subf r4, r5, r4
lbl_803634C8:
/* 803634C8  2C 06 00 00 */	cmpwi r6, 0
/* 803634CC  40 82 FF B8 */	bne lbl_80363484
/* 803634D0  48 00 00 78 */	b lbl_80363548
lbl_803634D4:
/* 803634D4  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803634D8  38 A0 00 10 */	li r5, 0x10
/* 803634DC  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000FFFF@ha */
/* 803634E0  38 E0 00 00 */	li r7, 0
/* 803634E4  7C A4 2B 78 */	mr r4, r5
/* 803634E8  64 08 00 10 */	oris r8, r0, 0x10
/* 803634EC  38 63 FF FF */	addi r3, r3, 0xFFFF /* 0x0000FFFF@l */
/* 803634F0  38 C0 00 20 */	li r6, 0x20
/* 803634F4  48 00 00 48 */	b lbl_8036353C
lbl_803634F8:
/* 803634F8  7D 00 18 39 */	and. r0, r8, r3
/* 803634FC  40 82 00 14 */	bne lbl_80363510
/* 80363500  7C E7 22 14 */	add r7, r7, r4
/* 80363504  7D 08 24 30 */	srw r8, r8, r4
/* 80363508  7C C4 30 50 */	subf r6, r4, r6
/* 8036350C  48 00 00 0C */	b lbl_80363518
lbl_80363510:
/* 80363510  28 03 00 01 */	cmplwi r3, 1
/* 80363514  41 82 00 30 */	beq lbl_80363544
lbl_80363518:
/* 80363518  2C 05 00 01 */	cmpwi r5, 1
/* 8036351C  40 81 00 10 */	ble lbl_8036352C
/* 80363520  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 80363524  7C 00 2A 14 */	add r0, r0, r5
/* 80363528  7C 05 0E 70 */	srawi r5, r0, 1
lbl_8036352C:
/* 8036352C  28 03 00 01 */	cmplwi r3, 1
/* 80363530  40 81 00 0C */	ble lbl_8036353C
/* 80363534  7C 63 2C 30 */	srw r3, r3, r5
/* 80363538  7C 85 20 50 */	subf r4, r5, r4
lbl_8036353C:
/* 8036353C  2C 06 00 00 */	cmpwi r6, 0
/* 80363540  40 82 FF B8 */	bne lbl_803634F8
lbl_80363544:
/* 80363544  38 E7 00 20 */	addi r7, r7, 0x20
lbl_80363548:
/* 80363548  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8036354C  23 47 00 35 */	subfic r26, r7, 0x35
/* 80363550  38 61 00 38 */	addi r3, r1, 0x38
/* 80363554  7C 9A 00 50 */	subf r4, r26, r0
/* 80363558  48 00 01 25 */	bl __two_exp
/* 8036355C  FC 20 F8 90 */	fmr f1, f31
/* 80363560  7F 43 D3 78 */	mr r3, r26
/* 80363564  48 00 8D 6D */	bl ldexp
/* 80363568  38 61 00 30 */	addi r3, r1, 0x30
/* 8036356C  48 00 8F 29 */	bl modf
/* 80363570  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80363574  4B FF F1 FD */	bl __cvt_dbl_usll
/* 80363578  3B 80 00 00 */	li r28, 0
/* 8036357C  7C 7B 1B 78 */	mr r27, r3
/* 80363580  7C 9A 23 78 */	mr r26, r4
/* 80363584  9B 81 00 64 */	stb r28, 0x64(r1)
/* 80363588  7F 43 E2 78 */	xor r3, r26, r28
/* 8036358C  7F 60 E2 78 */	xor r0, r27, r28
/* 80363590  7C 60 03 79 */	or. r0, r3, r0
/* 80363594  40 82 00 18 */	bne lbl_803635AC
/* 80363598  38 00 00 01 */	li r0, 1
/* 8036359C  B3 81 00 66 */	sth r28, 0x66(r1)
/* 803635A0  98 01 00 68 */	stb r0, 0x68(r1)
/* 803635A4  9B 81 00 69 */	stb r28, 0x69(r1)
/* 803635A8  48 00 00 A8 */	b lbl_80363650
lbl_803635AC:
/* 803635AC  9B 81 00 68 */	stb r28, 0x68(r1)
/* 803635B0  3B A1 00 64 */	addi r29, r1, 0x64
/* 803635B4  48 00 00 48 */	b lbl_803635FC
lbl_803635B8:
/* 803635B8  7F 63 DB 78 */	mr r3, r27
/* 803635BC  7F 44 D3 78 */	mr r4, r26
/* 803635C0  38 A0 00 00 */	li r5, 0
/* 803635C4  38 C0 00 0A */	li r6, 0xa
/* 803635C8  4B FF EE 95 */	bl __mod2u
/* 803635CC  89 01 00 68 */	lbz r8, 0x68(r1)
/* 803635D0  7F 63 DB 78 */	mr r3, r27
/* 803635D4  38 A0 00 00 */	li r5, 0
/* 803635D8  38 C0 00 0A */	li r6, 0xa
/* 803635DC  38 E8 00 01 */	addi r7, r8, 1
/* 803635E0  38 08 00 05 */	addi r0, r8, 5
/* 803635E4  98 E1 00 68 */	stb r7, 0x68(r1)
/* 803635E8  7C 9D 01 AE */	stbx r4, r29, r0
/* 803635EC  7F 44 D3 78 */	mr r4, r26
/* 803635F0  4B FF EC 49 */	bl __div2u
/* 803635F4  7C 9A 23 78 */	mr r26, r4
/* 803635F8  7C 7B 1B 78 */	mr r27, r3
lbl_803635FC:
/* 803635FC  7F 43 E2 78 */	xor r3, r26, r28
/* 80363600  7F 60 E2 78 */	xor r0, r27, r28
/* 80363604  7C 60 03 79 */	or. r0, r3, r0
/* 80363608  40 82 FF B0 */	bne lbl_803635B8
/* 8036360C  88 61 00 68 */	lbz r3, 0x68(r1)
/* 80363610  38 01 00 64 */	addi r0, r1, 0x64
/* 80363614  38 A1 00 69 */	addi r5, r1, 0x69
/* 80363618  38 83 00 05 */	addi r4, r3, 5
/* 8036361C  7C 80 22 14 */	add r4, r0, r4
/* 80363620  48 00 00 18 */	b lbl_80363638
lbl_80363624:
/* 80363624  88 65 00 00 */	lbz r3, 0(r5)
/* 80363628  88 04 00 00 */	lbz r0, 0(r4)
/* 8036362C  98 05 00 00 */	stb r0, 0(r5)
/* 80363630  38 A5 00 01 */	addi r5, r5, 1
/* 80363634  98 64 00 00 */	stb r3, 0(r4)
lbl_80363638:
/* 80363638  38 84 FF FF */	addi r4, r4, -1
/* 8036363C  7C 05 20 40 */	cmplw r5, r4
/* 80363640  41 80 FF E4 */	blt lbl_80363624
/* 80363644  88 61 00 68 */	lbz r3, 0x68(r1)
/* 80363648  38 03 FF FF */	addi r0, r3, -1
/* 8036364C  B0 01 00 66 */	sth r0, 0x66(r1)
lbl_80363650:
/* 80363650  7F C3 F3 78 */	mr r3, r30
/* 80363654  38 81 00 64 */	addi r4, r1, 0x64
/* 80363658  38 A1 00 38 */	addi r5, r1, 0x38
/* 8036365C  48 00 17 A5 */	bl __timesdec
/* 80363660  9B FE 00 00 */	stb r31, 0(r30)
lbl_80363664:
/* 80363664  CB E1 00 A8 */	lfd f31, 0xa8(r1)
/* 80363668  BB 41 00 90 */	lmw r26, 0x90(r1)
/* 8036366C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80363670  7C 08 03 A6 */	mtlr r0
/* 80363674  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80363678  4E 80 00 20 */	blr 
