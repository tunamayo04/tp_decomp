lbl_808453FC:
/* 808453FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80845400  7C 08 02 A6 */	mflr r0
/* 80845404  90 01 00 14 */	stw r0, 0x14(r1)
/* 80845408  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8084540C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80845410  41 82 00 10 */	beq lbl_80845420
/* 80845414  7C 80 07 35 */	extsh. r0, r4
/* 80845418  40 81 00 08 */	ble lbl_80845420
/* 8084541C  4B A8 99 20 */	b __dl__FPv
lbl_80845420:
/* 80845420  7F E3 FB 78 */	mr r3, r31
/* 80845424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80845428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8084542C  7C 08 03 A6 */	mtlr r0
/* 80845430  38 21 00 10 */	addi r1, r1, 0x10
/* 80845434  4E 80 00 20 */	blr 
