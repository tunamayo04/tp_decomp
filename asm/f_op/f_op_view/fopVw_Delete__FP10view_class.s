lbl_8001F220:
/* 8001F220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F224  7C 08 02 A6 */	mflr r0
/* 8001F228  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F22C  7C 64 1B 78 */	mr r4, r3
/* 8001F230  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8001F234  48 00 32 75 */	bl fpcMtd_Delete__FP20process_method_classPv
/* 8001F238  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F23C  7C 08 03 A6 */	mtlr r0
/* 8001F240  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F244  4E 80 00 20 */	blr 
