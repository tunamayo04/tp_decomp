lbl_8084010C:
/* 8084010C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80840110  7C 08 02 A6 */	mflr r0
/* 80840114  90 01 00 24 */	stw r0, 0x24(r1)
/* 80840118  39 61 00 20 */	addi r11, r1, 0x20
/* 8084011C  4B B2 20 C0 */	b _savegpr_29
/* 80840120  7C 7E 1B 78 */	mr r30, r3
/* 80840124  3C 60 80 84 */	lis r3, lit_1109@ha
/* 80840128  3B E3 5B B8 */	addi r31, r3, lit_1109@l
/* 8084012C  3C 60 80 84 */	lis r3, lit_3894@ha
/* 80840130  3B A3 54 AC */	addi r29, r3, lit_3894@l
/* 80840134  88 1F 01 78 */	lbz r0, 0x178(r31)
/* 80840138  7C 00 07 75 */	extsb. r0, r0
/* 8084013C  40 82 00 38 */	bne lbl_80840174
/* 80840140  C0 1D 02 DC */	lfs f0, 0x2dc(r29)
/* 80840144  D0 1F 01 7C */	stfs f0, 0x17c(r31)
/* 80840148  C0 1D 02 E0 */	lfs f0, 0x2e0(r29)
/* 8084014C  38 7F 01 7C */	addi r3, r31, 0x17c
/* 80840150  D0 03 00 04 */	stfs f0, 4(r3)
/* 80840154  C0 1D 02 A0 */	lfs f0, 0x2a0(r29)
/* 80840158  D0 03 00 08 */	stfs f0, 8(r3)
/* 8084015C  3C 80 80 84 */	lis r4, __dt__4cXyzFv@ha
/* 80840160  38 84 83 6C */	addi r4, r4, __dt__4cXyzFv@l
/* 80840164  38 BF 01 6C */	addi r5, r31, 0x16c
/* 80840168  4B FF 7D 51 */	bl __register_global_object
/* 8084016C  38 00 00 01 */	li r0, 1
/* 80840170  98 1F 01 78 */	stb r0, 0x178(r31)
lbl_80840174:
/* 80840174  88 1F 01 94 */	lbz r0, 0x194(r31)
/* 80840178  7C 00 07 75 */	extsb. r0, r0
/* 8084017C  40 82 00 38 */	bne lbl_808401B4
/* 80840180  C0 1D 02 DC */	lfs f0, 0x2dc(r29)
/* 80840184  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 80840188  C0 1D 02 60 */	lfs f0, 0x260(r29)
/* 8084018C  38 7F 01 98 */	addi r3, r31, 0x198
/* 80840190  D0 03 00 04 */	stfs f0, 4(r3)
/* 80840194  C0 1D 02 A0 */	lfs f0, 0x2a0(r29)
/* 80840198  D0 03 00 08 */	stfs f0, 8(r3)
/* 8084019C  3C 80 80 84 */	lis r4, __dt__4cXyzFv@ha
/* 808401A0  38 84 83 6C */	addi r4, r4, __dt__4cXyzFv@l
/* 808401A4  38 BF 01 88 */	addi r5, r31, 0x188
/* 808401A8  4B FF 7D 11 */	bl __register_global_object
/* 808401AC  38 00 00 01 */	li r0, 1
/* 808401B0  98 1F 01 94 */	stb r0, 0x194(r31)
lbl_808401B4:
/* 808401B4  80 1E 17 44 */	lwz r0, 0x1744(r30)
/* 808401B8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 808401BC  40 82 00 2C */	bne lbl_808401E8
/* 808401C0  80 7E 12 58 */	lwz r3, 0x1258(r30)
/* 808401C4  28 03 00 00 */	cmplwi r3, 0
/* 808401C8  41 82 00 20 */	beq lbl_808401E8
/* 808401CC  88 03 06 DF */	lbz r0, 0x6df(r3)
/* 808401D0  28 00 00 00 */	cmplwi r0, 0
/* 808401D4  41 82 00 14 */	beq lbl_808401E8
/* 808401D8  80 1E 17 44 */	lwz r0, 0x1744(r30)
/* 808401DC  54 00 01 88 */	rlwinm r0, r0, 0, 6, 4
/* 808401E0  90 1E 17 44 */	stw r0, 0x1744(r30)
/* 808401E4  48 00 00 FC */	b lbl_808402E0
lbl_808401E8:
/* 808401E8  7F C3 F3 78 */	mr r3, r30
/* 808401EC  38 80 00 00 */	li r4, 0
/* 808401F0  4B FF F7 BD */	bl setReinPosMoveInit__9daHorse_cFi
/* 808401F4  80 7E 05 70 */	lwz r3, 0x570(r30)
/* 808401F8  80 63 00 84 */	lwz r3, 0x84(r3)
/* 808401FC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80840200  38 63 03 F0 */	addi r3, r3, 0x3f0
/* 80840204  38 9F 01 7C */	addi r4, r31, 0x17c
/* 80840208  80 BE 11 50 */	lwz r5, 0x1150(r30)
/* 8084020C  38 A5 01 20 */	addi r5, r5, 0x120
/* 80840210  4B B0 6B 5C */	b PSMTXMultVec
/* 80840214  38 7E 11 50 */	addi r3, r30, 0x1150
/* 80840218  38 80 00 18 */	li r4, 0x18
/* 8084021C  4B FF 81 8D */	bl setReinPosPart__13daHorseRein_cFi
/* 80840220  80 7E 05 70 */	lwz r3, 0x570(r30)
/* 80840224  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80840228  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8084022C  38 63 03 F0 */	addi r3, r3, 0x3f0
/* 80840230  38 9F 01 98 */	addi r4, r31, 0x198
/* 80840234  80 BE 11 78 */	lwz r5, 0x1178(r30)
/* 80840238  38 A5 01 20 */	addi r5, r5, 0x120
/* 8084023C  4B B0 6B 30 */	b PSMTXMultVec
/* 80840240  38 7E 11 78 */	addi r3, r30, 0x1178
/* 80840244  38 80 00 18 */	li r4, 0x18
/* 80840248  4B FF 81 61 */	bl setReinPosPart__13daHorseRein_cFi
/* 8084024C  80 7E 11 50 */	lwz r3, 0x1150(r30)
/* 80840250  80 9E 11 A0 */	lwz r4, 0x11a0(r30)
/* 80840254  C0 03 01 20 */	lfs f0, 0x120(r3)
/* 80840258  D0 04 00 00 */	stfs f0, 0(r4)
/* 8084025C  C0 03 01 24 */	lfs f0, 0x124(r3)
/* 80840260  D0 04 00 04 */	stfs f0, 4(r4)
/* 80840264  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 80840268  D0 04 00 08 */	stfs f0, 8(r4)
/* 8084026C  38 7E 11 A0 */	addi r3, r30, 0x11a0
/* 80840270  38 80 00 00 */	li r4, 0
/* 80840274  4B FF 81 35 */	bl setReinPosPart__13daHorseRein_cFi
/* 80840278  80 1E 17 48 */	lwz r0, 0x1748(r30)
/* 8084027C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80840280  41 82 00 58 */	beq lbl_808402D8
/* 80840284  3B A0 00 00 */	li r29, 0
lbl_80840288:
/* 80840288  38 7E 11 50 */	addi r3, r30, 0x1150
/* 8084028C  38 80 00 18 */	li r4, 0x18
/* 80840290  4B FF 81 19 */	bl setReinPosPart__13daHorseRein_cFi
/* 80840294  38 7E 11 78 */	addi r3, r30, 0x1178
/* 80840298  38 80 00 18 */	li r4, 0x18
/* 8084029C  4B FF 81 0D */	bl setReinPosPart__13daHorseRein_cFi
/* 808402A0  80 7E 11 50 */	lwz r3, 0x1150(r30)
/* 808402A4  80 9E 11 A0 */	lwz r4, 0x11a0(r30)
/* 808402A8  C0 03 01 20 */	lfs f0, 0x120(r3)
/* 808402AC  D0 04 00 00 */	stfs f0, 0(r4)
/* 808402B0  C0 03 01 24 */	lfs f0, 0x124(r3)
/* 808402B4  D0 04 00 04 */	stfs f0, 4(r4)
/* 808402B8  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 808402BC  D0 04 00 08 */	stfs f0, 8(r4)
/* 808402C0  38 7E 11 A0 */	addi r3, r30, 0x11a0
/* 808402C4  38 80 00 00 */	li r4, 0
/* 808402C8  4B FF 80 E1 */	bl setReinPosPart__13daHorseRein_cFi
/* 808402CC  3B BD 00 01 */	addi r29, r29, 1
/* 808402D0  2C 1D 00 05 */	cmpwi r29, 5
/* 808402D4  41 80 FF B4 */	blt lbl_80840288
lbl_808402D8:
/* 808402D8  7F C3 F3 78 */	mr r3, r30
/* 808402DC  4B FF FA D1 */	bl copyReinPos__9daHorse_cFv
lbl_808402E0:
/* 808402E0  39 61 00 20 */	addi r11, r1, 0x20
/* 808402E4  4B B2 1F 44 */	b _restgpr_29
/* 808402E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 808402EC  7C 08 03 A6 */	mtlr r0
/* 808402F0  38 21 00 20 */	addi r1, r1, 0x20
/* 808402F4  4E 80 00 20 */	blr 
