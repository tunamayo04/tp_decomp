lbl_80185040:
/* 80185040  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80185044  7C 08 02 A6 */	mflr r0
/* 80185048  90 01 00 34 */	stw r0, 0x34(r1)
/* 8018504C  39 61 00 30 */	addi r11, r1, 0x30
/* 80185050  48 1D D1 7D */	bl _savegpr_25
/* 80185054  7C 7F 1B 78 */	mr r31, r3
/* 80185058  48 00 82 05 */	bl headerTxtChangeAnm__14dFile_select_cFv
/* 8018505C  7C 7D 1B 78 */	mr r29, r3
/* 80185060  7F E3 FB 78 */	mr r3, r31
/* 80185064  4B FF FC E9 */	bl selectDataBaseMoveAnm__14dFile_select_cFv
/* 80185068  7C 7E 1B 78 */	mr r30, r3
/* 8018506C  3B 80 00 01 */	li r28, 1
/* 80185070  88 1F 01 4A */	lbz r0, 0x14a(r31)
/* 80185074  28 00 00 00 */	cmplwi r0, 0
/* 80185078  40 82 00 10 */	bne lbl_80185088
/* 8018507C  88 1F 01 4B */	lbz r0, 0x14b(r31)
/* 80185080  28 00 00 00 */	cmplwi r0, 0
/* 80185084  41 82 00 10 */	beq lbl_80185094
lbl_80185088:
/* 80185088  7F E3 FB 78 */	mr r3, r31
/* 8018508C  48 00 91 35 */	bl errorMoveAnm__14dFile_select_cFv
/* 80185090  7C 7C 1B 78 */	mr r28, r3
lbl_80185094:
/* 80185094  3B 60 00 01 */	li r27, 1
/* 80185098  88 1F 01 08 */	lbz r0, 0x108(r31)
/* 8018509C  28 00 00 00 */	cmplwi r0, 0
/* 801850A0  40 82 00 10 */	bne lbl_801850B0
/* 801850A4  88 1F 02 81 */	lbz r0, 0x281(r31)
/* 801850A8  28 00 00 00 */	cmplwi r0, 0
/* 801850AC  41 82 00 10 */	beq lbl_801850BC
lbl_801850B0:
/* 801850B0  7F E3 FB 78 */	mr r3, r31
/* 801850B4  48 00 3C 85 */	bl yesnoMenuMoveAnm__14dFile_select_cFv
/* 801850B8  7C 7B 1B 78 */	mr r27, r3
lbl_801850BC:
/* 801850BC  3B 40 00 01 */	li r26, 1
/* 801850C0  88 1F 01 28 */	lbz r0, 0x128(r31)
/* 801850C4  28 00 00 00 */	cmplwi r0, 0
/* 801850C8  40 82 00 10 */	bne lbl_801850D8
/* 801850CC  88 1F 00 3C */	lbz r0, 0x3c(r31)
/* 801850D0  28 00 00 00 */	cmplwi r0, 0
/* 801850D4  41 82 00 10 */	beq lbl_801850E4
lbl_801850D8:
/* 801850D8  7F E3 FB 78 */	mr r3, r31
/* 801850DC  48 00 B0 49 */	bl nameMoveAnm__14dFile_select_cFv
/* 801850E0  7C 7A 1B 78 */	mr r26, r3
lbl_801850E4:
/* 801850E4  3B 20 00 01 */	li r25, 1
/* 801850E8  88 1F 03 60 */	lbz r0, 0x360(r31)
/* 801850EC  28 00 00 00 */	cmplwi r0, 0
/* 801850F0  40 82 00 10 */	bne lbl_80185100
/* 801850F4  88 1F 02 83 */	lbz r0, 0x283(r31)
/* 801850F8  28 00 00 00 */	cmplwi r0, 0
/* 801850FC  41 82 00 10 */	beq lbl_8018510C
lbl_80185100:
/* 80185100  7F E3 FB 78 */	mr r3, r31
/* 80185104  48 00 1B A9 */	bl menuMoveAnm__14dFile_select_cFv
/* 80185108  7C 79 1B 78 */	mr r25, r3
lbl_8018510C:
/* 8018510C  7F E3 FB 78 */	mr r3, r31
/* 80185110  48 00 83 0D */	bl modoruTxtDispAnm__14dFile_select_cFv
/* 80185114  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 80185118  28 00 00 01 */	cmplwi r0, 1
/* 8018511C  40 82 00 FC */	bne lbl_80185218
/* 80185120  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80185124  28 00 00 01 */	cmplwi r0, 1
/* 80185128  40 82 00 F0 */	bne lbl_80185218
/* 8018512C  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 80185130  28 00 00 01 */	cmplwi r0, 1
/* 80185134  40 82 00 E4 */	bne lbl_80185218
/* 80185138  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 8018513C  28 00 00 01 */	cmplwi r0, 1
/* 80185140  40 82 00 D8 */	bne lbl_80185218
/* 80185144  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 80185148  28 00 00 01 */	cmplwi r0, 1
/* 8018514C  40 82 00 CC */	bne lbl_80185218
/* 80185150  57 20 06 3E */	clrlwi r0, r25, 0x18
/* 80185154  28 00 00 01 */	cmplwi r0, 1
/* 80185158  40 82 00 C0 */	bne lbl_80185218
/* 8018515C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80185160  28 00 00 01 */	cmplwi r0, 1
/* 80185164  40 82 00 B4 */	bne lbl_80185218
/* 80185168  3B 20 00 00 */	li r25, 0
/* 8018516C  3B C0 00 00 */	li r30, 0
lbl_80185170:
/* 80185170  38 1E 00 BC */	addi r0, r30, 0xbc
/* 80185174  7C 7F 00 2E */	lwzx r3, r31, r0
/* 80185178  48 0C E9 B5 */	bl reinit__8CPaneMgrFv
/* 8018517C  3B 39 00 01 */	addi r25, r25, 1
/* 80185180  2C 19 00 03 */	cmpwi r25, 3
/* 80185184  3B DE 00 04 */	addi r30, r30, 4
/* 80185188  41 80 FF E8 */	blt lbl_80185170
/* 8018518C  7F E3 FB 78 */	mr r3, r31
/* 80185190  38 80 00 43 */	li r4, 0x43
/* 80185194  38 A0 00 01 */	li r5, 1
/* 80185198  38 C0 00 00 */	li r6, 0
/* 8018519C  48 00 7F 49 */	bl headerTxtSet__14dFile_select_cFUsUcUc
/* 801851A0  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801851A4  98 1F 02 64 */	stb r0, 0x264(r31)
/* 801851A8  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801851AC  54 00 10 3A */	slwi r0, r0, 2
/* 801851B0  7C 7F 02 14 */	add r3, r31, r0
/* 801851B4  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 801851B8  80 63 00 04 */	lwz r3, 4(r3)
/* 801851BC  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 801851C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801851C4  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 801851C8  7D 89 03 A6 */	mtctr r12
/* 801851CC  4E 80 04 21 */	bctrl 
/* 801851D0  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801851D4  54 04 10 3A */	slwi r4, r0, 2
/* 801851D8  3C 60 80 3C */	lis r3, SelStartFrameTbl@ha
/* 801851DC  38 63 A8 54 */	addi r3, r3, SelStartFrameTbl@l
/* 801851E0  7C 03 20 2E */	lwzx r0, r3, r4
/* 801851E4  7C 7F 22 14 */	add r3, r31, r4
/* 801851E8  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 801851EC  38 80 00 00 */	li r4, 0
/* 801851F0  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801851F4  54 00 10 3A */	slwi r0, r0, 2
/* 801851F8  7C 7F 02 14 */	add r3, r31, r0
/* 801851FC  80 63 01 88 */	lwz r3, 0x188(r3)
/* 80185200  B0 83 00 16 */	sth r4, 0x16(r3)
/* 80185204  7F E3 FB 78 */	mr r3, r31
/* 80185208  38 80 00 01 */	li r4, 1
/* 8018520C  48 00 82 ED */	bl ketteiTxtDispAnmInit__14dFile_select_cFUc
/* 80185210  38 00 00 02 */	li r0, 2
/* 80185214  98 1F 02 6F */	stb r0, 0x26f(r31)
lbl_80185218:
/* 80185218  39 61 00 30 */	addi r11, r1, 0x30
/* 8018521C  48 1D CF FD */	bl _restgpr_25
/* 80185220  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80185224  7C 08 03 A6 */	mtlr r0
/* 80185228  38 21 00 30 */	addi r1, r1, 0x30
/* 8018522C  4E 80 00 20 */	blr 
