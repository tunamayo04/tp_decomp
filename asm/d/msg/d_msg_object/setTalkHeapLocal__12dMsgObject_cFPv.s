lbl_80237B10:
/* 80237B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80237B14  7C 08 02 A6 */	mflr r0
/* 80237B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80237B1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80237B20  93 C1 00 08 */	stw r30, 8(r1)
/* 80237B24  7C 7E 1B 78 */	mr r30, r3
/* 80237B28  7C 9F 23 79 */	or. r31, r4, r4
/* 80237B2C  40 82 00 0C */	bne lbl_80237B38
/* 80237B30  38 80 00 01 */	li r4, 1
/* 80237B34  4B FF ED D9 */	bl delete_screen__12dMsgObject_cFb
lbl_80237B38:
/* 80237B38  93 FE 01 44 */	stw r31, 0x144(r30)
/* 80237B3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80237B40  83 C1 00 08 */	lwz r30, 8(r1)
/* 80237B44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80237B48  7C 08 03 A6 */	mtlr r0
/* 80237B4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80237B50  4E 80 00 20 */	blr 
