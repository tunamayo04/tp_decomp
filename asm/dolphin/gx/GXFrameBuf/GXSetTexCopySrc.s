lbl_8035CA80:
/* 8035CA80  81 02 CB 80 */	lwz r8, __GXData(r2)
/* 8035CA84  39 20 00 00 */	li r9, 0
/* 8035CA88  54 A7 04 3E */	clrlwi r7, r5, 0x10
/* 8035CA8C  91 28 01 F0 */	stw r9, 0x1f0(r8)
/* 8035CA90  54 C5 04 3E */	clrlwi r5, r6, 0x10
/* 8035CA94  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8035CA98  80 68 01 F0 */	lwz r3, 0x1f0(r8)
/* 8035CA9C  50 03 05 BE */	rlwimi r3, r0, 0, 0x16, 0x1f
/* 8035CAA0  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8035CAA4  90 68 01 F0 */	stw r3, 0x1f0(r8)
/* 8035CAA8  38 C0 00 49 */	li r6, 0x49
/* 8035CAAC  38 87 FF FF */	addi r4, r7, -1
/* 8035CAB0  80 E8 01 F0 */	lwz r7, 0x1f0(r8)
/* 8035CAB4  50 07 53 2A */	rlwimi r7, r0, 0xa, 0xc, 0x15
/* 8035CAB8  38 65 FF FF */	addi r3, r5, -1
/* 8035CABC  90 E8 01 F0 */	stw r7, 0x1f0(r8)
/* 8035CAC0  38 00 00 4A */	li r0, 0x4a
/* 8035CAC4  80 A8 01 F0 */	lwz r5, 0x1f0(r8)
/* 8035CAC8  50 C5 C0 0E */	rlwimi r5, r6, 0x18, 0, 7
/* 8035CACC  90 A8 01 F0 */	stw r5, 0x1f0(r8)
/* 8035CAD0  91 28 01 F4 */	stw r9, 0x1f4(r8)
/* 8035CAD4  80 A8 01 F4 */	lwz r5, 0x1f4(r8)
/* 8035CAD8  50 85 05 BE */	rlwimi r5, r4, 0, 0x16, 0x1f
/* 8035CADC  90 A8 01 F4 */	stw r5, 0x1f4(r8)
/* 8035CAE0  80 88 01 F4 */	lwz r4, 0x1f4(r8)
/* 8035CAE4  50 64 53 2A */	rlwimi r4, r3, 0xa, 0xc, 0x15
/* 8035CAE8  90 88 01 F4 */	stw r4, 0x1f4(r8)
/* 8035CAEC  80 68 01 F4 */	lwz r3, 0x1f4(r8)
/* 8035CAF0  50 03 C0 0E */	rlwimi r3, r0, 0x18, 0, 7
/* 8035CAF4  90 68 01 F4 */	stw r3, 0x1f4(r8)
/* 8035CAF8  4E 80 00 20 */	blr 
