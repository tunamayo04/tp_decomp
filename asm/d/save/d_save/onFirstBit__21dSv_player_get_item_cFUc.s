lbl_80033E60:
/* 80033E60  54 88 06 3E */	clrlwi r8, r4, 0x18
/* 80033E64  54 87 EE FA */	rlwinm r7, r4, 0x1d, 0x1b, 0x1d
/* 80033E68  7C C3 38 2E */	lwzx r6, r3, r7
/* 80033E6C  38 A0 00 01 */	li r5, 1
/* 80033E70  54 80 D8 08 */	slwi r0, r4, 0x1b
/* 80033E74  55 04 0F FE */	srwi r4, r8, 0x1f
/* 80033E78  7C 04 00 50 */	subf r0, r4, r0
/* 80033E7C  54 00 28 3E */	rotlwi r0, r0, 5
/* 80033E80  7C 00 22 14 */	add r0, r0, r4
/* 80033E84  7C A0 00 30 */	slw r0, r5, r0
/* 80033E88  7C C0 03 78 */	or r0, r6, r0
/* 80033E8C  7C 03 39 2E */	stwx r0, r3, r7
/* 80033E90  4E 80 00 20 */	blr 
