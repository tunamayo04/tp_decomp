lbl_80240174:
/* 80240174  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80240178  7C 08 02 A6 */	mflr r0
/* 8024017C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80240180  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80240184  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, 0 /* qr0 */
/* 80240188  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8024018C  F3 C1 00 98 */	psq_st f30, 152(r1), 0, 0 /* qr0 */
/* 80240190  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80240194  F3 A1 00 88 */	psq_st f29, 136(r1), 0, 0 /* qr0 */
/* 80240198  39 61 00 80 */	addi r11, r1, 0x80
/* 8024019C  48 12 20 41 */	bl _savegpr_29
/* 802401A0  7C 7F 1B 78 */	mr r31, r3
/* 802401A4  7C 9D 23 78 */	mr r29, r4
/* 802401A8  4B FF 7F F5 */	bl getActor__12dMsgObject_cFv
/* 802401AC  7C 7E 1B 78 */	mr r30, r3
/* 802401B0  80 7F 00 08 */	lwz r3, 8(r31)
/* 802401B4  28 03 00 00 */	cmplwi r3, 0
/* 802401B8  41 82 00 20 */	beq lbl_802401D8
/* 802401BC  80 63 00 04 */	lwz r3, 4(r3)
/* 802401C0  C0 3F 01 60 */	lfs f1, 0x160(r31)
/* 802401C4  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 802401C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802401CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802401D0  7D 89 03 A6 */	mtctr r12
/* 802401D4  4E 80 04 21 */	bctrl 
lbl_802401D8:
/* 802401D8  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 802401DC  28 00 00 03 */	cmplwi r0, 3
/* 802401E0  40 82 01 B0 */	bne lbl_80240390
/* 802401E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 802401E8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 802401EC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 802401F0  38 63 05 38 */	addi r3, r3, 0x538
/* 802401F4  38 81 00 44 */	addi r4, r1, 0x44
/* 802401F8  4B DD 51 19 */	bl mDoLib_project__FP3VecP3Vec
/* 802401FC  C0 02 B2 04 */	lfs f0, lit_4195(r2)
/* 80240200  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80240204  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80240208  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8024020C  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 80240210  38 81 00 20 */	addi r4, r1, 0x20
/* 80240214  48 02 6E 19 */	bl __eq__4cXyzCFRC3Vec
/* 80240218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8024021C  41 82 00 0C */	beq lbl_80240228
/* 80240220  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 80240224  48 00 00 6C */	b lbl_80240290
lbl_80240228:
/* 80240228  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 8024022C  38 81 00 50 */	addi r4, r1, 0x50
/* 80240230  4B DD 50 E1 */	bl mDoLib_project__FP3VecP3Vec
/* 80240234  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80240238  C0 22 B2 04 */	lfs f1, lit_4195(r2)
/* 8024023C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80240240  4C 41 13 82 */	cror 2, 1, 2
/* 80240244  40 82 00 48 */	bne lbl_8024028C
/* 80240248  C0 02 B2 2C */	lfs f0, lit_4663(r2)
/* 8024024C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80240250  4C 40 13 82 */	cror 2, 0, 2
/* 80240254  40 82 00 38 */	bne lbl_8024028C
/* 80240258  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 8024025C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80240260  4C 41 13 82 */	cror 2, 1, 2
/* 80240264  40 82 00 28 */	bne lbl_8024028C
/* 80240268  C0 02 B2 30 */	lfs f0, lit_4664(r2)
/* 8024026C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80240270  4C 40 13 82 */	cror 2, 0, 2
/* 80240274  40 82 00 18 */	bne lbl_8024028C
/* 80240278  C0 22 B2 0C */	lfs f1, lit_4197(r2)
/* 8024027C  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80240280  EC 00 10 2A */	fadds f0, f0, f2
/* 80240284  EC 61 00 32 */	fmuls f3, f1, f0
/* 80240288  48 00 00 08 */	b lbl_80240290
lbl_8024028C:
/* 8024028C  C0 61 00 48 */	lfs f3, 0x48(r1)
lbl_80240290:
/* 80240290  80 1F 00 08 */	lwz r0, 8(r31)
/* 80240294  28 00 00 00 */	cmplwi r0, 0
/* 80240298  41 82 00 BC */	beq lbl_80240354
/* 8024029C  88 1F 01 9C */	lbz r0, 0x19c(r31)
/* 802402A0  2C 00 00 02 */	cmpwi r0, 2
/* 802402A4  41 82 00 EC */	beq lbl_80240390
/* 802402A8  40 80 00 10 */	bge lbl_802402B8
/* 802402AC  2C 00 00 01 */	cmpwi r0, 1
/* 802402B0  40 80 00 14 */	bge lbl_802402C4
/* 802402B4  48 00 00 DC */	b lbl_80240390
lbl_802402B8:
/* 802402B8  2C 00 00 04 */	cmpwi r0, 4
/* 802402BC  40 80 00 D4 */	bge lbl_80240390
/* 802402C0  48 00 00 4C */	b lbl_8024030C
lbl_802402C4:
/* 802402C4  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 802402C8  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 802402CC  A8 03 02 FC */	lha r0, 0x2fc(r3)
/* 802402D0  C8 22 B2 18 */	lfd f1, lit_4388(r2)
/* 802402D4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802402D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 802402DC  3C 00 43 30 */	lis r0, 0x4330
/* 802402E0  90 01 00 60 */	stw r0, 0x60(r1)
/* 802402E4  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 802402E8  EC 20 08 28 */	fsubs f1, f0, f1
/* 802402EC  C0 02 B2 34 */	lfs f0, lit_4665(r2)
/* 802402F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 802402F4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802402F8  40 80 00 0C */	bge lbl_80240304
/* 802402FC  3B A0 00 00 */	li r29, 0
/* 80240300  48 00 00 90 */	b lbl_80240390
lbl_80240304:
/* 80240304  3B A0 00 01 */	li r29, 1
/* 80240308  48 00 00 88 */	b lbl_80240390
lbl_8024030C:
/* 8024030C  C0 42 B2 34 */	lfs f2, lit_4665(r2)
/* 80240310  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 80240314  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 80240318  A8 03 02 FC */	lha r0, 0x2fc(r3)
/* 8024031C  C8 22 B2 18 */	lfd f1, lit_4388(r2)
/* 80240320  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80240324  90 01 00 64 */	stw r0, 0x64(r1)
/* 80240328  3C 00 43 30 */	lis r0, 0x4330
/* 8024032C  90 01 00 60 */	stw r0, 0x60(r1)
/* 80240330  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80240334  EC 00 08 28 */	fsubs f0, f0, f1
/* 80240338  EC 02 00 2A */	fadds f0, f2, f0
/* 8024033C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80240340  40 80 00 0C */	bge lbl_8024034C
/* 80240344  3B A0 00 00 */	li r29, 0
/* 80240348  48 00 00 48 */	b lbl_80240390
lbl_8024034C:
/* 8024034C  3B A0 00 01 */	li r29, 1
/* 80240350  48 00 00 40 */	b lbl_80240390
lbl_80240354:
/* 80240354  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 80240358  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 8024035C  A8 03 02 FC */	lha r0, 0x2fc(r3)
/* 80240360  C8 22 B2 18 */	lfd f1, lit_4388(r2)
/* 80240364  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80240368  90 01 00 64 */	stw r0, 0x64(r1)
/* 8024036C  3C 00 43 30 */	lis r0, 0x4330
/* 80240370  90 01 00 60 */	stw r0, 0x60(r1)
/* 80240374  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 80240378  EC 00 08 28 */	fsubs f0, f0, f1
/* 8024037C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80240380  40 80 00 0C */	bge lbl_8024038C
/* 80240384  3B A0 00 00 */	li r29, 0
/* 80240388  48 00 00 08 */	b lbl_80240390
lbl_8024038C:
/* 8024038C  3B A0 00 01 */	li r29, 1
lbl_80240390:
/* 80240390  C0 02 B2 04 */	lfs f0, lit_4195(r2)
/* 80240394  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 80240398  9B BF 01 9C */	stb r29, 0x19c(r31)
/* 8024039C  88 1F 01 9C */	lbz r0, 0x19c(r31)
/* 802403A0  2C 00 00 02 */	cmpwi r0, 2
/* 802403A4  41 82 00 9C */	beq lbl_80240440
/* 802403A8  40 80 01 20 */	bge lbl_802404C8
/* 802403AC  2C 00 00 01 */	cmpwi r0, 1
/* 802403B0  40 80 00 08 */	bge lbl_802403B8
/* 802403B4  48 00 01 14 */	b lbl_802404C8
lbl_802403B8:
/* 802403B8  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 802403BC  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 802403C0  C3 E3 02 A8 */	lfs f31, 0x2a8(r3)
/* 802403C4  80 7F 00 04 */	lwz r3, 4(r31)
/* 802403C8  3C 80 5F 61 */	lis r4, 0x5F61 /* 0x5F616C6C@ha */
/* 802403CC  38 C4 6C 6C */	addi r6, r4, 0x6C6C /* 0x5F616C6C@l */
/* 802403D0  38 A0 00 6E */	li r5, 0x6e
/* 802403D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802403D8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802403DC  7D 89 03 A6 */	mtctr r12
/* 802403E0  4E 80 04 21 */	bctrl 
/* 802403E4  48 0B 6D 1D */	bl getBounds__7J2DPaneFv
/* 802403E8  C3 C3 00 0C */	lfs f30, 0xc(r3)
/* 802403EC  80 7F 00 04 */	lwz r3, 4(r31)
/* 802403F0  3C 80 5F 61 */	lis r4, 0x5F61 /* 0x5F616C6C@ha */
/* 802403F4  38 C4 6C 6C */	addi r6, r4, 0x6C6C /* 0x5F616C6C@l */
/* 802403F8  38 A0 00 6E */	li r5, 0x6e
/* 802403FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80240400  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80240404  7D 89 03 A6 */	mtctr r12
/* 80240408  4E 80 04 21 */	bctrl 
/* 8024040C  48 0B 6C F5 */	bl getBounds__7J2DPaneFv
/* 80240410  C0 03 00 04 */	lfs f0, 4(r3)
/* 80240414  EC 20 F0 2A */	fadds f1, f0, f30
/* 80240418  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 8024041C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80240420  C0 02 B2 38 */	lfs f0, lit_4666(r2)
/* 80240424  EC 00 08 28 */	fsubs f0, f0, f1
/* 80240428  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 8024042C  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 80240430  C0 22 B2 3C */	lfs f1, lit_4667(r2)
/* 80240434  C0 42 B2 40 */	lfs f2, lit_4668(r2)
/* 80240438  4B FF 99 61 */	bl translate__17dMsgScrn3Select_cFff
/* 8024043C  48 00 00 B0 */	b lbl_802404EC
lbl_80240440:
/* 80240440  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 80240444  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 80240448  C3 E3 02 80 */	lfs f31, 0x280(r3)
/* 8024044C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80240450  3C 80 5F 61 */	lis r4, 0x5F61 /* 0x5F616C6C@ha */
/* 80240454  38 C4 6C 6C */	addi r6, r4, 0x6C6C /* 0x5F616C6C@l */
/* 80240458  38 A0 00 6E */	li r5, 0x6e
/* 8024045C  81 83 00 00 */	lwz r12, 0(r3)
/* 80240460  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80240464  7D 89 03 A6 */	mtctr r12
/* 80240468  4E 80 04 21 */	bctrl 
/* 8024046C  48 0B 6C 95 */	bl getBounds__7J2DPaneFv
/* 80240470  C3 C3 00 0C */	lfs f30, 0xc(r3)
/* 80240474  80 7F 00 04 */	lwz r3, 4(r31)
/* 80240478  3C 80 5F 61 */	lis r4, 0x5F61 /* 0x5F616C6C@ha */
/* 8024047C  38 C4 6C 6C */	addi r6, r4, 0x6C6C /* 0x5F616C6C@l */
/* 80240480  38 A0 00 6E */	li r5, 0x6e
/* 80240484  81 83 00 00 */	lwz r12, 0(r3)
/* 80240488  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8024048C  7D 89 03 A6 */	mtctr r12
/* 80240490  4E 80 04 21 */	bctrl 
/* 80240494  48 0B 6C 6D */	bl getBounds__7J2DPaneFv
/* 80240498  C0 03 00 04 */	lfs f0, 4(r3)
/* 8024049C  EC 20 F0 2A */	fadds f1, f0, f30
/* 802404A0  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 802404A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 802404A8  C0 02 B2 44 */	lfs f0, lit_4669(r2)
/* 802404AC  EC 00 08 28 */	fsubs f0, f0, f1
/* 802404B0  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 802404B4  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 802404B8  C0 22 B2 3C */	lfs f1, lit_4667(r2)
/* 802404BC  C0 42 B2 48 */	lfs f2, lit_4670(r2)
/* 802404C0  4B FF 98 D9 */	bl translate__17dMsgScrn3Select_cFff
/* 802404C4  48 00 00 28 */	b lbl_802404EC
lbl_802404C8:
/* 802404C8  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 802404CC  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 802404D0  C3 E3 02 58 */	lfs f31, 0x258(r3)
/* 802404D4  C0 02 B2 04 */	lfs f0, lit_4195(r2)
/* 802404D8  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 802404DC  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 802404E0  C0 22 B2 3C */	lfs f1, lit_4667(r2)
/* 802404E4  C0 42 B2 4C */	lfs f2, lit_4671(r2)
/* 802404E8  4B FF 98 B1 */	bl translate__17dMsgScrn3Select_cFff
lbl_802404EC:
/* 802404EC  D3 FF 01 84 */	stfs f31, 0x184(r31)
/* 802404F0  C0 1F 01 80 */	lfs f0, 0x180(r31)
/* 802404F4  EC 00 F8 2A */	fadds f0, f0, f31
/* 802404F8  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 802404FC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80240500  3C 80 5F 61 */	lis r4, 0x5F61 /* 0x5F616C6C@ha */
/* 80240504  38 C4 6C 6C */	addi r6, r4, 0x6C6C /* 0x5F616C6C@l */
/* 80240508  38 A0 00 6E */	li r5, 0x6e
/* 8024050C  81 83 00 00 */	lwz r12, 0(r3)
/* 80240510  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80240514  7D 89 03 A6 */	mtctr r12
/* 80240518  4E 80 04 21 */	bctrl 
/* 8024051C  C0 3F 01 60 */	lfs f1, 0x160(r31)
/* 80240520  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 80240524  C0 1F 01 80 */	lfs f0, 0x180(r31)
/* 80240528  EC 02 00 2A */	fadds f0, f2, f0
/* 8024052C  EC 5F 00 2A */	fadds f2, f31, f0
/* 80240530  81 83 00 00 */	lwz r12, 0(r3)
/* 80240534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80240538  7D 89 03 A6 */	mtctr r12
/* 8024053C  4E 80 04 21 */	bctrl 
/* 80240540  80 7F 00 08 */	lwz r3, 8(r31)
/* 80240544  28 03 00 00 */	cmplwi r3, 0
/* 80240548  41 82 01 2C */	beq lbl_80240674
/* 8024054C  48 01 35 E1 */	bl reinit__8CPaneMgrFv
/* 80240550  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 80240554  80 83 00 04 */	lwz r4, 4(r3)
/* 80240558  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 8024055C  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80240560  EF C1 00 28 */	fsubs f30, f1, f0
/* 80240564  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 80240568  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 8024056C  EF A1 00 28 */	fsubs f29, f1, f0
/* 80240570  48 01 3D F5 */	bl getGlobalPosY__8CPaneMgrFv
/* 80240574  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 80240578  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8024057C  EF E1 00 2A */	fadds f31, f1, f0
/* 80240580  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 80240584  48 01 3D 65 */	bl getGlobalPosX__8CPaneMgrFv
/* 80240588  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 8024058C  EC 00 07 72 */	fmuls f0, f0, f29
/* 80240590  EC 21 00 2A */	fadds f1, f1, f0
/* 80240594  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 80240598  FC 40 F8 90 */	fmr f2, f31
/* 8024059C  4B FF B8 5D */	bl setPos__15dMsgScrnArrow_cFff
/* 802405A0  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 802405A4  80 83 00 04 */	lwz r4, 4(r3)
/* 802405A8  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 802405AC  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 802405B0  EF A1 00 28 */	fsubs f29, f1, f0
/* 802405B4  48 01 3D B1 */	bl getGlobalPosY__8CPaneMgrFv
/* 802405B8  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 802405BC  EC 00 07 72 */	fmuls f0, f0, f29
/* 802405C0  EF C1 00 2A */	fadds f30, f1, f0
/* 802405C4  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 802405C8  80 83 00 04 */	lwz r4, 4(r3)
/* 802405CC  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 802405D0  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 802405D4  EF A1 00 28 */	fsubs f29, f1, f0
/* 802405D8  48 01 3D 11 */	bl getGlobalPosX__8CPaneMgrFv
/* 802405DC  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 802405E0  EC 00 07 72 */	fmuls f0, f0, f29
/* 802405E4  EC 01 00 2A */	fadds f0, f1, f0
/* 802405E8  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 802405EC  80 63 00 04 */	lwz r3, 4(r3)
/* 802405F0  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 802405F4  D3 C3 00 D8 */	stfs f30, 0xd8(r3)
/* 802405F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802405FC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80240600  7D 89 03 A6 */	mtctr r12
/* 80240604  4E 80 04 21 */	bctrl 
/* 80240608  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8024060C  48 01 3C DD */	bl getGlobalPosX__8CPaneMgrFv
/* 80240610  D0 3F 00 64 */	stfs f1, 0x64(r31)
/* 80240614  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80240618  48 01 3D 4D */	bl getGlobalPosY__8CPaneMgrFv
/* 8024061C  D0 3F 00 68 */	stfs f1, 0x68(r31)
/* 80240620  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 80240624  80 83 00 04 */	lwz r4, 4(r3)
/* 80240628  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8024062C  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 80240630  EF A1 00 28 */	fsubs f29, f1, f0
/* 80240634  48 01 3C B5 */	bl getGlobalPosX__8CPaneMgrFv
/* 80240638  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 8024063C  EC 00 07 72 */	fmuls f0, f0, f29
/* 80240640  EC 01 00 2A */	fadds f0, f1, f0
/* 80240644  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80240648  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 8024064C  80 83 00 04 */	lwz r4, 4(r3)
/* 80240650  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 80240654  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80240658  EF A1 00 28 */	fsubs f29, f1, f0
/* 8024065C  48 01 3D 09 */	bl getGlobalPosY__8CPaneMgrFv
/* 80240660  C0 02 B2 0C */	lfs f0, lit_4197(r2)
/* 80240664  EC 00 07 72 */	fmuls f0, f0, f29
/* 80240668  EC 01 00 2A */	fadds f0, f1, f0
/* 8024066C  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 80240670  48 00 00 AC */	b lbl_8024071C
lbl_80240674:
/* 80240674  80 9F 01 08 */	lwz r4, 0x108(r31)
/* 80240678  38 61 00 14 */	addi r3, r1, 0x14
/* 8024067C  80 A4 00 04 */	lwz r5, 4(r4)
/* 80240680  38 C0 00 00 */	li r6, 0
/* 80240684  38 E0 00 00 */	li r7, 0
/* 80240688  48 01 48 35 */	bl getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs
/* 8024068C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80240690  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80240694  90 61 00 38 */	stw r3, 0x38(r1)
/* 80240698  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8024069C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802406A0  90 01 00 40 */	stw r0, 0x40(r1)
/* 802406A4  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 802406A8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802406AC  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 802406B0  4B FF B7 49 */	bl setPos__15dMsgScrnArrow_cFff
/* 802406B4  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 802406B8  38 61 00 08 */	addi r3, r1, 8
/* 802406BC  80 A4 00 04 */	lwz r5, 4(r4)
/* 802406C0  38 C0 00 00 */	li r6, 0
/* 802406C4  38 E0 00 00 */	li r7, 0
/* 802406C8  48 01 47 F5 */	bl getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs
/* 802406CC  80 61 00 08 */	lwz r3, 8(r1)
/* 802406D0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802406D4  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802406D8  90 01 00 30 */	stw r0, 0x30(r1)
/* 802406DC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 802406E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802406E4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802406E8  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 802406EC  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 802406F0  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 802406F4  C0 3F 01 6C */	lfs f1, 0x16c(r31)
/* 802406F8  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 802406FC  80 63 00 04 */	lwz r3, 4(r3)
/* 80240700  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 80240704  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80240708  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8024070C  81 83 00 00 */	lwz r12, 0(r3)
/* 80240710  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80240714  7D 89 03 A6 */	mtctr r12
/* 80240718  4E 80 04 21 */	bctrl 
lbl_8024071C:
/* 8024071C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, 0 /* qr0 */
/* 80240720  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80240724  E3 C1 00 98 */	psq_l f30, 152(r1), 0, 0 /* qr0 */
/* 80240728  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8024072C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, 0 /* qr0 */
/* 80240730  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80240734  39 61 00 80 */	addi r11, r1, 0x80
/* 80240738  48 12 1A F1 */	bl _restgpr_29
/* 8024073C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80240740  7C 08 03 A6 */	mtlr r0
/* 80240744  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80240748  4E 80 00 20 */	blr 
