lbl_80C04370:
/* 80C04370  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C04374  7C 08 02 A6 */	mflr r0
/* 80C04378  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C0437C  2C 04 00 00 */	cmpwi r4, 0
/* 80C04380  41 82 00 10 */	beq lbl_80C04390
/* 80C04384  38 80 00 12 */	li r4, 0x12
/* 80C04388  C0 23 0A 94 */	lfs f1, 0xa94(r3)
/* 80C0438C  4B FF D0 25 */	bl setBaseAnm__11daObj_GrA_cFif
lbl_80C04390:
/* 80C04390  38 60 00 01 */	li r3, 1
/* 80C04394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C04398  7C 08 03 A6 */	mtlr r0
/* 80C0439C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C043A0  4E 80 00 20 */	blr 
