lbl_80B84200:
/* 80B84200  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B84204  7C 08 02 A6 */	mflr r0
/* 80B84208  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B8420C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B84210  7C 7F 1B 78 */	mr r31, r3
/* 80B84214  4B 49 4A CC */	b fopAc_IsActor__FPv
/* 80B84218  2C 03 00 00 */	cmpwi r3, 0
/* 80B8421C  41 82 00 18 */	beq lbl_80B84234
/* 80B84220  A8 1F 00 08 */	lha r0, 8(r31)
/* 80B84224  2C 00 02 57 */	cmpwi r0, 0x257
/* 80B84228  40 82 00 0C */	bne lbl_80B84234
/* 80B8422C  7F E3 FB 78 */	mr r3, r31
/* 80B84230  48 00 00 08 */	b lbl_80B84238
lbl_80B84234:
/* 80B84234  38 60 00 00 */	li r3, 0
lbl_80B84238:
/* 80B84238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B8423C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B84240  7C 08 03 A6 */	mtlr r0
/* 80B84244  38 21 00 10 */	addi r1, r1, 0x10
/* 80B84248  4E 80 00 20 */	blr 
