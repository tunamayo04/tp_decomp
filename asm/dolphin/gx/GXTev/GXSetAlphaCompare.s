lbl_8035F624:
/* 8035F624  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8035F628  80 82 CB 80 */	lwz r4, __GXData(r2)
/* 8035F62C  3D 00 F3 00 */	lis r8, 0xf300
/* 8035F630  50 08 06 3E */	rlwimi r8, r0, 0, 0x18, 0x1f
/* 8035F634  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8035F638  38 E8 00 00 */	addi r7, r8, 0
/* 8035F63C  50 07 44 2E */	rlwimi r7, r0, 8, 0x10, 0x17
/* 8035F640  50 67 83 5E */	rlwimi r7, r3, 0x10, 0xd, 0xf
/* 8035F644  50 C7 9A 98 */	rlwimi r7, r6, 0x13, 0xa, 0xc
/* 8035F648  38 00 00 61 */	li r0, 0x61
/* 8035F64C  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 8035F650  98 03 80 00 */	stb r0, 0x8000(r3)
/* 8035F654  50 A7 B2 12 */	rlwimi r7, r5, 0x16, 8, 9
/* 8035F658  38 00 00 00 */	li r0, 0
/* 8035F65C  90 E3 80 00 */	stw r7, -0x8000(r3)
/* 8035F660  B0 04 00 02 */	sth r0, 2(r4)
/* 8035F664  4E 80 00 20 */	blr 
