lbl_80234318:
/* 80234318  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8023431C  7C 08 02 A6 */	mflr r0
/* 80234320  90 01 00 44 */	stw r0, 0x44(r1)
/* 80234324  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80234328  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 8023432C  39 61 00 30 */	addi r11, r1, 0x30
/* 80234330  48 12 DE AD */	bl _savegpr_29
/* 80234334  7C 7E 1B 78 */	mr r30, r3
/* 80234338  48 00 2D C5 */	bl isMidonaMessage__12dMsgObject_cFv
/* 8023433C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80234340  41 82 01 B0 */	beq lbl_802344F0
/* 80234344  3B E0 00 00 */	li r31, 0
/* 80234348  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 8023434C  2C 00 00 00 */	cmpwi r0, 0
/* 80234350  40 82 00 84 */	bne lbl_802343D4
/* 80234354  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 80234358  83 A3 00 04 */	lwz r29, 4(r3)
/* 8023435C  38 00 00 00 */	li r0, 0
/* 80234360  98 1E 01 A3 */	stb r0, 0x1a3(r30)
/* 80234364  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 80234368  A0 03 05 DE */	lhz r0, 0x5de(r3)
/* 8023436C  28 00 07 FA */	cmplwi r0, 0x7fa
/* 80234370  40 82 00 2C */	bne lbl_8023439C
/* 80234374  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234378  38 80 00 03 */	li r4, 3
/* 8023437C  88 BD 12 44 */	lbz r5, 0x1244(r29)
/* 80234380  C0 3D 04 48 */	lfs f1, 0x448(r29)
/* 80234384  88 DD 12 4E */	lbz r6, 0x124e(r29)
/* 80234388  81 83 00 00 */	lwz r12, 0(r3)
/* 8023438C  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80234390  7D 89 03 A6 */	mtctr r12
/* 80234394  4E 80 04 21 */	bctrl 
/* 80234398  48 00 00 30 */	b lbl_802343C8
lbl_8023439C:
/* 8023439C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802343A0  38 80 00 02 */	li r4, 2
/* 802343A4  88 BD 12 44 */	lbz r5, 0x1244(r29)
/* 802343A8  38 05 00 01 */	addi r0, r5, 1
/* 802343AC  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 802343B0  C0 3D 04 48 */	lfs f1, 0x448(r29)
/* 802343B4  88 DD 12 4E */	lbz r6, 0x124e(r29)
/* 802343B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802343BC  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 802343C0  7D 89 03 A6 */	mtctr r12
/* 802343C4  4E 80 04 21 */	bctrl 
lbl_802343C8:
/* 802343C8  38 00 00 00 */	li r0, 0
/* 802343CC  98 1D 12 4D */	stb r0, 0x124d(r29)
/* 802343D0  48 00 01 20 */	b lbl_802344F0
lbl_802343D4:
/* 802343D4  3C 60 80 3E */	lis r3, m_cpadInfo__8mDoCPd_c@ha
/* 802343D8  38 63 D2 E8 */	addi r3, r3, m_cpadInfo__8mDoCPd_c@l
/* 802343DC  80 63 00 34 */	lwz r3, 0x34(r3)
/* 802343E0  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 802343E4  41 82 00 2C */	beq lbl_80234410
/* 802343E8  7F C3 F3 78 */	mr r3, r30
/* 802343EC  48 00 3A 6D */	bl getSelectCursorPosLocal__12dMsgObject_cFv
/* 802343F0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 802343F4  28 00 00 FF */	cmplwi r0, 0xff
/* 802343F8  41 82 00 50 */	beq lbl_80234448
/* 802343FC  38 00 00 01 */	li r0, 1
/* 80234400  98 1E 01 A3 */	stb r0, 0x1a3(r30)
/* 80234404  38 00 00 09 */	li r0, 9
/* 80234408  B0 1E 01 6A */	sth r0, 0x16a(r30)
/* 8023440C  48 00 00 3C */	b lbl_80234448
lbl_80234410:
/* 80234410  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80234414  41 82 00 34 */	beq lbl_80234448
/* 80234418  88 9E 01 A1 */	lbz r4, 0x1a1(r30)
/* 8023441C  28 04 00 00 */	cmplwi r4, 0
/* 80234420  41 82 00 28 */	beq lbl_80234448
/* 80234424  7F C3 F3 78 */	mr r3, r30
/* 80234428  38 04 FF FF */	addi r0, r4, -1
/* 8023442C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80234430  48 00 3A 39 */	bl setSelectCursorPosLocal__12dMsgObject_cFUc
/* 80234434  3B E0 00 01 */	li r31, 1
/* 80234438  38 00 00 02 */	li r0, 2
/* 8023443C  98 1E 01 A3 */	stb r0, 0x1a3(r30)
/* 80234440  38 00 00 09 */	li r0, 9
/* 80234444  B0 1E 01 6A */	sth r0, 0x16a(r30)
lbl_80234448:
/* 80234448  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 8023444C  A0 03 05 DE */	lhz r0, 0x5de(r3)
/* 80234450  28 00 07 FA */	cmplwi r0, 0x7fa
/* 80234454  40 82 00 30 */	bne lbl_80234484
/* 80234458  7F C3 F3 78 */	mr r3, r30
/* 8023445C  48 00 39 FD */	bl getSelectCursorPosLocal__12dMsgObject_cFv
/* 80234460  7C 65 1B 78 */	mr r5, r3
/* 80234464  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234468  38 80 00 02 */	li r4, 2
/* 8023446C  7F E6 FB 78 */	mr r6, r31
/* 80234470  81 83 00 00 */	lwz r12, 0(r3)
/* 80234474  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80234478  7D 89 03 A6 */	mtctr r12
/* 8023447C  4E 80 04 21 */	bctrl 
/* 80234480  48 00 00 70 */	b lbl_802344F0
lbl_80234484:
/* 80234484  7F C3 F3 78 */	mr r3, r30
/* 80234488  48 00 39 D1 */	bl getSelectCursorPosLocal__12dMsgObject_cFv
/* 8023448C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80234490  28 00 00 FF */	cmplwi r0, 0xff
/* 80234494  41 82 00 34 */	beq lbl_802344C8
/* 80234498  7F C3 F3 78 */	mr r3, r30
/* 8023449C  48 00 39 BD */	bl getSelectCursorPosLocal__12dMsgObject_cFv
/* 802344A0  38 03 00 01 */	addi r0, r3, 1
/* 802344A4  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 802344A8  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802344AC  38 80 00 02 */	li r4, 2
/* 802344B0  7F E6 FB 78 */	mr r6, r31
/* 802344B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802344B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802344BC  7D 89 03 A6 */	mtctr r12
/* 802344C0  4E 80 04 21 */	bctrl 
/* 802344C4  48 00 00 2C */	b lbl_802344F0
lbl_802344C8:
/* 802344C8  7F C3 F3 78 */	mr r3, r30
/* 802344CC  48 00 39 8D */	bl getSelectCursorPosLocal__12dMsgObject_cFv
/* 802344D0  7C 65 1B 78 */	mr r5, r3
/* 802344D4  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802344D8  38 80 00 02 */	li r4, 2
/* 802344DC  7F E6 FB 78 */	mr r6, r31
/* 802344E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802344E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 802344E8  7D 89 03 A6 */	mtctr r12
/* 802344EC  4E 80 04 21 */	bctrl 
lbl_802344F0:
/* 802344F0  A8 7E 01 6A */	lha r3, 0x16a(r30)
/* 802344F4  38 03 00 01 */	addi r0, r3, 1
/* 802344F8  B0 1E 01 6A */	sth r0, 0x16a(r30)
/* 802344FC  7F C3 F3 78 */	mr r3, r30
/* 80234500  48 00 2B BD */	bl isKanbanMessage__12dMsgObject_cFv
/* 80234504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80234508  41 82 00 98 */	beq lbl_802345A0
/* 8023450C  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 80234510  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 80234514  A8 83 02 FE */	lha r4, 0x2fe(r3)
/* 80234518  7C 9F 23 78 */	mr r31, r4
/* 8023451C  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 80234520  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 80234524  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80234528  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023452C  3C 60 43 30 */	lis r3, 0x4330
/* 80234530  90 61 00 08 */	stw r3, 8(r1)
/* 80234534  C8 01 00 08 */	lfd f0, 8(r1)
/* 80234538  EC 20 10 28 */	fsubs f1, f0, f2
/* 8023453C  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80234540  90 01 00 14 */	stw r0, 0x14(r1)
/* 80234544  90 61 00 10 */	stw r3, 0x10(r1)
/* 80234548  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8023454C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80234550  EF E1 00 24 */	fdivs f31, f1, f0
/* 80234554  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234558  FC 20 F8 90 */	fmr f1, f31
/* 8023455C  81 83 00 00 */	lwz r12, 0(r3)
/* 80234560  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80234564  7D 89 03 A6 */	mtctr r12
/* 80234568  4E 80 04 21 */	bctrl 
/* 8023456C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234570  FC 20 F8 90 */	fmr f1, f31
/* 80234574  81 83 00 00 */	lwz r12, 0(r3)
/* 80234578  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8023457C  7D 89 03 A6 */	mtctr r12
/* 80234580  4E 80 04 21 */	bctrl 
/* 80234584  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 80234588  FC 20 F8 90 */	fmr f1, f31
/* 8023458C  81 83 00 00 */	lwz r12, 0(r3)
/* 80234590  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80234594  7D 89 03 A6 */	mtctr r12
/* 80234598  4E 80 04 21 */	bctrl 
/* 8023459C  48 00 03 38 */	b lbl_802348D4
lbl_802345A0:
/* 802345A0  7F C3 F3 78 */	mr r3, r30
/* 802345A4  48 00 2C 41 */	bl isPlaceMessage__12dMsgObject_cFv
/* 802345A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802345AC  40 82 00 14 */	bne lbl_802345C0
/* 802345B0  7F C3 F3 78 */	mr r3, r30
/* 802345B4  48 00 2C 61 */	bl isStaffMessage__12dMsgObject_cFv
/* 802345B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802345BC  41 82 00 98 */	beq lbl_80234654
lbl_802345C0:
/* 802345C0  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 802345C4  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 802345C8  A8 83 03 06 */	lha r4, 0x306(r3)
/* 802345CC  7C 9F 23 78 */	mr r31, r4
/* 802345D0  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 802345D4  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 802345D8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802345DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802345E0  3C 60 43 30 */	lis r3, 0x4330
/* 802345E4  90 61 00 10 */	stw r3, 0x10(r1)
/* 802345E8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802345EC  EC 20 10 28 */	fsubs f1, f0, f2
/* 802345F0  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 802345F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 802345F8  90 61 00 08 */	stw r3, 8(r1)
/* 802345FC  C8 01 00 08 */	lfd f0, 8(r1)
/* 80234600  EC 00 10 28 */	fsubs f0, f0, f2
/* 80234604  EF E1 00 24 */	fdivs f31, f1, f0
/* 80234608  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8023460C  FC 20 F8 90 */	fmr f1, f31
/* 80234610  81 83 00 00 */	lwz r12, 0(r3)
/* 80234614  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80234618  7D 89 03 A6 */	mtctr r12
/* 8023461C  4E 80 04 21 */	bctrl 
/* 80234620  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234624  FC 20 F8 90 */	fmr f1, f31
/* 80234628  81 83 00 00 */	lwz r12, 0(r3)
/* 8023462C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80234630  7D 89 03 A6 */	mtctr r12
/* 80234634  4E 80 04 21 */	bctrl 
/* 80234638  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 8023463C  FC 20 F8 90 */	fmr f1, f31
/* 80234640  81 83 00 00 */	lwz r12, 0(r3)
/* 80234644  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80234648  7D 89 03 A6 */	mtctr r12
/* 8023464C  4E 80 04 21 */	bctrl 
/* 80234650  48 00 02 84 */	b lbl_802348D4
lbl_80234654:
/* 80234654  7F C3 F3 78 */	mr r3, r30
/* 80234658  48 00 2B A1 */	bl isBossMessage__12dMsgObject_cFv
/* 8023465C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80234660  41 82 00 98 */	beq lbl_802346F8
/* 80234664  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 80234668  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 8023466C  A8 83 03 0A */	lha r4, 0x30a(r3)
/* 80234670  7C 9F 23 78 */	mr r31, r4
/* 80234674  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 80234678  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 8023467C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80234680  90 01 00 14 */	stw r0, 0x14(r1)
/* 80234684  3C 60 43 30 */	lis r3, 0x4330
/* 80234688  90 61 00 10 */	stw r3, 0x10(r1)
/* 8023468C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80234690  EC 20 10 28 */	fsubs f1, f0, f2
/* 80234694  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80234698  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023469C  90 61 00 08 */	stw r3, 8(r1)
/* 802346A0  C8 01 00 08 */	lfd f0, 8(r1)
/* 802346A4  EC 00 10 28 */	fsubs f0, f0, f2
/* 802346A8  EF E1 00 24 */	fdivs f31, f1, f0
/* 802346AC  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802346B0  FC 20 F8 90 */	fmr f1, f31
/* 802346B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802346B8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802346BC  7D 89 03 A6 */	mtctr r12
/* 802346C0  4E 80 04 21 */	bctrl 
/* 802346C4  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802346C8  FC 20 F8 90 */	fmr f1, f31
/* 802346CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802346D0  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 802346D4  7D 89 03 A6 */	mtctr r12
/* 802346D8  4E 80 04 21 */	bctrl 
/* 802346DC  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 802346E0  FC 20 F8 90 */	fmr f1, f31
/* 802346E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802346E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802346EC  7D 89 03 A6 */	mtctr r12
/* 802346F0  4E 80 04 21 */	bctrl 
/* 802346F4  48 00 01 E0 */	b lbl_802348D4
lbl_802346F8:
/* 802346F8  7F C3 F3 78 */	mr r3, r30
/* 802346FC  48 00 2B 11 */	bl isBookMessage__12dMsgObject_cFv
/* 80234700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80234704  41 82 01 44 */	beq lbl_80234848
/* 80234708  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 8023470C  3B A3 02 8C */	addi r29, r3, g_MsgObject_HIO_c@l
/* 80234710  A8 7D 03 02 */	lha r3, 0x302(r29)
/* 80234714  A8 9D 02 FE */	lha r4, 0x2fe(r29)
/* 80234718  A8 1D 03 00 */	lha r0, 0x300(r29)
/* 8023471C  7C 00 1A 14 */	add r0, r0, r3
/* 80234720  7C 04 02 14 */	add r0, r4, r0
/* 80234724  7C 1F 07 34 */	extsh r31, r0
/* 80234728  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 8023472C  7C 00 20 00 */	cmpw r0, r4
/* 80234730  41 81 00 6C */	bgt lbl_8023479C
/* 80234734  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 80234738  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8023473C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80234740  3C 60 43 30 */	lis r3, 0x4330
/* 80234744  90 61 00 10 */	stw r3, 0x10(r1)
/* 80234748  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8023474C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80234750  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80234754  90 01 00 0C */	stw r0, 0xc(r1)
/* 80234758  90 61 00 08 */	stw r3, 8(r1)
/* 8023475C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80234760  EC 00 10 28 */	fsubs f0, f0, f2
/* 80234764  EF E1 00 24 */	fdivs f31, f1, f0
/* 80234768  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8023476C  FC 20 F8 90 */	fmr f1, f31
/* 80234770  81 83 00 00 */	lwz r12, 0(r3)
/* 80234774  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80234778  7D 89 03 A6 */	mtctr r12
/* 8023477C  4E 80 04 21 */	bctrl 
/* 80234780  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 80234784  FC 20 F8 90 */	fmr f1, f31
/* 80234788  81 83 00 00 */	lwz r12, 0(r3)
/* 8023478C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80234790  7D 89 03 A6 */	mtctr r12
/* 80234794  4E 80 04 21 */	bctrl 
/* 80234798  48 00 00 34 */	b lbl_802347CC
lbl_8023479C:
/* 8023479C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802347A0  C0 22 B0 C0 */	lfs f1, lit_4084(r2)
/* 802347A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802347A8  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 802347AC  7D 89 03 A6 */	mtctr r12
/* 802347B0  4E 80 04 21 */	bctrl 
/* 802347B4  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 802347B8  C0 22 B0 C0 */	lfs f1, lit_4084(r2)
/* 802347BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802347C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802347C4  7D 89 03 A6 */	mtctr r12
/* 802347C8  4E 80 04 21 */	bctrl 
lbl_802347CC:
/* 802347CC  A8 7D 02 FE */	lha r3, 0x2fe(r29)
/* 802347D0  A8 1D 03 00 */	lha r0, 0x300(r29)
/* 802347D4  7C 03 02 14 */	add r0, r3, r0
/* 802347D8  7C 05 07 34 */	extsh r5, r0
/* 802347DC  A8 7E 01 6A */	lha r3, 0x16a(r30)
/* 802347E0  7C 03 28 00 */	cmpw r3, r5
/* 802347E4  41 80 00 F0 */	blt lbl_802348D4
/* 802347E8  A8 9D 03 02 */	lha r4, 0x302(r29)
/* 802347EC  7C 05 22 14 */	add r0, r5, r4
/* 802347F0  7C 03 00 00 */	cmpw r3, r0
/* 802347F4  41 81 00 E0 */	bgt lbl_802348D4
/* 802347F8  7C 05 18 50 */	subf r0, r5, r3
/* 802347FC  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 80234800  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80234804  90 01 00 14 */	stw r0, 0x14(r1)
/* 80234808  3C 60 43 30 */	lis r3, 0x4330
/* 8023480C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80234810  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80234814  EC 20 10 28 */	fsubs f1, f0, f2
/* 80234818  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 8023481C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80234820  90 61 00 08 */	stw r3, 8(r1)
/* 80234824  C8 01 00 08 */	lfd f0, 8(r1)
/* 80234828  EC 00 10 28 */	fsubs f0, f0, f2
/* 8023482C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80234830  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234834  81 83 00 00 */	lwz r12, 0(r3)
/* 80234838  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8023483C  7D 89 03 A6 */	mtctr r12
/* 80234840  4E 80 04 21 */	bctrl 
/* 80234844  48 00 00 90 */	b lbl_802348D4
lbl_80234848:
/* 80234848  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha
/* 8023484C  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l
/* 80234850  AB E3 02 FE */	lha r31, 0x2fe(r3)
/* 80234854  A8 1E 01 6A */	lha r0, 0x16a(r30)
/* 80234858  C8 42 B1 20 */	lfd f2, lit_4965(r2)
/* 8023485C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80234860  90 01 00 14 */	stw r0, 0x14(r1)
/* 80234864  3C 60 43 30 */	lis r3, 0x4330
/* 80234868  90 61 00 10 */	stw r3, 0x10(r1)
/* 8023486C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80234870  EC 20 10 28 */	fsubs f1, f0, f2
/* 80234874  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 80234878  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023487C  90 61 00 08 */	stw r3, 8(r1)
/* 80234880  C8 01 00 08 */	lfd f0, 8(r1)
/* 80234884  EC 00 10 28 */	fsubs f0, f0, f2
/* 80234888  EF E1 00 24 */	fdivs f31, f1, f0
/* 8023488C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234890  C0 22 B0 C0 */	lfs f1, lit_4084(r2)
/* 80234894  81 83 00 00 */	lwz r12, 0(r3)
/* 80234898  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8023489C  7D 89 03 A6 */	mtctr r12
/* 802348A0  4E 80 04 21 */	bctrl 
/* 802348A4  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802348A8  FC 20 F8 90 */	fmr f1, f31
/* 802348AC  81 83 00 00 */	lwz r12, 0(r3)
/* 802348B0  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 802348B4  7D 89 03 A6 */	mtctr r12
/* 802348B8  4E 80 04 21 */	bctrl 
/* 802348BC  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 802348C0  FC 20 F8 90 */	fmr f1, f31
/* 802348C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802348C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802348CC  7D 89 03 A6 */	mtctr r12
/* 802348D0  4E 80 04 21 */	bctrl 
lbl_802348D4:
/* 802348D4  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802348D8  C0 03 00 68 */	lfs f0, 0x68(r3)
/* 802348DC  C0 23 00 64 */	lfs f1, 0x64(r3)
/* 802348E0  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 802348E4  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 802348E8  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 802348EC  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 802348F0  C0 03 00 70 */	lfs f0, 0x70(r3)
/* 802348F4  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 802348F8  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 802348FC  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 80234900  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 80234904  A8 7E 01 6A */	lha r3, 0x16a(r30)
/* 80234908  7F E0 07 34 */	extsh r0, r31
/* 8023490C  7C 03 00 00 */	cmpw r3, r0
/* 80234910  41 80 00 A8 */	blt lbl_802349B8
/* 80234914  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80234918  C0 22 B0 BC */	lfs f1, lit_4083(r2)
/* 8023491C  FC 40 08 90 */	fmr f2, f1
/* 80234920  81 83 00 00 */	lwz r12, 0(r3)
/* 80234924  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80234928  7D 89 03 A6 */	mtctr r12
/* 8023492C  4E 80 04 21 */	bctrl 
/* 80234930  38 60 00 00 */	li r3, 0
/* 80234934  38 00 00 03 */	li r0, 3
/* 80234938  7C 09 03 A6 */	mtctr r0
lbl_8023493C:
/* 8023493C  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 80234940  7C 80 1A 14 */	add r4, r0, r3
/* 80234944  C0 04 00 9C */	lfs f0, 0x9c(r4)
/* 80234948  C0 24 00 90 */	lfs f1, 0x90(r4)
/* 8023494C  80 1E 01 20 */	lwz r0, 0x120(r30)
/* 80234950  7C 80 1A 14 */	add r4, r0, r3
/* 80234954  D0 24 00 60 */	stfs f1, 0x60(r4)
/* 80234958  D0 04 00 6C */	stfs f0, 0x6c(r4)
/* 8023495C  38 63 00 04 */	addi r3, r3, 4
/* 80234960  42 00 FF DC */	bdnz lbl_8023493C
/* 80234964  38 00 00 00 */	li r0, 0
/* 80234968  B0 1E 01 6A */	sth r0, 0x16a(r30)
/* 8023496C  7F C3 F3 78 */	mr r3, r30
/* 80234970  48 00 27 8D */	bl isMidonaMessage__12dMsgObject_cFv
/* 80234974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80234978  41 82 00 34 */	beq lbl_802349AC
/* 8023497C  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 80234980  A0 03 05 DE */	lhz r0, 0x5de(r3)
/* 80234984  28 00 07 FA */	cmplwi r0, 0x7fa
/* 80234988  40 82 00 14 */	bne lbl_8023499C
/* 8023498C  7F C3 F3 78 */	mr r3, r30
/* 80234990  38 80 00 09 */	li r4, 9
/* 80234994  48 00 1F 51 */	bl setStatusLocal__12dMsgObject_cFUs
/* 80234998  48 00 00 20 */	b lbl_802349B8
lbl_8023499C:
/* 8023499C  7F C3 F3 78 */	mr r3, r30
/* 802349A0  38 80 00 08 */	li r4, 8
/* 802349A4  48 00 1F 41 */	bl setStatusLocal__12dMsgObject_cFUs
/* 802349A8  48 00 00 10 */	b lbl_802349B8
lbl_802349AC:
/* 802349AC  7F C3 F3 78 */	mr r3, r30
/* 802349B0  38 80 00 06 */	li r4, 6
/* 802349B4  48 00 1F 31 */	bl setStatusLocal__12dMsgObject_cFUs
lbl_802349B8:
/* 802349B8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 802349BC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802349C0  39 61 00 30 */	addi r11, r1, 0x30
/* 802349C4  48 12 D8 65 */	bl _restgpr_29
/* 802349C8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802349CC  7C 08 03 A6 */	mtlr r0
/* 802349D0  38 21 00 40 */	addi r1, r1, 0x40
/* 802349D4  4E 80 00 20 */	blr 
