lbl_80140550:
/* 80140550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80140554  7C 08 02 A6 */	mflr r0
/* 80140558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014055C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80140560  7C 7F 1B 78 */	mr r31, r3
/* 80140564  80 63 06 50 */	lwz r3, 0x650(r3)
/* 80140568  80 03 00 04 */	lwz r0, 4(r3)
/* 8014056C  90 1F 06 4C */	stw r0, 0x64c(r31)
/* 80140570  80 7F 06 50 */	lwz r3, 0x650(r31)
/* 80140574  80 03 00 04 */	lwz r0, 4(r3)
/* 80140578  90 1F 06 C0 */	stw r0, 0x6c0(r31)
/* 8014057C  80 1F 05 78 */	lwz r0, 0x578(r31)
/* 80140580  54 00 02 53 */	rlwinm. r0, r0, 0, 9, 9
/* 80140584  40 82 00 B0 */	bne lbl_80140634
/* 80140588  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 8014058C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80140590  80 63 00 00 */	lwz r3, 0(r3)
/* 80140594  80 1F 1F 20 */	lwz r0, 0x1f20(r31)
/* 80140598  90 03 00 54 */	stw r0, 0x54(r3)
/* 8014059C  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 801405A0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801405A4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801405A8  80 1F 1F 24 */	lwz r0, 0x1f24(r31)
/* 801405AC  90 03 00 54 */	stw r0, 0x54(r3)
/* 801405B0  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 801405B4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801405B8  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 801405BC  80 1F 1F 20 */	lwz r0, 0x1f20(r31)
/* 801405C0  90 03 00 54 */	stw r0, 0x54(r3)
/* 801405C4  38 C0 00 00 */	li r6, 0
/* 801405C8  3C 60 80 0A */	lis r3, daAlink_wolfModelCallBack__FP8J3DJointi@ha
/* 801405CC  38 63 EF F0 */	addi r3, r3, daAlink_wolfModelCallBack__FP8J3DJointi@l
/* 801405D0  48 00 00 1C */	b lbl_801405EC
lbl_801405D4:
/* 801405D4  80 BF 06 4C */	lwz r5, 0x64c(r31)
/* 801405D8  80 A5 00 28 */	lwz r5, 0x28(r5)
/* 801405DC  54 C0 13 BA */	rlwinm r0, r6, 2, 0xe, 0x1d
/* 801405E0  7C A5 00 2E */	lwzx r5, r5, r0
/* 801405E4  90 65 00 04 */	stw r3, 4(r5)
/* 801405E8  38 C6 00 01 */	addi r6, r6, 1
lbl_801405EC:
/* 801405EC  54 C0 04 3E */	clrlwi r0, r6, 0x10
/* 801405F0  28 00 00 28 */	cmplwi r0, 0x28
/* 801405F4  41 80 FF E0 */	blt lbl_801405D4
/* 801405F8  2C 04 00 00 */	cmpwi r4, 0
/* 801405FC  41 82 00 98 */	beq lbl_80140694
/* 80140600  80 9F 21 54 */	lwz r4, 0x2154(r31)
/* 80140604  28 04 00 00 */	cmplwi r4, 0
/* 80140608  41 82 00 10 */	beq lbl_80140618
/* 8014060C  80 7F 06 C0 */	lwz r3, 0x6c0(r31)
/* 80140610  38 63 00 58 */	addi r3, r3, 0x58
/* 80140614  48 1E F5 B5 */	bl entryTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern
lbl_80140618:
/* 80140618  80 9F 21 58 */	lwz r4, 0x2158(r31)
/* 8014061C  28 04 00 00 */	cmplwi r4, 0
/* 80140620  41 82 00 74 */	beq lbl_80140694
/* 80140624  80 7F 06 C0 */	lwz r3, 0x6c0(r31)
/* 80140628  38 63 00 58 */	addi r3, r3, 0x58
/* 8014062C  48 1E F6 99 */	bl entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey
/* 80140630  48 00 00 64 */	b lbl_80140694
lbl_80140634:
/* 80140634  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 80140638  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014063C  80 63 00 00 */	lwz r3, 0(r3)
/* 80140640  38 80 00 00 */	li r4, 0
/* 80140644  90 83 00 54 */	stw r4, 0x54(r3)
/* 80140648  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 8014064C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80140650  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80140654  90 83 00 54 */	stw r4, 0x54(r3)
/* 80140658  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 8014065C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80140660  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80140664  90 83 00 54 */	stw r4, 0x54(r3)
/* 80140668  7C 85 23 78 */	mr r5, r4
/* 8014066C  48 00 00 1C */	b lbl_80140688
lbl_80140670:
/* 80140670  80 7F 06 4C */	lwz r3, 0x64c(r31)
/* 80140674  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80140678  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 8014067C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80140680  90 83 00 04 */	stw r4, 4(r3)
/* 80140684  38 A5 00 01 */	addi r5, r5, 1
lbl_80140688:
/* 80140688  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 8014068C  28 00 00 28 */	cmplwi r0, 0x28
/* 80140690  41 80 FF E0 */	blt lbl_80140670
lbl_80140694:
/* 80140694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014069C  7C 08 03 A6 */	mtlr r0
/* 801406A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801406A4  4E 80 00 20 */	blr 
