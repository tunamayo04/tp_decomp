lbl_8052B264:
/* 8052B264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8052B268  7C 08 02 A6 */	mflr r0
/* 8052B26C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8052B270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8052B274  7C 7F 1B 78 */	mr r31, r3
/* 8052B278  4B AE DA 68 */	b fopAc_IsActor__FPv
/* 8052B27C  2C 03 00 00 */	cmpwi r3, 0
/* 8052B280  41 82 00 24 */	beq lbl_8052B2A4
/* 8052B284  A8 1F 00 08 */	lha r0, 8(r31)
/* 8052B288  2C 00 01 36 */	cmpwi r0, 0x136
/* 8052B28C  40 82 00 18 */	bne lbl_8052B2A4
/* 8052B290  88 1F 06 34 */	lbz r0, 0x634(r31)
/* 8052B294  28 00 00 18 */	cmplwi r0, 0x18
/* 8052B298  40 82 00 0C */	bne lbl_8052B2A4
/* 8052B29C  7F E3 FB 78 */	mr r3, r31
/* 8052B2A0  48 00 00 08 */	b lbl_8052B2A8
lbl_8052B2A4:
/* 8052B2A4  38 60 00 00 */	li r3, 0
lbl_8052B2A8:
/* 8052B2A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8052B2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8052B2B0  7C 08 03 A6 */	mtlr r0
/* 8052B2B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8052B2B8  4E 80 00 20 */	blr 
