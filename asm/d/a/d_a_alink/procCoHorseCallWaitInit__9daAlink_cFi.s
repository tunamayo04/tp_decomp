lbl_80111FF0:
/* 80111FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111FF4  7C 08 02 A6 */	mflr r0
/* 80111FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111FFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112000  93 C1 00 08 */	stw r30, 8(r1)
/* 80112004  7C 7E 1B 78 */	mr r30, r3
/* 80112008  7C 9F 23 78 */	mr r31, r4
/* 8011200C  38 80 01 5E */	li r4, 0x15e
/* 80112010  4B FA FF 5D */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 80112014  2C 1F 00 04 */	cmpwi r31, 4
/* 80112018  40 82 00 10 */	bne lbl_80112028
/* 8011201C  38 00 00 02 */	li r0, 2
/* 80112020  B0 1E 30 10 */	sth r0, 0x3010(r30)
/* 80112024  48 00 00 20 */	b lbl_80112044
lbl_80112028:
/* 80112028  2C 1F 00 01 */	cmpwi r31, 1
/* 8011202C  40 82 00 10 */	bne lbl_8011203C
/* 80112030  38 00 00 3D */	li r0, 0x3d
/* 80112034  B0 1E 30 10 */	sth r0, 0x3010(r30)
/* 80112038  48 00 00 0C */	b lbl_80112044
lbl_8011203C:
/* 8011203C  38 00 00 10 */	li r0, 0x10
/* 80112040  B0 1E 30 10 */	sth r0, 0x3010(r30)
lbl_80112044:
/* 80112044  80 1E 05 74 */	lwz r0, 0x574(r30)
/* 80112048  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 8011204C  41 82 00 24 */	beq lbl_80112070
/* 80112050  7F C3 F3 78 */	mr r3, r30
/* 80112054  38 80 00 00 */	li r4, 0
/* 80112058  3C A0 80 39 */	lis r5, m__20daAlinkHIO_wlMove_c0@ha
/* 8011205C  38 A5 EE 28 */	addi r5, r5, m__20daAlinkHIO_wlMove_c0@l
/* 80112060  C0 25 00 70 */	lfs f1, 0x70(r5)
/* 80112064  C0 42 92 C4 */	lfs f2, lit_6109(r2)
/* 80112068  48 01 76 71 */	bl setSingleAnimeWolfBaseSpeed__9daAlink_cFQ29daAlink_c12daAlink_WANMff
/* 8011206C  48 00 00 20 */	b lbl_8011208C
lbl_80112070:
/* 80112070  7F C3 F3 78 */	mr r3, r30
/* 80112074  38 80 00 19 */	li r4, 0x19
/* 80112078  3C A0 80 39 */	lis r5, m__18daAlinkHIO_move_c0@ha
/* 8011207C  38 A5 D6 BC */	addi r5, r5, m__18daAlinkHIO_move_c0@l
/* 80112080  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 80112084  C0 42 92 C4 */	lfs f2, lit_6109(r2)
/* 80112088  4B F9 AF 59 */	bl setSingleAnimeBaseSpeed__9daAlink_cFQ29daAlink_c11daAlink_ANMff
lbl_8011208C:
/* 8011208C  7F C3 F3 78 */	mr r3, r30
/* 80112090  38 80 00 00 */	li r4, 0
/* 80112094  4B FA 12 05 */	bl setBStatus__9daAlink_cFUc
/* 80112098  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8011209C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801120A0  80 03 5F 1C */	lwz r0, 0x5f1c(r3)
/* 801120A4  64 00 04 00 */	oris r0, r0, 0x400
/* 801120A8  90 03 5F 1C */	stw r0, 0x5f1c(r3)
/* 801120AC  38 60 00 01 */	li r3, 1
/* 801120B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801120B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801120B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801120BC  7C 08 03 A6 */	mtlr r0
/* 801120C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801120C4  4E 80 00 20 */	blr 
