lbl_80736418:
/* 80736418  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8073641C  7C 08 02 A6 */	mflr r0
/* 80736420  90 01 00 24 */	stw r0, 0x24(r1)
/* 80736424  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80736428  7C 7F 1B 78 */	mr r31, r3
/* 8073642C  80 03 0B 90 */	lwz r0, 0xb90(r3)
/* 80736430  2C 00 00 00 */	cmpwi r0, 0
/* 80736434  41 82 00 D0 */	beq lbl_80736504
/* 80736438  4B FF FE D9 */	bl setSparkEffect__11daE_OctBg_cFv
/* 8073643C  80 7F 0B 90 */	lwz r3, 0xb90(r31)
/* 80736440  38 03 FF FF */	addi r0, r3, -1
/* 80736444  90 1F 0B 90 */	stw r0, 0xb90(r31)
/* 80736448  80 1F 0B 90 */	lwz r0, 0xb90(r31)
/* 8073644C  2C 00 00 00 */	cmpwi r0, 0
/* 80736450  40 82 00 40 */	bne lbl_80736490
/* 80736454  38 00 00 00 */	li r0, 0
/* 80736458  90 01 00 08 */	stw r0, 8(r1)
/* 8073645C  38 60 02 21 */	li r3, 0x221
/* 80736460  38 80 00 12 */	li r4, 0x12
/* 80736464  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80736468  38 C0 FF FF */	li r6, -1
/* 8073646C  38 E0 00 00 */	li r7, 0
/* 80736470  39 00 00 00 */	li r8, 0
/* 80736474  39 20 FF FF */	li r9, -1
/* 80736478  39 40 00 00 */	li r10, 0
/* 8073647C  4B 8E 39 88 */	b fopAcM_fastCreate__FsUlPC4cXyziPC5csXyzPC4cXyzScPFPv_iPv
/* 80736480  7F E3 FB 78 */	mr r3, r31
/* 80736484  4B 8E 37 F8 */	b fopAcM_delete__FP10fopAc_ac_c
/* 80736488  38 60 00 01 */	li r3, 1
/* 8073648C  48 00 00 7C */	b lbl_80736508
lbl_80736490:
/* 80736490  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80736494  40 80 00 14 */	bge lbl_807364A8
/* 80736498  A8 7F 0B 94 */	lha r3, 0xb94(r31)
/* 8073649C  38 03 10 00 */	addi r0, r3, 0x1000
/* 807364A0  B0 1F 0B 94 */	sth r0, 0xb94(r31)
/* 807364A4  48 00 00 28 */	b lbl_807364CC
lbl_807364A8:
/* 807364A8  2C 00 00 2D */	cmpwi r0, 0x2d
/* 807364AC  40 80 00 14 */	bge lbl_807364C0
/* 807364B0  A8 7F 0B 94 */	lha r3, 0xb94(r31)
/* 807364B4  38 03 08 00 */	addi r0, r3, 0x800
/* 807364B8  B0 1F 0B 94 */	sth r0, 0xb94(r31)
/* 807364BC  48 00 00 10 */	b lbl_807364CC
lbl_807364C0:
/* 807364C0  A8 7F 0B 94 */	lha r3, 0xb94(r31)
/* 807364C4  38 03 03 00 */	addi r0, r3, 0x300
/* 807364C8  B0 1F 0B 94 */	sth r0, 0xb94(r31)
lbl_807364CC:
/* 807364CC  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 807364D0  7C 03 07 74 */	extsb r3, r0
/* 807364D4  3C 80 00 08 */	lis r4, 0x0008 /* 0x0008000A@ha */
/* 807364D8  38 04 00 0A */	addi r0, r4, 0x000A /* 0x0008000A@l */
/* 807364DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 807364E0  4B 8F 6B 8C */	b dComIfGp_getReverb__Fi
/* 807364E4  7C 66 1B 78 */	mr r6, r3
/* 807364E8  38 7F 05 BC */	addi r3, r31, 0x5bc
/* 807364EC  38 81 00 10 */	addi r4, r1, 0x10
/* 807364F0  38 A0 00 00 */	li r5, 0
/* 807364F4  81 9F 05 BC */	lwz r12, 0x5bc(r31)
/* 807364F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 807364FC  7D 89 03 A6 */	mtctr r12
/* 80736500  4E 80 04 21 */	bctrl 
lbl_80736504:
/* 80736504  38 60 00 00 */	li r3, 0
lbl_80736508:
/* 80736508  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8073650C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80736510  7C 08 03 A6 */	mtlr r0
/* 80736514  38 21 00 20 */	addi r1, r1, 0x20
/* 80736518  4E 80 00 20 */	blr 
