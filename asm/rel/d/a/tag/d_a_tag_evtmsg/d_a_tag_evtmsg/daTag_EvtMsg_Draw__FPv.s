lbl_8048D6C8:
/* 8048D6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8048D6CC  7C 08 02 A6 */	mflr r0
/* 8048D6D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048D6D4  4B FF FC 49 */	bl Draw__14daTag_EvtMsg_cFv
/* 8048D6D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8048D6DC  7C 08 03 A6 */	mtlr r0
/* 8048D6E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8048D6E4  4E 80 00 20 */	blr 
