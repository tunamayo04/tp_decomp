lbl_80028EE4:
/* 80028EE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80028EE8  7C 08 02 A6 */	mflr r0
/* 80028EEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80028EF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80028EF4  3B ED 80 78 */	la r31, backColor(r13) /* 804505F8-_SDA_BASE_ */
/* 80028EF8  2C 05 00 04 */	cmpwi r5, 4
/* 80028EFC  40 82 00 70 */	bne lbl_80028F6C
/* 80028F00  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80028F04  2C 00 00 01 */	cmpwi r0, 1
/* 80028F08  41 82 00 3C */	beq lbl_80028F44
/* 80028F0C  40 80 00 90 */	bge lbl_80028F9C
/* 80028F10  2C 00 00 00 */	cmpwi r0, 0
/* 80028F14  40 80 00 08 */	bge lbl_80028F1C
/* 80028F18  48 00 00 84 */	b lbl_80028F9C
lbl_80028F1C:
/* 80028F1C  88 02 82 D8 */	lbz r0, borderColor0(r2)
/* 80028F20  98 1F 00 00 */	stb r0, 0(r31)
/* 80028F24  38 62 82 D8 */	la r3, borderColor0(r2) /* 80451CD8-_SDA2_BASE_ */
/* 80028F28  88 03 00 01 */	lbz r0, 1(r3)
/* 80028F2C  98 1F 00 01 */	stb r0, 1(r31)
/* 80028F30  88 03 00 02 */	lbz r0, 2(r3)
/* 80028F34  98 1F 00 02 */	stb r0, 2(r31)
/* 80028F38  88 03 00 03 */	lbz r0, 3(r3)
/* 80028F3C  98 1F 00 03 */	stb r0, 3(r31)
/* 80028F40  48 00 00 5C */	b lbl_80028F9C
lbl_80028F44:
/* 80028F44  88 02 82 DC */	lbz r0, borderColor1(r2)
/* 80028F48  98 1F 00 00 */	stb r0, 0(r31)
/* 80028F4C  38 62 82 DC */	la r3, borderColor1(r2) /* 80451CDC-_SDA2_BASE_ */
/* 80028F50  88 03 00 01 */	lbz r0, 1(r3)
/* 80028F54  98 1F 00 01 */	stb r0, 1(r31)
/* 80028F58  88 03 00 02 */	lbz r0, 2(r3)
/* 80028F5C  98 1F 00 02 */	stb r0, 2(r31)
/* 80028F60  88 03 00 03 */	lbz r0, 3(r3)
/* 80028F64  98 1F 00 03 */	stb r0, 3(r31)
/* 80028F68  48 00 00 34 */	b lbl_80028F9C
lbl_80028F6C:
/* 80028F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80028F70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80028F74  7D 89 03 A6 */	mtctr r12
/* 80028F78  4E 80 04 21 */	bctrl 
/* 80028F7C  88 03 00 00 */	lbz r0, 0(r3)
/* 80028F80  98 1F 00 00 */	stb r0, 0(r31)
/* 80028F84  88 03 00 01 */	lbz r0, 1(r3)
/* 80028F88  98 1F 00 01 */	stb r0, 1(r31)
/* 80028F8C  88 03 00 02 */	lbz r0, 2(r3)
/* 80028F90  98 1F 00 02 */	stb r0, 2(r31)
/* 80028F94  88 03 00 03 */	lbz r0, 3(r3)
/* 80028F98  98 1F 00 03 */	stb r0, 3(r31)
lbl_80028F9C:
/* 80028F9C  7F E3 FB 78 */	mr r3, r31
/* 80028FA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80028FA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80028FA8  7C 08 03 A6 */	mtlr r0
/* 80028FAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80028FB0  4E 80 00 20 */	blr 
