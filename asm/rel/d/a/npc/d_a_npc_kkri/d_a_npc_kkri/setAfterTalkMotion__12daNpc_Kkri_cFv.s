lbl_80550270:
/* 80550270  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80550274  7C 08 02 A6 */	mflr r0
/* 80550278  90 01 00 24 */	stw r0, 0x24(r1)
/* 8055027C  39 61 00 20 */	addi r11, r1, 0x20
/* 80550280  4B E1 1F 5C */	b _savegpr_29
/* 80550284  7C 7D 1B 78 */	mr r29, r3
/* 80550288  3B C0 00 0E */	li r30, 0xe
/* 8055028C  80 03 0B 58 */	lwz r0, 0xb58(r3)
/* 80550290  2C 00 00 08 */	cmpwi r0, 8
/* 80550294  41 82 00 3C */	beq lbl_805502D0
/* 80550298  40 80 00 1C */	bge lbl_805502B4
/* 8055029C  2C 00 00 06 */	cmpwi r0, 6
/* 805502A0  41 82 00 74 */	beq lbl_80550314
/* 805502A4  40 80 00 40 */	bge lbl_805502E4
/* 805502A8  2C 00 00 05 */	cmpwi r0, 5
/* 805502AC  40 80 00 18 */	bge lbl_805502C4
/* 805502B0  48 00 00 34 */	b lbl_805502E4
lbl_805502B4:
/* 805502B4  2C 00 00 0A */	cmpwi r0, 0xa
/* 805502B8  41 82 00 28 */	beq lbl_805502E0
/* 805502BC  40 80 00 28 */	bge lbl_805502E4
/* 805502C0  48 00 00 18 */	b lbl_805502D8
lbl_805502C4:
/* 805502C4  3B C0 00 0D */	li r30, 0xd
/* 805502C8  48 00 00 1C */	b lbl_805502E4
/* 805502CC  48 00 00 48 */	b lbl_80550314
lbl_805502D0:
/* 805502D0  3B C0 00 01 */	li r30, 1
/* 805502D4  48 00 00 10 */	b lbl_805502E4
lbl_805502D8:
/* 805502D8  3B C0 00 0B */	li r30, 0xb
/* 805502DC  48 00 00 08 */	b lbl_805502E4
lbl_805502E0:
/* 805502E0  3B C0 00 0B */	li r30, 0xb
lbl_805502E4:
/* 805502E4  2C 1E 00 00 */	cmpwi r30, 0
/* 805502E8  41 80 00 2C */	blt lbl_80550314
/* 805502EC  7C 1E 00 00 */	cmpw r30, r0
/* 805502F0  41 82 00 24 */	beq lbl_80550314
/* 805502F4  83 FD 0B 5C */	lwz r31, 0xb5c(r29)
/* 805502F8  38 7D 0B 50 */	addi r3, r29, 0xb50
/* 805502FC  4B BF 55 9C */	b initialize__22daNpcT_MotionSeqMngr_cFv
/* 80550300  93 FD 0B 5C */	stw r31, 0xb5c(r29)
/* 80550304  93 DD 0B 58 */	stw r30, 0xb58(r29)
/* 80550308  3C 60 80 55 */	lis r3, lit_4621@ha
/* 8055030C  C0 03 35 50 */	lfs f0, lit_4621@l(r3)
/* 80550310  D0 1D 0B 68 */	stfs f0, 0xb68(r29)
lbl_80550314:
/* 80550314  39 61 00 20 */	addi r11, r1, 0x20
/* 80550318  4B E1 1F 10 */	b _restgpr_29
/* 8055031C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80550320  7C 08 03 A6 */	mtlr r0
/* 80550324  38 21 00 20 */	addi r1, r1, 0x20
/* 80550328  4E 80 00 20 */	blr 
