lbl_80A74950:
/* 80A74950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A74954  7C 08 02 A6 */	mflr r0
/* 80A74958  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A7495C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A74960  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A74964  41 82 00 10 */	beq lbl_80A74974
/* 80A74968  7C 80 07 35 */	extsh. r0, r4
/* 80A7496C  40 81 00 08 */	ble lbl_80A74974
/* 80A74970  4B 85 A3 CC */	b __dl__FPv
lbl_80A74974:
/* 80A74974  7F E3 FB 78 */	mr r3, r31
/* 80A74978  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A7497C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A74980  7C 08 03 A6 */	mtlr r0
/* 80A74984  38 21 00 10 */	addi r1, r1, 0x10
/* 80A74988  4E 80 00 20 */	blr 
