lbl_80C7B530:
/* 80C7B530  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80C7B534  7C 08 02 A6 */	mflr r0
/* 80C7B538  90 01 00 24 */	stw r0, 0x24(r1)
/* 80C7B53C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80C7B540  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80C7B544  7C 7E 1B 78 */	mr r30, r3
/* 80C7B548  88 03 04 E2 */	lbz r0, 0x4e2(r3)
/* 80C7B54C  7C 03 07 74 */	extsb r3, r0
/* 80C7B550  4B 3B 1B 1C */	b dComIfGp_getReverb__Fi
/* 80C7B554  7C 7F 1B 78 */	mr r31, r3
/* 80C7B558  C0 3E 05 2C */	lfs f1, 0x52c(r30)
/* 80C7B55C  4B 6E 6B 50 */	b __cvt_fp2unsigned
/* 80C7B560  7C 66 1B 78 */	mr r6, r3
/* 80C7B564  3C 60 00 08 */	lis r3, 0x0008 /* 0x000801A9@ha */
/* 80C7B568  38 03 01 A9 */	addi r0, r3, 0x01A9 /* 0x000801A9@l */
/* 80C7B56C  90 01 00 08 */	stw r0, 8(r1)
/* 80C7B570  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha
/* 80C7B574  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l
/* 80C7B578  80 63 00 00 */	lwz r3, 0(r3)
/* 80C7B57C  38 81 00 08 */	addi r4, r1, 8
/* 80C7B580  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80C7B584  7F E7 FB 78 */	mr r7, r31
/* 80C7B588  3D 00 80 C8 */	lis r8, lit_3632@ha
/* 80C7B58C  C0 28 C6 1C */	lfs f1, lit_3632@l(r8)
/* 80C7B590  FC 40 08 90 */	fmr f2, f1
/* 80C7B594  3D 00 80 C8 */	lis r8, lit_4150@ha
/* 80C7B598  C0 68 C7 28 */	lfs f3, lit_4150@l(r8)
/* 80C7B59C  FC 80 18 90 */	fmr f4, f3
/* 80C7B5A0  39 00 00 00 */	li r8, 0
/* 80C7B5A4  4B 63 0F 68 */	b seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80C7B5A8  7F C3 F3 78 */	mr r3, r30
/* 80C7B5AC  48 00 0C 2D */	bl setNextPoint__15daLv6TogeTrap_cFv
/* 80C7B5B0  88 1E 05 DA */	lbz r0, 0x5da(r30)
/* 80C7B5B4  28 00 00 05 */	cmplwi r0, 5
/* 80C7B5B8  40 82 00 28 */	bne lbl_80C7B5E0
/* 80C7B5BC  A8 1E 05 AE */	lha r0, 0x5ae(r30)
/* 80C7B5C0  2C 00 FF FF */	cmpwi r0, -1
/* 80C7B5C4  40 82 00 10 */	bne lbl_80C7B5D4
/* 80C7B5C8  7F C3 F3 78 */	mr r3, r30
/* 80C7B5CC  4B 39 E6 B0 */	b fopAcM_delete__FP10fopAc_ac_c
/* 80C7B5D0  48 00 00 18 */	b lbl_80C7B5E8
lbl_80C7B5D4:
/* 80C7B5D4  7F C3 F3 78 */	mr r3, r30
/* 80C7B5D8  48 00 00 29 */	bl init_modeWait__15daLv6TogeTrap_cFv
/* 80C7B5DC  48 00 00 0C */	b lbl_80C7B5E8
lbl_80C7B5E0:
/* 80C7B5E0  7F C3 F3 78 */	mr r3, r30
/* 80C7B5E4  48 00 00 1D */	bl init_modeWait__15daLv6TogeTrap_cFv
lbl_80C7B5E8:
/* 80C7B5E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80C7B5EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80C7B5F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80C7B5F4  7C 08 03 A6 */	mtlr r0
/* 80C7B5F8  38 21 00 20 */	addi r1, r1, 0x20
/* 80C7B5FC  4E 80 00 20 */	blr 
