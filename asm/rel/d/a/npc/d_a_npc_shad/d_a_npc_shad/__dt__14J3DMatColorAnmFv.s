lbl_80AD908C:
/* 80AD908C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AD9090  7C 08 02 A6 */	mflr r0
/* 80AD9094  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AD9098  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AD909C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AD90A0  41 82 00 10 */	beq lbl_80AD90B0
/* 80AD90A4  7C 80 07 35 */	extsh. r0, r4
/* 80AD90A8  40 81 00 08 */	ble lbl_80AD90B0
/* 80AD90AC  4B 7F 5C 90 */	b __dl__FPv
lbl_80AD90B0:
/* 80AD90B0  7F E3 FB 78 */	mr r3, r31
/* 80AD90B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AD90B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AD90BC  7C 08 03 A6 */	mtlr r0
/* 80AD90C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80AD90C4  4E 80 00 20 */	blr 
