lbl_80C04880:
/* 80C04880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C04884  7C 08 02 A6 */	mflr r0
/* 80C04888  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C0488C  2C 04 00 00 */	cmpwi r4, 0
/* 80C04890  41 82 00 14 */	beq lbl_80C048A4
/* 80C04894  38 80 00 22 */	li r4, 0x22
/* 80C04898  38 A0 00 01 */	li r5, 1
/* 80C0489C  C0 23 0A 98 */	lfs f1, 0xa98(r3)
/* 80C048A0  4B FF CC 55 */	bl setFaceAnm__11daObj_GrA_cFibf
lbl_80C048A4:
/* 80C048A4  38 60 00 01 */	li r3, 1
/* 80C048A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C048AC  7C 08 03 A6 */	mtlr r0
/* 80C048B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80C048B4  4E 80 00 20 */	blr 
