lbl_800D1788:
/* 800D1788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D178C  7C 08 02 A6 */	mflr r0
/* 800D1790  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D1794  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D1798  28 03 00 00 */	cmplwi r3, 0
/* 800D179C  41 82 00 38 */	beq lbl_800D17D4
/* 800D17A0  88 03 04 96 */	lbz r0, 0x496(r3)
/* 800D17A4  28 00 00 04 */	cmplwi r0, 4
/* 800D17A8  40 82 00 2C */	bne lbl_800D17D4
/* 800D17AC  AB E3 00 08 */	lha r31, 8(r3)
/* 800D17B0  48 00 AD F5 */	bl checkSpecialNpc__9daAlink_cFP10fopAc_ac_c
/* 800D17B4  2C 03 00 00 */	cmpwi r3, 0
/* 800D17B8  40 82 00 1C */	bne lbl_800D17D4
/* 800D17BC  2C 1F 01 08 */	cmpwi r31, 0x108
/* 800D17C0  41 82 00 14 */	beq lbl_800D17D4
/* 800D17C4  2C 1F 02 40 */	cmpwi r31, 0x240
/* 800D17C8  41 82 00 0C */	beq lbl_800D17D4
/* 800D17CC  38 60 00 01 */	li r3, 1
/* 800D17D0  48 00 00 08 */	b lbl_800D17D8
lbl_800D17D4:
/* 800D17D4  38 60 00 00 */	li r3, 0
lbl_800D17D8:
/* 800D17D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D17DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D17E0  7C 08 03 A6 */	mtlr r0
/* 800D17E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800D17E8  4E 80 00 20 */	blr 
