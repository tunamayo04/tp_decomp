lbl_8009B940:
/* 8009B940  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8009B944  7C 08 02 A6 */	mflr r0
/* 8009B948  90 01 00 54 */	stw r0, 0x54(r1)
/* 8009B94C  39 61 00 50 */	addi r11, r1, 0x50
/* 8009B950  48 2C 68 69 */	bl _savegpr_20
/* 8009B954  7C 7E 1B 78 */	mr r30, r3
/* 8009B958  7C 9F 23 78 */	mr r31, r4
/* 8009B95C  3B 20 00 00 */	li r25, 0
/* 8009B960  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009B964  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009B968  3B 43 00 9C */	addi r26, r3, 0x9c
/* 8009B96C  3B 83 00 EC */	addi r28, r3, 0xec
/* 8009B970  3B 61 00 08 */	addi r27, r1, 8
/* 8009B974  48 00 00 80 */	b lbl_8009B9F4
lbl_8009B978:
/* 8009B978  7F 43 D3 78 */	mr r3, r26
/* 8009B97C  57 24 06 3E */	clrlwi r4, r25, 0x18
/* 8009B980  38 84 00 0F */	addi r4, r4, 0xf
/* 8009B984  38 A0 00 00 */	li r5, 0
/* 8009B988  4B F9 76 A9 */	bl getItem__17dSv_player_item_cCFib
/* 8009B98C  57 35 06 3E */	clrlwi r21, r25, 0x18
/* 8009B990  7C 7B A9 AE */	stbx r3, r27, r21
/* 8009B994  7C 7B A8 AE */	lbzx r3, r27, r21
/* 8009B998  28 03 00 50 */	cmplwi r3, 0x50
/* 8009B99C  40 82 00 18 */	bne lbl_8009B9B4
/* 8009B9A0  38 80 00 00 */	li r4, 0
/* 8009B9A4  56 A0 10 3A */	slwi r0, r21, 2
/* 8009B9A8  38 61 00 0C */	addi r3, r1, 0xc
/* 8009B9AC  7C 83 01 2E */	stwx r4, r3, r0
/* 8009B9B0  48 00 00 40 */	b lbl_8009B9F0
lbl_8009B9B4:
/* 8009B9B4  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8009B9B8  7C 03 00 40 */	cmplw r3, r0
/* 8009B9BC  40 82 00 24 */	bne lbl_8009B9E0
/* 8009B9C0  7F 83 E3 78 */	mr r3, r28
/* 8009B9C4  7F 24 CB 78 */	mr r4, r25
/* 8009B9C8  4B F9 85 B5 */	bl getBombNum__24dSv_player_item_record_cCFUc
/* 8009B9CC  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 8009B9D0  56 A0 10 3A */	slwi r0, r21, 2
/* 8009B9D4  38 61 00 0C */	addi r3, r1, 0xc
/* 8009B9D8  7C 83 01 2E */	stwx r4, r3, r0
/* 8009B9DC  48 00 00 14 */	b lbl_8009B9F0
lbl_8009B9E0:
/* 8009B9E0  38 80 FF FF */	li r4, -1
/* 8009B9E4  56 A0 10 3A */	slwi r0, r21, 2
/* 8009B9E8  38 61 00 0C */	addi r3, r1, 0xc
/* 8009B9EC  7C 83 01 2E */	stwx r4, r3, r0
lbl_8009B9F0:
/* 8009B9F0  3B 39 00 01 */	addi r25, r25, 1
lbl_8009B9F4:
/* 8009B9F4  57 20 06 3E */	clrlwi r0, r25, 0x18
/* 8009B9F8  28 00 00 03 */	cmplwi r0, 3
/* 8009B9FC  41 80 FF 7C */	blt lbl_8009B978
/* 8009BA00  3B 00 00 00 */	li r24, 0
/* 8009BA04  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8009BA08  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8009BA0C  3B 63 00 F8 */	addi r27, r3, 0xf8
/* 8009BA10  3B 23 0F 38 */	addi r25, r3, 0xf38
/* 8009BA14  3B A1 00 08 */	addi r29, r1, 8
/* 8009BA18  3B 81 00 0C */	addi r28, r1, 0xc
/* 8009BA1C  48 00 01 94 */	b lbl_8009BBB0
lbl_8009BA20:
/* 8009BA20  3A E0 FF FF */	li r23, -1
/* 8009BA24  3A C0 FF FF */	li r22, -1
/* 8009BA28  38 80 00 00 */	li r4, 0
/* 8009BA2C  48 00 00 24 */	b lbl_8009BA50
lbl_8009BA30:
/* 8009BA30  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 8009BA34  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 8009BA38  7C 1C 00 2E */	lwzx r0, r28, r0
/* 8009BA3C  2C 00 00 00 */	cmpwi r0, 0
/* 8009BA40  40 82 00 0C */	bne lbl_8009BA4C
/* 8009BA44  7C 77 1B 78 */	mr r23, r3
/* 8009BA48  3A C0 00 00 */	li r22, 0
lbl_8009BA4C:
/* 8009BA4C  38 84 00 01 */	addi r4, r4, 1
lbl_8009BA50:
/* 8009BA50  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8009BA54  28 00 00 03 */	cmplwi r0, 3
/* 8009BA58  41 80 FF D8 */	blt lbl_8009BA30
/* 8009BA5C  3A A0 00 00 */	li r21, 0
/* 8009BA60  48 00 00 44 */	b lbl_8009BAA4
lbl_8009BA64:
/* 8009BA64  56 A4 06 3E */	clrlwi r4, r21, 0x18
/* 8009BA68  56 A0 15 BA */	rlwinm r0, r21, 2, 0x16, 0x1d
/* 8009BA6C  7E 9C 00 2E */	lwzx r20, r28, r0
/* 8009BA70  2C 14 00 00 */	cmpwi r20, 0
/* 8009BA74  40 81 00 2C */	ble lbl_8009BAA0
/* 8009BA78  7C 14 B0 00 */	cmpw r20, r22
/* 8009BA7C  40 81 00 24 */	ble lbl_8009BAA0
/* 8009BA80  7F 63 DB 78 */	mr r3, r27
/* 8009BA84  7C 9D 20 AE */	lbzx r4, r29, r4
/* 8009BA88  4B F9 86 71 */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BA8C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8009BA90  7C 14 00 00 */	cmpw r20, r0
/* 8009BA94  41 82 00 0C */	beq lbl_8009BAA0
/* 8009BA98  56 B7 06 3E */	clrlwi r23, r21, 0x18
/* 8009BA9C  7E 96 A3 78 */	mr r22, r20
lbl_8009BAA0:
/* 8009BAA0  3A B5 00 01 */	addi r21, r21, 1
lbl_8009BAA4:
/* 8009BAA4  56 A0 06 3E */	clrlwi r0, r21, 0x18
/* 8009BAA8  28 00 00 03 */	cmplwi r0, 3
/* 8009BAAC  41 80 FF B8 */	blt lbl_8009BA64
/* 8009BAB0  2C 17 FF FF */	cmpwi r23, -1
/* 8009BAB4  40 82 00 0C */	bne lbl_8009BAC0
/* 8009BAB8  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 8009BABC  48 00 01 04 */	b lbl_8009BBC0
lbl_8009BAC0:
/* 8009BAC0  2C 16 00 00 */	cmpwi r22, 0
/* 8009BAC4  40 82 00 68 */	bne lbl_8009BB2C
/* 8009BAC8  7F 63 DB 78 */	mr r3, r27
/* 8009BACC  7F C4 F3 78 */	mr r4, r30
/* 8009BAD0  4B F9 86 29 */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BAD4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009BAD8  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8009BADC  7C 03 00 40 */	cmplw r3, r0
/* 8009BAE0  41 80 00 20 */	blt lbl_8009BB00
/* 8009BAE4  7F 43 D3 78 */	mr r3, r26
/* 8009BAE8  7F C4 F3 78 */	mr r4, r30
/* 8009BAEC  7F E5 FB 78 */	mr r5, r31
/* 8009BAF0  38 C0 00 01 */	li r6, 1
/* 8009BAF4  4B F9 7F 5D */	bl setEmptyBombBagItemIn__17dSv_player_item_cFUcUcb
/* 8009BAF8  38 60 00 00 */	li r3, 0
/* 8009BAFC  48 00 00 C4 */	b lbl_8009BBC0
lbl_8009BB00:
/* 8009BB00  7F 43 D3 78 */	mr r3, r26
/* 8009BB04  7F C4 F3 78 */	mr r4, r30
/* 8009BB08  7F E5 FB 78 */	mr r5, r31
/* 8009BB0C  38 C0 00 01 */	li r6, 1
/* 8009BB10  4B F9 7F 41 */	bl setEmptyBombBagItemIn__17dSv_player_item_cFUcUcb
/* 8009BB14  7F 63 DB 78 */	mr r3, r27
/* 8009BB18  7F C4 F3 78 */	mr r4, r30
/* 8009BB1C  4B F9 85 DD */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BB20  7C 03 F8 50 */	subf r0, r3, r31
/* 8009BB24  54 1F 06 3E */	clrlwi r31, r0, 0x18
/* 8009BB28  48 00 00 6C */	b lbl_8009BB94
lbl_8009BB2C:
/* 8009BB2C  7F 63 DB 78 */	mr r3, r27
/* 8009BB30  38 81 00 08 */	addi r4, r1, 8
/* 8009BB34  7E 84 B8 AE */	lbzx r20, r4, r23
/* 8009BB38  7E 84 A3 78 */	mr r4, r20
/* 8009BB3C  4B F9 85 BD */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BB40  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009BB44  57 F5 06 3E */	clrlwi r21, r31, 0x18
/* 8009BB48  7C 16 AA 14 */	add r0, r22, r21
/* 8009BB4C  7C 03 00 00 */	cmpw r3, r0
/* 8009BB50  41 80 00 1C */	blt lbl_8009BB6C
/* 8009BB54  7F 23 CB 78 */	mr r3, r25
/* 8009BB58  56 E4 06 3E */	clrlwi r4, r23, 0x18
/* 8009BB5C  7E A5 AB 78 */	mr r5, r21
/* 8009BB60  4B F8 F8 0D */	bl setItemBombNumCount__14dComIfG_play_cFUcs
/* 8009BB64  38 60 00 00 */	li r3, 0
/* 8009BB68  48 00 00 58 */	b lbl_8009BBC0
lbl_8009BB6C:
/* 8009BB6C  7F 23 CB 78 */	mr r3, r25
/* 8009BB70  56 E4 06 3E */	clrlwi r4, r23, 0x18
/* 8009BB74  7E A5 AB 78 */	mr r5, r21
/* 8009BB78  4B F8 F7 F5 */	bl setItemBombNumCount__14dComIfG_play_cFUcs
/* 8009BB7C  7F 63 DB 78 */	mr r3, r27
/* 8009BB80  7E 84 A3 78 */	mr r4, r20
/* 8009BB84  4B F9 85 75 */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BB88  7C 16 18 50 */	subf r0, r22, r3
/* 8009BB8C  7C 00 A8 50 */	subf r0, r0, r21
/* 8009BB90  54 1F 06 3E */	clrlwi r31, r0, 0x18
lbl_8009BB94:
/* 8009BB94  7F 63 DB 78 */	mr r3, r27
/* 8009BB98  7C 9D B8 AE */	lbzx r4, r29, r23
/* 8009BB9C  4B F9 85 5D */	bl getBombNum__21dSv_player_item_max_cCFUc
/* 8009BBA0  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009BBA4  56 E0 10 3A */	slwi r0, r23, 2
/* 8009BBA8  7C 7C 01 2E */	stwx r3, r28, r0
/* 8009BBAC  3B 18 00 01 */	addi r24, r24, 1
lbl_8009BBB0:
/* 8009BBB0  57 00 06 3E */	clrlwi r0, r24, 0x18
/* 8009BBB4  28 00 00 03 */	cmplwi r0, 3
/* 8009BBB8  41 80 FE 68 */	blt lbl_8009BA20
/* 8009BBBC  57 E3 06 3E */	clrlwi r3, r31, 0x18
lbl_8009BBC0:
/* 8009BBC0  39 61 00 50 */	addi r11, r1, 0x50
/* 8009BBC4  48 2C 66 41 */	bl _restgpr_20
/* 8009BBC8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8009BBCC  7C 08 03 A6 */	mtlr r0
/* 8009BBD0  38 21 00 50 */	addi r1, r1, 0x50
/* 8009BBD4  4E 80 00 20 */	blr 
