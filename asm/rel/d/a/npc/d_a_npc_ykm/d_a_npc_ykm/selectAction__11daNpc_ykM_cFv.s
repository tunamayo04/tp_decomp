lbl_80B5680C:
/* 80B5680C  3C 80 80 B6 */	lis r4, cNullVec__6Z2Calc@ha
/* 80B56810  38 C4 DA E8 */	addi r6, r4, cNullVec__6Z2Calc@l
/* 80B56814  3C 80 80 3A */	lis r4, __ptmf_null@ha
/* 80B56818  38 A4 21 80 */	addi r5, r4, __ptmf_null@l
/* 80B5681C  80 85 00 00 */	lwz r4, 0(r5)
/* 80B56820  80 05 00 04 */	lwz r0, 4(r5)
/* 80B56824  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B56828  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B5682C  80 05 00 08 */	lwz r0, 8(r5)
/* 80B56830  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B56834  88 03 14 74 */	lbz r0, 0x1474(r3)
/* 80B56838  2C 00 00 03 */	cmpwi r0, 3
/* 80B5683C  41 82 00 F8 */	beq lbl_80B56934
/* 80B56840  40 80 00 14 */	bge lbl_80B56854
/* 80B56844  2C 00 00 01 */	cmpwi r0, 1
/* 80B56848  41 82 00 18 */	beq lbl_80B56860
/* 80B5684C  40 80 00 30 */	bge lbl_80B5687C
/* 80B56850  48 00 00 E4 */	b lbl_80B56934
lbl_80B56854:
/* 80B56854  2C 00 00 05 */	cmpwi r0, 5
/* 80B56858  40 80 00 DC */	bge lbl_80B56934
/* 80B5685C  48 00 00 7C */	b lbl_80B568D8
lbl_80B56860:
/* 80B56860  80 86 0F 54 */	lwz r4, 0xf54(r6)
/* 80B56864  80 06 0F 58 */	lwz r0, 0xf58(r6)
/* 80B56868  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B5686C  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B56870  80 06 0F 5C */	lwz r0, 0xf5c(r6)
/* 80B56874  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B56878  48 00 00 D4 */	b lbl_80B5694C
lbl_80B5687C:
/* 80B5687C  88 03 15 7B */	lbz r0, 0x157b(r3)
/* 80B56880  28 00 00 00 */	cmplwi r0, 0
/* 80B56884  41 82 00 2C */	beq lbl_80B568B0
/* 80B56888  80 86 0F 60 */	lwz r4, 0xf60(r6)
/* 80B5688C  80 06 0F 64 */	lwz r0, 0xf64(r6)
/* 80B56890  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B56894  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B56898  80 06 0F 68 */	lwz r0, 0xf68(r6)
/* 80B5689C  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B568A0  80 03 06 B8 */	lwz r0, 0x6b8(r3)
/* 80B568A4  60 00 00 04 */	ori r0, r0, 4
/* 80B568A8  90 03 06 B8 */	stw r0, 0x6b8(r3)
/* 80B568AC  48 00 00 A0 */	b lbl_80B5694C
lbl_80B568B0:
/* 80B568B0  80 86 0F 6C */	lwz r4, 0xf6c(r6)
/* 80B568B4  80 06 0F 70 */	lwz r0, 0xf70(r6)
/* 80B568B8  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B568BC  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B568C0  80 06 0F 74 */	lwz r0, 0xf74(r6)
/* 80B568C4  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B568C8  80 03 06 B8 */	lwz r0, 0x6b8(r3)
/* 80B568CC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80B568D0  90 03 06 B8 */	stw r0, 0x6b8(r3)
/* 80B568D4  48 00 00 78 */	b lbl_80B5694C
lbl_80B568D8:
/* 80B568D8  88 03 15 7B */	lbz r0, 0x157b(r3)
/* 80B568DC  28 00 00 00 */	cmplwi r0, 0
/* 80B568E0  41 82 00 2C */	beq lbl_80B5690C
/* 80B568E4  80 86 0F 78 */	lwz r4, 0xf78(r6)
/* 80B568E8  80 06 0F 7C */	lwz r0, 0xf7c(r6)
/* 80B568EC  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B568F0  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B568F4  80 06 0F 80 */	lwz r0, 0xf80(r6)
/* 80B568F8  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B568FC  80 03 06 B8 */	lwz r0, 0x6b8(r3)
/* 80B56900  60 00 00 04 */	ori r0, r0, 4
/* 80B56904  90 03 06 B8 */	stw r0, 0x6b8(r3)
/* 80B56908  48 00 00 44 */	b lbl_80B5694C
lbl_80B5690C:
/* 80B5690C  80 86 0F 84 */	lwz r4, 0xf84(r6)
/* 80B56910  80 06 0F 88 */	lwz r0, 0xf88(r6)
/* 80B56914  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B56918  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B5691C  80 06 0F 8C */	lwz r0, 0xf8c(r6)
/* 80B56920  90 03 14 EC */	stw r0, 0x14ec(r3)
/* 80B56924  80 03 06 B8 */	lwz r0, 0x6b8(r3)
/* 80B56928  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80B5692C  90 03 06 B8 */	stw r0, 0x6b8(r3)
/* 80B56930  48 00 00 1C */	b lbl_80B5694C
lbl_80B56934:
/* 80B56934  80 86 0F 90 */	lwz r4, 0xf90(r6)
/* 80B56938  80 06 0F 94 */	lwz r0, 0xf94(r6)
/* 80B5693C  90 83 14 E4 */	stw r4, 0x14e4(r3)
/* 80B56940  90 03 14 E8 */	stw r0, 0x14e8(r3)
/* 80B56944  80 06 0F 98 */	lwz r0, 0xf98(r6)
/* 80B56948  90 03 14 EC */	stw r0, 0x14ec(r3)
lbl_80B5694C:
/* 80B5694C  38 60 00 01 */	li r3, 1
/* 80B56950  4E 80 00 20 */	blr 
