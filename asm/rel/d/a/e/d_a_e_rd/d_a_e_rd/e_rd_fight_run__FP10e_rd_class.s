lbl_80507144:
/* 80507144  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80507148  7C 08 02 A6 */	mflr r0
/* 8050714C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80507150  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80507154  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 80507158  39 61 00 30 */	addi r11, r1, 0x30
/* 8050715C  4B E5 B0 7C */	b _savegpr_28
/* 80507160  7C 7D 1B 78 */	mr r29, r3
/* 80507164  3C 80 80 52 */	lis r4, lit_4208@ha
/* 80507168  3B E4 85 84 */	addi r31, r4, lit_4208@l
/* 8050716C  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 80507170  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 80507174  83 84 5D AC */	lwz r28, 0x5dac(r4)
/* 80507178  C3 FF 00 04 */	lfs f31, 4(r31)
/* 8050717C  3B C0 00 01 */	li r30, 1
/* 80507180  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 80507184  C0 03 09 80 */	lfs f0, 0x980(r3)
/* 80507188  EC 21 00 2A */	fadds f1, f1, f0
/* 8050718C  38 80 7F FF */	li r4, 0x7fff
/* 80507190  4B FF F4 45 */	bl pl_check__FP10e_rd_classfs
/* 80507194  2C 03 00 00 */	cmpwi r3, 0
/* 80507198  40 82 00 24 */	bne lbl_805071BC
/* 8050719C  A8 1D 09 90 */	lha r0, 0x990(r29)
/* 805071A0  2C 00 00 00 */	cmpwi r0, 0
/* 805071A4  40 82 00 18 */	bne lbl_805071BC
/* 805071A8  A8 1D 09 9E */	lha r0, 0x99e(r29)
/* 805071AC  2C 00 00 00 */	cmpwi r0, 0
/* 805071B0  40 82 00 14 */	bne lbl_805071C4
/* 805071B4  3B C0 00 00 */	li r30, 0
/* 805071B8  48 00 00 0C */	b lbl_805071C4
lbl_805071BC:
/* 805071BC  38 00 00 23 */	li r0, 0x23
/* 805071C0  B0 1D 09 9E */	sth r0, 0x99e(r29)
lbl_805071C4:
/* 805071C4  3C 60 80 52 */	lis r3, data_80519200@ha
/* 805071C8  88 03 92 00 */	lbz r0, data_80519200@l(r3)
/* 805071CC  28 00 00 00 */	cmplwi r0, 0
/* 805071D0  41 82 00 0C */	beq lbl_805071DC
/* 805071D4  C0 7F 00 B4 */	lfs f3, 0xb4(r31)
/* 805071D8  48 00 00 10 */	b lbl_805071E8
lbl_805071DC:
/* 805071DC  3C 60 80 52 */	lis r3, l_HIO@ha
/* 805071E0  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 805071E4  C0 63 00 14 */	lfs f3, 0x14(r3)
lbl_805071E8:
/* 805071E8  88 1D 05 BC */	lbz r0, 0x5bc(r29)
/* 805071EC  28 00 00 01 */	cmplwi r0, 1
/* 805071F0  41 82 00 64 */	beq lbl_80507254
/* 805071F4  28 00 00 02 */	cmplwi r0, 2
/* 805071F8  41 80 00 10 */	blt lbl_80507208
/* 805071FC  38 00 00 05 */	li r0, 5
/* 80507200  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80507204  48 00 00 44 */	b lbl_80507248
lbl_80507208:
/* 80507208  38 00 00 00 */	li r0, 0
/* 8050720C  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80507210  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 80507214  4B D6 07 40 */	b cM_rndF__Ff
/* 80507218  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 8050721C  EC 00 08 2A */	fadds f0, f0, f1
/* 80507220  FC 00 00 1E */	fctiwz f0, f0
/* 80507224  D8 01 00 08 */	stfd f0, 8(r1)
/* 80507228  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8050722C  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 80507230  7F A3 EB 78 */	mr r3, r29
/* 80507234  38 80 00 1D */	li r4, 0x1d
/* 80507238  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 8050723C  38 A0 00 02 */	li r5, 2
/* 80507240  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507244  4B FF D9 91 */	bl anm_init__FP10e_rd_classifUcf
lbl_80507248:
/* 80507248  38 00 00 00 */	li r0, 0
/* 8050724C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507250  48 00 05 14 */	b lbl_80507764
lbl_80507254:
/* 80507254  C0 3D 04 D4 */	lfs f1, 0x4d4(r29)
/* 80507258  C0 1C 04 D4 */	lfs f0, 0x4d4(r28)
/* 8050725C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80507260  FC 00 02 10 */	fabs f0, f0
/* 80507264  FC 40 00 18 */	frsp f2, f0
/* 80507268  C0 3D 09 78 */	lfs f1, 0x978(r29)
/* 8050726C  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 80507270  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80507274  EC 01 00 28 */	fsubs f0, f1, f0
/* 80507278  D0 1D 09 78 */	stfs f0, 0x978(r29)
/* 8050727C  A8 7D 05 B4 */	lha r3, 0x5b4(r29)
/* 80507280  38 03 00 14 */	addi r0, r3, 0x14
/* 80507284  28 00 00 19 */	cmplwi r0, 0x19
/* 80507288  41 81 02 30 */	bgt lbl_805074B8
/* 8050728C  3C 60 80 52 */	lis r3, lit_5576@ha
/* 80507290  38 63 89 E0 */	addi r3, r3, lit_5576@l
/* 80507294  54 00 10 3A */	slwi r0, r0, 2
/* 80507298  7C 03 00 2E */	lwzx r0, r3, r0
/* 8050729C  7C 09 03 A6 */	mtctr r0
/* 805072A0  4E 80 04 20 */	bctr 
lbl_805072A4:
/* 805072A4  80 7D 05 D0 */	lwz r3, 0x5d0(r29)
/* 805072A8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 805072AC  FC 00 00 1E */	fctiwz f0, f0
/* 805072B0  D8 01 00 08 */	stfd f0, 8(r1)
/* 805072B4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 805072B8  2C 00 00 0B */	cmpwi r0, 0xb
/* 805072BC  40 82 00 0C */	bne lbl_805072C8
/* 805072C0  38 00 00 00 */	li r0, 0
/* 805072C4  98 1D 05 BD */	stb r0, 0x5bd(r29)
lbl_805072C8:
/* 805072C8  80 7D 05 D0 */	lwz r3, 0x5d0(r29)
/* 805072CC  38 80 00 01 */	li r4, 1
/* 805072D0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 805072D4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805072D8  40 82 00 18 */	bne lbl_805072F0
/* 805072DC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 805072E0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805072E4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 805072E8  41 82 00 08 */	beq lbl_805072F0
/* 805072EC  38 80 00 00 */	li r4, 0
lbl_805072F0:
/* 805072F0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 805072F4  41 82 01 C4 */	beq lbl_805074B8
/* 805072F8  38 00 00 00 */	li r0, 0
/* 805072FC  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507300  48 00 01 B8 */	b lbl_805074B8
lbl_80507304:
/* 80507304  7F A3 EB 78 */	mr r3, r29
/* 80507308  38 80 00 40 */	li r4, 0x40
/* 8050730C  C0 3F 00 BC */	lfs f1, 0xbc(r31)
/* 80507310  38 A0 00 02 */	li r5, 2
/* 80507314  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507318  4B FF D8 BD */	bl anm_init__FP10e_rd_classifUcf
/* 8050731C  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80507320  4B D6 06 34 */	b cM_rndF__Ff
/* 80507324  C0 1F 00 C0 */	lfs f0, 0xc0(r31)
/* 80507328  EC 00 08 2A */	fadds f0, f0, f1
/* 8050732C  FC 00 00 1E */	fctiwz f0, f0
/* 80507330  D8 01 00 08 */	stfd f0, 8(r1)
/* 80507334  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80507338  B0 1D 09 92 */	sth r0, 0x992(r29)
/* 8050733C  38 00 FF F7 */	li r0, -9
/* 80507340  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507344  48 00 01 74 */	b lbl_805074B8
lbl_80507348:
/* 80507348  A8 1D 09 92 */	lha r0, 0x992(r29)
/* 8050734C  2C 00 00 00 */	cmpwi r0, 0
/* 80507350  40 82 01 68 */	bne lbl_805074B8
/* 80507354  38 00 00 00 */	li r0, 0
/* 80507358  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8050735C  48 00 01 5C */	b lbl_805074B8
lbl_80507360:
/* 80507360  88 1D 05 BD */	lbz r0, 0x5bd(r29)
/* 80507364  7C 00 07 75 */	extsb. r0, r0
/* 80507368  41 82 00 28 */	beq lbl_80507390
/* 8050736C  7F A3 EB 78 */	mr r3, r29
/* 80507370  38 80 00 04 */	li r4, 4
/* 80507374  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 80507378  38 A0 00 00 */	li r5, 0
/* 8050737C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507380  4B FF D8 55 */	bl anm_init__FP10e_rd_classifUcf
/* 80507384  38 00 FF EC */	li r0, -20
/* 80507388  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8050738C  48 00 01 2C */	b lbl_805074B8
lbl_80507390:
/* 80507390  A8 1D 09 92 */	lha r0, 0x992(r29)
/* 80507394  2C 00 00 00 */	cmpwi r0, 0
/* 80507398  40 82 01 20 */	bne lbl_805074B8
/* 8050739C  C0 3F 00 C4 */	lfs f1, 0xc4(r31)
/* 805073A0  4B D6 05 EC */	b cM_rndFX__Ff
/* 805073A4  C0 1F 00 08 */	lfs f0, 8(r31)
/* 805073A8  EC 40 08 2A */	fadds f2, f0, f1
/* 805073AC  7F A3 EB 78 */	mr r3, r29
/* 805073B0  38 80 00 32 */	li r4, 0x32
/* 805073B4  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 805073B8  38 A0 00 02 */	li r5, 2
/* 805073BC  4B FF D8 19 */	bl anm_init__FP10e_rd_classifUcf
/* 805073C0  38 00 00 01 */	li r0, 1
/* 805073C4  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805073C8  48 00 00 F0 */	b lbl_805074B8
lbl_805073CC:
/* 805073CC  FF E0 18 90 */	fmr f31, f3
/* 805073D0  C0 3D 09 78 */	lfs f1, 0x978(r29)
/* 805073D4  3C 60 80 52 */	lis r3, l_HIO@ha
/* 805073D8  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 805073DC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805073E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805073E4  40 80 00 D4 */	bge lbl_805074B8
/* 805073E8  7F A3 EB 78 */	mr r3, r29
/* 805073EC  38 80 00 1B */	li r4, 0x1b
/* 805073F0  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 805073F4  38 A0 00 02 */	li r5, 2
/* 805073F8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 805073FC  4B FF D7 D9 */	bl anm_init__FP10e_rd_classifUcf
/* 80507400  38 00 00 02 */	li r0, 2
/* 80507404  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507408  48 00 00 B0 */	b lbl_805074B8
lbl_8050740C:
/* 8050740C  3C 60 80 52 */	lis r3, l_HIO@ha
/* 80507410  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 80507414  C3 E3 00 10 */	lfs f31, 0x10(r3)
/* 80507418  C0 7D 09 78 */	lfs f3, 0x978(r29)
/* 8050741C  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 80507420  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 80507424  EC 01 10 2A */	fadds f0, f1, f2
/* 80507428  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8050742C  40 81 00 10 */	ble lbl_8050743C
/* 80507430  38 00 00 00 */	li r0, 0
/* 80507434  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507438  48 00 00 80 */	b lbl_805074B8
lbl_8050743C:
/* 8050743C  EC 02 08 28 */	fsubs f0, f2, f1
/* 80507440  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80507444  40 80 00 74 */	bge lbl_805074B8
/* 80507448  38 00 00 03 */	li r0, 3
/* 8050744C  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 80507450  48 00 00 68 */	b lbl_805074B8
lbl_80507454:
/* 80507454  3C 60 80 52 */	lis r3, l_HIO@ha
/* 80507458  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 8050745C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80507460  FF E0 00 50 */	fneg f31, f0
/* 80507464  C0 3D 09 78 */	lfs f1, 0x978(r29)
/* 80507468  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8050746C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80507470  40 81 00 48 */	ble lbl_805074B8
/* 80507474  38 00 00 02 */	li r0, 2
/* 80507478  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8050747C  48 00 00 3C */	b lbl_805074B8
lbl_80507480:
/* 80507480  A8 1D 09 96 */	lha r0, 0x996(r29)
/* 80507484  2C 00 00 00 */	cmpwi r0, 0
/* 80507488  41 82 00 0C */	beq lbl_80507494
/* 8050748C  38 00 FF FF */	li r0, -1
/* 80507490  98 1D 09 C8 */	stb r0, 0x9c8(r29)
lbl_80507494:
/* 80507494  C3 FF 00 04 */	lfs f31, 4(r31)
/* 80507498  D3 FD 05 2C */	stfs f31, 0x52c(r29)
/* 8050749C  7F A3 EB 78 */	mr r3, r29
/* 805074A0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 805074A4  4B FF F2 FD */	bl move_gake_check__FP10e_rd_classf
/* 805074A8  2C 03 00 00 */	cmpwi r3, 0
/* 805074AC  40 82 00 0C */	bne lbl_805074B8
/* 805074B0  38 00 00 02 */	li r0, 2
/* 805074B4  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
lbl_805074B8:
/* 805074B8  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 805074BC  2C 00 00 05 */	cmpwi r0, 5
/* 805074C0  40 80 00 58 */	bge lbl_80507518
/* 805074C4  7F A3 EB 78 */	mr r3, r29
/* 805074C8  C0 3F 00 00 */	lfs f1, 0(r31)
/* 805074CC  4B FF F2 D5 */	bl move_gake_check__FP10e_rd_classf
/* 805074D0  2C 03 00 00 */	cmpwi r3, 0
/* 805074D4  41 82 00 44 */	beq lbl_80507518
/* 805074D8  38 00 00 05 */	li r0, 5
/* 805074DC  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805074E0  C0 3F 00 C0 */	lfs f1, 0xc0(r31)
/* 805074E4  4B D6 04 70 */	b cM_rndF__Ff
/* 805074E8  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 805074EC  EC 00 08 2A */	fadds f0, f0, f1
/* 805074F0  FC 00 00 1E */	fctiwz f0, f0
/* 805074F4  D8 01 00 08 */	stfd f0, 8(r1)
/* 805074F8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 805074FC  B0 1D 09 96 */	sth r0, 0x996(r29)
/* 80507500  7F A3 EB 78 */	mr r3, r29
/* 80507504  38 80 00 40 */	li r4, 0x40
/* 80507508  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8050750C  38 A0 00 02 */	li r5, 2
/* 80507510  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507514  4B FF D6 C1 */	bl anm_init__FP10e_rd_classifUcf
lbl_80507518:
/* 80507518  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 8050751C  2C 00 00 00 */	cmpwi r0, 0
/* 80507520  41 80 00 3C */	blt lbl_8050755C
/* 80507524  38 7D 04 DE */	addi r3, r29, 0x4de
/* 80507528  A8 9D 09 7C */	lha r4, 0x97c(r29)
/* 8050752C  38 A0 00 04 */	li r5, 4
/* 80507530  38 C0 08 00 */	li r6, 0x800
/* 80507534  4B D6 90 D4 */	b cLib_addCalcAngleS2__FPssss
/* 80507538  A8 7D 09 7C */	lha r3, 0x97c(r29)
/* 8050753C  A8 1D 04 DE */	lha r0, 0x4de(r29)
/* 80507540  7C 03 00 50 */	subf r0, r3, r0
/* 80507544  7C 00 07 34 */	extsh r0, r0
/* 80507548  2C 00 04 00 */	cmpwi r0, 0x400
/* 8050754C  41 81 00 0C */	bgt lbl_80507558
/* 80507550  2C 00 FC 00 */	cmpwi r0, -1024
/* 80507554  40 80 00 08 */	bge lbl_8050755C
lbl_80507558:
/* 80507558  C3 FF 00 04 */	lfs f31, 4(r31)
lbl_8050755C:
/* 8050755C  38 7D 05 2C */	addi r3, r29, 0x52c
/* 80507560  FC 20 F8 90 */	fmr f1, f31
/* 80507564  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507568  C0 7F 00 54 */	lfs f3, 0x54(r31)
/* 8050756C  4B D6 84 D0 */	b cLib_addCalc2__FPffff
/* 80507570  7F C0 07 75 */	extsb. r0, r30
/* 80507574  40 82 00 CC */	bne lbl_80507640
/* 80507578  38 60 00 00 */	li r3, 0
/* 8050757C  B0 7D 09 72 */	sth r3, 0x972(r29)
/* 80507580  A8 1D 05 B4 */	lha r0, 0x5b4(r29)
/* 80507584  2C 00 00 05 */	cmpwi r0, 5
/* 80507588  40 82 00 78 */	bne lbl_80507600
/* 8050758C  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 80507590  4B D6 03 FC */	b cM_rndFX__Ff
/* 80507594  FC 00 08 1E */	fctiwz f0, f1
/* 80507598  D8 01 00 08 */	stfd f0, 8(r1)
/* 8050759C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 805075A0  A8 7D 04 DE */	lha r3, 0x4de(r29)
/* 805075A4  3C 03 00 01 */	addis r0, r3, 1
/* 805075A8  7C 60 22 14 */	add r3, r0, r4
/* 805075AC  38 03 80 00 */	addi r0, r3, -32768
/* 805075B0  B0 1D 05 CC */	sth r0, 0x5cc(r29)
/* 805075B4  7F A3 EB 78 */	mr r3, r29
/* 805075B8  38 80 00 41 */	li r4, 0x41
/* 805075BC  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 805075C0  38 A0 00 02 */	li r5, 2
/* 805075C4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 805075C8  4B FF D6 0D */	bl anm_init__FP10e_rd_classifUcf
/* 805075CC  38 00 00 03 */	li r0, 3
/* 805075D0  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 805075D4  C0 3F 00 00 */	lfs f1, 0(r31)
/* 805075D8  4B D6 03 7C */	b cM_rndF__Ff
/* 805075DC  C0 1F 00 00 */	lfs f0, 0(r31)
/* 805075E0  EC 00 08 2A */	fadds f0, f0, f1
/* 805075E4  FC 00 00 1E */	fctiwz f0, f0
/* 805075E8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 805075EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805075F0  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 805075F4  38 00 00 28 */	li r0, 0x28
/* 805075F8  B0 1D 09 92 */	sth r0, 0x992(r29)
/* 805075FC  48 00 01 10 */	b lbl_8050770C
lbl_80507600:
/* 80507600  B0 7D 05 B4 */	sth r3, 0x5b4(r29)
/* 80507604  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 80507608  4B D6 03 4C */	b cM_rndF__Ff
/* 8050760C  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 80507610  EC 00 08 2A */	fadds f0, f0, f1
/* 80507614  FC 00 00 1E */	fctiwz f0, f0
/* 80507618  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8050761C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80507620  B0 1D 09 90 */	sth r0, 0x990(r29)
/* 80507624  7F A3 EB 78 */	mr r3, r29
/* 80507628  38 80 00 1D */	li r4, 0x1d
/* 8050762C  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80507630  38 A0 00 02 */	li r5, 2
/* 80507634  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80507638  4B FF D5 9D */	bl anm_init__FP10e_rd_classifUcf
/* 8050763C  48 00 00 D0 */	b lbl_8050770C
lbl_80507640:
/* 80507640  C0 3D 09 78 */	lfs f1, 0x978(r29)
/* 80507644  3C 60 80 52 */	lis r3, l_HIO@ha
/* 80507648  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 8050764C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80507650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80507654  40 80 00 44 */	bge lbl_80507698
/* 80507658  4B B7 FD 7C */	b cc_pl_cut_bit_get__Fv
/* 8050765C  54 63 04 3E */	clrlwi r3, r3, 0x10
/* 80507660  80 1D 0A 20 */	lwz r0, 0xa20(r29)
/* 80507664  7C 00 18 39 */	and. r0, r0, r3
/* 80507668  41 82 00 30 */	beq lbl_80507698
/* 8050766C  C0 3D 09 F0 */	lfs f1, 0x9f0(r29)
/* 80507670  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 80507674  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80507678  40 80 00 20 */	bge lbl_80507698
/* 8050767C  38 00 00 0A */	li r0, 0xa
/* 80507680  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80507684  38 00 00 00 */	li r0, 0
/* 80507688  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
/* 8050768C  38 00 00 14 */	li r0, 0x14
/* 80507690  B0 1D 09 98 */	sth r0, 0x998(r29)
/* 80507694  48 00 00 78 */	b lbl_8050770C
lbl_80507698:
/* 80507698  88 1D 05 BD */	lbz r0, 0x5bd(r29)
/* 8050769C  7C 00 07 75 */	extsb. r0, r0
/* 805076A0  40 82 00 6C */	bne lbl_8050770C
/* 805076A4  C0 3D 09 78 */	lfs f1, 0x978(r29)
/* 805076A8  3C 60 80 52 */	lis r3, l_HIO@ha
/* 805076AC  38 63 91 94 */	addi r3, r3, l_HIO@l
/* 805076B0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 805076B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805076B8  40 80 00 54 */	bge lbl_8050770C
/* 805076BC  A8 1D 09 94 */	lha r0, 0x994(r29)
/* 805076C0  2C 00 00 00 */	cmpwi r0, 0
/* 805076C4  40 82 00 48 */	bne lbl_8050770C
/* 805076C8  C0 3F 00 CC */	lfs f1, 0xcc(r31)
/* 805076CC  4B D6 02 88 */	b cM_rndF__Ff
/* 805076D0  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 805076D4  EC 00 08 2A */	fadds f0, f0, f1
/* 805076D8  FC 00 00 1E */	fctiwz f0, f0
/* 805076DC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 805076E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805076E4  B0 1D 09 94 */	sth r0, 0x994(r29)
/* 805076E8  C0 3F 00 08 */	lfs f1, 8(r31)
/* 805076EC  4B D6 02 68 */	b cM_rndF__Ff
/* 805076F0  C0 1F 00 A4 */	lfs f0, 0xa4(r31)
/* 805076F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805076F8  40 80 00 14 */	bge lbl_8050770C
/* 805076FC  38 00 00 04 */	li r0, 4
/* 80507700  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 80507704  38 00 00 00 */	li r0, 0
/* 80507708  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
lbl_8050770C:
/* 8050770C  A8 1D 09 70 */	lha r0, 0x970(r29)
/* 80507710  54 00 07 3F */	clrlwi. r0, r0, 0x1c
/* 80507714  40 82 00 30 */	bne lbl_80507744
/* 80507718  7F A3 EB 78 */	mr r3, r29
/* 8050771C  38 80 30 00 */	li r4, 0x3000
/* 80507720  4B FF ED 0D */	bl wb_check__FP10e_rd_classs
/* 80507724  7F A3 EB 78 */	mr r3, r29
/* 80507728  4B FF F0 31 */	bl bomb_view_check__FP10e_rd_class
/* 8050772C  28 03 00 00 */	cmplwi r3, 0
/* 80507730  41 82 00 14 */	beq lbl_80507744
/* 80507734  38 00 00 13 */	li r0, 0x13
/* 80507738  B0 1D 09 72 */	sth r0, 0x972(r29)
/* 8050773C  38 00 00 00 */	li r0, 0
/* 80507740  B0 1D 05 B4 */	sth r0, 0x5b4(r29)
lbl_80507744:
/* 80507744  A8 1D 09 72 */	lha r0, 0x972(r29)
/* 80507748  2C 00 00 03 */	cmpwi r0, 3
/* 8050774C  40 82 00 18 */	bne lbl_80507764
/* 80507750  88 1D 09 C8 */	lbz r0, 0x9c8(r29)
/* 80507754  7C 00 07 75 */	extsb. r0, r0
/* 80507758  41 80 00 0C */	blt lbl_80507764
/* 8050775C  38 00 00 01 */	li r0, 1
/* 80507760  98 1D 09 C8 */	stb r0, 0x9c8(r29)
lbl_80507764:
/* 80507764  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 80507768  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8050776C  39 61 00 30 */	addi r11, r1, 0x30
/* 80507770  4B E5 AA B4 */	b _restgpr_28
/* 80507774  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80507778  7C 08 03 A6 */	mtlr r0
/* 8050777C  38 21 00 40 */	addi r1, r1, 0x40
/* 80507780  4E 80 00 20 */	blr 
