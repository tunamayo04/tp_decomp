lbl_80543718:
/* 80543718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8054371C  7C 08 02 A6 */	mflr r0
/* 80543720  90 01 00 14 */	stw r0, 0x14(r1)
/* 80543724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80543728  93 C1 00 08 */	stw r30, 8(r1)
/* 8054372C  7C 7E 1B 78 */	mr r30, r3
/* 80543730  7C 9F 23 78 */	mr r31, r4
/* 80543734  4B AD 55 AC */	b fopAc_IsActor__FPv
/* 80543738  2C 03 00 00 */	cmpwi r3, 0
/* 8054373C  41 82 00 34 */	beq lbl_80543770
/* 80543740  A8 1E 00 08 */	lha r0, 8(r30)
/* 80543744  2C 00 01 38 */	cmpwi r0, 0x138
/* 80543748  40 82 00 28 */	bne lbl_80543770
/* 8054374C  C0 3E 05 B8 */	lfs f1, 0x5b8(r30)
/* 80543750  3C 60 80 55 */	lis r3, lit_4190@ha
/* 80543754  C0 03 A9 A4 */	lfs f0, lit_4190@l(r3)
/* 80543758  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8054375C  40 80 00 14 */	bge lbl_80543770
/* 80543760  38 00 00 46 */	li r0, 0x46
/* 80543764  98 1F 07 D5 */	stb r0, 0x7d5(r31)
/* 80543768  7F C3 F3 78 */	mr r3, r30
/* 8054376C  48 00 00 08 */	b lbl_80543774
lbl_80543770:
/* 80543770  38 60 00 00 */	li r3, 0
lbl_80543774:
/* 80543774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80543778  83 C1 00 08 */	lwz r30, 8(r1)
/* 8054377C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80543780  7C 08 03 A6 */	mtlr r0
/* 80543784  38 21 00 10 */	addi r1, r1, 0x10
/* 80543788  4E 80 00 20 */	blr 
