lbl_8011F084:
/* 8011F084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011F088  7C 08 02 A6 */	mflr r0
/* 8011F08C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011F090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011F094  7C 7F 1B 78 */	mr r31, r3
/* 8011F098  38 80 00 EB */	li r4, 0xeb
/* 8011F09C  4B FA 3D 09 */	bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8011F0A0  2C 03 00 00 */	cmpwi r3, 0
/* 8011F0A4  40 82 00 0C */	bne lbl_8011F0B0
/* 8011F0A8  38 60 00 00 */	li r3, 0
/* 8011F0AC  48 00 00 34 */	b lbl_8011F0E0
lbl_8011F0B0:
/* 8011F0B0  38 00 00 00 */	li r0, 0
/* 8011F0B4  B0 1F 30 0C */	sth r0, 0x300c(r31)
/* 8011F0B8  B0 1F 30 12 */	sth r0, 0x3012(r31)
/* 8011F0BC  7F E3 FB 78 */	mr r3, r31
/* 8011F0C0  C0 22 92 C0 */	lfs f1, lit_6108(r2)
/* 8011F0C4  C0 5F 05 34 */	lfs f2, 0x534(r31)
/* 8011F0C8  38 80 00 00 */	li r4, 0
/* 8011F0CC  4B F9 C6 A5 */	bl setSpecialGravity__9daAlink_cFffi
/* 8011F0D0  38 00 00 00 */	li r0, 0
/* 8011F0D4  B0 1F 30 0E */	sth r0, 0x300e(r31)
/* 8011F0D8  B0 1F 30 10 */	sth r0, 0x3010(r31)
/* 8011F0DC  38 60 00 01 */	li r3, 1
lbl_8011F0E0:
/* 8011F0E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011F0E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011F0E8  7C 08 03 A6 */	mtlr r0
/* 8011F0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011F0F0  4E 80 00 20 */	blr 
