lbl_80360178:
/* 80360178  C0 22 CC 50 */	lfs f1, lit_26(r2)
/* 8036017C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80360180  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80360184  40 82 00 0C */	bne lbl_80360190
/* 80360188  38 00 00 00 */	li r0, 0
/* 8036018C  48 00 00 08 */	b lbl_80360194
lbl_80360190:
/* 80360190  38 00 00 01 */	li r0, 1
lbl_80360194:
/* 80360194  80 A2 CB 80 */	lwz r5, __GXData(r2)
/* 80360198  38 63 00 04 */	addi r3, r3, 4
/* 8036019C  90 05 04 D8 */	stw r0, 0x4d8(r5)
/* 803601A0  38 C5 04 DC */	addi r6, r5, 0x4dc
/* 803601A4  E0 43 00 00 */	psq_l f2, 0(r3), 0, 0 /* qr0 */
/* 803601A8  E0 23 00 08 */	psq_l f1, 8(r3), 0, 0 /* qr0 */
/* 803601AC  E0 03 00 10 */	psq_l f0, 16(r3), 0, 0 /* qr0 */
/* 803601B0  F0 46 00 00 */	psq_st f2, 0(r6), 0, 0 /* qr0 */
/* 803601B4  F0 26 00 08 */	psq_st f1, 8(r6), 0, 0 /* qr0 */
/* 803601B8  F0 06 00 10 */	psq_st f0, 16(r6), 0, 0 /* qr0 */
/* 803601BC  3C 80 CC 01 */	lis r4, 0xCC01 /* 0xCC008000@ha */
/* 803601C0  38 00 00 10 */	li r0, 0x10
/* 803601C4  3C 60 00 06 */	lis r3, 0x0006 /* 0x00061020@ha */
/* 803601C8  98 04 80 00 */	stb r0, 0x8000(r4)
/* 803601CC  38 03 10 20 */	addi r0, r3, 0x1020 /* 0x00061020@l */
/* 803601D0  90 04 80 00 */	stw r0, -0x8000(r4)
/* 803601D4  38 64 80 00 */	addi r3, r4, -32768
/* 803601D8  E0 46 00 00 */	psq_l f2, 0(r6), 0, 0 /* qr0 */
/* 803601DC  E0 26 00 08 */	psq_l f1, 8(r6), 0, 0 /* qr0 */
/* 803601E0  E0 06 00 10 */	psq_l f0, 16(r6), 0, 0 /* qr0 */
/* 803601E4  F0 43 00 00 */	psq_st f2, 0(r3), 0, 0 /* qr0 */
/* 803601E8  F0 23 00 00 */	psq_st f1, 0(r3), 0, 0 /* qr0 */
/* 803601EC  F0 03 00 00 */	psq_st f0, 0(r3), 0, 0 /* qr0 */
/* 803601F0  80 65 04 D8 */	lwz r3, 0x4d8(r5)
/* 803601F4  38 00 00 01 */	li r0, 1
/* 803601F8  90 64 80 00 */	stw r3, -0x8000(r4)
/* 803601FC  B0 05 00 02 */	sth r0, 2(r5)
/* 80360200  4E 80 00 20 */	blr 
