lbl_803562D8:
/* 803562D8  7C 08 02 A6 */	mflr r0
/* 803562DC  90 01 00 04 */	stw r0, 4(r1)
/* 803562E0  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 803562E4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 803562E8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803562EC  7C 7E 1B 78 */	mr r30, r3
/* 803562F0  4B FF F8 A1 */	bl VerifyID
/* 803562F4  2C 03 00 00 */	cmpwi r3, 0
/* 803562F8  40 80 00 08 */	bge lbl_80356300
/* 803562FC  48 00 00 50 */	b lbl_8035634C
lbl_80356300:
/* 80356300  38 7E 00 00 */	addi r3, r30, 0
/* 80356304  38 80 00 00 */	li r4, 0
/* 80356308  4B FF FB 0D */	bl VerifyDir
/* 8035630C  3B E3 00 00 */	addi r31, r3, 0
/* 80356310  38 7E 00 00 */	addi r3, r30, 0
/* 80356314  38 80 00 00 */	li r4, 0
/* 80356318  4B FF FD 3D */	bl VerifyFAT
/* 8035631C  7C 1F 1A 14 */	add r0, r31, r3
/* 80356320  2C 00 00 01 */	cmpwi r0, 1
/* 80356324  41 82 00 1C */	beq lbl_80356340
/* 80356328  40 80 00 20 */	bge lbl_80356348
/* 8035632C  2C 00 00 00 */	cmpwi r0, 0
/* 80356330  40 80 00 08 */	bge lbl_80356338
/* 80356334  48 00 00 14 */	b lbl_80356348
lbl_80356338:
/* 80356338  38 60 00 00 */	li r3, 0
/* 8035633C  48 00 00 10 */	b lbl_8035634C
lbl_80356340:
/* 80356340  38 60 FF FA */	li r3, -6
/* 80356344  48 00 00 08 */	b lbl_8035634C
lbl_80356348:
/* 80356348  38 60 FF FA */	li r3, -6
lbl_8035634C:
/* 8035634C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80356350  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80356354  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80356358  38 21 00 18 */	addi r1, r1, 0x18
/* 8035635C  7C 08 03 A6 */	mtlr r0
/* 80356360  4E 80 00 20 */	blr 
