lbl_8018774C:
/* 8018774C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80187750  7C 08 02 A6 */	mflr r0
/* 80187754  90 01 00 14 */	stw r0, 0x14(r1)
/* 80187758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018775C  7C 7F 1B 78 */	mr r31, r3
/* 80187760  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80187764  48 0C 72 3D */	bl _move__7dName_cFv
/* 80187768  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 8018776C  88 03 02 B1 */	lbz r0, 0x2b1(r3)
/* 80187770  28 00 00 00 */	cmplwi r0, 0
/* 80187774  40 82 00 20 */	bne lbl_80187794
/* 80187778  88 1F 02 4C */	lbz r0, 0x24c(r31)
/* 8018777C  28 00 00 00 */	cmplwi r0, 0
/* 80187780  41 82 00 2C */	beq lbl_801877AC
/* 80187784  7F E3 FB 78 */	mr r3, r31
/* 80187788  38 80 00 00 */	li r4, 0
/* 8018778C  48 00 5B B9 */	bl modoruTxtChange__14dFile_select_cFUc
/* 80187790  48 00 00 1C */	b lbl_801877AC
lbl_80187794:
/* 80187794  88 1F 02 4C */	lbz r0, 0x24c(r31)
/* 80187798  28 00 00 00 */	cmplwi r0, 0
/* 8018779C  40 82 00 10 */	bne lbl_801877AC
/* 801877A0  7F E3 FB 78 */	mr r3, r31
/* 801877A4  38 80 00 01 */	li r4, 1
/* 801877A8  48 00 5B 9D */	bl modoruTxtChange__14dFile_select_cFUc
lbl_801877AC:
/* 801877AC  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 801877B0  88 03 02 B4 */	lbz r0, 0x2b4(r3)
/* 801877B4  2C 00 00 02 */	cmpwi r0, 2
/* 801877B8  41 82 00 34 */	beq lbl_801877EC
/* 801877BC  40 80 00 54 */	bge lbl_80187810
/* 801877C0  2C 00 00 01 */	cmpwi r0, 1
/* 801877C4  40 80 00 08 */	bge lbl_801877CC
/* 801877C8  48 00 00 48 */	b lbl_80187810
lbl_801877CC:
/* 801877CC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 801877D0  C0 22 9F 48 */	lfs f1, lit_4778(r2)
/* 801877D4  48 00 DA CD */	bl setAlphaRate__16dSelect_cursor_cFf
/* 801877D8  38 00 00 0F */	li r0, 0xf
/* 801877DC  98 1F 02 0A */	stb r0, 0x20a(r31)
/* 801877E0  38 00 00 14 */	li r0, 0x14
/* 801877E4  98 1F 02 6F */	stb r0, 0x26f(r31)
/* 801877E8  48 00 00 28 */	b lbl_80187810
lbl_801877EC:
/* 801877EC  38 83 02 B5 */	addi r4, r3, 0x2b5
/* 801877F0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 801877F4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 801877F8  38 63 01 C5 */	addi r3, r3, 0x1c5
/* 801877FC  48 1E 13 31 */	bl strcpy
/* 80187800  38 00 00 01 */	li r0, 1
/* 80187804  98 1F 02 70 */	stb r0, 0x270(r31)
/* 80187808  38 00 00 2E */	li r0, 0x2e
/* 8018780C  98 1F 02 6F */	stb r0, 0x26f(r31)
lbl_80187810:
/* 80187810  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80187814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80187818  7C 08 03 A6 */	mtlr r0
/* 8018781C  38 21 00 10 */	addi r1, r1, 0x10
/* 80187820  4E 80 00 20 */	blr 
