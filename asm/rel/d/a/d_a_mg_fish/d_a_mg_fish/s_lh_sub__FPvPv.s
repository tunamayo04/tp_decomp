lbl_8052B1F8:
/* 8052B1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8052B1FC  7C 08 02 A6 */	mflr r0
/* 8052B200  90 01 00 14 */	stw r0, 0x14(r1)
/* 8052B204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8052B208  93 C1 00 08 */	stw r30, 8(r1)
/* 8052B20C  7C 7E 1B 78 */	mr r30, r3
/* 8052B210  7C 9F 23 78 */	mr r31, r4
/* 8052B214  4B AE DA CC */	b fopAc_IsActor__FPv
/* 8052B218  2C 03 00 00 */	cmpwi r3, 0
/* 8052B21C  41 82 00 2C */	beq lbl_8052B248
/* 8052B220  A8 1E 00 08 */	lha r0, 8(r30)
/* 8052B224  2C 00 01 36 */	cmpwi r0, 0x136
/* 8052B228  40 82 00 20 */	bne lbl_8052B248
/* 8052B22C  88 1E 06 34 */	lbz r0, 0x634(r30)
/* 8052B230  28 00 00 15 */	cmplwi r0, 0x15
/* 8052B234  40 82 00 14 */	bne lbl_8052B248
/* 8052B238  C0 1F 07 4C */	lfs f0, 0x74c(r31)
/* 8052B23C  D0 1E 07 4C */	stfs f0, 0x74c(r30)
/* 8052B240  7F C3 F3 78 */	mr r3, r30
/* 8052B244  48 00 00 08 */	b lbl_8052B24C
lbl_8052B248:
/* 8052B248  38 60 00 00 */	li r3, 0
lbl_8052B24C:
/* 8052B24C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8052B250  83 C1 00 08 */	lwz r30, 8(r1)
/* 8052B254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8052B258  7C 08 03 A6 */	mtlr r0
/* 8052B25C  38 21 00 10 */	addi r1, r1, 0x10
/* 8052B260  4E 80 00 20 */	blr 
