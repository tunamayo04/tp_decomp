lbl_801C66E4:
/* 801C66E4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801C66E8  7C 08 02 A6 */	mflr r0
/* 801C66EC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C66F0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801C66F4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 801C66F8  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801C66FC  F3 C1 00 38 */	psq_st f30, 56(r1), 0, 0 /* qr0 */
/* 801C6700  39 61 00 30 */	addi r11, r1, 0x30
/* 801C6704  48 19 BA C5 */	bl _savegpr_24
/* 801C6708  7C 7D 1B 78 */	mr r29, r3
/* 801C670C  7C 98 23 78 */	mr r24, r4
/* 801C6710  7C B9 2B 78 */	mr r25, r5
/* 801C6714  7C DA 33 78 */	mr r26, r6
/* 801C6718  7C FE 3B 78 */	mr r30, r7
/* 801C671C  7D 1B 43 78 */	mr r27, r8
/* 801C6720  7D 3C 4B 78 */	mr r28, r9
/* 801C6724  FF C0 08 90 */	fmr f30, f1
/* 801C6728  FF E0 10 90 */	fmr f31, f2
/* 801C672C  7D 5F 53 78 */	mr r31, r10
/* 801C6730  3C 60 80 3C */	lis r3, __vt__12dMenu_Fmap_c@ha
/* 801C6734  38 03 D6 64 */	addi r0, r3, __vt__12dMenu_Fmap_c@l
/* 801C6738  90 1D 00 00 */	stw r0, 0(r29)
/* 801C673C  38 7D 00 C4 */	addi r3, r29, 0xc4
/* 801C6740  48 08 37 C1 */	bl __ct__10dMsgFlow_cFv
/* 801C6744  93 AD 8B 2C */	stw r29, MyClass__12dMenu_Fmap_c(r13)
/* 801C6748  93 1D 00 04 */	stw r24, 4(r29)
/* 801C674C  93 3D 00 0C */	stw r25, 0xc(r29)
/* 801C6750  93 5D 00 10 */	stw r26, 0x10(r29)
/* 801C6754  38 60 00 FF */	li r3, 0xff
/* 801C6758  98 7D 03 08 */	stb r3, 0x308(r29)
/* 801C675C  38 80 00 00 */	li r4, 0
/* 801C6760  98 9D 03 09 */	stb r4, 0x309(r29)
/* 801C6764  98 7D 03 0A */	stb r3, 0x30a(r29)
/* 801C6768  38 00 FF FF */	li r0, -1
/* 801C676C  90 1D 02 04 */	stw r0, 0x204(r29)
/* 801C6770  90 1D 02 08 */	stw r0, 0x208(r29)
/* 801C6774  90 9D 00 C0 */	stw r4, 0xc0(r29)
/* 801C6778  98 9D 03 0E */	stb r4, 0x30e(r29)
/* 801C677C  98 9D 03 10 */	stb r4, 0x310(r29)
/* 801C6780  98 9D 03 12 */	stb r4, 0x312(r29)
/* 801C6784  98 9D 03 13 */	stb r4, 0x313(r29)
/* 801C6788  98 7D 03 11 */	stb r3, 0x311(r29)
/* 801C678C  90 1D 02 0C */	stw r0, 0x20c(r29)
/* 801C6790  98 9D 03 0B */	stb r4, 0x30b(r29)
/* 801C6794  98 9D 03 0F */	stb r4, 0x30f(r29)
/* 801C6798  9B 7D 03 0C */	stb r27, 0x30c(r29)
/* 801C679C  9B 9D 03 0D */	stb r28, 0x30d(r29)
/* 801C67A0  D3 DD 01 F0 */	stfs f30, 0x1f0(r29)
/* 801C67A4  D3 FD 01 F4 */	stfs f31, 0x1f4(r29)
/* 801C67A8  90 9D 00 1C */	stw r4, 0x1c(r29)
/* 801C67AC  90 9D 00 68 */	stw r4, 0x68(r29)
/* 801C67B0  90 9D 00 14 */	stw r4, 0x14(r29)
/* 801C67B4  90 9D 00 18 */	stw r4, 0x18(r29)
/* 801C67B8  90 9D 00 B8 */	stw r4, 0xb8(r29)
/* 801C67BC  90 9D 00 8C */	stw r4, 0x8c(r29)
/* 801C67C0  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C67C4  D0 1D 01 A8 */	stfs f0, 0x1a8(r29)
/* 801C67C8  90 9D 00 BC */	stw r4, 0xbc(r29)
/* 801C67CC  90 9D 00 90 */	stw r4, 0x90(r29)
/* 801C67D0  90 9D 00 20 */	stw r4, 0x20(r29)
/* 801C67D4  90 9D 00 B4 */	stw r4, 0xb4(r29)
/* 801C67D8  98 9D 03 03 */	stb r4, 0x303(r29)
/* 801C67DC  7C 83 23 78 */	mr r3, r4
/* 801C67E0  38 00 00 08 */	li r0, 8
/* 801C67E4  7C 09 03 A6 */	mtctr r0
lbl_801C67E8:
/* 801C67E8  38 03 00 24 */	addi r0, r3, 0x24
/* 801C67EC  7C 9D 01 2E */	stwx r4, r29, r0
/* 801C67F0  38 03 00 44 */	addi r0, r3, 0x44
/* 801C67F4  7C 9D 01 2E */	stwx r4, r29, r0
/* 801C67F8  38 03 00 6C */	addi r0, r3, 0x6c
/* 801C67FC  7C 9D 01 2E */	stwx r4, r29, r0
/* 801C6800  38 63 00 04 */	addi r3, r3, 4
/* 801C6804  42 00 FF E4 */	bdnz lbl_801C67E8
/* 801C6808  38 00 00 00 */	li r0, 0
/* 801C680C  98 1D 03 05 */	stb r0, 0x305(r29)
/* 801C6810  38 60 00 00 */	li r3, 0
/* 801C6814  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C6818  38 00 00 08 */	li r0, 8
/* 801C681C  7C 09 03 A6 */	mtctr r0
lbl_801C6820:
/* 801C6820  38 03 01 68 */	addi r0, r3, 0x168
/* 801C6824  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6828  38 03 01 88 */	addi r0, r3, 0x188
/* 801C682C  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6830  38 03 01 28 */	addi r0, r3, 0x128
/* 801C6834  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6838  38 03 01 48 */	addi r0, r3, 0x148
/* 801C683C  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6840  38 63 00 04 */	addi r3, r3, 4
/* 801C6844  42 00 FF DC */	bdnz lbl_801C6820
/* 801C6848  3C 60 00 03 */	lis r3, 0x0003 /* 0x00032000@ha */
/* 801C684C  38 63 20 00 */	addi r3, r3, 0x2000 /* 0x00032000@l */
/* 801C6850  80 9D 00 04 */	lwz r4, 4(r29)
/* 801C6854  38 A0 00 00 */	li r5, 0
/* 801C6858  48 10 85 D5 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 801C685C  90 7D 00 08 */	stw r3, 8(r29)
/* 801C6860  38 00 00 00 */	li r0, 0
/* 801C6864  90 1D 02 00 */	stw r0, 0x200(r29)
/* 801C6868  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C686C  38 00 00 06 */	li r0, 6
/* 801C6870  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C6874  38 7D 02 50 */	addi r3, r29, 0x250
/* 801C6878  3C 80 80 39 */	lis r4, d_menu_d_menu_fmap__stringBase0@ha
/* 801C687C  38 84 60 E8 */	addi r4, r4, d_menu_d_menu_fmap__stringBase0@l
/* 801C6880  48 1A 22 AD */	bl strcpy
/* 801C6884  3C 60 80 43 */	lis r3, g_fmapHIO@ha
/* 801C6888  38 63 FC 60 */	addi r3, r3, g_fmapHIO@l
/* 801C688C  80 83 00 08 */	lwz r4, 8(r3)
/* 801C6890  28 04 00 00 */	cmplwi r4, 0
/* 801C6894  41 82 00 20 */	beq lbl_801C68B4
/* 801C6898  88 04 00 30 */	lbz r0, 0x30(r4)
/* 801C689C  28 00 00 00 */	cmplwi r0, 0
/* 801C68A0  41 82 00 14 */	beq lbl_801C68B4
/* 801C68A4  9B DD 03 00 */	stb r30, 0x300(r29)
/* 801C68A8  80 03 00 08 */	lwz r0, 8(r3)
/* 801C68AC  90 1D 00 64 */	stw r0, 0x64(r29)
/* 801C68B0  48 00 00 14 */	b lbl_801C68C4
lbl_801C68B4:
/* 801C68B4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 801C68B8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801C68BC  80 03 5C 68 */	lwz r0, 0x5c68(r3)
/* 801C68C0  90 1D 00 64 */	stw r0, 0x64(r29)
lbl_801C68C4:
/* 801C68C4  88 1D 03 00 */	lbz r0, 0x300(r29)
/* 801C68C8  98 1D 03 01 */	stb r0, 0x301(r29)
/* 801C68CC  88 1D 03 00 */	lbz r0, 0x300(r29)
/* 801C68D0  98 1D 03 02 */	stb r0, 0x302(r29)
/* 801C68D4  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 801C68D8  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 801C68DC  88 03 00 BF */	lbz r0, 0xbf(r3)
/* 801C68E0  28 00 00 04 */	cmplwi r0, 4
/* 801C68E4  40 82 00 18 */	bne lbl_801C68FC
/* 801C68E8  38 00 00 00 */	li r0, 0
/* 801C68EC  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C68F0  38 00 00 0E */	li r0, 0xe
/* 801C68F4  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C68F8  48 00 00 90 */	b lbl_801C6988
lbl_801C68FC:
/* 801C68FC  28 00 00 05 */	cmplwi r0, 5
/* 801C6900  40 82 00 18 */	bne lbl_801C6918
/* 801C6904  38 00 00 00 */	li r0, 0
/* 801C6908  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C690C  38 00 00 12 */	li r0, 0x12
/* 801C6910  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C6914  48 00 00 74 */	b lbl_801C6988
lbl_801C6918:
/* 801C6918  28 00 00 08 */	cmplwi r0, 8
/* 801C691C  40 82 00 18 */	bne lbl_801C6934
/* 801C6920  38 00 00 00 */	li r0, 0
/* 801C6924  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C6928  38 00 00 17 */	li r0, 0x17
/* 801C692C  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C6930  48 00 00 58 */	b lbl_801C6988
lbl_801C6934:
/* 801C6934  28 00 00 03 */	cmplwi r0, 3
/* 801C6938  40 82 00 18 */	bne lbl_801C6950
/* 801C693C  38 00 00 01 */	li r0, 1
/* 801C6940  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C6944  38 00 00 00 */	li r0, 0
/* 801C6948  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C694C  48 00 00 3C */	b lbl_801C6988
lbl_801C6950:
/* 801C6950  28 00 00 07 */	cmplwi r0, 7
/* 801C6954  40 82 00 1C */	bne lbl_801C6970
/* 801C6958  3B E0 00 FF */	li r31, 0xff
/* 801C695C  38 00 00 00 */	li r0, 0
/* 801C6960  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C6964  38 00 00 03 */	li r0, 3
/* 801C6968  98 1D 03 00 */	stb r0, 0x300(r29)
/* 801C696C  48 00 00 1C */	b lbl_801C6988
lbl_801C6970:
/* 801C6970  28 00 00 09 */	cmplwi r0, 9
/* 801C6974  40 82 00 14 */	bne lbl_801C6988
/* 801C6978  38 00 00 00 */	li r0, 0
/* 801C697C  98 1D 03 07 */	stb r0, 0x307(r29)
/* 801C6980  38 00 00 1B */	li r0, 0x1b
/* 801C6984  98 1D 03 00 */	stb r0, 0x300(r29)
lbl_801C6988:
/* 801C6988  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 801C698C  28 00 00 01 */	cmplwi r0, 1
/* 801C6990  40 82 00 18 */	bne lbl_801C69A8
/* 801C6994  C0 02 A7 2C */	lfs f0, lit_4159(r2)
/* 801C6998  D0 1D 01 1C */	stfs f0, 0x11c(r29)
/* 801C699C  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C69A0  D0 1D 01 20 */	stfs f0, 0x120(r29)
/* 801C69A4  48 00 00 64 */	b lbl_801C6A08
lbl_801C69A8:
/* 801C69A8  28 00 00 03 */	cmplwi r0, 3
/* 801C69AC  40 82 00 18 */	bne lbl_801C69C4
/* 801C69B0  C0 02 A7 30 */	lfs f0, lit_4160(r2)
/* 801C69B4  D0 1D 01 1C */	stfs f0, 0x11c(r29)
/* 801C69B8  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C69BC  D0 1D 01 20 */	stfs f0, 0x120(r29)
/* 801C69C0  48 00 00 48 */	b lbl_801C6A08
lbl_801C69C4:
/* 801C69C4  28 00 00 02 */	cmplwi r0, 2
/* 801C69C8  40 82 00 18 */	bne lbl_801C69E0
/* 801C69CC  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C69D0  D0 1D 01 1C */	stfs f0, 0x11c(r29)
/* 801C69D4  C0 02 A7 34 */	lfs f0, lit_4161(r2)
/* 801C69D8  D0 1D 01 20 */	stfs f0, 0x120(r29)
/* 801C69DC  48 00 00 2C */	b lbl_801C6A08
lbl_801C69E0:
/* 801C69E0  28 00 00 00 */	cmplwi r0, 0
/* 801C69E4  40 82 00 18 */	bne lbl_801C69FC
/* 801C69E8  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C69EC  D0 1D 01 1C */	stfs f0, 0x11c(r29)
/* 801C69F0  C0 02 A7 38 */	lfs f0, lit_4162(r2)
/* 801C69F4  D0 1D 01 20 */	stfs f0, 0x120(r29)
/* 801C69F8  48 00 00 10 */	b lbl_801C6A08
lbl_801C69FC:
/* 801C69FC  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C6A00  D0 1D 01 1C */	stfs f0, 0x11c(r29)
/* 801C6A04  D0 1D 01 20 */	stfs f0, 0x120(r29)
lbl_801C6A08:
/* 801C6A08  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C6A0C  D0 1D 01 24 */	stfs f0, 0x124(r29)
/* 801C6A10  9B FD 03 04 */	stb r31, 0x304(r29)
/* 801C6A14  38 A0 00 00 */	li r5, 0
/* 801C6A18  B0 BD 02 10 */	sth r5, 0x210(r29)
/* 801C6A1C  B0 BD 02 12 */	sth r5, 0x212(r29)
/* 801C6A20  B0 BD 02 14 */	sth r5, 0x214(r29)
/* 801C6A24  38 60 00 00 */	li r3, 0
/* 801C6A28  38 80 00 00 */	li r4, 0
/* 801C6A2C  38 00 00 08 */	li r0, 8
/* 801C6A30  7C 09 03 A6 */	mtctr r0
lbl_801C6A34:
/* 801C6A34  38 04 01 AC */	addi r0, r4, 0x1ac
/* 801C6A38  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6A3C  38 04 01 CC */	addi r0, r4, 0x1cc
/* 801C6A40  7C 1D 05 2E */	stfsx f0, r29, r0
/* 801C6A44  38 04 00 94 */	addi r0, r4, 0x94
/* 801C6A48  7C BD 01 2E */	stwx r5, r29, r0
/* 801C6A4C  38 03 02 18 */	addi r0, r3, 0x218
/* 801C6A50  7C BD 03 2E */	sthx r5, r29, r0
/* 801C6A54  38 63 00 02 */	addi r3, r3, 2
/* 801C6A58  38 84 00 04 */	addi r4, r4, 4
/* 801C6A5C  42 00 FF D8 */	bdnz lbl_801C6A34
/* 801C6A60  38 60 00 00 */	li r3, 0
/* 801C6A64  38 80 00 00 */	li r4, 0
/* 801C6A68  38 00 00 14 */	li r0, 0x14
/* 801C6A6C  7C 09 03 A6 */	mtctr r0
lbl_801C6A70:
/* 801C6A70  38 03 02 28 */	addi r0, r3, 0x228
/* 801C6A74  7C 9D 03 2E */	sthx r4, r29, r0
/* 801C6A78  38 63 00 02 */	addi r3, r3, 2
/* 801C6A7C  42 00 FF F4 */	bdnz lbl_801C6A70
/* 801C6A80  C0 02 A7 28 */	lfs f0, lit_4158(r2)
/* 801C6A84  D0 1D 01 EC */	stfs f0, 0x1ec(r29)
/* 801C6A88  38 00 00 00 */	li r0, 0
/* 801C6A8C  98 1D 03 06 */	stb r0, 0x306(r29)
/* 801C6A90  B0 1D 02 16 */	sth r0, 0x216(r29)
/* 801C6A94  7F A3 EB 78 */	mr r3, r29
/* 801C6A98  48 00 60 2D */	bl resetRoomDataBit__12dMenu_Fmap_cFv
/* 801C6A9C  7F A3 EB 78 */	mr r3, r29
/* 801C6AA0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 801C6AA4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801C6AA8  E3 C1 00 38 */	psq_l f30, 56(r1), 0, 0 /* qr0 */
/* 801C6AAC  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801C6AB0  39 61 00 30 */	addi r11, r1, 0x30
/* 801C6AB4  48 19 B7 61 */	bl _restgpr_24
/* 801C6AB8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801C6ABC  7C 08 03 A6 */	mtlr r0
/* 801C6AC0  38 21 00 50 */	addi r1, r1, 0x50
/* 801C6AC4  4E 80 00 20 */	blr 
