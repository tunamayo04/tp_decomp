lbl_800DBE00:
/* 800DBE00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800DBE04  7C 08 02 A6 */	mflr r0
/* 800DBE08  90 01 00 14 */	stw r0, 0x14(r1)
/* 800DBE0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800DBE10  7C 7F 1B 78 */	mr r31, r3
/* 800DBE14  38 80 01 54 */	li r4, 0x154
/* 800DBE18  4B FE 6F 8D */	bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800DBE1C  2C 03 00 00 */	cmpwi r3, 0
/* 800DBE20  40 82 00 0C */	bne lbl_800DBE2C
/* 800DBE24  38 60 00 01 */	li r3, 1
/* 800DBE28  48 00 00 38 */	b lbl_800DBE60
lbl_800DBE2C:
/* 800DBE2C  80 1F 05 74 */	lwz r0, 0x574(r31)
/* 800DBE30  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 800DBE34  41 82 00 14 */	beq lbl_800DBE48
/* 800DBE38  7F E3 FB 78 */	mr r3, r31
/* 800DBE3C  38 80 00 71 */	li r4, 0x71
/* 800DBE40  48 04 D8 39 */	bl setSingleAnimeWolfBase__9daAlink_cFQ29daAlink_c12daAlink_WANM
/* 800DBE44  48 00 00 10 */	b lbl_800DBE54
lbl_800DBE48:
/* 800DBE48  7F E3 FB 78 */	mr r3, r31
/* 800DBE4C  38 80 00 FF */	li r4, 0xff
/* 800DBE50  4B FD 11 31 */	bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
lbl_800DBE54:
/* 800DBE54  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800DBE58  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 800DBE5C  38 60 00 01 */	li r3, 1
lbl_800DBE60:
/* 800DBE60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800DBE64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800DBE68  7C 08 03 A6 */	mtlr r0
/* 800DBE6C  38 21 00 10 */	addi r1, r1, 0x10
/* 800DBE70  4E 80 00 20 */	blr 
