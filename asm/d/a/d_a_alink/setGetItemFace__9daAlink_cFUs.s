lbl_801181A0:
/* 801181A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801181A4  7C 08 02 A6 */	mflr r0
/* 801181A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801181AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801181B0  7C 7F 1B 78 */	mr r31, r3
/* 801181B4  38 04 FF FA */	addi r0, r4, -6
/* 801181B8  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 801181BC  28 00 00 01 */	cmplwi r0, 1
/* 801181C0  40 81 00 84 */	ble lbl_80118244
/* 801181C4  38 04 FF DF */	addi r0, r4, -33
/* 801181C8  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 801181CC  28 00 00 01 */	cmplwi r0, 1
/* 801181D0  40 81 00 74 */	ble lbl_80118244
/* 801181D4  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 801181D8  28 00 00 31 */	cmplwi r0, 0x31
/* 801181DC  41 82 00 68 */	beq lbl_80118244
/* 801181E0  28 00 00 36 */	cmplwi r0, 0x36
/* 801181E4  41 82 00 60 */	beq lbl_80118244
/* 801181E8  28 00 00 40 */	cmplwi r0, 0x40
/* 801181EC  41 80 00 0C */	blt lbl_801181F8
/* 801181F0  28 00 00 47 */	cmplwi r0, 0x47
/* 801181F4  40 81 00 50 */	ble lbl_80118244
lbl_801181F8:
/* 801181F8  54 83 04 3E */	clrlwi r3, r4, 0x10
/* 801181FC  28 03 00 4A */	cmplwi r3, 0x4a
/* 80118200  41 82 00 44 */	beq lbl_80118244
/* 80118204  28 03 00 56 */	cmplwi r3, 0x56
/* 80118208  41 82 00 3C */	beq lbl_80118244
/* 8011820C  28 03 00 ED */	cmplwi r3, 0xed
/* 80118210  41 82 00 34 */	beq lbl_80118244
/* 80118214  28 03 00 73 */	cmplwi r3, 0x73
/* 80118218  41 82 00 2C */	beq lbl_80118244
/* 8011821C  28 03 00 75 */	cmplwi r3, 0x75
/* 80118220  41 82 00 24 */	beq lbl_80118244
/* 80118224  28 03 00 EB */	cmplwi r3, 0xeb
/* 80118228  41 82 00 1C */	beq lbl_80118244
/* 8011822C  38 04 FF 5F */	addi r0, r4, -161
/* 80118230  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80118234  28 00 00 01 */	cmplwi r0, 1
/* 80118238  40 81 00 0C */	ble lbl_80118244
/* 8011823C  28 03 00 A3 */	cmplwi r3, 0xa3
/* 80118240  40 82 00 20 */	bne lbl_80118260
lbl_80118244:
/* 80118244  7F E3 FB 78 */	mr r3, r31
/* 80118248  38 80 01 43 */	li r4, 0x143
/* 8011824C  38 A0 00 00 */	li r5, 0
/* 80118250  3C C0 00 01 */	lis r6, 0x0001 /* 0x0000FFFF@ha */
/* 80118254  38 C6 FF FF */	addi r6, r6, 0xFFFF /* 0x0000FFFF@l */
/* 80118258  4B F9 72 59 */	bl setFaceBck__9daAlink_cFUsiUs
/* 8011825C  48 00 00 64 */	b lbl_801182C0
lbl_80118260:
/* 80118260  28 03 00 25 */	cmplwi r3, 0x25
/* 80118264  41 82 00 0C */	beq lbl_80118270
/* 80118268  28 03 00 EC */	cmplwi r3, 0xec
/* 8011826C  40 82 00 2C */	bne lbl_80118298
lbl_80118270:
/* 80118270  7F E3 FB 78 */	mr r3, r31
/* 80118274  38 80 00 7C */	li r4, 0x7c
/* 80118278  4B F9 76 29 */	bl setFaceBasicTexture__9daAlink_cFQ29daAlink_c13daAlink_FTANM
/* 8011827C  7F E3 FB 78 */	mr r3, r31
/* 80118280  38 80 01 49 */	li r4, 0x149
/* 80118284  38 A0 00 00 */	li r5, 0
/* 80118288  3C C0 00 01 */	lis r6, 0x0001 /* 0x0000FFFF@ha */
/* 8011828C  38 C6 FF FF */	addi r6, r6, 0xFFFF /* 0x0000FFFF@l */
/* 80118290  4B F9 72 21 */	bl setFaceBck__9daAlink_cFUsiUs
/* 80118294  48 00 00 2C */	b lbl_801182C0
lbl_80118298:
/* 80118298  28 03 00 F4 */	cmplwi r3, 0xf4
/* 8011829C  41 82 00 0C */	beq lbl_801182A8
/* 801182A0  28 03 00 F5 */	cmplwi r3, 0xf5
/* 801182A4  40 82 00 1C */	bne lbl_801182C0
lbl_801182A8:
/* 801182A8  7F E3 FB 78 */	mr r3, r31
/* 801182AC  38 80 01 46 */	li r4, 0x146
/* 801182B0  38 A0 00 00 */	li r5, 0
/* 801182B4  3C C0 00 01 */	lis r6, 0x0001 /* 0x0000FFFF@ha */
/* 801182B8  38 C6 FF FF */	addi r6, r6, 0xFFFF /* 0x0000FFFF@l */
/* 801182BC  4B F9 71 F5 */	bl setFaceBck__9daAlink_cFUsiUs
lbl_801182C0:
/* 801182C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801182C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801182C8  7C 08 03 A6 */	mtlr r0
/* 801182CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801182D0  4E 80 00 20 */	blr 
