lbl_80128798:
/* 80128798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012879C  7C 08 02 A6 */	mflr r0
/* 801287A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801287A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801287A8  7C 7F 1B 78 */	mr r31, r3
/* 801287AC  80 63 27 EC */	lwz r3, 0x27ec(r3)
/* 801287B0  4B FB 3D 99 */	bl checkEnemyGroup__9daAlink_cFP10fopAc_ac_c
/* 801287B4  2C 03 00 00 */	cmpwi r3, 0
/* 801287B8  40 82 00 34 */	bne lbl_801287EC
/* 801287BC  80 1F 06 14 */	lwz r0, 0x614(r31)
/* 801287C0  28 00 00 17 */	cmplwi r0, 0x17
/* 801287C4  41 82 00 28 */	beq lbl_801287EC
/* 801287C8  80 7F 27 EC */	lwz r3, 0x27ec(r31)
/* 801287CC  28 03 00 00 */	cmplwi r3, 0
/* 801287D0  41 82 00 24 */	beq lbl_801287F4
/* 801287D4  A8 03 00 08 */	lha r0, 8(r3)
/* 801287D8  2C 00 02 62 */	cmpwi r0, 0x262
/* 801287DC  40 82 00 18 */	bne lbl_801287F4
/* 801287E0  88 03 16 6B */	lbz r0, 0x166b(r3)
/* 801287E4  28 00 00 01 */	cmplwi r0, 1
/* 801287E8  40 82 00 0C */	bne lbl_801287F4
lbl_801287EC:
/* 801287EC  38 60 00 01 */	li r3, 1
/* 801287F0  48 00 00 08 */	b lbl_801287F8
lbl_801287F4:
/* 801287F4  38 60 00 00 */	li r3, 0
lbl_801287F8:
/* 801287F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801287FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80128800  7C 08 03 A6 */	mtlr r0
/* 80128804  38 21 00 10 */	addi r1, r1, 0x10
/* 80128808  4E 80 00 20 */	blr 
