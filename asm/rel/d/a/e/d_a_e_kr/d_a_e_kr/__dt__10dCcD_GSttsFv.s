lbl_807052B4:
/* 807052B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807052B8  7C 08 02 A6 */	mflr r0
/* 807052BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 807052C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807052C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 807052C8  41 82 00 30 */	beq lbl_807052F8
/* 807052CC  3C 60 80 70 */	lis r3, __vt__10dCcD_GStts@ha
/* 807052D0  38 03 5F 70 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 807052D4  90 1F 00 00 */	stw r0, 0(r31)
/* 807052D8  41 82 00 10 */	beq lbl_807052E8
/* 807052DC  3C 60 80 70 */	lis r3, __vt__10cCcD_GStts@ha
/* 807052E0  38 03 5F 64 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 807052E4  90 1F 00 00 */	stw r0, 0(r31)
lbl_807052E8:
/* 807052E8  7C 80 07 35 */	extsh. r0, r4
/* 807052EC  40 81 00 0C */	ble lbl_807052F8
/* 807052F0  7F E3 FB 78 */	mr r3, r31
/* 807052F4  4B BC 9A 48 */	b __dl__FPv
lbl_807052F8:
/* 807052F8  7F E3 FB 78 */	mr r3, r31
/* 807052FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80705300  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80705304  7C 08 03 A6 */	mtlr r0
/* 80705308  38 21 00 10 */	addi r1, r1, 0x10
/* 8070530C  4E 80 00 20 */	blr 
