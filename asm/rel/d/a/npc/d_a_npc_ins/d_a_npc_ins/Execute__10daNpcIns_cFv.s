lbl_80A0EF70:
/* 80A0EF70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A0EF74  7C 08 02 A6 */	mflr r0
/* 80A0EF78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A0EF7C  4B 74 30 98 */	b execute__8daNpcF_cFv
/* 80A0EF80  38 60 00 01 */	li r3, 1
/* 80A0EF84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A0EF88  7C 08 03 A6 */	mtlr r0
/* 80A0EF8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A0EF90  4E 80 00 20 */	blr 
