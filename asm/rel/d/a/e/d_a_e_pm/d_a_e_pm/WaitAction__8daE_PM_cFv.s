lbl_80745438:
/* 80745438  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8074543C  7C 08 02 A6 */	mflr r0
/* 80745440  90 01 00 24 */	stw r0, 0x24(r1)
/* 80745444  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80745448  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8074544C  7C 7F 1B 78 */	mr r31, r3
/* 80745450  3C 80 80 75 */	lis r4, lit_1109@ha
/* 80745454  38 C4 C3 48 */	addi r6, r4, lit_1109@l
/* 80745458  3C 80 80 75 */	lis r4, lit_3910@ha
/* 8074545C  3B C4 BF 3C */	addi r30, r4, lit_3910@l
/* 80745460  88 A3 06 11 */	lbz r5, 0x611(r3)
/* 80745464  2C 05 00 01 */	cmpwi r5, 1
/* 80745468  41 82 00 70 */	beq lbl_807454D8
/* 8074546C  40 80 00 10 */	bge lbl_8074547C
/* 80745470  2C 05 00 00 */	cmpwi r5, 0
/* 80745474  40 80 00 14 */	bge lbl_80745488
/* 80745478  48 00 01 10 */	b lbl_80745588
lbl_8074547C:
/* 8074547C  2C 05 00 03 */	cmpwi r5, 3
/* 80745480  40 80 01 08 */	bge lbl_80745588
/* 80745484  48 00 00 B0 */	b lbl_80745534
lbl_80745488:
/* 80745488  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8074548C  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 80745490  38 80 00 10 */	li r4, 0x10
/* 80745494  38 A0 00 02 */	li r5, 2
/* 80745498  C0 3E 00 E4 */	lfs f1, 0xe4(r30)
/* 8074549C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807454A0  4B FF D1 D5 */	bl SetAnm__8daE_PM_cFiiff
/* 807454A4  C0 3E 00 F0 */	lfs f1, 0xf0(r30)
/* 807454A8  4B B2 24 E4 */	b cM_rndFX__Ff
/* 807454AC  C0 1E 00 DC */	lfs f0, 0xdc(r30)
/* 807454B0  EC 00 08 2A */	fadds f0, f0, f1
/* 807454B4  FC 00 00 1E */	fctiwz f0, f0
/* 807454B8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 807454BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807454C0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 807454C4  B0 1F 06 20 */	sth r0, 0x620(r31)
/* 807454C8  88 7F 06 11 */	lbz r3, 0x611(r31)
/* 807454CC  38 03 00 01 */	addi r0, r3, 1
/* 807454D0  98 1F 06 11 */	stb r0, 0x611(r31)
/* 807454D4  48 00 00 B4 */	b lbl_80745588
lbl_807454D8:
/* 807454D8  A8 86 00 A0 */	lha r4, 0xa0(r6)
/* 807454DC  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 807454E0  7C 04 00 50 */	subf r0, r4, r0
/* 807454E4  7C 00 07 34 */	extsh r0, r0
/* 807454E8  C0 26 00 98 */	lfs f1, 0x98(r6)
/* 807454EC  38 86 00 4C */	addi r4, r6, 0x4c
/* 807454F0  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 807454F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807454F8  40 80 00 90 */	bge lbl_80745588
/* 807454FC  2C 00 C0 00 */	cmpwi r0, -16384
/* 80745500  40 81 00 88 */	ble lbl_80745588
/* 80745504  2C 00 40 00 */	cmpwi r0, 0x4000
/* 80745508  40 80 00 80 */	bge lbl_80745588
/* 8074550C  38 05 00 01 */	addi r0, r5, 1
/* 80745510  98 1F 06 11 */	stb r0, 0x611(r31)
/* 80745514  38 00 00 0A */	li r0, 0xa
/* 80745518  B0 1F 06 20 */	sth r0, 0x620(r31)
/* 8074551C  38 80 00 16 */	li r4, 0x16
/* 80745520  38 A0 00 02 */	li r5, 2
/* 80745524  C0 3E 00 E4 */	lfs f1, 0xe4(r30)
/* 80745528  C0 5E 00 08 */	lfs f2, 8(r30)
/* 8074552C  4B FF D1 49 */	bl SetAnm__8daE_PM_cFiiff
/* 80745530  48 00 00 58 */	b lbl_80745588
lbl_80745534:
/* 80745534  A8 7F 04 E6 */	lha r3, 0x4e6(r31)
/* 80745538  A8 06 00 A0 */	lha r0, 0xa0(r6)
/* 8074553C  7C 03 00 50 */	subf r0, r3, r0
/* 80745540  B0 1F 06 08 */	sth r0, 0x608(r31)
/* 80745544  A8 1F 06 08 */	lha r0, 0x608(r31)
/* 80745548  2C 00 40 00 */	cmpwi r0, 0x4000
/* 8074554C  40 81 00 10 */	ble lbl_8074555C
/* 80745550  38 00 40 00 */	li r0, 0x4000
/* 80745554  B0 1F 06 08 */	sth r0, 0x608(r31)
/* 80745558  48 00 00 14 */	b lbl_8074556C
lbl_8074555C:
/* 8074555C  2C 00 C0 00 */	cmpwi r0, -16384
/* 80745560  40 80 00 0C */	bge lbl_8074556C
/* 80745564  38 00 C0 00 */	li r0, -16384
/* 80745568  B0 1F 06 08 */	sth r0, 0x608(r31)
lbl_8074556C:
/* 8074556C  A8 1F 06 20 */	lha r0, 0x620(r31)
/* 80745570  2C 00 00 00 */	cmpwi r0, 0
/* 80745574  40 82 00 14 */	bne lbl_80745588
/* 80745578  38 00 00 02 */	li r0, 2
/* 8074557C  98 1F 06 10 */	stb r0, 0x610(r31)
/* 80745580  38 00 00 00 */	li r0, 0
/* 80745584  98 1F 06 11 */	stb r0, 0x611(r31)
lbl_80745588:
/* 80745588  80 1F 06 1C */	lwz r0, 0x61c(r31)
/* 8074558C  2C 00 00 10 */	cmpwi r0, 0x10
/* 80745590  40 82 00 30 */	bne lbl_807455C0
/* 80745594  3C 60 00 08 */	lis r3, 0x0008 /* 0x0007FFFF@ha */
/* 80745598  38 03 FF FF */	addi r0, r3, 0xFFFF /* 0x0007FFFF@l */
/* 8074559C  90 01 00 08 */	stw r0, 8(r1)
/* 807455A0  38 7F 07 20 */	addi r3, r31, 0x720
/* 807455A4  38 81 00 08 */	addi r4, r1, 8
/* 807455A8  38 A0 00 00 */	li r5, 0
/* 807455AC  38 C0 FF FF */	li r6, -1
/* 807455B0  81 9F 07 20 */	lwz r12, 0x720(r31)
/* 807455B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 807455B8  7D 89 03 A6 */	mtctr r12
/* 807455BC  4E 80 04 21 */	bctrl 
lbl_807455C0:
/* 807455C0  A8 1F 06 24 */	lha r0, 0x624(r31)
/* 807455C4  2C 00 00 14 */	cmpwi r0, 0x14
/* 807455C8  40 82 00 14 */	bne lbl_807455DC
/* 807455CC  38 00 00 03 */	li r0, 3
/* 807455D0  98 1F 06 10 */	stb r0, 0x610(r31)
/* 807455D4  38 00 00 00 */	li r0, 0
/* 807455D8  98 1F 06 11 */	stb r0, 0x611(r31)
lbl_807455DC:
/* 807455DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807455E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807455E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807455E8  7C 08 03 A6 */	mtlr r0
/* 807455EC  38 21 00 20 */	addi r1, r1, 0x20
/* 807455F0  4E 80 00 20 */	blr 
