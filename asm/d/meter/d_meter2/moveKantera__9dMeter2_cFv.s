lbl_80220180:
/* 80220180  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80220184  7C 08 02 A6 */	mflr r0
/* 80220188  90 01 00 34 */	stw r0, 0x34(r1)
/* 8022018C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80220190  7C 7F 1B 78 */	mr r31, r3
/* 80220194  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80220198  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8022019C  A0 83 00 06 */	lhz r4, 6(r3)
/* 802201A0  38 E0 00 00 */	li r7, 0
/* 802201A4  39 00 00 00 */	li r8, 0
/* 802201A8  80 03 5D DC */	lwz r0, 0x5ddc(r3)
/* 802201AC  2C 00 00 00 */	cmpwi r0, 0
/* 802201B0  41 82 00 50 */	beq lbl_80220200
/* 802201B4  7C E4 02 14 */	add r7, r4, r0
/* 802201B8  7C 07 20 00 */	cmpw r7, r4
/* 802201BC  40 81 00 0C */	ble lbl_802201C8
/* 802201C0  7C 87 23 78 */	mr r7, r4
/* 802201C4  48 00 00 10 */	b lbl_802201D4
lbl_802201C8:
/* 802201C8  2C 07 00 00 */	cmpwi r7, 0
/* 802201CC  40 80 00 08 */	bge lbl_802201D4
/* 802201D0  38 E0 00 00 */	li r7, 0
lbl_802201D4:
/* 802201D4  B0 E3 00 06 */	sth r7, 6(r3)
/* 802201D8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 802201DC  38 A4 61 C0 */	addi r5, r4, g_dComIfG_gameInfo@l
/* 802201E0  A0 05 00 08 */	lhz r0, 8(r5)
/* 802201E4  80 85 5D D4 */	lwz r4, 0x5dd4(r5)
/* 802201E8  7C 00 38 50 */	subf r0, r0, r7
/* 802201EC  7C 04 02 14 */	add r0, r4, r0
/* 802201F0  90 05 5D D4 */	stw r0, 0x5dd4(r5)
/* 802201F4  38 00 00 00 */	li r0, 0
/* 802201F8  90 03 5D DC */	stw r0, 0x5ddc(r3)
/* 802201FC  39 00 00 01 */	li r8, 1
lbl_80220200:
/* 80220200  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 80220204  38 A4 61 C0 */	addi r5, r4, g_dComIfG_gameInfo@l
/* 80220208  80 C5 5D D4 */	lwz r6, 0x5dd4(r5)
/* 8022020C  2C 06 00 00 */	cmpwi r6, 0
/* 80220210  41 82 00 4C */	beq lbl_8022025C
/* 80220214  55 00 06 3F */	clrlwi. r0, r8, 0x18
/* 80220218  40 82 00 08 */	bne lbl_80220220
/* 8022021C  A0 E3 00 06 */	lhz r7, 6(r3)
lbl_80220220:
/* 80220220  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 80220224  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 80220228  A0 04 00 08 */	lhz r0, 8(r4)
/* 8022022C  7C 00 32 14 */	add r0, r0, r6
/* 80220230  7C 00 38 00 */	cmpw r0, r7
/* 80220234  40 81 00 0C */	ble lbl_80220240
/* 80220238  7C E0 3B 78 */	mr r0, r7
/* 8022023C  48 00 00 10 */	b lbl_8022024C
lbl_80220240:
/* 80220240  2C 00 00 00 */	cmpwi r0, 0
/* 80220244  40 80 00 08 */	bge lbl_8022024C
/* 80220248  38 00 00 00 */	li r0, 0
lbl_8022024C:
/* 8022024C  B0 04 00 08 */	sth r0, 8(r4)
/* 80220250  38 00 00 00 */	li r0, 0
/* 80220254  90 05 5D D4 */	stw r0, 0x5dd4(r5)
/* 80220258  39 00 00 01 */	li r8, 1
lbl_8022025C:
/* 8022025C  A0 03 00 06 */	lhz r0, 6(r3)
/* 80220260  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 80220264  7C 04 00 00 */	cmpw r4, r0
/* 80220268  41 82 00 50 */	beq lbl_802202B8
/* 8022026C  40 80 00 28 */	bge lbl_80220294
/* 80220270  38 04 00 C8 */	addi r0, r4, 0xc8
/* 80220274  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 80220278  A0 03 00 06 */	lhz r0, 6(r3)
/* 8022027C  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 80220280  7C 04 00 00 */	cmpw r4, r0
/* 80220284  40 81 00 08 */	ble lbl_8022028C
/* 80220288  90 1F 01 A0 */	stw r0, 0x1a0(r31)
lbl_8022028C:
/* 8022028C  39 00 00 01 */	li r8, 1
/* 80220290  48 00 00 28 */	b lbl_802202B8
lbl_80220294:
/* 80220294  40 81 00 24 */	ble lbl_802202B8
/* 80220298  38 04 FF 38 */	addi r0, r4, -200
/* 8022029C  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 802202A0  A0 03 00 06 */	lhz r0, 6(r3)
/* 802202A4  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 802202A8  7C 04 00 00 */	cmpw r4, r0
/* 802202AC  40 80 00 08 */	bge lbl_802202B4
/* 802202B0  90 1F 01 A0 */	stw r0, 0x1a0(r31)
lbl_802202B4:
/* 802202B4  39 00 00 01 */	li r8, 1
lbl_802202B8:
/* 802202B8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 802202BC  38 A4 61 C0 */	addi r5, r4, g_dComIfG_gameInfo@l
/* 802202C0  A0 05 00 08 */	lhz r0, 8(r5)
/* 802202C4  80 9F 01 9C */	lwz r4, 0x19c(r31)
/* 802202C8  7C 04 00 00 */	cmpw r4, r0
/* 802202CC  41 82 01 90 */	beq lbl_8022045C
/* 802202D0  40 80 00 84 */	bge lbl_80220354
/* 802202D4  38 04 00 C8 */	addi r0, r4, 0xc8
/* 802202D8  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 802202DC  A0 05 00 08 */	lhz r0, 8(r5)
/* 802202E0  80 7F 01 9C */	lwz r3, 0x19c(r31)
/* 802202E4  7C 03 00 00 */	cmpw r3, r0
/* 802202E8  40 81 00 08 */	ble lbl_802202F0
/* 802202EC  90 1F 01 9C */	stw r0, 0x19c(r31)
lbl_802202F0:
/* 802202F0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 802202F4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 802202F8  88 03 5E B7 */	lbz r0, 0x5eb7(r3)
/* 802202FC  28 00 00 00 */	cmplwi r0, 0
/* 80220300  40 82 00 4C */	bne lbl_8022034C
/* 80220304  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 80220308  C0 23 06 00 */	lfs f1, 0x600(r3)
/* 8022030C  C0 02 AF C8 */	lfs f0, lit_4662(r2)
/* 80220310  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220314  40 81 00 38 */	ble lbl_8022034C
/* 80220318  38 00 00 25 */	li r0, 0x25
/* 8022031C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80220320  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 80220324  38 81 00 10 */	addi r4, r1, 0x10
/* 80220328  38 A0 00 00 */	li r5, 0
/* 8022032C  38 C0 00 00 */	li r6, 0
/* 80220330  38 E0 00 00 */	li r7, 0
/* 80220334  C0 22 AF CC */	lfs f1, lit_4663(r2)
/* 80220338  FC 40 08 90 */	fmr f2, f1
/* 8022033C  C0 62 AF D0 */	lfs f3, lit_4837(r2)
/* 80220340  FC 80 18 90 */	fmr f4, f3
/* 80220344  39 00 00 00 */	li r8, 0
/* 80220348  48 08 C1 C5 */	bl seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
lbl_8022034C:
/* 8022034C  39 00 00 01 */	li r8, 1
/* 80220350  48 00 01 0C */	b lbl_8022045C
lbl_80220354:
/* 80220354  40 81 01 08 */	ble lbl_8022045C
/* 80220358  38 04 FF 38 */	addi r0, r4, -200
/* 8022035C  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 80220360  A0 05 00 08 */	lhz r0, 8(r5)
/* 80220364  80 9F 01 9C */	lwz r4, 0x19c(r31)
/* 80220368  7C 04 00 00 */	cmpw r4, r0
/* 8022036C  40 80 00 08 */	bge lbl_80220374
/* 80220370  90 1F 01 9C */	stw r0, 0x19c(r31)
lbl_80220374:
/* 80220374  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 80220378  2C 00 00 00 */	cmpwi r0, 0
/* 8022037C  40 82 00 50 */	bne lbl_802203CC
/* 80220380  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 80220384  C0 23 06 00 */	lfs f1, 0x600(r3)
/* 80220388  C0 02 AF C8 */	lfs f0, lit_4662(r2)
/* 8022038C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220390  40 81 00 C8 */	ble lbl_80220458
/* 80220394  38 00 00 27 */	li r0, 0x27
/* 80220398  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022039C  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 802203A0  38 81 00 0C */	addi r4, r1, 0xc
/* 802203A4  38 A0 00 00 */	li r5, 0
/* 802203A8  38 C0 00 00 */	li r6, 0
/* 802203AC  38 E0 00 00 */	li r7, 0
/* 802203B0  C0 22 AF CC */	lfs f1, lit_4663(r2)
/* 802203B4  FC 40 08 90 */	fmr f2, f1
/* 802203B8  C0 62 AF D0 */	lfs f3, lit_4837(r2)
/* 802203BC  FC 80 18 90 */	fmr f4, f3
/* 802203C0  39 00 00 00 */	li r8, 0
/* 802203C4  48 08 B5 C1 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 802203C8  48 00 00 90 */	b lbl_80220458
lbl_802203CC:
/* 802203CC  A0 63 00 06 */	lhz r3, 6(r3)
/* 802203D0  A0 05 00 08 */	lhz r0, 8(r5)
/* 802203D4  C8 42 AF E0 */	lfd f2, lit_5268(r2)
/* 802203D8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802203DC  3C 00 43 30 */	lis r0, 0x4330
/* 802203E0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802203E4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802203E8  EC 20 10 28 */	fsubs f1, f0, f2
/* 802203EC  90 61 00 24 */	stw r3, 0x24(r1)
/* 802203F0  90 01 00 20 */	stw r0, 0x20(r1)
/* 802203F4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802203F8  EC 00 10 28 */	fsubs f0, f0, f2
/* 802203FC  EC 21 00 24 */	fdivs f1, f1, f0
/* 80220400  C0 02 AF E8 */	lfs f0, lit_5791(r2)
/* 80220404  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220408  4C 40 13 82 */	cror 2, 0, 2
/* 8022040C  40 82 00 4C */	bne lbl_80220458
/* 80220410  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 80220414  C0 23 06 00 */	lfs f1, 0x600(r3)
/* 80220418  C0 02 AF C8 */	lfs f0, lit_4662(r2)
/* 8022041C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220420  40 81 00 38 */	ble lbl_80220458
/* 80220424  38 00 00 26 */	li r0, 0x26
/* 80220428  90 01 00 08 */	stw r0, 8(r1)
/* 8022042C  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 80220430  38 81 00 08 */	addi r4, r1, 8
/* 80220434  38 A0 00 00 */	li r5, 0
/* 80220438  38 C0 00 00 */	li r6, 0
/* 8022043C  38 E0 00 00 */	li r7, 0
/* 80220440  C0 22 AF CC */	lfs f1, lit_4663(r2)
/* 80220444  FC 40 08 90 */	fmr f2, f1
/* 80220448  C0 62 AF D0 */	lfs f3, lit_4837(r2)
/* 8022044C  FC 80 18 90 */	fmr f4, f3
/* 80220450  39 00 00 00 */	li r8, 0
/* 80220454  48 08 C0 B9 */	bl seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
lbl_80220458:
/* 80220458  39 00 00 01 */	li r8, 1
lbl_8022045C:
/* 8022045C  3C 60 80 43 */	lis r3, g_drawHIO@ha
/* 80220460  38 83 EB C8 */	addi r4, r3, g_drawHIO@l
/* 80220464  C0 24 00 60 */	lfs f1, 0x60(r4)
/* 80220468  C0 44 00 64 */	lfs f2, 0x64(r4)
/* 8022046C  A8 1F 02 46 */	lha r0, 0x246(r31)
/* 80220470  A8 7F 01 94 */	lha r3, 0x194(r31)
/* 80220474  7C 00 18 00 */	cmpw r0, r3
/* 80220478  41 82 00 0C */	beq lbl_80220484
/* 8022047C  B0 7F 02 46 */	sth r3, 0x246(r31)
/* 80220480  39 00 00 01 */	li r8, 1
lbl_80220484:
/* 80220484  C0 1F 02 2C */	lfs f0, 0x22c(r31)
/* 80220488  3C 60 80 43 */	lis r3, g_drawHIO@ha
/* 8022048C  38 63 EB C8 */	addi r3, r3, g_drawHIO@l
/* 80220490  C0 63 00 54 */	lfs f3, 0x54(r3)
/* 80220494  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 80220498  41 82 00 0C */	beq lbl_802204A4
/* 8022049C  D0 7F 02 2C */	stfs f3, 0x22c(r31)
/* 802204A0  39 00 00 01 */	li r8, 1
lbl_802204A4:
/* 802204A4  C0 1F 02 30 */	lfs f0, 0x230(r31)
/* 802204A8  C0 64 00 60 */	lfs f3, 0x60(r4)
/* 802204AC  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 802204B0  41 82 00 0C */	beq lbl_802204BC
/* 802204B4  D0 7F 02 30 */	stfs f3, 0x230(r31)
/* 802204B8  39 00 00 01 */	li r8, 1
lbl_802204BC:
/* 802204BC  C0 1F 02 34 */	lfs f0, 0x234(r31)
/* 802204C0  C0 64 00 64 */	lfs f3, 0x64(r4)
/* 802204C4  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 802204C8  41 82 00 0C */	beq lbl_802204D4
/* 802204CC  D0 7F 02 34 */	stfs f3, 0x234(r31)
/* 802204D0  39 00 00 01 */	li r8, 1
lbl_802204D4:
/* 802204D4  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 802204D8  28 00 00 01 */	cmplwi r0, 1
/* 802204DC  40 82 00 14 */	bne lbl_802204F0
/* 802204E0  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 802204E4  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 802204E8  80 BF 01 9C */	lwz r5, 0x19c(r31)
/* 802204EC  4B FF 4F BD */	bl drawKantera__13dMeter2Draw_cFllff
lbl_802204F0:
/* 802204F0  7F E3 FB 78 */	mr r3, r31
/* 802204F4  48 00 45 11 */	bl alphaAnimeKantera__9dMeter2_cFv
/* 802204F8  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 802204FC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80220500  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80220504  90 03 5D D8 */	stw r0, 0x5dd8(r3)
/* 80220508  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8022050C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80220510  7C 08 03 A6 */	mtlr r0
/* 80220514  38 21 00 30 */	addi r1, r1, 0x30
/* 80220518  4E 80 00 20 */	blr 
