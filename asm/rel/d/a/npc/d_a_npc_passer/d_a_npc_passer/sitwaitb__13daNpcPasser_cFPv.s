lbl_80AA5064:
/* 80AA5064  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80AA5068  7C 08 02 A6 */	mflr r0
/* 80AA506C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80AA5070  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80AA5074  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80AA5078  7C 7E 1B 78 */	mr r30, r3
/* 80AA507C  3C 80 80 AA */	lis r4, lit_4109@ha
/* 80AA5080  3B E4 69 8C */	addi r31, r4, lit_4109@l
/* 80AA5084  88 03 0B 22 */	lbz r0, 0xb22(r3)
/* 80AA5088  28 00 00 00 */	cmplwi r0, 0
/* 80AA508C  41 82 00 5C */	beq lbl_80AA50E8
/* 80AA5090  38 80 00 11 */	li r4, 0x11
/* 80AA5094  80 BE 0B 00 */	lwz r5, 0xb00(r30)
/* 80AA5098  4B 6B 30 58 */	b getAnmP__10daNpcCd2_cFii
/* 80AA509C  7C 64 1B 78 */	mr r4, r3
/* 80AA50A0  7F C3 F3 78 */	mr r3, r30
/* 80AA50A4  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80AA50A8  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 80AA50AC  38 A0 00 02 */	li r5, 2
/* 80AA50B0  38 C0 00 00 */	li r6, 0
/* 80AA50B4  38 E0 FF FF */	li r7, -1
/* 80AA50B8  4B 6B 3E 48 */	b setAnm__10daNpcCd2_cFP18J3DAnmTransformKeyffiii
/* 80AA50BC  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80AA50C0  FC 40 08 90 */	fmr f2, f1
/* 80AA50C4  48 00 08 F9 */	bl func_80AA59BC
/* 80AA50C8  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 80AA50CC  EC 00 08 2A */	fadds f0, f0, f1
/* 80AA50D0  FC 00 00 1E */	fctiwz f0, f0
/* 80AA50D4  D8 01 00 08 */	stfd f0, 8(r1)
/* 80AA50D8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80AA50DC  90 1E 0A A0 */	stw r0, 0xaa0(r30)
/* 80AA50E0  38 00 00 00 */	li r0, 0
/* 80AA50E4  98 1E 0B 22 */	stb r0, 0xb22(r30)
lbl_80AA50E8:
/* 80AA50E8  80 1E 0A A0 */	lwz r0, 0xaa0(r30)
/* 80AA50EC  7C 00 00 34 */	cntlzw r0, r0
/* 80AA50F0  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80AA50F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80AA50F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80AA50FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80AA5100  7C 08 03 A6 */	mtlr r0
/* 80AA5104  38 21 00 20 */	addi r1, r1, 0x20
/* 80AA5108  4E 80 00 20 */	blr 
