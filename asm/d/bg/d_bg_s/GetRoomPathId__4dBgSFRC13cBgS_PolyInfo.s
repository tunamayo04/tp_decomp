lbl_80074FE0:
/* 80074FE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80074FE4  7C 08 02 A6 */	mflr r0
/* 80074FE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80074FEC  A0 04 00 02 */	lhz r0, 2(r4)
/* 80074FF0  1C C0 00 14 */	mulli r6, r0, 0x14
/* 80074FF4  7C A3 32 14 */	add r5, r3, r6
/* 80074FF8  88 05 00 04 */	lbz r0, 4(r5)
/* 80074FFC  28 00 00 00 */	cmplwi r0, 0
/* 80075000  41 82 00 1C */	beq lbl_8007501C
/* 80075004  7C 63 30 2E */	lwzx r3, r3, r6
/* 80075008  81 83 00 04 */	lwz r12, 4(r3)
/* 8007500C  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80075010  7D 89 03 A6 */	mtctr r12
/* 80075014  4E 80 04 21 */	bctrl 
/* 80075018  48 00 00 08 */	b lbl_80075020
lbl_8007501C:
/* 8007501C  38 60 00 FF */	li r3, 0xff
lbl_80075020:
/* 80075020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80075024  7C 08 03 A6 */	mtlr r0
/* 80075028  38 21 00 10 */	addi r1, r1, 0x10
/* 8007502C  4E 80 00 20 */	blr 
