lbl_809B78F0:
/* 809B78F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809B78F4  7C 08 02 A6 */	mflr r0
/* 809B78F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809B78FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809B7900  3B E0 00 00 */	li r31, 0
/* 809B7904  80 04 00 00 */	lwz r0, 0(r4)
/* 809B7908  2C 00 00 14 */	cmpwi r0, 0x14
/* 809B790C  41 82 00 44 */	beq lbl_809B7950
/* 809B7910  40 80 00 10 */	bge lbl_809B7920
/* 809B7914  2C 00 00 0A */	cmpwi r0, 0xa
/* 809B7918  41 82 00 14 */	beq lbl_809B792C
/* 809B791C  48 00 00 70 */	b lbl_809B798C
lbl_809B7920:
/* 809B7920  2C 00 00 1E */	cmpwi r0, 0x1e
/* 809B7924  41 82 00 48 */	beq lbl_809B796C
/* 809B7928  48 00 00 64 */	b lbl_809B798C
lbl_809B792C:
/* 809B792C  A8 83 0F 90 */	lha r4, 0xf90(r3)
/* 809B7930  38 04 FF FF */	addi r0, r4, -1
/* 809B7934  B0 03 0F 90 */	sth r0, 0xf90(r3)
/* 809B7938  7C 00 07 35 */	extsh. r0, r0
/* 809B793C  41 81 00 50 */	bgt lbl_809B798C
/* 809B7940  38 60 00 0B */	li r3, 0xb
/* 809B7944  4B 7F 0E A0 */	b dKy_change_colpat__FUc
/* 809B7948  3B E0 00 01 */	li r31, 1
/* 809B794C  48 00 00 40 */	b lbl_809B798C
lbl_809B7950:
/* 809B7950  A8 83 0F 90 */	lha r4, 0xf90(r3)
/* 809B7954  38 04 FF FF */	addi r0, r4, -1
/* 809B7958  B0 03 0F 90 */	sth r0, 0xf90(r3)
/* 809B795C  7C 00 07 35 */	extsh. r0, r0
/* 809B7960  41 81 00 2C */	bgt lbl_809B798C
/* 809B7964  3B E0 00 01 */	li r31, 1
/* 809B7968  48 00 00 24 */	b lbl_809B798C
lbl_809B796C:
/* 809B796C  38 80 00 00 */	li r4, 0
/* 809B7970  38 A0 00 00 */	li r5, 0
/* 809B7974  38 C0 00 00 */	li r6, 0
/* 809B7978  38 E0 00 00 */	li r7, 0
/* 809B797C  4B 79 42 FC */	b talkProc__8daNpcT_cFPiiPP10fopAc_ac_ci
/* 809B7980  2C 03 00 00 */	cmpwi r3, 0
/* 809B7984  41 82 00 08 */	beq lbl_809B798C
/* 809B7988  3B E0 00 01 */	li r31, 1
lbl_809B798C:
/* 809B798C  7F E3 FB 78 */	mr r3, r31
/* 809B7990  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809B7994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809B7998  7C 08 03 A6 */	mtlr r0
/* 809B799C  38 21 00 10 */	addi r1, r1, 0x10
/* 809B79A0  4E 80 00 20 */	blr 
