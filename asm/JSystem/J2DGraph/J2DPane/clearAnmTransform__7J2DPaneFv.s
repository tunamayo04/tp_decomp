lbl_802F8004:
/* 802F8004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F8008  7C 08 02 A6 */	mflr r0
/* 802F800C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F8010  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F8014  7C 7F 1B 78 */	mr r31, r3
/* 802F8018  38 80 00 00 */	li r4, 0
/* 802F801C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F8020  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 802F8024  7D 89 03 A6 */	mtctr r12
/* 802F8028  4E 80 04 21 */	bctrl 
/* 802F802C  83 FF 00 DC */	lwz r31, 0xdc(r31)
/* 802F8030  28 1F 00 00 */	cmplwi r31, 0
/* 802F8034  41 82 00 30 */	beq lbl_802F8064
/* 802F8038  3B FF FF F4 */	addi r31, r31, -12
/* 802F803C  48 00 00 28 */	b lbl_802F8064
lbl_802F8040:
/* 802F8040  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802F8044  81 83 00 00 */	lwz r12, 0(r3)
/* 802F8048  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 802F804C  7D 89 03 A6 */	mtctr r12
/* 802F8050  4E 80 04 21 */	bctrl 
/* 802F8054  83 FF 00 18 */	lwz r31, 0x18(r31)
/* 802F8058  28 1F 00 00 */	cmplwi r31, 0
/* 802F805C  41 82 00 08 */	beq lbl_802F8064
/* 802F8060  3B FF FF F4 */	addi r31, r31, -12
lbl_802F8064:
/* 802F8064  28 1F 00 00 */	cmplwi r31, 0
/* 802F8068  40 82 FF D8 */	bne lbl_802F8040
/* 802F806C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F8070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F8074  7C 08 03 A6 */	mtlr r0
/* 802F8078  38 21 00 10 */	addi r1, r1, 0x10
/* 802F807C  4E 80 00 20 */	blr 
