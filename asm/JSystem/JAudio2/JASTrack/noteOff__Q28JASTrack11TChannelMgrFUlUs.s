lbl_80293220:
/* 80293220  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80293224  7C 08 02 A6 */	mflr r0
/* 80293228  90 01 00 24 */	stw r0, 0x24(r1)
/* 8029322C  39 61 00 20 */	addi r11, r1, 0x20
/* 80293230  48 0C EF AD */	bl _savegpr_29
/* 80293234  7C 7D 1B 78 */	mr r29, r3
/* 80293238  54 9F 10 3A */	slwi r31, r4, 2
/* 8029323C  7F DD F8 2E */	lwzx r30, r29, r31
/* 80293240  28 1E 00 00 */	cmplwi r30, 0
/* 80293244  40 82 00 0C */	bne lbl_80293250
/* 80293248  38 60 00 00 */	li r3, 0
/* 8029324C  48 00 00 3C */	b lbl_80293288
lbl_80293250:
/* 80293250  54 A0 04 3F */	clrlwi. r0, r5, 0x10
/* 80293254  40 82 00 14 */	bne lbl_80293268
/* 80293258  7F C3 F3 78 */	mr r3, r30
/* 8029325C  38 80 00 00 */	li r4, 0
/* 80293260  48 00 78 71 */	bl release__10JASChannelFUs
/* 80293264  48 00 00 10 */	b lbl_80293274
lbl_80293268:
/* 80293268  7F C3 F3 78 */	mr r3, r30
/* 8029326C  7C A4 2B 78 */	mr r4, r5
/* 80293270  48 00 78 61 */	bl release__10JASChannelFUs
lbl_80293274:
/* 80293274  7F C3 F3 78 */	mr r3, r30
/* 80293278  48 00 89 85 */	bl free__10JASChannelFv
/* 8029327C  38 00 00 00 */	li r0, 0
/* 80293280  7C 1D F9 2E */	stwx r0, r29, r31
/* 80293284  38 60 00 01 */	li r3, 1
lbl_80293288:
/* 80293288  39 61 00 20 */	addi r11, r1, 0x20
/* 8029328C  48 0C EF 9D */	bl _restgpr_29
/* 80293290  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80293294  7C 08 03 A6 */	mtlr r0
/* 80293298  38 21 00 20 */	addi r1, r1, 0x20
/* 8029329C  4E 80 00 20 */	blr 
