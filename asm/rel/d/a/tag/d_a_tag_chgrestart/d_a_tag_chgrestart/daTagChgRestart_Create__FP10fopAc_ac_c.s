lbl_80D56ACC:
/* 80D56ACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D56AD0  7C 08 02 A6 */	mflr r0
/* 80D56AD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D56AD8  4B FF FD 0D */	bl create__17daTagChgRestart_cFv
/* 80D56ADC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D56AE0  7C 08 03 A6 */	mtlr r0
/* 80D56AE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80D56AE8  4E 80 00 20 */	blr 
