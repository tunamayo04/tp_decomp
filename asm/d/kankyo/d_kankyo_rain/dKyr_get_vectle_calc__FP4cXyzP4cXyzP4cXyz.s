lbl_8005B760:
/* 8005B760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005B764  7C 08 02 A6 */	mflr r0
/* 8005B768  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005B76C  4B FF FF 9D */	bl get_vectle_calc__FP4cXyzP4cXyzP4cXyz
/* 8005B770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005B774  7C 08 03 A6 */	mtlr r0
/* 8005B778  38 21 00 10 */	addi r1, r1, 0x10
/* 8005B77C  4E 80 00 20 */	blr 
