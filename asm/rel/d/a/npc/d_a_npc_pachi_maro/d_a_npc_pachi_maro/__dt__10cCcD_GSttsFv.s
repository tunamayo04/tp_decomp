lbl_80A9A5F0:
/* 80A9A5F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A9A5F4  7C 08 02 A6 */	mflr r0
/* 80A9A5F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9A5FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A9A600  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A9A604  41 82 00 1C */	beq lbl_80A9A620
/* 80A9A608  3C A0 80 AA */	lis r5, __vt__10cCcD_GStts@ha
/* 80A9A60C  38 05 C0 54 */	addi r0, r5, __vt__10cCcD_GStts@l
/* 80A9A610  90 1F 00 00 */	stw r0, 0(r31)
/* 80A9A614  7C 80 07 35 */	extsh. r0, r4
/* 80A9A618  40 81 00 08 */	ble lbl_80A9A620
/* 80A9A61C  4B 83 47 20 */	b __dl__FPv
lbl_80A9A620:
/* 80A9A620  7F E3 FB 78 */	mr r3, r31
/* 80A9A624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A9A628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A9A62C  7C 08 03 A6 */	mtlr r0
/* 80A9A630  38 21 00 10 */	addi r1, r1, 0x10
/* 80A9A634  4E 80 00 20 */	blr 
