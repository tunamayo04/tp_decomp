lbl_80739848:
/* 80739848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8073984C  7C 08 02 A6 */	mflr r0
/* 80739850  90 01 00 14 */	stw r0, 0x14(r1)
/* 80739854  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80739858  7C 7F 1B 79 */	or. r31, r3, r3
/* 8073985C  41 82 00 30 */	beq lbl_8073988C
/* 80739860  3C 60 80 74 */	lis r3, __vt__10dCcD_GStts@ha
/* 80739864  38 03 A0 94 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80739868  90 1F 00 00 */	stw r0, 0(r31)
/* 8073986C  41 82 00 10 */	beq lbl_8073987C
/* 80739870  3C 60 80 74 */	lis r3, __vt__10cCcD_GStts@ha
/* 80739874  38 03 A0 88 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80739878  90 1F 00 00 */	stw r0, 0(r31)
lbl_8073987C:
/* 8073987C  7C 80 07 35 */	extsh. r0, r4
/* 80739880  40 81 00 0C */	ble lbl_8073988C
/* 80739884  7F E3 FB 78 */	mr r3, r31
/* 80739888  4B B9 54 B4 */	b __dl__FPv
lbl_8073988C:
/* 8073988C  7F E3 FB 78 */	mr r3, r31
/* 80739890  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80739894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80739898  7C 08 03 A6 */	mtlr r0
/* 8073989C  38 21 00 10 */	addi r1, r1, 0x10
/* 807398A0  4E 80 00 20 */	blr 
