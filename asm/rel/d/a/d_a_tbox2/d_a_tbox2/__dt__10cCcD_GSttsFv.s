lbl_804980F8:
/* 804980F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804980FC  7C 08 02 A6 */	mflr r0
/* 80498100  90 01 00 14 */	stw r0, 0x14(r1)
/* 80498104  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80498108  7C 7F 1B 79 */	or. r31, r3, r3
/* 8049810C  41 82 00 1C */	beq lbl_80498128
/* 80498110  3C A0 80 4A */	lis r5, __vt__10cCcD_GStts@ha
/* 80498114  38 05 83 B8 */	addi r0, r5, __vt__10cCcD_GStts@l
/* 80498118  90 1F 00 00 */	stw r0, 0(r31)
/* 8049811C  7C 80 07 35 */	extsh. r0, r4
/* 80498120  40 81 00 08 */	ble lbl_80498128
/* 80498124  4B E3 6C 18 */	b __dl__FPv
lbl_80498128:
/* 80498128  7F E3 FB 78 */	mr r3, r31
/* 8049812C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80498130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80498134  7C 08 03 A6 */	mtlr r0
/* 80498138  38 21 00 10 */	addi r1, r1, 0x10
/* 8049813C  4E 80 00 20 */	blr 
