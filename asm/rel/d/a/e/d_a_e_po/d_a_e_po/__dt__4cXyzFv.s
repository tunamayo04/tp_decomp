lbl_807572CC:
/* 807572CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807572D0  7C 08 02 A6 */	mflr r0
/* 807572D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 807572D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807572DC  7C 7F 1B 79 */	or. r31, r3, r3
/* 807572E0  41 82 00 10 */	beq lbl_807572F0
/* 807572E4  7C 80 07 35 */	extsh. r0, r4
/* 807572E8  40 81 00 08 */	ble lbl_807572F0
/* 807572EC  4B B7 7A 50 */	b __dl__FPv
lbl_807572F0:
/* 807572F0  7F E3 FB 78 */	mr r3, r31
/* 807572F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807572F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807572FC  7C 08 03 A6 */	mtlr r0
/* 80757300  38 21 00 10 */	addi r1, r1, 0x10
/* 80757304  4E 80 00 20 */	blr 
