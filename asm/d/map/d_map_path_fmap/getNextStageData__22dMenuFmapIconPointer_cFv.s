lbl_8003E3A4:
/* 8003E3A4  38 A0 00 00 */	li r5, 0
/* 8003E3A8  80 83 00 00 */	lwz r4, 0(r3)
/* 8003E3AC  38 04 00 01 */	addi r0, r4, 1
/* 8003E3B0  90 03 00 00 */	stw r0, 0(r3)
/* 8003E3B4  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8003E3B8  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8003E3BC  90 03 00 14 */	stw r0, 0x14(r3)
/* 8003E3C0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8003E3C4  28 00 00 00 */	cmplwi r0, 0
/* 8003E3C8  40 82 00 08 */	bne lbl_8003E3D0
/* 8003E3CC  38 A0 00 01 */	li r5, 1
lbl_8003E3D0:
/* 8003E3D0  7C A3 2B 78 */	mr r3, r5
/* 8003E3D4  4E 80 00 20 */	blr 
