lbl_80075880:
/* 80075880  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80075884  7C 08 02 A6 */	mflr r0
/* 80075888  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007588C  39 61 00 30 */	addi r11, r1, 0x30
/* 80075890  48 2E C9 39 */	bl _savegpr_24
/* 80075894  7C 78 1B 78 */	mr r24, r3
/* 80075898  7C 99 23 78 */	mr r25, r4
/* 8007589C  7C BA 2B 78 */	mr r26, r5
/* 800758A0  7C DB 33 78 */	mr r27, r6
/* 800758A4  7C FC 3B 78 */	mr r28, r7
/* 800758A8  7D 1D 43 78 */	mr r29, r8
/* 800758AC  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 800758B0  41 82 00 94 */	beq lbl_80075944
/* 800758B4  7F 23 CB 78 */	mr r3, r25
/* 800758B8  48 1F 28 F5 */	bl ChkBgIndex__13cBgS_PolyInfoCFv
/* 800758BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800758C0  40 82 00 08 */	bne lbl_800758C8
/* 800758C4  48 00 00 80 */	b lbl_80075944
lbl_800758C8:
/* 800758C8  A0 19 00 02 */	lhz r0, 2(r25)
/* 800758CC  1F E0 00 14 */	mulli r31, r0, 0x14
/* 800758D0  7C 78 FA 14 */	add r3, r24, r31
/* 800758D4  88 03 00 04 */	lbz r0, 4(r3)
/* 800758D8  28 00 00 00 */	cmplwi r0, 0
/* 800758DC  41 82 00 68 */	beq lbl_80075944
/* 800758E0  7F D8 F8 2E */	lwzx r30, r24, r31
/* 800758E4  7F C3 F3 78 */	mr r3, r30
/* 800758E8  81 9E 00 04 */	lwz r12, 4(r30)
/* 800758EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800758F0  7D 89 03 A6 */	mtctr r12
/* 800758F4  4E 80 04 21 */	bctrl 
/* 800758F8  28 03 00 00 */	cmplwi r3, 0
/* 800758FC  41 82 00 48 */	beq lbl_80075944
/* 80075900  7F 03 C3 78 */	mr r3, r24
/* 80075904  7F 24 CB 78 */	mr r4, r25
/* 80075908  4B FF ED 59 */	bl ChkPolySafe__4cBgSFRC13cBgS_PolyInfo
/* 8007590C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80075910  41 82 00 34 */	beq lbl_80075944
/* 80075914  7F C3 F3 78 */	mr r3, r30
/* 80075918  7F 24 CB 78 */	mr r4, r25
/* 8007591C  7C B8 FA 14 */	add r5, r24, r31
/* 80075920  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80075924  7F 46 D3 78 */	mr r6, r26
/* 80075928  7F 67 DB 78 */	mr r7, r27
/* 8007592C  7F 88 E3 78 */	mr r8, r28
/* 80075930  7F A9 EB 78 */	mr r9, r29
/* 80075934  81 9E 00 04 */	lwz r12, 4(r30)
/* 80075938  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8007593C  7D 89 03 A6 */	mtctr r12
/* 80075940  4E 80 04 21 */	bctrl 
lbl_80075944:
/* 80075944  39 61 00 30 */	addi r11, r1, 0x30
/* 80075948  48 2E C8 CD */	bl _restgpr_24
/* 8007594C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80075950  7C 08 03 A6 */	mtlr r0
/* 80075954  38 21 00 30 */	addi r1, r1, 0x30
/* 80075958  4E 80 00 20 */	blr 
