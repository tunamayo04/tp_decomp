lbl_8035D070:
/* 8035D070  88 A3 00 00 */	lbz r5, 0(r3)
/* 8035D074  38 C0 00 00 */	li r6, 0
/* 8035D078  88 03 00 03 */	lbz r0, 3(r3)
/* 8035D07C  39 20 00 61 */	li r9, 0x61
/* 8035D080  50 A6 06 3E */	rlwimi r6, r5, 0, 0x18, 0x1f
/* 8035D084  3D 00 CC 01 */	lis r8, 0xCC01 /* 0xCC008000@ha */
/* 8035D088  80 A2 CB 80 */	lwz r5, __GXData(r2)
/* 8035D08C  50 06 44 2E */	rlwimi r6, r0, 8, 0x10, 0x17
/* 8035D090  99 28 80 00 */	stb r9, 0x8000(r8)
/* 8035D094  38 00 00 4F */	li r0, 0x4f
/* 8035D098  50 06 C0 0E */	rlwimi r6, r0, 0x18, 0, 7
/* 8035D09C  90 C8 80 00 */	stw r6, -0x8000(r8)
/* 8035D0A0  39 40 00 00 */	li r10, 0
/* 8035D0A4  38 C0 00 50 */	li r6, 0x50
/* 8035D0A8  88 E3 00 02 */	lbz r7, 2(r3)
/* 8035D0AC  39 60 00 00 */	li r11, 0
/* 8035D0B0  88 63 00 01 */	lbz r3, 1(r3)
/* 8035D0B4  38 00 00 51 */	li r0, 0x51
/* 8035D0B8  50 EB 06 3E */	rlwimi r11, r7, 0, 0x18, 0x1f
/* 8035D0BC  50 6B 44 2E */	rlwimi r11, r3, 8, 0x10, 0x17
/* 8035D0C0  99 28 80 00 */	stb r9, -0x8000(r8)
/* 8035D0C4  50 CB C0 0E */	rlwimi r11, r6, 0x18, 0, 7
/* 8035D0C8  91 68 80 00 */	stw r11, -0x8000(r8)
/* 8035D0CC  50 8A 02 3E */	rlwimi r10, r4, 0, 8, 0x1f
/* 8035D0D0  50 0A C0 0E */	rlwimi r10, r0, 0x18, 0, 7
/* 8035D0D4  99 28 80 00 */	stb r9, -0x8000(r8)
/* 8035D0D8  38 00 00 00 */	li r0, 0
/* 8035D0DC  91 48 80 00 */	stw r10, -0x8000(r8)
/* 8035D0E0  B0 05 00 02 */	sth r0, 2(r5)
/* 8035D0E4  4E 80 00 20 */	blr 
