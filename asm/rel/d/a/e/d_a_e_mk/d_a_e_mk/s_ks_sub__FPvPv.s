lbl_80719488:
/* 80719488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8071948C  7C 08 02 A6 */	mflr r0
/* 80719490  90 01 00 14 */	stw r0, 0x14(r1)
/* 80719494  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80719498  7C 7F 1B 78 */	mr r31, r3
/* 8071949C  4B 8F F8 44 */	b fopAc_IsActor__FPv
/* 807194A0  2C 03 00 00 */	cmpwi r3, 0
/* 807194A4  41 82 00 24 */	beq lbl_807194C8
/* 807194A8  A8 1F 00 08 */	lha r0, 8(r31)
/* 807194AC  2C 00 00 60 */	cmpwi r0, 0x60
/* 807194B0  40 82 00 18 */	bne lbl_807194C8
/* 807194B4  88 1F 05 B6 */	lbz r0, 0x5b6(r31)
/* 807194B8  28 00 00 00 */	cmplwi r0, 0
/* 807194BC  40 82 00 0C */	bne lbl_807194C8
/* 807194C0  7F E3 FB 78 */	mr r3, r31
/* 807194C4  48 00 00 08 */	b lbl_807194CC
lbl_807194C8:
/* 807194C8  38 60 00 00 */	li r3, 0
lbl_807194CC:
/* 807194CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807194D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807194D4  7C 08 03 A6 */	mtlr r0
/* 807194D8  38 21 00 10 */	addi r1, r1, 0x10
/* 807194DC  4E 80 00 20 */	blr 
