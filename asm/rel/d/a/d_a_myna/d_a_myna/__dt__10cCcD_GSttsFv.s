lbl_8094A918:
/* 8094A918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8094A91C  7C 08 02 A6 */	mflr r0
/* 8094A920  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094A924  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8094A928  7C 7F 1B 79 */	or. r31, r3, r3
/* 8094A92C  41 82 00 1C */	beq lbl_8094A948
/* 8094A930  3C A0 80 95 */	lis r5, __vt__10cCcD_GStts@ha
/* 8094A934  38 05 B9 84 */	addi r0, r5, __vt__10cCcD_GStts@l
/* 8094A938  90 1F 00 00 */	stw r0, 0(r31)
/* 8094A93C  7C 80 07 35 */	extsh. r0, r4
/* 8094A940  40 81 00 08 */	ble lbl_8094A948
/* 8094A944  4B 98 43 F8 */	b __dl__FPv
lbl_8094A948:
/* 8094A948  7F E3 FB 78 */	mr r3, r31
/* 8094A94C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8094A950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8094A954  7C 08 03 A6 */	mtlr r0
/* 8094A958  38 21 00 10 */	addi r1, r1, 0x10
/* 8094A95C  4E 80 00 20 */	blr 
