lbl_807735A8:
/* 807735A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 807735AC  7C 08 02 A6 */	mflr r0
/* 807735B0  90 01 00 64 */	stw r0, 0x64(r1)
/* 807735B4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 807735B8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 807735BC  39 61 00 50 */	addi r11, r1, 0x50
/* 807735C0  4B BE EC 1C */	b _savegpr_29
/* 807735C4  7C 7D 1B 78 */	mr r29, r3
/* 807735C8  3C 80 80 78 */	lis r4, lit_4018@ha
/* 807735CC  3B E4 9D FC */	addi r31, r4, lit_4018@l
/* 807735D0  C3 FF 00 04 */	lfs f31, 4(r31)
/* 807735D4  3B C0 40 00 */	li r30, 0x4000
/* 807735D8  A8 03 05 B4 */	lha r0, 0x5b4(r3)
/* 807735DC  2C 00 00 02 */	cmpwi r0, 2
/* 807735E0  41 82 02 68 */	beq lbl_80773848
/* 807735E4  40 80 00 14 */	bge lbl_807735F8
/* 807735E8  2C 00 00 00 */	cmpwi r0, 0
/* 807735EC  41 82 00 24 */	beq lbl_80773610
/* 807735F0  40 80 00 6C */	bge lbl_8077365C
/* 807735F4  48 00 03 38 */	b lbl_8077392C
lbl_807735F8:
/* 807735F8  2C 00 00 0B */	cmpwi r0, 0xb
/* 807735FC  41 82 02 D0 */	beq lbl_807738CC
/* 80773600  40 80 03 2C */	bge lbl_8077392C
/* 80773604  2C 00 00 0A */	cmpwi r0, 0xa
/* 80773608  40 80 02 5C */	bge lbl_80773864
/* 8077360C  48 00 03 20 */	b lbl_8077392C
lbl_80773610:
/* 80773610  38 80 00 4D */	li r4, 0x4d
/* 80773614  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80773618  38 A0 00 02 */	li r5, 2
/* 8077361C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80773620  4B FF 88 61 */	bl anm_init__FP11e_rdy_classifUcf
/* 80773624  38 00 00 01 */	li r0, 1
/* 80773628  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8077362C  80 7D 0B CC */	lwz r3, 0xbcc(r29)
/* 80773630  80 63 00 08 */	lwz r3, 8(r3)
/* 80773634  88 1D 0B D0 */	lbz r0, 0xbd0(r29)
/* 80773638  7C 00 07 74 */	extsb r0, r0
/* 8077363C  54 00 20 36 */	slwi r0, r0, 4
/* 80773640  7C 63 02 14 */	add r3, r3, r0
/* 80773644  C0 03 00 04 */	lfs f0, 4(r3)
/* 80773648  D0 1D 05 BC */	stfs f0, 0x5bc(r29)
/* 8077364C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80773650  D0 1D 05 C0 */	stfs f0, 0x5c0(r29)
/* 80773654  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80773658  D0 1D 05 C4 */	stfs f0, 0x5c4(r29)
lbl_8077365C:
/* 8077365C  3C 60 80 78 */	lis r3, l_HIO@ha
/* 80773660  38 63 A8 84 */	addi r3, r3, l_HIO@l
/* 80773664  C3 E3 00 10 */	lfs f31, 0x10(r3)
/* 80773668  38 61 00 18 */	addi r3, r1, 0x18
/* 8077366C  38 9D 05 BC */	addi r4, r29, 0x5bc
/* 80773670  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80773674  4B AF 34 C0 */	b __mi__4cXyzCFRC3Vec
/* 80773678  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8077367C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80773680  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80773684  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80773688  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8077368C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80773690  4B AF 3F E4 */	b cM_atan2s__Fff
/* 80773694  B0 7D 05 C8 */	sth r3, 0x5c8(r29)
/* 80773698  38 61 00 24 */	addi r3, r1, 0x24
/* 8077369C  4B BD 3A 9C */	b PSVECSquareMag
/* 807736A0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 807736A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807736A8  40 81 00 58 */	ble lbl_80773700
/* 807736AC  FC 00 08 34 */	frsqrte f0, f1
/* 807736B0  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 807736B4  FC 44 00 32 */	fmul f2, f4, f0
/* 807736B8  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 807736BC  FC 00 00 32 */	fmul f0, f0, f0
/* 807736C0  FC 01 00 32 */	fmul f0, f1, f0
/* 807736C4  FC 03 00 28 */	fsub f0, f3, f0
/* 807736C8  FC 02 00 32 */	fmul f0, f2, f0
/* 807736CC  FC 44 00 32 */	fmul f2, f4, f0
/* 807736D0  FC 00 00 32 */	fmul f0, f0, f0
/* 807736D4  FC 01 00 32 */	fmul f0, f1, f0
/* 807736D8  FC 03 00 28 */	fsub f0, f3, f0
/* 807736DC  FC 02 00 32 */	fmul f0, f2, f0
/* 807736E0  FC 44 00 32 */	fmul f2, f4, f0
/* 807736E4  FC 00 00 32 */	fmul f0, f0, f0
/* 807736E8  FC 01 00 32 */	fmul f0, f1, f0
/* 807736EC  FC 03 00 28 */	fsub f0, f3, f0
/* 807736F0  FC 02 00 32 */	fmul f0, f2, f0
/* 807736F4  FC 21 00 32 */	fmul f1, f1, f0
/* 807736F8  FC 20 08 18 */	frsp f1, f1
/* 807736FC  48 00 00 88 */	b lbl_80773784
lbl_80773700:
/* 80773700  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 80773704  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80773708  40 80 00 10 */	bge lbl_80773718
/* 8077370C  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80773710  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 80773714  48 00 00 70 */	b lbl_80773784
lbl_80773718:
/* 80773718  D0 21 00 08 */	stfs f1, 8(r1)
/* 8077371C  80 81 00 08 */	lwz r4, 8(r1)
/* 80773720  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80773724  3C 00 7F 80 */	lis r0, 0x7f80
/* 80773728  7C 03 00 00 */	cmpw r3, r0
/* 8077372C  41 82 00 14 */	beq lbl_80773740
/* 80773730  40 80 00 40 */	bge lbl_80773770
/* 80773734  2C 03 00 00 */	cmpwi r3, 0
/* 80773738  41 82 00 20 */	beq lbl_80773758
/* 8077373C  48 00 00 34 */	b lbl_80773770
lbl_80773740:
/* 80773740  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80773744  41 82 00 0C */	beq lbl_80773750
/* 80773748  38 00 00 01 */	li r0, 1
/* 8077374C  48 00 00 28 */	b lbl_80773774
lbl_80773750:
/* 80773750  38 00 00 02 */	li r0, 2
/* 80773754  48 00 00 20 */	b lbl_80773774
lbl_80773758:
/* 80773758  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8077375C  41 82 00 0C */	beq lbl_80773768
/* 80773760  38 00 00 05 */	li r0, 5
/* 80773764  48 00 00 10 */	b lbl_80773774
lbl_80773768:
/* 80773768  38 00 00 03 */	li r0, 3
/* 8077376C  48 00 00 08 */	b lbl_80773774
lbl_80773770:
/* 80773770  38 00 00 04 */	li r0, 4
lbl_80773774:
/* 80773774  2C 00 00 01 */	cmpwi r0, 1
/* 80773778  40 82 00 0C */	bne lbl_80773784
/* 8077377C  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80773780  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_80773784:
/* 80773784  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 80773788  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8077378C  40 80 01 A0 */	bge lbl_8077392C
/* 80773790  88 7D 0B D0 */	lbz r3, 0xbd0(r29)
/* 80773794  88 1D 0B D1 */	lbz r0, 0xbd1(r29)
/* 80773798  7C 03 02 14 */	add r0, r3, r0
/* 8077379C  98 1D 0B D0 */	stb r0, 0xbd0(r29)
/* 807737A0  88 BD 0B D0 */	lbz r5, 0xbd0(r29)
/* 807737A4  7C A3 07 74 */	extsb r3, r5
/* 807737A8  80 9D 0B CC */	lwz r4, 0xbcc(r29)
/* 807737AC  A0 04 00 00 */	lhz r0, 0(r4)
/* 807737B0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 807737B4  7C 03 00 00 */	cmpw r3, r0
/* 807737B8  41 80 00 38 */	blt lbl_807737F0
/* 807737BC  88 04 00 05 */	lbz r0, 5(r4)
/* 807737C0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807737C4  41 82 00 10 */	beq lbl_807737D4
/* 807737C8  38 00 00 00 */	li r0, 0
/* 807737CC  98 1D 0B D0 */	stb r0, 0xbd0(r29)
/* 807737D0  48 00 00 34 */	b lbl_80773804
lbl_807737D4:
/* 807737D4  38 00 FF FF */	li r0, -1
/* 807737D8  98 1D 0B D1 */	stb r0, 0xbd1(r29)
/* 807737DC  80 7D 0B CC */	lwz r3, 0xbcc(r29)
/* 807737E0  A0 63 00 00 */	lhz r3, 0(r3)
/* 807737E4  38 03 FF FE */	addi r0, r3, -2
/* 807737E8  98 1D 0B D0 */	stb r0, 0xbd0(r29)
/* 807737EC  48 00 00 18 */	b lbl_80773804
lbl_807737F0:
/* 807737F0  7C A0 07 75 */	extsb. r0, r5
/* 807737F4  40 80 00 10 */	bge lbl_80773804
/* 807737F8  38 00 00 01 */	li r0, 1
/* 807737FC  98 1D 0B D1 */	stb r0, 0xbd1(r29)
/* 80773800  98 1D 0B D0 */	stb r0, 0xbd0(r29)
lbl_80773804:
/* 80773804  38 00 00 02 */	li r0, 2
/* 80773808  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8077380C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80773810  4B AF 41 44 */	b cM_rndF__Ff
/* 80773814  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80773818  EC 00 08 2A */	fadds f0, f0, f1
/* 8077381C  FC 00 00 1E */	fctiwz f0, f0
/* 80773820  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80773824  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80773828  B0 1D 0A 60 */	sth r0, 0xa60(r29)
/* 8077382C  7F A3 EB 78 */	mr r3, r29
/* 80773830  38 80 00 1E */	li r4, 0x1e
/* 80773834  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80773838  38 A0 00 02 */	li r5, 2
/* 8077383C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80773840  4B FF 86 41 */	bl anm_init__FP11e_rdy_classifUcf
/* 80773844  48 00 00 E8 */	b lbl_8077392C
lbl_80773848:
/* 80773848  3B C0 60 00 */	li r30, 0x6000
/* 8077384C  A8 1D 0A 60 */	lha r0, 0xa60(r29)
/* 80773850  2C 00 00 00 */	cmpwi r0, 0
/* 80773854  40 82 00 D8 */	bne lbl_8077392C
/* 80773858  38 00 00 00 */	li r0, 0
/* 8077385C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80773860  48 00 00 CC */	b lbl_8077392C
lbl_80773864:
/* 80773864  38 80 00 47 */	li r4, 0x47
/* 80773868  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8077386C  38 A0 00 00 */	li r5, 0
/* 80773870  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80773874  4B FF 86 0D */	bl anm_init__FP11e_rdy_classifUcf
/* 80773878  38 00 00 0B */	li r0, 0xb
/* 8077387C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80773880  C0 1D 04 D0 */	lfs f0, 0x4d0(r29)
/* 80773884  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80773888  C0 1D 04 D4 */	lfs f0, 0x4d4(r29)
/* 8077388C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80773890  C0 1D 04 D8 */	lfs f0, 0x4d8(r29)
/* 80773894  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80773898  38 61 00 0C */	addi r3, r1, 0xc
/* 8077389C  38 80 00 64 */	li r4, 0x64
/* 807738A0  28 1D 00 00 */	cmplwi r29, 0
/* 807738A4  41 82 00 0C */	beq lbl_807738B0
/* 807738A8  80 BD 00 04 */	lwz r5, 4(r29)
/* 807738AC  48 00 00 08 */	b lbl_807738B4
lbl_807738B0:
/* 807738B0  38 A0 FF FF */	li r5, -1
lbl_807738B4:
/* 807738B4  38 C0 00 03 */	li r6, 3
/* 807738B8  4B A3 49 08 */	b dKy_Sound_set__F4cXyziUii
/* 807738BC  38 00 00 14 */	li r0, 0x14
/* 807738C0  3C 60 80 78 */	lis r3, S_find@ha
/* 807738C4  B0 03 A8 D4 */	sth r0, S_find@l(r3)
/* 807738C8  48 00 00 64 */	b lbl_8077392C
lbl_807738CC:
/* 807738CC  38 7D 04 DE */	addi r3, r29, 0x4de
/* 807738D0  A8 9D 0A 4C */	lha r4, 0xa4c(r29)
/* 807738D4  38 A0 00 02 */	li r5, 2
/* 807738D8  38 C0 08 00 */	li r6, 0x800
/* 807738DC  4B AF CD 2C */	b cLib_addCalcAngleS2__FPssss
/* 807738E0  80 7D 05 CC */	lwz r3, 0x5cc(r29)
/* 807738E4  38 80 00 01 */	li r4, 1
/* 807738E8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807738EC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807738F0  40 82 00 18 */	bne lbl_80773908
/* 807738F4  FC 20 F8 90 */	fmr f1, f31
/* 807738F8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807738FC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80773900  41 82 00 08 */	beq lbl_80773908
/* 80773904  38 80 00 00 */	li r4, 0
lbl_80773908:
/* 80773908  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8077390C  41 82 00 20 */	beq lbl_8077392C
/* 80773910  38 00 00 03 */	li r0, 3
/* 80773914  B0 1D 0A 42 */	sth r0, 0xa42(r29)
/* 80773918  38 00 FF F6 */	li r0, -10
/* 8077391C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80773920  38 00 00 3C */	li r0, 0x3c
/* 80773924  B0 1D 0A 60 */	sth r0, 0xa60(r29)
/* 80773928  48 00 01 44 */	b lbl_80773A6C
lbl_8077392C:
/* 8077392C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80773930  FC 1F 00 00 */	fcmpu cr0, f31, f0
/* 80773934  41 82 00 3C */	beq lbl_80773970
/* 80773938  38 7D 04 DE */	addi r3, r29, 0x4de
/* 8077393C  A8 9D 05 C8 */	lha r4, 0x5c8(r29)
/* 80773940  38 A0 00 08 */	li r5, 8
/* 80773944  38 C0 04 00 */	li r6, 0x400
/* 80773948  4B AF CC C0 */	b cLib_addCalcAngleS2__FPssss
/* 8077394C  A8 7D 05 C8 */	lha r3, 0x5c8(r29)
/* 80773950  A8 1D 04 DE */	lha r0, 0x4de(r29)
/* 80773954  7C 03 00 50 */	subf r0, r3, r0
/* 80773958  7C 00 07 34 */	extsh r0, r0
/* 8077395C  2C 00 04 00 */	cmpwi r0, 0x400
/* 80773960  41 81 00 0C */	bgt lbl_8077396C
/* 80773964  2C 00 FC 00 */	cmpwi r0, -1024
/* 80773968  40 80 00 08 */	bge lbl_80773970
lbl_8077396C:
/* 8077396C  C3 FF 00 04 */	lfs f31, 4(r31)
lbl_80773970:
/* 80773970  38 7D 05 2C */	addi r3, r29, 0x52c
/* 80773974  FC 20 F8 90 */	fmr f1, f31
/* 80773978  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8077397C  C0 7F 00 4C */	lfs f3, 0x4c(r31)
/* 80773980  4B AF C0 BC */	b cLib_addCalc2__FPffff
/* 80773984  C0 3D 0A 50 */	lfs f1, 0xa50(r29)
/* 80773988  38 A0 00 00 */	li r5, 0
/* 8077398C  88 9D 0A 71 */	lbz r4, 0xa71(r29)
/* 80773990  2C 04 00 01 */	cmpwi r4, 1
/* 80773994  41 82 00 14 */	beq lbl_807739A8
/* 80773998  3C 60 80 78 */	lis r3, S_find@ha
/* 8077399C  A8 03 A8 D4 */	lha r0, S_find@l(r3)
/* 807739A0  2C 00 00 00 */	cmpwi r0, 0
/* 807739A4  41 82 00 1C */	beq lbl_807739C0
lbl_807739A8:
/* 807739A8  7C 80 07 74 */	extsb r0, r4
/* 807739AC  2C 00 00 01 */	cmpwi r0, 1
/* 807739B0  40 82 00 08 */	bne lbl_807739B8
/* 807739B4  38 A0 00 01 */	li r5, 1
lbl_807739B8:
/* 807739B8  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 807739BC  3B C0 7F FF */	li r30, 0x7fff
lbl_807739C0:
/* 807739C0  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 807739C4  2C 00 00 0A */	cmpwi r0, 0xa
/* 807739C8  40 80 00 A4 */	bge lbl_80773A6C
/* 807739CC  2C 05 00 00 */	cmpwi r5, 0
/* 807739D0  41 82 00 48 */	beq lbl_80773A18
/* 807739D4  38 00 00 02 */	li r0, 2
/* 807739D8  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 807739DC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 807739E0  4B AF 3F 74 */	b cM_rndF__Ff
/* 807739E4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 807739E8  EC 00 08 2A */	fadds f0, f0, f1
/* 807739EC  FC 00 00 1E */	fctiwz f0, f0
/* 807739F0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 807739F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 807739F8  B0 1D 0A 60 */	sth r0, 0xa60(r29)
/* 807739FC  7F A3 EB 78 */	mr r3, r29
/* 80773A00  38 80 00 1E */	li r4, 0x1e
/* 80773A04  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80773A08  38 A0 00 02 */	li r5, 2
/* 80773A0C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80773A10  4B FF 84 71 */	bl anm_init__FP11e_rdy_classifUcf
/* 80773A14  48 00 00 58 */	b lbl_80773A6C
lbl_80773A18:
/* 80773A18  A8 1D 0A 40 */	lha r0, 0xa40(r29)
/* 80773A1C  54 00 07 7F */	clrlwi. r0, r0, 0x1d
/* 80773A20  40 82 00 4C */	bne lbl_80773A6C
/* 80773A24  7F A3 EB 78 */	mr r3, r29
/* 80773A28  7F C4 F3 78 */	mr r4, r30
/* 80773A2C  4B FF 95 D9 */	bl pl_check__FP11e_rdy_classfs
/* 80773A30  2C 03 00 00 */	cmpwi r3, 0
/* 80773A34  41 82 00 38 */	beq lbl_80773A6C
/* 80773A38  3C 60 80 78 */	lis r3, S_find@ha
/* 80773A3C  A8 03 A8 D4 */	lha r0, S_find@l(r3)
/* 80773A40  2C 00 00 00 */	cmpwi r0, 0
/* 80773A44  40 82 00 10 */	bne lbl_80773A54
/* 80773A48  38 00 00 0A */	li r0, 0xa
/* 80773A4C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80773A50  48 00 00 1C */	b lbl_80773A6C
lbl_80773A54:
/* 80773A54  38 00 00 03 */	li r0, 3
/* 80773A58  B0 1D 0A 42 */	sth r0, 0xa42(r29)
/* 80773A5C  38 00 FF F6 */	li r0, -10
/* 80773A60  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80773A64  38 00 00 3C */	li r0, 0x3c
/* 80773A68  B0 1D 0A 60 */	sth r0, 0xa60(r29)
lbl_80773A6C:
/* 80773A6C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 80773A70  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80773A74  39 61 00 50 */	addi r11, r1, 0x50
/* 80773A78  4B BE E7 B0 */	b _restgpr_29
/* 80773A7C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80773A80  7C 08 03 A6 */	mtlr r0
/* 80773A84  38 21 00 60 */	addi r1, r1, 0x60
/* 80773A88  4E 80 00 20 */	blr 
