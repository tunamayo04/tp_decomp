lbl_802378D4:
/* 802378D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802378D8  7C 08 02 A6 */	mflr r0
/* 802378DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802378E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802378E4  93 C1 00 08 */	stw r30, 8(r1)
/* 802378E8  7C 7E 1B 78 */	mr r30, r3
/* 802378EC  3B E0 00 00 */	li r31, 0
/* 802378F0  4B FF F7 F9 */	bl isHowlMessage__12dMsgObject_cFv
/* 802378F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802378F8  41 82 00 20 */	beq lbl_80237918
/* 802378FC  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80237900  28 03 00 00 */	cmplwi r3, 0
/* 80237904  41 82 00 14 */	beq lbl_80237918
/* 80237908  88 03 27 98 */	lbz r0, 0x2798(r3)
/* 8023790C  28 00 00 03 */	cmplwi r0, 3
/* 80237910  40 82 00 08 */	bne lbl_80237918
/* 80237914  3B E0 00 01 */	li r31, 1
lbl_80237918:
/* 80237918  7F E3 FB 78 */	mr r3, r31
/* 8023791C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80237920  83 C1 00 08 */	lwz r30, 8(r1)
/* 80237924  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80237928  7C 08 03 A6 */	mtlr r0
/* 8023792C  38 21 00 10 */	addi r1, r1, 0x10
/* 80237930  4E 80 00 20 */	blr 
