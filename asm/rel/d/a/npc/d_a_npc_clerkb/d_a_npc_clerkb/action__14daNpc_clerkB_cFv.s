lbl_80997660:
/* 80997660  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80997664  7C 08 02 A6 */	mflr r0
/* 80997668  90 01 00 24 */	stw r0, 0x24(r1)
/* 8099766C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80997670  7C 7F 1B 78 */	mr r31, r3
/* 80997674  88 03 0D 20 */	lbz r0, 0xd20(r3)
/* 80997678  2C 00 00 00 */	cmpwi r0, 0
/* 8099767C  41 82 00 5C */	beq lbl_809976D8
/* 80997680  38 C0 00 00 */	li r6, 0
/* 80997684  38 60 00 00 */	li r3, 0
/* 80997688  7C C4 33 78 */	mr r4, r6
/* 8099768C  3C A0 80 9A */	lis r5, lit_4152@ha
/* 80997690  C0 05 9A 2C */	lfs f0, lit_4152@l(r5)
/* 80997694  38 00 00 02 */	li r0, 2
/* 80997698  7C 09 03 A6 */	mtctr r0
lbl_8099769C:
/* 8099769C  7C BF 22 14 */	add r5, r31, r4
/* 809976A0  B0 C5 0D 08 */	sth r6, 0xd08(r5)
/* 809976A4  B0 C5 0D 0A */	sth r6, 0xd0a(r5)
/* 809976A8  B0 C5 0D 0C */	sth r6, 0xd0c(r5)
/* 809976AC  38 03 0D 14 */	addi r0, r3, 0xd14
/* 809976B0  7C 1F 05 2E */	stfsx f0, r31, r0
/* 809976B4  38 63 00 04 */	addi r3, r3, 4
/* 809976B8  38 84 00 06 */	addi r4, r4, 6
/* 809976BC  42 00 FF E0 */	bdnz lbl_8099769C
/* 809976C0  38 00 00 00 */	li r0, 0
/* 809976C4  B0 1F 0D 1C */	sth r0, 0xd1c(r31)
/* 809976C8  B0 1F 0D 1E */	sth r0, 0xd1e(r31)
/* 809976CC  98 1F 0D 20 */	stb r0, 0xd20(r31)
/* 809976D0  38 00 00 01 */	li r0, 1
/* 809976D4  B0 1F 0E 22 */	sth r0, 0xe22(r31)
lbl_809976D8:
/* 809976D8  38 7F 10 E0 */	addi r3, r31, 0x10e0
/* 809976DC  4B 9C A9 3C */	b __ptmf_test
/* 809976E0  2C 03 00 00 */	cmpwi r3, 0
/* 809976E4  41 82 00 54 */	beq lbl_80997738
/* 809976E8  38 7F 10 EC */	addi r3, r31, 0x10ec
/* 809976EC  38 9F 10 E0 */	addi r4, r31, 0x10e0
/* 809976F0  4B 9C A9 58 */	b __ptmf_cmpr
/* 809976F4  2C 03 00 00 */	cmpwi r3, 0
/* 809976F8  40 82 00 1C */	bne lbl_80997714
/* 809976FC  7F E3 FB 78 */	mr r3, r31
/* 80997700  38 80 00 00 */	li r4, 0
/* 80997704  39 9F 10 EC */	addi r12, r31, 0x10ec
/* 80997708  4B 9C A9 7C */	b __ptmf_scall
/* 8099770C  60 00 00 00 */	nop 
/* 80997710  48 00 00 28 */	b lbl_80997738
lbl_80997714:
/* 80997714  80 7F 10 E0 */	lwz r3, 0x10e0(r31)
/* 80997718  80 1F 10 E4 */	lwz r0, 0x10e4(r31)
/* 8099771C  90 61 00 08 */	stw r3, 8(r1)
/* 80997720  90 01 00 0C */	stw r0, 0xc(r1)
/* 80997724  80 1F 10 E8 */	lwz r0, 0x10e8(r31)
/* 80997728  90 01 00 10 */	stw r0, 0x10(r1)
/* 8099772C  7F E3 FB 78 */	mr r3, r31
/* 80997730  38 81 00 08 */	addi r4, r1, 8
/* 80997734  48 00 05 B9 */	bl setAction__14daNpc_clerkB_cFM14daNpc_clerkB_cFPCvPvPv_i
lbl_80997738:
/* 80997738  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8099773C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80997740  7C 08 03 A6 */	mtlr r0
/* 80997744  38 21 00 20 */	addi r1, r1, 0x20
/* 80997748  4E 80 00 20 */	blr 
