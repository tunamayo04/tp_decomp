lbl_80485A30:
/* 80485A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80485A34  7C 08 02 A6 */	mflr r0
/* 80485A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80485A3C  48 00 00 15 */	bl execute__8daScex_cFv
/* 80485A40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80485A44  7C 08 03 A6 */	mtlr r0
/* 80485A48  38 21 00 10 */	addi r1, r1, 0x10
/* 80485A4C  4E 80 00 20 */	blr 
