lbl_801191C4:
/* 801191C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801191C8  7C 08 02 A6 */	mflr r0
/* 801191CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801191D0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801191D4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 801191D8  39 61 00 30 */	addi r11, r1, 0x30
/* 801191DC  48 24 8F F1 */	bl _savegpr_25
/* 801191E0  7C 79 1B 78 */	mr r25, r3
/* 801191E4  7C 9F 23 78 */	mr r31, r4
/* 801191E8  7C BA 2B 78 */	mr r26, r5
/* 801191EC  7C DB 33 78 */	mr r27, r6
/* 801191F0  7C FC 3B 78 */	mr r28, r7
/* 801191F4  7D 1D 43 78 */	mr r29, r8
/* 801191F8  80 6D 88 A0 */	lwz r3, m_object__7dDemo_c(r13)
/* 801191FC  88 99 04 98 */	lbz r4, 0x498(r25)
/* 80119200  4B F1 FE 89 */	bl getActor__14dDemo_object_cFUc
/* 80119204  7C 7E 1B 78 */	mr r30, r3
/* 80119208  28 1F 00 00 */	cmplwi r31, 0
/* 8011920C  41 82 00 0C */	beq lbl_80119218
/* 80119210  C3 FF 00 08 */	lfs f31, 8(r31)
/* 80119214  48 00 00 08 */	b lbl_8011921C
lbl_80119218:
/* 80119218  C3 E2 92 C0 */	lfs f31, lit_6108(r2)
lbl_8011921C:
/* 8011921C  2C 1D 00 00 */	cmpwi r29, 0
/* 80119220  41 82 00 28 */	beq lbl_80119248
/* 80119224  C0 39 33 AC */	lfs f1, 0x33ac(r25)
/* 80119228  C0 02 92 A4 */	lfs f0, lit_6021(r2)
/* 8011922C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80119230  40 81 01 C0 */	ble lbl_801193F0
/* 80119234  A8 79 2F E0 */	lha r3, 0x2fe0(r25)
/* 80119238  4B F9 A2 5D */	bl getDirectionFromAngle__9daAlink_cFs
/* 8011923C  38 03 00 01 */	addi r0, r3, 1
/* 80119240  7C 1D 00 00 */	cmpw r29, r0
/* 80119244  40 82 01 AC */	bne lbl_801193F0
lbl_80119248:
/* 80119248  2C 1D 00 00 */	cmpwi r29, 0
/* 8011924C  41 82 00 10 */	beq lbl_8011925C
/* 80119250  38 60 00 01 */	li r3, 1
/* 80119254  38 80 00 01 */	li r4, 1
/* 80119258  4B F2 0C 95 */	bl setBranchId__7dDemo_cFUss
lbl_8011925C:
/* 8011925C  2C 1A 00 01 */	cmpwi r26, 1
/* 80119260  40 82 00 40 */	bne lbl_801192A0
/* 80119264  2C 1B 00 02 */	cmpwi r27, 2
/* 80119268  40 82 01 88 */	bne lbl_801193F0
/* 8011926C  7F 23 CB 78 */	mr r3, r25
/* 80119270  7F C4 F3 78 */	mr r4, r30
/* 80119274  7F 85 E3 78 */	mr r5, r28
/* 80119278  4B FF F7 81 */	bl setDemoBodyBck__9daAlink_cFP13dDemo_actor_cUs
/* 8011927C  2C 1D 00 00 */	cmpwi r29, 0
/* 80119280  40 82 01 70 */	bne lbl_801193F0
/* 80119284  A0 1E 00 04 */	lhz r0, 4(r30)
/* 80119288  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 8011928C  41 82 00 0C */	beq lbl_80119298
/* 80119290  C3 FE 00 30 */	lfs f31, 0x30(r30)
/* 80119294  48 00 01 5C */	b lbl_801193F0
lbl_80119298:
/* 80119298  C3 E2 92 C0 */	lfs f31, lit_6108(r2)
/* 8011929C  48 00 01 54 */	b lbl_801193F0
lbl_801192A0:
/* 801192A0  2C 1A 00 09 */	cmpwi r26, 9
/* 801192A4  40 82 00 FC */	bne lbl_801193A0
/* 801192A8  2C 1B 00 02 */	cmpwi r27, 2
/* 801192AC  40 82 00 40 */	bne lbl_801192EC
/* 801192B0  80 19 05 74 */	lwz r0, 0x574(r25)
/* 801192B4  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801192B8  41 82 00 1C */	beq lbl_801192D4
/* 801192BC  7F 23 CB 78 */	mr r3, r25
/* 801192C0  80 99 06 90 */	lwz r4, 0x690(r25)
/* 801192C4  7F 85 E3 78 */	mr r5, r28
/* 801192C8  4B FF FD 31 */	bl setHighModelBck__9daAlink_cFP13mDoExt_bckAnmUs
/* 801192CC  C0 22 92 C0 */	lfs f1, lit_6108(r2)
/* 801192D0  48 00 01 74 */	b lbl_80119444
lbl_801192D4:
/* 801192D4  7F 23 CB 78 */	mr r3, r25
/* 801192D8  7F 84 E3 78 */	mr r4, r28
/* 801192DC  38 A0 00 00 */	li r5, 0
/* 801192E0  38 C0 00 00 */	li r6, 0
/* 801192E4  4B F9 61 CD */	bl setFaceBck__9daAlink_cFUsiUs
/* 801192E8  48 00 00 60 */	b lbl_80119348
lbl_801192EC:
/* 801192EC  2C 1B 00 03 */	cmpwi r27, 3
/* 801192F0  40 82 00 3C */	bne lbl_8011932C
/* 801192F4  80 19 05 74 */	lwz r0, 0x574(r25)
/* 801192F8  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801192FC  41 82 00 18 */	beq lbl_80119314
/* 80119300  7F 23 CB 78 */	mr r3, r25
/* 80119304  7F 84 E3 78 */	mr r4, r28
/* 80119308  4B FF FD 9D */	bl setHighModelFaceBtk__9daAlink_cFUs
/* 8011930C  C0 22 92 C0 */	lfs f1, lit_6108(r2)
/* 80119310  48 00 01 34 */	b lbl_80119444
lbl_80119314:
/* 80119314  7F 23 CB 78 */	mr r3, r25
/* 80119318  7F 84 E3 78 */	mr r4, r28
/* 8011931C  38 A0 00 00 */	li r5, 0
/* 80119320  38 C0 00 00 */	li r6, 0
/* 80119324  4B F9 64 AD */	bl setFaceBtk__9daAlink_cFUsiUs
/* 80119328  48 00 00 20 */	b lbl_80119348
lbl_8011932C:
/* 8011932C  2C 1B 00 05 */	cmpwi r27, 5
/* 80119330  40 82 00 18 */	bne lbl_80119348
/* 80119334  7F 23 CB 78 */	mr r3, r25
/* 80119338  7F 84 E3 78 */	mr r4, r28
/* 8011933C  38 A0 00 00 */	li r5, 0
/* 80119340  38 C0 00 00 */	li r6, 0
/* 80119344  4B F9 62 D9 */	bl setFaceBtp__9daAlink_cFUsiUs
lbl_80119348:
/* 80119348  2C 1D 00 00 */	cmpwi r29, 0
/* 8011934C  41 82 00 A4 */	beq lbl_801193F0
/* 80119350  28 1F 00 00 */	cmplwi r31, 0
/* 80119354  41 82 00 9C */	beq lbl_801193F0
/* 80119358  A8 1F 00 06 */	lha r0, 6(r31)
/* 8011935C  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 80119360  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 80119364  3C 00 43 30 */	lis r0, 0x4330
/* 80119368  48 00 00 18 */	b lbl_80119380
lbl_8011936C:
/* 8011936C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80119370  90 01 00 08 */	stw r0, 8(r1)
/* 80119374  C8 01 00 08 */	lfd f0, 8(r1)
/* 80119378  EC 00 08 28 */	fsubs f0, f0, f1
/* 8011937C  EF FF 00 28 */	fsubs f31, f31, f0
lbl_80119380:
/* 80119380  90 61 00 0C */	stw r3, 0xc(r1)
/* 80119384  90 01 00 08 */	stw r0, 8(r1)
/* 80119388  C8 01 00 08 */	lfd f0, 8(r1)
/* 8011938C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80119390  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80119394  41 81 FF D8 */	bgt lbl_8011936C
/* 80119398  D3 FF 00 08 */	stfs f31, 8(r31)
/* 8011939C  48 00 00 54 */	b lbl_801193F0
lbl_801193A0:
/* 801193A0  2C 1A 00 05 */	cmpwi r26, 5
/* 801193A4  40 82 00 18 */	bne lbl_801193BC
/* 801193A8  7F 23 CB 78 */	mr r3, r25
/* 801193AC  80 99 06 AC */	lwz r4, 0x6ac(r25)
/* 801193B0  7F 85 E3 78 */	mr r5, r28
/* 801193B4  4B FF FC 45 */	bl setHighModelBck__9daAlink_cFP13mDoExt_bckAnmUs
/* 801193B8  48 00 00 38 */	b lbl_801193F0
lbl_801193BC:
/* 801193BC  2C 1A 00 06 */	cmpwi r26, 6
/* 801193C0  40 82 00 18 */	bne lbl_801193D8
/* 801193C4  7F 23 CB 78 */	mr r3, r25
/* 801193C8  80 99 06 A4 */	lwz r4, 0x6a4(r25)
/* 801193CC  7F 85 E3 78 */	mr r5, r28
/* 801193D0  4B FF FC 29 */	bl setHighModelBck__9daAlink_cFP13mDoExt_bckAnmUs
/* 801193D4  48 00 00 1C */	b lbl_801193F0
lbl_801193D8:
/* 801193D8  2C 1A 00 04 */	cmpwi r26, 4
/* 801193DC  40 82 00 14 */	bne lbl_801193F0
/* 801193E0  7F 23 CB 78 */	mr r3, r25
/* 801193E4  80 99 06 B0 */	lwz r4, 0x6b0(r25)
/* 801193E8  7F 85 E3 78 */	mr r5, r28
/* 801193EC  4B FF FC 0D */	bl setHighModelBck__9daAlink_cFP13mDoExt_bckAnmUs
lbl_801193F0:
/* 801193F0  2C 1D 00 00 */	cmpwi r29, 0
/* 801193F4  41 82 00 4C */	beq lbl_80119440
/* 801193F8  28 1F 00 00 */	cmplwi r31, 0
/* 801193FC  41 82 00 44 */	beq lbl_80119440
/* 80119400  A8 1F 00 06 */	lha r0, 6(r31)
/* 80119404  C8 22 92 B0 */	lfd f1, lit_6025(r2)
/* 80119408  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8011940C  3C 00 43 30 */	lis r0, 0x4330
/* 80119410  48 00 00 18 */	b lbl_80119428
lbl_80119414:
/* 80119414  90 61 00 0C */	stw r3, 0xc(r1)
/* 80119418  90 01 00 08 */	stw r0, 8(r1)
/* 8011941C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80119420  EC 00 08 28 */	fsubs f0, f0, f1
/* 80119424  EF FF 00 28 */	fsubs f31, f31, f0
lbl_80119428:
/* 80119428  90 61 00 0C */	stw r3, 0xc(r1)
/* 8011942C  90 01 00 08 */	stw r0, 8(r1)
/* 80119430  C8 01 00 08 */	lfd f0, 8(r1)
/* 80119434  EC 00 08 28 */	fsubs f0, f0, f1
/* 80119438  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8011943C  41 81 FF D8 */	bgt lbl_80119414
lbl_80119440:
/* 80119440  FC 20 F8 90 */	fmr f1, f31
lbl_80119444:
/* 80119444  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 80119448  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8011944C  39 61 00 30 */	addi r11, r1, 0x30
/* 80119450  48 24 8D C9 */	bl _restgpr_25
/* 80119454  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80119458  7C 08 03 A6 */	mtlr r0
/* 8011945C  38 21 00 40 */	addi r1, r1, 0x40
/* 80119460  4E 80 00 20 */	blr 
