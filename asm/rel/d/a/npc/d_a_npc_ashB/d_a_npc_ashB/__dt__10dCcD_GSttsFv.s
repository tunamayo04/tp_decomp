lbl_80961F14:
/* 80961F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80961F18  7C 08 02 A6 */	mflr r0
/* 80961F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80961F20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80961F24  7C 7F 1B 79 */	or. r31, r3, r3
/* 80961F28  41 82 00 30 */	beq lbl_80961F58
/* 80961F2C  3C 60 80 96 */	lis r3, __vt__10dCcD_GStts@ha
/* 80961F30  38 03 27 60 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80961F34  90 1F 00 00 */	stw r0, 0(r31)
/* 80961F38  41 82 00 10 */	beq lbl_80961F48
/* 80961F3C  3C 60 80 96 */	lis r3, __vt__10cCcD_GStts@ha
/* 80961F40  38 03 27 54 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80961F44  90 1F 00 00 */	stw r0, 0(r31)
lbl_80961F48:
/* 80961F48  7C 80 07 35 */	extsh. r0, r4
/* 80961F4C  40 81 00 0C */	ble lbl_80961F58
/* 80961F50  7F E3 FB 78 */	mr r3, r31
/* 80961F54  4B 96 CD E8 */	b __dl__FPv
lbl_80961F58:
/* 80961F58  7F E3 FB 78 */	mr r3, r31
/* 80961F5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80961F60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80961F64  7C 08 03 A6 */	mtlr r0
/* 80961F68  38 21 00 10 */	addi r1, r1, 0x10
/* 80961F6C  4E 80 00 20 */	blr 
