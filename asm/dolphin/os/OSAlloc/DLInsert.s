lbl_8033B078:
/* 8033B078  38 E3 00 00 */	addi r7, r3, 0
/* 8033B07C  38 C0 00 00 */	li r6, 0
/* 8033B080  48 00 00 14 */	b lbl_8033B094
lbl_8033B084:
/* 8033B084  7C 04 38 40 */	cmplw r4, r7
/* 8033B088  40 81 00 14 */	ble lbl_8033B09C
/* 8033B08C  7C E6 3B 78 */	mr r6, r7
/* 8033B090  80 E7 00 04 */	lwz r7, 4(r7)
lbl_8033B094:
/* 8033B094  28 07 00 00 */	cmplwi r7, 0
/* 8033B098  40 82 FF EC */	bne lbl_8033B084
lbl_8033B09C:
/* 8033B09C  90 E4 00 04 */	stw r7, 4(r4)
/* 8033B0A0  28 07 00 00 */	cmplwi r7, 0
/* 8033B0A4  90 C4 00 00 */	stw r6, 0(r4)
/* 8033B0A8  41 82 00 38 */	beq lbl_8033B0E0
/* 8033B0AC  90 87 00 00 */	stw r4, 0(r7)
/* 8033B0B0  80 A4 00 08 */	lwz r5, 8(r4)
/* 8033B0B4  7C 04 2A 14 */	add r0, r4, r5
/* 8033B0B8  7C 00 38 40 */	cmplw r0, r7
/* 8033B0BC  40 82 00 24 */	bne lbl_8033B0E0
/* 8033B0C0  80 07 00 08 */	lwz r0, 8(r7)
/* 8033B0C4  7C 05 02 14 */	add r0, r5, r0
/* 8033B0C8  90 04 00 08 */	stw r0, 8(r4)
/* 8033B0CC  80 E7 00 04 */	lwz r7, 4(r7)
/* 8033B0D0  28 07 00 00 */	cmplwi r7, 0
/* 8033B0D4  90 E4 00 04 */	stw r7, 4(r4)
/* 8033B0D8  41 82 00 08 */	beq lbl_8033B0E0
/* 8033B0DC  90 87 00 00 */	stw r4, 0(r7)
lbl_8033B0E0:
/* 8033B0E0  28 06 00 00 */	cmplwi r6, 0
/* 8033B0E4  41 82 00 38 */	beq lbl_8033B11C
/* 8033B0E8  90 86 00 04 */	stw r4, 4(r6)
/* 8033B0EC  80 A6 00 08 */	lwz r5, 8(r6)
/* 8033B0F0  7C 06 2A 14 */	add r0, r6, r5
/* 8033B0F4  7C 00 20 40 */	cmplw r0, r4
/* 8033B0F8  4C 82 00 20 */	bnelr 
/* 8033B0FC  80 04 00 08 */	lwz r0, 8(r4)
/* 8033B100  28 07 00 00 */	cmplwi r7, 0
/* 8033B104  7C 05 02 14 */	add r0, r5, r0
/* 8033B108  90 06 00 08 */	stw r0, 8(r6)
/* 8033B10C  90 E6 00 04 */	stw r7, 4(r6)
/* 8033B110  4D 82 00 20 */	beqlr 
/* 8033B114  90 C7 00 00 */	stw r6, 0(r7)
/* 8033B118  4E 80 00 20 */	blr 
lbl_8033B11C:
/* 8033B11C  7C 83 23 78 */	mr r3, r4
/* 8033B120  4E 80 00 20 */	blr 
