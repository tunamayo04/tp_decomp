lbl_8013890C:
/* 8013890C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80138910  7C 08 02 A6 */	mflr r0
/* 80138914  90 01 00 24 */	stw r0, 0x24(r1)
/* 80138918  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013891C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80138920  7C 7E 1B 78 */	mr r30, r3
/* 80138924  7C 9F 23 78 */	mr r31, r4
/* 80138928  38 80 01 2A */	li r4, 0x12a
/* 8013892C  4B F8 96 41 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 80138930  7F C3 F3 78 */	mr r3, r30
/* 80138934  38 80 00 3A */	li r4, 0x3a
/* 80138938  3C A0 80 39 */	lis r5, m__20daAlinkHIO_wlSwim_c0@ha
/* 8013893C  38 A5 F8 B4 */	addi r5, r5, m__20daAlinkHIO_wlSwim_c0@l
/* 80138940  38 A5 00 14 */	addi r5, r5, 0x14
/* 80138944  4B FF 0F 05 */	bl setSingleAnimeWolfParam__9daAlink_cFQ29daAlink_c12daAlink_WANMPC16daAlinkHIO_anm_c
/* 80138948  7F C3 F3 78 */	mr r3, r30
/* 8013894C  38 80 00 8F */	li r4, 0x8f
/* 80138950  4B F7 6F 51 */	bl setFaceBasicTexture__9daAlink_cFQ29daAlink_c13daAlink_FTANM
/* 80138954  80 7E 06 50 */	lwz r3, 0x650(r30)
/* 80138958  80 63 00 84 */	lwz r3, 0x84(r3)
/* 8013895C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80138960  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 80138964  D0 1E 37 C8 */	stfs f0, 0x37c8(r30)
/* 80138968  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 8013896C  D0 1E 37 CC */	stfs f0, 0x37cc(r30)
/* 80138970  C0 03 00 BC */	lfs f0, 0xbc(r3)
/* 80138974  D0 1E 37 D0 */	stfs f0, 0x37d0(r30)
/* 80138978  2C 1F 00 00 */	cmpwi r31, 0
/* 8013897C  40 82 00 10 */	bne lbl_8013898C
/* 80138980  38 00 00 00 */	li r0, 0
/* 80138984  B0 1E 30 0E */	sth r0, 0x300e(r30)
/* 80138988  48 00 00 24 */	b lbl_801389AC
lbl_8013898C:
/* 8013898C  88 1E 2F BB */	lbz r0, 0x2fbb(r30)
/* 80138990  28 00 00 0D */	cmplwi r0, 0xd
/* 80138994  40 82 00 10 */	bne lbl_801389A4
/* 80138998  38 00 00 02 */	li r0, 2
/* 8013899C  B0 1E 30 0E */	sth r0, 0x300e(r30)
/* 801389A0  48 00 00 0C */	b lbl_801389AC
lbl_801389A4:
/* 801389A4  38 00 00 01 */	li r0, 1
/* 801389A8  B0 1E 30 0E */	sth r0, 0x300e(r30)
lbl_801389AC:
/* 801389AC  38 80 00 00 */	li r4, 0
/* 801389B0  90 81 00 0C */	stw r4, 0xc(r1)
/* 801389B4  90 81 00 08 */	stw r4, 8(r1)
/* 801389B8  90 9E 32 CC */	stw r4, 0x32cc(r30)
/* 801389BC  2C 1F 00 00 */	cmpwi r31, 0
/* 801389C0  41 82 00 0C */	beq lbl_801389CC
/* 801389C4  90 9E 31 BC */	stw r4, 0x31bc(r30)
/* 801389C8  48 00 00 20 */	b lbl_801389E8
lbl_801389CC:
/* 801389CC  7C 83 23 78 */	mr r3, r4
/* 801389D0  38 00 00 02 */	li r0, 2
/* 801389D4  7C 09 03 A6 */	mtctr r0
lbl_801389D8:
/* 801389D8  38 03 32 C0 */	addi r0, r3, 0x32c0
/* 801389DC  7C 9E 03 2E */	sthx r4, r30, r0
/* 801389E0  38 63 00 02 */	addi r3, r3, 2
/* 801389E4  42 00 FF F4 */	bdnz lbl_801389D8
lbl_801389E8:
/* 801389E8  7F C3 F3 78 */	mr r3, r30
/* 801389EC  38 81 00 0C */	addi r4, r1, 0xc
/* 801389F0  38 A1 00 08 */	addi r5, r1, 8
/* 801389F4  4B FE B1 FD */	bl setWolfSwimEndEffect__9daAlink_cFPP14JPABaseEmitterPP14JPABaseEmitter
/* 801389F8  B3 FE 30 0C */	sth r31, 0x300c(r30)
/* 801389FC  38 60 00 01 */	li r3, 1
/* 80138A00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80138A04  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80138A08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80138A0C  7C 08 03 A6 */	mtlr r0
/* 80138A10  38 21 00 20 */	addi r1, r1, 0x20
/* 80138A14  4E 80 00 20 */	blr 
