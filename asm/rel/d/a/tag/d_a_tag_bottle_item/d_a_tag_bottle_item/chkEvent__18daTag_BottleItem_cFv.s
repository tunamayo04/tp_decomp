lbl_80D56334:
/* 80D56334  38 A0 00 01 */	li r5, 1
/* 80D56338  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 80D5633C  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 80D56340  38 00 00 00 */	li r0, 0
/* 80D56344  88 84 4F AD */	lbz r4, 0x4fad(r4)
/* 80D56348  28 04 00 00 */	cmplwi r4, 0
/* 80D5634C  41 82 00 0C */	beq lbl_80D56358
/* 80D56350  28 04 00 02 */	cmplwi r4, 2
/* 80D56354  40 82 00 08 */	bne lbl_80D5635C
lbl_80D56358:
/* 80D56358  38 00 00 01 */	li r0, 1
lbl_80D5635C:
/* 80D5635C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80D56360  40 82 00 1C */	bne lbl_80D5637C
/* 80D56364  38 A0 00 00 */	li r5, 0
/* 80D56368  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80D5636C  28 00 00 06 */	cmplwi r0, 6
/* 80D56370  40 82 00 0C */	bne lbl_80D5637C
/* 80D56374  38 60 00 00 */	li r3, 0
/* 80D56378  4E 80 00 20 */	blr 
lbl_80D5637C:
/* 80D5637C  7C A3 2B 78 */	mr r3, r5
/* 80D56380  4E 80 00 20 */	blr 
