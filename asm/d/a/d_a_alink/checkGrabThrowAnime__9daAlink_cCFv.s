lbl_800E3C1C:
/* 800E3C1C  38 C0 00 00 */	li r6, 0
/* 800E3C20  A0 A3 1F BC */	lhz r5, 0x1fbc(r3)
/* 800E3C24  28 05 01 70 */	cmplwi r5, 0x170
/* 800E3C28  41 82 00 38 */	beq lbl_800E3C60
/* 800E3C2C  7C C4 33 78 */	mr r4, r6
/* 800E3C30  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 800E3C34  28 00 00 51 */	cmplwi r0, 0x51
/* 800E3C38  41 82 00 10 */	beq lbl_800E3C48
/* 800E3C3C  A0 03 1F 94 */	lhz r0, 0x1f94(r3)
/* 800E3C40  28 00 00 51 */	cmplwi r0, 0x51
/* 800E3C44  40 82 00 08 */	bne lbl_800E3C4C
lbl_800E3C48:
/* 800E3C48  38 80 00 01 */	li r4, 1
lbl_800E3C4C:
/* 800E3C4C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 800E3C50  40 82 00 10 */	bne lbl_800E3C60
/* 800E3C54  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 800E3C58  28 00 01 7B */	cmplwi r0, 0x17b
/* 800E3C5C  40 82 00 08 */	bne lbl_800E3C64
lbl_800E3C60:
/* 800E3C60  38 C0 00 01 */	li r6, 1
lbl_800E3C64:
/* 800E3C64  54 C3 06 3E */	clrlwi r3, r6, 0x18
/* 800E3C68  4E 80 00 20 */	blr 
