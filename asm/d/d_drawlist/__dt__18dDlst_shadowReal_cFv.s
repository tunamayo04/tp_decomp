lbl_800561F8:
/* 800561F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800561FC  7C 08 02 A6 */	mflr r0
/* 80056200  90 01 00 14 */	stw r0, 0x14(r1)
/* 80056204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80056208  93 C1 00 08 */	stw r30, 8(r1)
/* 8005620C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80056210  7C 9F 23 78 */	mr r31, r4
/* 80056214  41 82 00 40 */	beq lbl_80056254
/* 80056218  34 1E 00 A8 */	addic. r0, r30, 0xa8
/* 8005621C  41 82 00 28 */	beq lbl_80056244
/* 80056220  3C 60 80 3B */	lis r3, __vt__22dDlst_shadowRealPoly_c@ha
/* 80056224  38 03 8D DC */	addi r0, r3, __vt__22dDlst_shadowRealPoly_c@l
/* 80056228  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 8005622C  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 80056230  3C 80 80 05 */	lis r4, __dt__17dDlst_shadowTri_cFv@ha
/* 80056234  38 84 62 70 */	addi r4, r4, __dt__17dDlst_shadowTri_cFv@l
/* 80056238  38 A0 00 24 */	li r5, 0x24
/* 8005623C  38 C0 01 00 */	li r6, 0x100
/* 80056240  48 30 BA A9 */	bl __destroy_arr
lbl_80056244:
/* 80056244  7F E0 07 35 */	extsh. r0, r31
/* 80056248  40 81 00 0C */	ble lbl_80056254
/* 8005624C  7F C3 F3 78 */	mr r3, r30
/* 80056250  48 27 8A ED */	bl __dl__FPv
lbl_80056254:
/* 80056254  7F C3 F3 78 */	mr r3, r30
/* 80056258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005625C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80056260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80056264  7C 08 03 A6 */	mtlr r0
/* 80056268  38 21 00 10 */	addi r1, r1, 0x10
/* 8005626C  4E 80 00 20 */	blr 
