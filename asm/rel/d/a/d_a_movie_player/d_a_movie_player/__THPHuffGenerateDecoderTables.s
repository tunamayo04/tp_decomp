lbl_808738B0:
/* 808738B0  3C 80 80 88 */	lis r4, lit_1109@ha
/* 808738B4  38 A4 95 A0 */	addi r5, r4, lit_1109@l
/* 808738B8  38 E0 00 00 */	li r7, 0
/* 808738BC  80 85 06 24 */	lwz r4, 0x624(r5)
/* 808738C0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 808738C4  1C 60 00 E0 */	mulli r3, r0, 0xe0
/* 808738C8  39 23 03 00 */	addi r9, r3, 0x300
/* 808738CC  7D 24 4A 14 */	add r9, r4, r9
/* 808738D0  39 00 00 01 */	li r8, 1
/* 808738D4  38 C9 00 04 */	addi r6, r9, 4
/* 808738D8  38 00 00 08 */	li r0, 8
/* 808738DC  7C 09 03 A6 */	mtctr r0
lbl_808738E0:
/* 808738E0  80 65 05 C0 */	lwz r3, 0x5c0(r5)
/* 808738E4  38 88 FF FF */	addi r4, r8, -1
/* 808738E8  7C 03 20 AE */	lbzx r0, r3, r4
/* 808738EC  28 00 00 00 */	cmplwi r0, 0
/* 808738F0  41 82 00 3C */	beq lbl_8087392C
/* 808738F4  80 65 05 C8 */	lwz r3, 0x5c8(r5)
/* 808738F8  54 E0 08 3C */	slwi r0, r7, 1
/* 808738FC  7C 03 02 2E */	lhzx r0, r3, r0
/* 80873900  7C 00 38 50 */	subf r0, r0, r7
/* 80873904  90 06 00 8C */	stw r0, 0x8c(r6)
/* 80873908  80 65 05 C0 */	lwz r3, 0x5c0(r5)
/* 8087390C  7C 03 20 AE */	lbzx r0, r3, r4
/* 80873910  7C E7 02 14 */	add r7, r7, r0
/* 80873914  80 85 05 C8 */	lwz r4, 0x5c8(r5)
/* 80873918  54 E3 08 3C */	slwi r3, r7, 1
/* 8087391C  38 03 FF FE */	addi r0, r3, -2
/* 80873920  7C 04 02 2E */	lhzx r0, r4, r0
/* 80873924  90 06 00 44 */	stw r0, 0x44(r6)
/* 80873928  48 00 00 10 */	b lbl_80873938
lbl_8087392C:
/* 8087392C  38 00 FF FF */	li r0, -1
/* 80873930  90 06 00 44 */	stw r0, 0x44(r6)
/* 80873934  90 06 00 8C */	stw r0, 0x8c(r6)
lbl_80873938:
/* 80873938  80 65 05 C0 */	lwz r3, 0x5c0(r5)
/* 8087393C  7C 03 40 AE */	lbzx r0, r3, r8
/* 80873940  28 00 00 00 */	cmplwi r0, 0
/* 80873944  41 82 00 3C */	beq lbl_80873980
/* 80873948  80 65 05 C8 */	lwz r3, 0x5c8(r5)
/* 8087394C  54 E0 08 3C */	slwi r0, r7, 1
/* 80873950  7C 03 02 2E */	lhzx r0, r3, r0
/* 80873954  7C 00 38 50 */	subf r0, r0, r7
/* 80873958  90 06 00 90 */	stw r0, 0x90(r6)
/* 8087395C  80 65 05 C0 */	lwz r3, 0x5c0(r5)
/* 80873960  7C 03 40 AE */	lbzx r0, r3, r8
/* 80873964  7C E7 02 14 */	add r7, r7, r0
/* 80873968  80 85 05 C8 */	lwz r4, 0x5c8(r5)
/* 8087396C  54 E3 08 3C */	slwi r3, r7, 1
/* 80873970  38 03 FF FE */	addi r0, r3, -2
/* 80873974  7C 04 02 2E */	lhzx r0, r4, r0
/* 80873978  90 06 00 48 */	stw r0, 0x48(r6)
/* 8087397C  48 00 00 10 */	b lbl_8087398C
lbl_80873980:
/* 80873980  38 00 FF FF */	li r0, -1
/* 80873984  90 06 00 48 */	stw r0, 0x48(r6)
/* 80873988  90 06 00 90 */	stw r0, 0x90(r6)
lbl_8087398C:
/* 8087398C  38 C6 00 08 */	addi r6, r6, 8
/* 80873990  39 08 00 02 */	addi r8, r8, 2
/* 80873994  42 00 FF 4C */	bdnz lbl_808738E0
/* 80873998  3C 60 00 10 */	lis r3, 0x0010 /* 0x000FFFFF@ha */
/* 8087399C  38 03 FF FF */	addi r0, r3, 0xFFFF /* 0x000FFFFF@l */
/* 808739A0  90 09 00 88 */	stw r0, 0x88(r9)
/* 808739A4  4E 80 00 20 */	blr 
