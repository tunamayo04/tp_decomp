lbl_802C2E54:
/* 802C2E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C2E58  7C 08 02 A6 */	mflr r0
/* 802C2E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C2E60  28 03 00 00 */	cmplwi r3, 0
/* 802C2E64  41 82 00 28 */	beq lbl_802C2E8C
/* 802C2E68  80 63 00 00 */	lwz r3, 0(r3)
/* 802C2E6C  28 03 00 00 */	cmplwi r3, 0
/* 802C2E70  41 82 00 1C */	beq lbl_802C2E8C
/* 802C2E74  28 04 00 01 */	cmplwi r4, 1
/* 802C2E78  40 82 00 14 */	bne lbl_802C2E8C
/* 802C2E7C  38 63 00 48 */	addi r3, r3, 0x48
/* 802C2E80  C0 22 C2 8C */	lfs f1, lit_4906(r2)
/* 802C2E84  38 80 00 00 */	li r4, 0
/* 802C2E88  4B FD FF 2D */	bl moveVolume__18JAISoundParamsMoveFfUl
lbl_802C2E8C:
/* 802C2E8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C2E90  7C 08 03 A6 */	mtlr r0
/* 802C2E94  38 21 00 10 */	addi r1, r1, 0x10
/* 802C2E98  4E 80 00 20 */	blr 
