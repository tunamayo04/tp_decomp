lbl_80946060:
/* 80946060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80946064  7C 08 02 A6 */	mflr r0
/* 80946068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094606C  2C 04 00 00 */	cmpwi r4, 0
/* 80946070  41 82 00 1C */	beq lbl_8094608C
/* 80946074  38 00 00 06 */	li r0, 6
/* 80946078  B0 03 09 16 */	sth r0, 0x916(r3)
/* 8094607C  38 80 00 0E */	li r4, 0xe
/* 80946080  3C A0 80 95 */	lis r5, lit_3926@ha
/* 80946084  C0 25 B1 F0 */	lfs f1, lit_3926@l(r5)
/* 80946088  48 00 3F CD */	bl setAnimeType__8daMyna_cFUcf
lbl_8094608C:
/* 8094608C  38 60 00 01 */	li r3, 1
/* 80946090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80946094  7C 08 03 A6 */	mtlr r0
/* 80946098  38 21 00 10 */	addi r1, r1, 0x10
/* 8094609C  4E 80 00 20 */	blr 
