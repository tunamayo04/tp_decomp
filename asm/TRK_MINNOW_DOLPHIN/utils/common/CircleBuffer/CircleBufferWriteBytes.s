lbl_803727A8:
/* 803727A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803727AC  7C 08 02 A6 */	mflr r0
/* 803727B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803727B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803727B8  7C BF 2B 78 */	mr r31, r5
/* 803727BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803727C0  7C 7E 1B 78 */	mr r30, r3
/* 803727C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803727C8  93 81 00 10 */	stw r28, 0x10(r1)
/* 803727CC  7C 9C 23 78 */	mr r28, r4
/* 803727D0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 803727D4  7C 1F 00 40 */	cmplw r31, r0
/* 803727D8  40 81 00 0C */	ble lbl_803727E4
/* 803727DC  38 60 FF FF */	li r3, -1
/* 803727E0  48 00 00 B0 */	b lbl_80372890
lbl_803727E4:
/* 803727E4  38 7E 00 18 */	addi r3, r30, 0x18
/* 803727E8  48 00 04 E1 */	bl MWEnterCriticalSection
/* 803727EC  80 9E 00 08 */	lwz r4, 8(r30)
/* 803727F0  80 7E 00 04 */	lwz r3, 4(r30)
/* 803727F4  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 803727F8  7C 84 18 50 */	subf r4, r4, r3
/* 803727FC  7F A4 00 50 */	subf r29, r4, r0
/* 80372800  7C 1D F8 40 */	cmplw r29, r31
/* 80372804  41 80 00 20 */	blt lbl_80372824
/* 80372808  7F 84 E3 78 */	mr r4, r28
/* 8037280C  7F E5 FB 78 */	mr r5, r31
/* 80372810  4B C9 0D 31 */	bl memcpy
/* 80372814  80 1E 00 04 */	lwz r0, 4(r30)
/* 80372818  7C 00 FA 14 */	add r0, r0, r31
/* 8037281C  90 1E 00 04 */	stw r0, 4(r30)
/* 80372820  48 00 00 30 */	b lbl_80372850
lbl_80372824:
/* 80372824  7F 84 E3 78 */	mr r4, r28
/* 80372828  7F A5 EB 78 */	mr r5, r29
/* 8037282C  4B C9 0D 15 */	bl memcpy
/* 80372830  80 7E 00 08 */	lwz r3, 8(r30)
/* 80372834  7C 9C EA 14 */	add r4, r28, r29
/* 80372838  7C BD F8 50 */	subf r5, r29, r31
/* 8037283C  4B C9 0D 05 */	bl memcpy
/* 80372840  80 1E 00 08 */	lwz r0, 8(r30)
/* 80372844  7C 00 FA 14 */	add r0, r0, r31
/* 80372848  7C 1D 00 50 */	subf r0, r29, r0
/* 8037284C  90 1E 00 04 */	stw r0, 4(r30)
lbl_80372850:
/* 80372850  80 9E 00 08 */	lwz r4, 8(r30)
/* 80372854  80 1E 00 04 */	lwz r0, 4(r30)
/* 80372858  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8037285C  7C 04 00 50 */	subf r0, r4, r0
/* 80372860  7C 03 00 40 */	cmplw r3, r0
/* 80372864  40 82 00 08 */	bne lbl_8037286C
/* 80372868  90 9E 00 04 */	stw r4, 4(r30)
lbl_8037286C:
/* 8037286C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80372870  38 7E 00 18 */	addi r3, r30, 0x18
/* 80372874  7C 1F 00 50 */	subf r0, r31, r0
/* 80372878  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8037287C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80372880  7C 00 FA 14 */	add r0, r0, r31
/* 80372884  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80372888  48 00 04 1D */	bl MWExitCriticalSection
/* 8037288C  38 60 00 00 */	li r3, 0
lbl_80372890:
/* 80372890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80372894  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80372898  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037289C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803728A0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803728A4  7C 08 03 A6 */	mtlr r0
/* 803728A8  38 21 00 20 */	addi r1, r1, 0x20
/* 803728AC  4E 80 00 20 */	blr 
