lbl_804665D0:
/* 804665D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804665D4  7C 08 02 A6 */	mflr r0
/* 804665D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804665DC  4B FF DC 65 */	bl execute__10daDoor20_cFv
/* 804665E0  38 60 00 01 */	li r3, 1
/* 804665E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804665E8  7C 08 03 A6 */	mtlr r0
/* 804665EC  38 21 00 10 */	addi r1, r1, 0x10
/* 804665F0  4E 80 00 20 */	blr 
