lbl_803701E0:
/* 803701E0  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 803701E4  7C 08 02 A6 */	mflr r0
/* 803701E8  90 01 01 34 */	stw r0, 0x134(r1)
/* 803701EC  BE 61 00 FC */	stmw r19, 0xfc(r1)
/* 803701F0  7C 97 23 78 */	mr r23, r4
/* 803701F4  28 17 00 1F */	cmplwi r23, 0x1f
/* 803701F8  7C 7B 1B 78 */	mr r27, r3
/* 803701FC  7C B8 2B 78 */	mr r24, r5
/* 80370200  7C D9 33 78 */	mr r25, r6
/* 80370204  7C FA 3B 78 */	mr r26, r7
/* 80370208  40 81 00 0C */	ble lbl_80370214
/* 8037020C  38 60 07 01 */	li r3, 0x701
/* 80370210  48 00 03 F4 */	b lbl_80370604
lbl_80370214:
/* 80370214  3C 60 80 3A */	lis r3, lit_276@ha
/* 80370218  3C A0 80 3D */	lis r5, gTRKExceptionStatus@ha
/* 8037021C  3B A3 2B 70 */	addi r29, r3, lit_276@l
/* 80370220  3C 80 7C 99 */	lis r4, 0x7C99 /* 0x7C98E2A6@ha */
/* 80370224  80 1D 00 00 */	lwz r0, 0(r29)
/* 80370228  3B E5 32 44 */	addi r31, r5, gTRKExceptionStatus@l
/* 8037022C  81 1D 00 04 */	lwz r8, 4(r29)
/* 80370230  3C 60 4E 80 */	lis r3, 0x4E80 /* 0x4E800020@ha */
/* 80370234  80 FD 00 24 */	lwz r7, 0x24(r29)
/* 80370238  38 C4 E2 A6 */	addi r6, r4, 0xE2A6 /* 0x7C98E2A6@l */
/* 8037023C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80370240  38 03 00 20 */	addi r0, r3, 0x0020 /* 0x4E800020@l */
/* 80370244  82 7F 00 00 */	lwz r19, 0(r31)
/* 80370248  3B C0 00 00 */	li r30, 0
/* 8037024C  82 DF 00 0C */	lwz r22, 0xc(r31)
/* 80370250  3C A0 90 83 */	lis r5, 0x9083
/* 80370254  91 01 00 C8 */	stw r8, 0xc8(r1)
/* 80370258  38 61 00 C4 */	addi r3, r1, 0xc4
/* 8037025C  82 9F 00 04 */	lwz r20, 4(r31)
/* 80370260  38 80 00 28 */	li r4, 0x28
/* 80370264  90 E1 00 E8 */	stw r7, 0xe8(r1)
/* 80370268  82 BF 00 08 */	lwz r21, 8(r31)
/* 8037026C  83 9D 00 08 */	lwz r28, 8(r29)
/* 80370270  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 80370274  81 7D 00 10 */	lwz r11, 0x10(r29)
/* 80370278  81 5D 00 14 */	lwz r10, 0x14(r29)
/* 8037027C  81 3D 00 18 */	lwz r9, 0x18(r29)
/* 80370280  81 1D 00 1C */	lwz r8, 0x1c(r29)
/* 80370284  80 FD 00 20 */	lwz r7, 0x20(r29)
/* 80370288  92 61 00 14 */	stw r19, 0x14(r1)
/* 8037028C  92 81 00 18 */	stw r20, 0x18(r1)
/* 80370290  92 A1 00 1C */	stw r21, 0x1c(r1)
/* 80370294  92 C1 00 20 */	stw r22, 0x20(r1)
/* 80370298  9B DF 00 0D */	stb r30, 0xd(r31)
/* 8037029C  93 81 00 CC */	stw r28, 0xcc(r1)
/* 803702A0  91 81 00 D0 */	stw r12, 0xd0(r1)
/* 803702A4  91 61 00 D4 */	stw r11, 0xd4(r1)
/* 803702A8  91 41 00 D8 */	stw r10, 0xd8(r1)
/* 803702AC  91 21 00 DC */	stw r9, 0xdc(r1)
/* 803702B0  91 01 00 E0 */	stw r8, 0xe0(r1)
/* 803702B4  90 E1 00 E4 */	stw r7, 0xe4(r1)
/* 803702B8  90 C1 00 C4 */	stw r6, 0xc4(r1)
/* 803702BC  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 803702C0  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 803702C4  4B FF F2 85 */	bl TRK_flush_cache
/* 803702C8  3C 60 80 45 */	lis r3, TRKvalue128_temp@ha
/* 803702CC  39 81 00 C4 */	addi r12, r1, 0xc4
/* 803702D0  38 83 F7 FC */	addi r4, r3, TRKvalue128_temp@l
/* 803702D4  38 61 00 08 */	addi r3, r1, 8
/* 803702D8  7D 89 03 A6 */	mtctr r12
/* 803702DC  4E 80 04 21 */	bctrl 
/* 803702E0  3C 60 80 3A */	lis r3, lit_276@ha
/* 803702E4  80 A1 00 08 */	lwz r5, 8(r1)
/* 803702E8  3B A3 2B 70 */	addi r29, r3, lit_276@l
/* 803702EC  3C 80 7C 99 */	lis r4, 0x7C99 /* 0x7C98E3A6@ha */
/* 803702F0  81 1D 00 00 */	lwz r8, 0(r29)
/* 803702F4  3C 60 4E 80 */	lis r3, 0x4E80 /* 0x4E800020@ha */
/* 803702F8  80 1D 00 04 */	lwz r0, 4(r29)
/* 803702FC  64 BE A0 00 */	oris r30, r5, 0xa000
/* 80370300  80 FD 00 24 */	lwz r7, 0x24(r29)
/* 80370304  38 A4 E3 A6 */	addi r5, r4, 0xE3A6 /* 0x7C98E3A6@l */
/* 80370308  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8037030C  38 03 00 20 */	addi r0, r3, 0x0020 /* 0x4E800020@l */
/* 80370310  83 9D 00 08 */	lwz r28, 8(r29)
/* 80370314  3C C0 80 83 */	lis r6, 0x8083
/* 80370318  91 01 00 9C */	stw r8, 0x9c(r1)
/* 8037031C  38 61 00 9C */	addi r3, r1, 0x9c
/* 80370320  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 80370324  38 80 00 28 */	li r4, 0x28
/* 80370328  90 E1 00 C0 */	stw r7, 0xc0(r1)
/* 8037032C  81 7D 00 10 */	lwz r11, 0x10(r29)
/* 80370330  81 5D 00 14 */	lwz r10, 0x14(r29)
/* 80370334  81 3D 00 18 */	lwz r9, 0x18(r29)
/* 80370338  81 1D 00 1C */	lwz r8, 0x1c(r29)
/* 8037033C  80 FD 00 20 */	lwz r7, 0x20(r29)
/* 80370340  93 C1 00 08 */	stw r30, 8(r1)
/* 80370344  93 81 00 A4 */	stw r28, 0xa4(r1)
/* 80370348  91 81 00 A8 */	stw r12, 0xa8(r1)
/* 8037034C  91 61 00 AC */	stw r11, 0xac(r1)
/* 80370350  91 41 00 B0 */	stw r10, 0xb0(r1)
/* 80370354  91 21 00 B4 */	stw r9, 0xb4(r1)
/* 80370358  91 01 00 B8 */	stw r8, 0xb8(r1)
/* 8037035C  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 80370360  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 80370364  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 80370368  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8037036C  4B FF F1 DD */	bl TRK_flush_cache
/* 80370370  3C 60 80 45 */	lis r3, TRKvalue128_temp@ha
/* 80370374  39 81 00 9C */	addi r12, r1, 0x9c
/* 80370378  38 83 F7 FC */	addi r4, r3, TRKvalue128_temp@l
/* 8037037C  38 61 00 08 */	addi r3, r1, 8
/* 80370380  7D 89 03 A6 */	mtctr r12
/* 80370384  4E 80 04 21 */	bctrl 
/* 80370388  3C 60 80 3A */	lis r3, lit_276@ha
/* 8037038C  3C 80 7C 91 */	lis r4, 0x7C91 /* 0x7C90E3A6@ha */
/* 80370390  3B A3 2B 70 */	addi r29, r3, lit_276@l
/* 80370394  3C 60 4E 80 */	lis r3, 0x4E80 /* 0x4E800020@ha */
/* 80370398  81 1D 00 00 */	lwz r8, 0(r29)
/* 8037039C  3B C0 00 00 */	li r30, 0
/* 803703A0  80 DD 00 04 */	lwz r6, 4(r29)
/* 803703A4  38 A4 E3 A6 */	addi r5, r4, 0xE3A6 /* 0x7C90E3A6@l */
/* 803703A8  80 FD 00 24 */	lwz r7, 0x24(r29)
/* 803703AC  38 03 00 20 */	addi r0, r3, 0x0020 /* 0x4E800020@l */
/* 803703B0  90 C1 00 78 */	stw r6, 0x78(r1)
/* 803703B4  3C C0 80 83 */	lis r6, 0x8083
/* 803703B8  83 9D 00 08 */	lwz r28, 8(r29)
/* 803703BC  38 61 00 74 */	addi r3, r1, 0x74
/* 803703C0  91 01 00 74 */	stw r8, 0x74(r1)
/* 803703C4  38 80 00 28 */	li r4, 0x28
/* 803703C8  81 9D 00 0C */	lwz r12, 0xc(r29)
/* 803703CC  90 E1 00 98 */	stw r7, 0x98(r1)
/* 803703D0  81 7D 00 10 */	lwz r11, 0x10(r29)
/* 803703D4  81 5D 00 14 */	lwz r10, 0x14(r29)
/* 803703D8  81 3D 00 18 */	lwz r9, 0x18(r29)
/* 803703DC  81 1D 00 1C */	lwz r8, 0x1c(r29)
/* 803703E0  80 FD 00 20 */	lwz r7, 0x20(r29)
/* 803703E4  93 C1 00 08 */	stw r30, 8(r1)
/* 803703E8  93 81 00 7C */	stw r28, 0x7c(r1)
/* 803703EC  91 81 00 80 */	stw r12, 0x80(r1)
/* 803703F0  91 61 00 84 */	stw r11, 0x84(r1)
/* 803703F4  91 41 00 88 */	stw r10, 0x88(r1)
/* 803703F8  91 21 00 8C */	stw r9, 0x8c(r1)
/* 803703FC  91 01 00 90 */	stw r8, 0x90(r1)
/* 80370400  90 E1 00 94 */	stw r7, 0x94(r1)
/* 80370404  90 C1 00 74 */	stw r6, 0x74(r1)
/* 80370408  90 A1 00 78 */	stw r5, 0x78(r1)
/* 8037040C  90 01 00 98 */	stw r0, 0x98(r1)
/* 80370410  4B FF F1 39 */	bl TRK_flush_cache
/* 80370414  3C 60 80 45 */	lis r3, TRKvalue128_temp@ha
/* 80370418  39 81 00 74 */	addi r12, r1, 0x74
/* 8037041C  38 83 F7 FC */	addi r4, r3, TRKvalue128_temp@l
/* 80370420  38 61 00 08 */	addi r3, r1, 8
/* 80370424  7D 89 03 A6 */	mtctr r12
/* 80370428  4E 80 04 21 */	bctrl 
/* 8037042C  38 00 00 00 */	li r0, 0
/* 80370430  57 7E A8 14 */	slwi r30, r27, 0x15
/* 80370434  90 19 00 00 */	stw r0, 0(r25)
/* 80370438  3B A1 00 4C */	addi r29, r1, 0x4c
/* 8037043C  3B 81 00 24 */	addi r28, r1, 0x24
/* 80370440  38 60 00 00 */	li r3, 0
/* 80370444  48 00 01 70 */	b lbl_803705B4
lbl_80370448:
/* 80370448  2C 1A 00 00 */	cmpwi r26, 0
/* 8037044C  41 82 00 AC */	beq lbl_803704F8
/* 80370450  3C 60 80 3A */	lis r3, lit_283@ha
/* 80370454  85 83 2B 98 */	lwzu r12, lit_283@l(r3)
/* 80370458  67 C0 E0 03 */	oris r0, r30, 0xe003
/* 8037045C  81 63 00 04 */	lwz r11, 4(r3)
/* 80370460  81 43 00 08 */	lwz r10, 8(r3)
/* 80370464  81 23 00 0C */	lwz r9, 0xc(r3)
/* 80370468  81 03 00 10 */	lwz r8, 0x10(r3)
/* 8037046C  80 E3 00 14 */	lwz r7, 0x14(r3)
/* 80370470  80 C3 00 18 */	lwz r6, 0x18(r3)
/* 80370474  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 80370478  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8037047C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80370480  91 81 00 4C */	stw r12, 0x4c(r1)
/* 80370484  91 61 00 50 */	stw r11, 0x50(r1)
/* 80370488  91 41 00 54 */	stw r10, 0x54(r1)
/* 8037048C  91 21 00 58 */	stw r9, 0x58(r1)
/* 80370490  91 01 00 5C */	stw r8, 0x5c(r1)
/* 80370494  90 E1 00 60 */	stw r7, 0x60(r1)
/* 80370498  90 C1 00 64 */	stw r6, 0x64(r1)
/* 8037049C  90 A1 00 68 */	stw r5, 0x68(r1)
/* 803704A0  90 81 00 6C */	stw r4, 0x6c(r1)
/* 803704A4  90 61 00 70 */	stw r3, 0x70(r1)
/* 803704A8  41 82 00 08 */	beq lbl_803704B0
/* 803704AC  67 C0 F0 03 */	oris r0, r30, 0xf003
lbl_803704B0:
/* 803704B0  3C 60 4E 80 */	lis r3, 0x4E80 /* 0x4E800020@ha */
/* 803704B4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 803704B8  38 03 00 20 */	addi r0, r3, 0x0020 /* 0x4E800020@l */
/* 803704BC  7F A3 EB 78 */	mr r3, r29
/* 803704C0  90 01 00 70 */	stw r0, 0x70(r1)
/* 803704C4  38 80 00 28 */	li r4, 0x28
/* 803704C8  4B FF F0 81 */	bl TRK_flush_cache
/* 803704CC  3C 60 80 45 */	lis r3, TRKvalue128_temp@ha
/* 803704D0  39 81 00 4C */	addi r12, r1, 0x4c
/* 803704D4  38 83 F7 FC */	addi r4, r3, TRKvalue128_temp@l
/* 803704D8  38 61 00 0C */	addi r3, r1, 0xc
/* 803704DC  7D 89 03 A6 */	mtctr r12
/* 803704E0  4E 80 04 21 */	bctrl 
/* 803704E4  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 803704E8  7F 03 C3 78 */	mr r3, r24
/* 803704EC  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 803704F0  4B FF CF 01 */	bl TRKAppendBuffer1_ui64
/* 803704F4  48 00 00 AC */	b lbl_803705A0
lbl_803704F8:
/* 803704F8  7F 03 C3 78 */	mr r3, r24
/* 803704FC  38 81 00 0C */	addi r4, r1, 0xc
/* 80370500  4B FF CC A5 */	bl TRKReadBuffer1_ui64
/* 80370504  3C 60 80 3A */	lis r3, lit_283@ha
/* 80370508  85 83 2B 98 */	lwzu r12, lit_283@l(r3)
/* 8037050C  2C 1A 00 00 */	cmpwi r26, 0
/* 80370510  67 C0 E0 03 */	oris r0, r30, 0xe003
/* 80370514  81 63 00 04 */	lwz r11, 4(r3)
/* 80370518  81 43 00 08 */	lwz r10, 8(r3)
/* 8037051C  81 23 00 0C */	lwz r9, 0xc(r3)
/* 80370520  81 03 00 10 */	lwz r8, 0x10(r3)
/* 80370524  80 E3 00 14 */	lwz r7, 0x14(r3)
/* 80370528  80 C3 00 18 */	lwz r6, 0x18(r3)
/* 8037052C  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 80370530  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80370534  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80370538  91 81 00 24 */	stw r12, 0x24(r1)
/* 8037053C  91 61 00 28 */	stw r11, 0x28(r1)
/* 80370540  91 41 00 2C */	stw r10, 0x2c(r1)
/* 80370544  91 21 00 30 */	stw r9, 0x30(r1)
/* 80370548  91 01 00 34 */	stw r8, 0x34(r1)
/* 8037054C  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80370550  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80370554  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80370558  90 81 00 44 */	stw r4, 0x44(r1)
/* 8037055C  90 61 00 48 */	stw r3, 0x48(r1)
/* 80370560  41 82 00 08 */	beq lbl_80370568
/* 80370564  67 C0 F0 03 */	oris r0, r30, 0xf003
lbl_80370568:
/* 80370568  3C 60 4E 80 */	lis r3, 0x4E80 /* 0x4E800020@ha */
/* 8037056C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80370570  38 03 00 20 */	addi r0, r3, 0x0020 /* 0x4E800020@l */
/* 80370574  7F 83 E3 78 */	mr r3, r28
/* 80370578  90 01 00 48 */	stw r0, 0x48(r1)
/* 8037057C  38 80 00 28 */	li r4, 0x28
/* 80370580  4B FF EF C9 */	bl TRK_flush_cache
/* 80370584  3C 60 80 45 */	lis r3, TRKvalue128_temp@ha
/* 80370588  39 81 00 24 */	addi r12, r1, 0x24
/* 8037058C  38 83 F7 FC */	addi r4, r3, TRKvalue128_temp@l
/* 80370590  38 61 00 0C */	addi r3, r1, 0xc
/* 80370594  7D 89 03 A6 */	mtctr r12
/* 80370598  4E 80 04 21 */	bctrl 
/* 8037059C  38 60 00 00 */	li r3, 0
lbl_803705A0:
/* 803705A0  80 99 00 00 */	lwz r4, 0(r25)
/* 803705A4  3F DE 00 20 */	addis r30, r30, 0x20
/* 803705A8  3B 7B 00 01 */	addi r27, r27, 1
/* 803705AC  38 04 00 08 */	addi r0, r4, 8
/* 803705B0  90 19 00 00 */	stw r0, 0(r25)
lbl_803705B4:
/* 803705B4  7C 1B B8 40 */	cmplw r27, r23
/* 803705B8  41 81 00 0C */	bgt lbl_803705C4
/* 803705BC  2C 03 00 00 */	cmpwi r3, 0
/* 803705C0  41 82 FE 88 */	beq lbl_80370448
lbl_803705C4:
/* 803705C4  88 1F 00 0D */	lbz r0, 0xd(r31)
/* 803705C8  28 00 00 00 */	cmplwi r0, 0
/* 803705CC  41 82 00 10 */	beq lbl_803705DC
/* 803705D0  38 00 00 00 */	li r0, 0
/* 803705D4  38 60 07 02 */	li r3, 0x702
/* 803705D8  90 19 00 00 */	stw r0, 0(r25)
lbl_803705DC:
/* 803705DC  3C 80 80 3D */	lis r4, gTRKExceptionStatus@ha
/* 803705E0  80 C1 00 14 */	lwz r6, 0x14(r1)
/* 803705E4  38 E4 32 44 */	addi r7, r4, gTRKExceptionStatus@l
/* 803705E8  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 803705EC  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803705F0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 803705F4  90 C7 00 00 */	stw r6, 0(r7)
/* 803705F8  90 A7 00 04 */	stw r5, 4(r7)
/* 803705FC  90 87 00 08 */	stw r4, 8(r7)
/* 80370600  90 07 00 0C */	stw r0, 0xc(r7)
lbl_80370604:
/* 80370604  BA 61 00 FC */	lmw r19, 0xfc(r1)
/* 80370608  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8037060C  7C 08 03 A6 */	mtlr r0
/* 80370610  38 21 01 30 */	addi r1, r1, 0x130
/* 80370614  4E 80 00 20 */	blr 
