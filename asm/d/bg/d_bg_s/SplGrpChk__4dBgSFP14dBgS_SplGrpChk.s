lbl_80075564:
/* 80075564  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80075568  7C 08 02 A6 */	mflr r0
/* 8007556C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80075570  39 61 00 20 */	addi r11, r1, 0x20
/* 80075574  48 2E CC 61 */	bl _savegpr_27
/* 80075578  7C 7C 1B 78 */	mr r28, r3
/* 8007557C  7C 9B 23 78 */	mr r27, r4
/* 80075580  3B E0 00 00 */	li r31, 0
/* 80075584  7F 63 DB 78 */	mr r3, r27
/* 80075588  48 00 37 85 */	bl Init__14dBgS_SplGrpChkFv
/* 8007558C  7F 9E E3 78 */	mr r30, r28
/* 80075590  3B A0 00 00 */	li r29, 0
lbl_80075594:
/* 80075594  88 1E 00 04 */	lbz r0, 4(r30)
/* 80075598  28 00 00 00 */	cmplwi r0, 0
/* 8007559C  41 82 00 C0 */	beq lbl_8007565C
/* 800755A0  80 7E 00 00 */	lwz r3, 0(r30)
/* 800755A4  81 83 00 04 */	lwz r12, 4(r3)
/* 800755A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800755AC  7D 89 03 A6 */	mtctr r12
/* 800755B0  4E 80 04 21 */	bctrl 
/* 800755B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800755B8  40 82 00 A4 */	bne lbl_8007565C
/* 800755BC  38 7B 00 10 */	addi r3, r27, 0x10
/* 800755C0  80 9E 00 08 */	lwz r4, 8(r30)
/* 800755C4  48 1F 26 19 */	bl ChkSameActorPid__8cBgS_ChkCFUi
/* 800755C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800755CC  40 82 00 90 */	bne lbl_8007565C
/* 800755D0  83 9E 00 00 */	lwz r28, 0(r30)
/* 800755D4  80 1B 00 50 */	lwz r0, 0x50(r27)
/* 800755D8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 800755DC  41 82 00 3C */	beq lbl_80075618
/* 800755E0  7F 83 E3 78 */	mr r3, r28
/* 800755E4  81 9C 00 04 */	lwz r12, 4(r28)
/* 800755E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800755EC  7D 89 03 A6 */	mtctr r12
/* 800755F0  4E 80 04 21 */	bctrl 
/* 800755F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800755F8  41 82 00 64 */	beq lbl_8007565C
/* 800755FC  7F 83 E3 78 */	mr r3, r28
/* 80075600  81 9C 00 04 */	lwz r12, 4(r28)
/* 80075604  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80075608  7D 89 03 A6 */	mtctr r12
/* 8007560C  4E 80 04 21 */	bctrl 
/* 80075610  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80075614  40 82 00 48 */	bne lbl_8007565C
lbl_80075618:
/* 80075618  7F 83 E3 78 */	mr r3, r28
/* 8007561C  7F 64 DB 78 */	mr r4, r27
/* 80075620  81 9C 00 04 */	lwz r12, 4(r28)
/* 80075624  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80075628  7D 89 03 A6 */	mtctr r12
/* 8007562C  4E 80 04 21 */	bctrl 
/* 80075630  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80075634  41 82 00 28 */	beq lbl_8007565C
/* 80075638  3B E0 00 01 */	li r31, 1
/* 8007563C  7F 63 DB 78 */	mr r3, r27
/* 80075640  7F A4 EB 78 */	mr r4, r29
/* 80075644  80 BE 00 00 */	lwz r5, 0(r30)
/* 80075648  80 DE 00 08 */	lwz r6, 8(r30)
/* 8007564C  48 1F 2B 21 */	bl SetActorInfo__13cBgS_PolyInfoFiPvUi
/* 80075650  80 1B 00 50 */	lwz r0, 0x50(r27)
/* 80075654  60 00 00 01 */	ori r0, r0, 1
/* 80075658  90 1B 00 50 */	stw r0, 0x50(r27)
lbl_8007565C:
/* 8007565C  3B BD 00 01 */	addi r29, r29, 1
/* 80075660  2C 1D 01 00 */	cmpwi r29, 0x100
/* 80075664  3B DE 00 14 */	addi r30, r30, 0x14
/* 80075668  41 80 FF 2C */	blt lbl_80075594
/* 8007566C  7F E3 FB 78 */	mr r3, r31
/* 80075670  39 61 00 20 */	addi r11, r1, 0x20
/* 80075674  48 2E CB AD */	bl _restgpr_27
/* 80075678  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007567C  7C 08 03 A6 */	mtlr r0
/* 80075680  38 21 00 20 */	addi r1, r1, 0x20
/* 80075684  4E 80 00 20 */	blr 
