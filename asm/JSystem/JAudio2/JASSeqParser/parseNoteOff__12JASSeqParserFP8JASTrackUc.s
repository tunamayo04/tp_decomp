lbl_802955C8:
/* 802955C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802955CC  7C 08 02 A6 */	mflr r0
/* 802955D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802955D4  54 A5 07 7F */	clrlwi. r5, r5, 0x1d
/* 802955D8  41 82 00 14 */	beq lbl_802955EC
/* 802955DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802955E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802955E4  7D 89 03 A6 */	mtctr r12
/* 802955E8  4E 80 04 21 */	bctrl 
lbl_802955EC:
/* 802955EC  38 60 00 00 */	li r3, 0
/* 802955F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802955F4  7C 08 03 A6 */	mtlr r0
/* 802955F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802955FC  4E 80 00 20 */	blr 
