lbl_805405B4:
/* 805405B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 805405B8  7C 08 02 A6 */	mflr r0
/* 805405BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 805405C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 805405C4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 805405C8  7C 7F 1B 78 */	mr r31, r3
/* 805405CC  3C 60 80 54 */	lis r3, lit_4368@ha
/* 805405D0  38 83 1F 0C */	addi r4, r3, lit_4368@l
/* 805405D4  80 64 00 00 */	lwz r3, 0(r4)
/* 805405D8  80 04 00 04 */	lwz r0, 4(r4)
/* 805405DC  90 61 00 14 */	stw r3, 0x14(r1)
/* 805405E0  90 01 00 18 */	stw r0, 0x18(r1)
/* 805405E4  80 04 00 08 */	lwz r0, 8(r4)
/* 805405E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 805405EC  38 7F 0F 90 */	addi r3, r31, 0xf90
/* 805405F0  38 81 00 14 */	addi r4, r1, 0x14
/* 805405F4  4B E2 1A 54 */	b __ptmf_cmpr
/* 805405F8  2C 03 00 00 */	cmpwi r3, 0
/* 805405FC  40 82 00 1C */	bne lbl_80540618
/* 80540600  7F E3 FB 78 */	mr r3, r31
/* 80540604  38 80 00 00 */	li r4, 0
/* 80540608  39 9F 0F 90 */	addi r12, r31, 0xf90
/* 8054060C  4B E2 1A 78 */	b __ptmf_scall
/* 80540610  60 00 00 00 */	nop 
/* 80540614  48 00 00 8C */	b lbl_805406A0
lbl_80540618:
/* 80540618  38 00 00 00 */	li r0, 0
/* 8054061C  98 1F 0E 2E */	stb r0, 0xe2e(r31)
/* 80540620  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80540624  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80540628  3B C3 4E C8 */	addi r30, r3, 0x4ec8
/* 8054062C  88 83 4F B5 */	lbz r4, 0x4fb5(r3)
/* 80540630  28 04 00 01 */	cmplwi r4, 1
/* 80540634  41 82 00 0C */	beq lbl_80540640
/* 80540638  28 04 00 02 */	cmplwi r4, 2
/* 8054063C  40 82 00 08 */	bne lbl_80540644
lbl_80540640:
/* 80540640  38 00 00 01 */	li r0, 1
lbl_80540644:
/* 80540644  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80540648  41 82 00 2C */	beq lbl_80540674
/* 8054064C  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 80540650  4B B0 81 A0 */	b ChkPresentEnd__16dEvent_manager_cFv
/* 80540654  2C 03 00 00 */	cmpwi r3, 0
/* 80540658  40 82 00 0C */	bne lbl_80540664
/* 8054065C  38 60 00 01 */	li r3, 1
/* 80540660  48 00 00 44 */	b lbl_805406A4
lbl_80540664:
/* 80540664  7F C3 F3 78 */	mr r3, r30
/* 80540668  4B B0 1E 00 */	b reset__14dEvt_control_cFv
/* 8054066C  38 60 00 01 */	li r3, 1
/* 80540670  48 00 00 34 */	b lbl_805406A4
lbl_80540674:
/* 80540674  3C 60 80 54 */	lis r3, lit_4378@ha
/* 80540678  38 83 1F 18 */	addi r4, r3, lit_4378@l
/* 8054067C  80 64 00 00 */	lwz r3, 0(r4)
/* 80540680  80 04 00 04 */	lwz r0, 4(r4)
/* 80540684  90 61 00 08 */	stw r3, 8(r1)
/* 80540688  90 01 00 0C */	stw r0, 0xc(r1)
/* 8054068C  80 04 00 08 */	lwz r0, 8(r4)
/* 80540690  90 01 00 10 */	stw r0, 0x10(r1)
/* 80540694  7F E3 FB 78 */	mr r3, r31
/* 80540698  38 81 00 08 */	addi r4, r1, 8
/* 8054069C  48 00 03 E5 */	bl setAction__19daNpc_FairySeirei_cFM19daNpc_FairySeirei_cFPCvPvi_i
lbl_805406A0:
/* 805406A0  38 60 00 01 */	li r3, 1
lbl_805406A4:
/* 805406A4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 805406A8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 805406AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 805406B0  7C 08 03 A6 */	mtlr r0
/* 805406B4  38 21 00 30 */	addi r1, r1, 0x30
/* 805406B8  4E 80 00 20 */	blr 
