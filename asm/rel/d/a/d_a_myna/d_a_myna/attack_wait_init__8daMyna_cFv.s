lbl_809468EC:
/* 809468EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809468F0  7C 08 02 A6 */	mflr r0
/* 809468F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 809468F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809468FC  7C 7F 1B 78 */	mr r31, r3
/* 80946900  38 80 00 01 */	li r4, 1
/* 80946904  3C A0 80 95 */	lis r5, lit_3926@ha
/* 80946908  C0 25 B1 F0 */	lfs f1, lit_3926@l(r5)
/* 8094690C  48 00 37 49 */	bl setAnimeType__8daMyna_cFUcf
/* 80946910  38 00 00 00 */	li r0, 0
/* 80946914  B0 1F 09 2A */	sth r0, 0x92a(r31)
/* 80946918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8094691C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80946920  7C 08 03 A6 */	mtlr r0
/* 80946924  38 21 00 10 */	addi r1, r1, 0x10
/* 80946928  4E 80 00 20 */	blr 
