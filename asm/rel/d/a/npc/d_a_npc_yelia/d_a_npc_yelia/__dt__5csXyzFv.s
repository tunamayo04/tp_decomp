lbl_80B513A4:
/* 80B513A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B513A8  7C 08 02 A6 */	mflr r0
/* 80B513AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B513B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B513B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B513B8  41 82 00 10 */	beq lbl_80B513C8
/* 80B513BC  7C 80 07 35 */	extsh. r0, r4
/* 80B513C0  40 81 00 08 */	ble lbl_80B513C8
/* 80B513C4  4B 77 D9 78 */	b __dl__FPv
lbl_80B513C8:
/* 80B513C8  7F E3 FB 78 */	mr r3, r31
/* 80B513CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B513D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B513D4  7C 08 03 A6 */	mtlr r0
/* 80B513D8  38 21 00 10 */	addi r1, r1, 0x10
/* 80B513DC  4E 80 00 20 */	blr 
