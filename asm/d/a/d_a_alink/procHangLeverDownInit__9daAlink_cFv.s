lbl_800FC2F4:
/* 800FC2F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800FC2F8  7C 08 02 A6 */	mflr r0
/* 800FC2FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800FC300  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800FC304  7C 7F 1B 78 */	mr r31, r3
/* 800FC308  A0 03 2F DC */	lhz r0, 0x2fdc(r3)
/* 800FC30C  28 00 00 FF */	cmplwi r0, 0xff
/* 800FC310  41 82 00 14 */	beq lbl_800FC324
/* 800FC314  38 80 00 5D */	li r4, 0x5d
/* 800FC318  80 BF 27 F4 */	lwz r5, 0x27f4(r31)
/* 800FC31C  4B FC 6A C1 */	bl procPreActionUnequipInit__9daAlink_cFiP10fopAc_ac_c
/* 800FC320  48 00 00 5C */	b lbl_800FC37C
lbl_800FC324:
/* 800FC324  38 80 00 5D */	li r4, 0x5d
/* 800FC328  4B FC 5C 45 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800FC32C  38 7F 28 0C */	addi r3, r31, 0x280c
/* 800FC330  80 9F 27 F4 */	lwz r4, 0x27f4(r31)
/* 800FC334  48 06 29 85 */	bl setData__16daPy_actorKeep_cFP10fopAc_ac_c
/* 800FC338  7F E3 FB 78 */	mr r3, r31
/* 800FC33C  38 80 00 91 */	li r4, 0x91
/* 800FC340  3C A0 80 39 */	lis r5, m__23daAlinkHIO_wallCatch_c0@ha
/* 800FC344  38 A5 E1 64 */	addi r5, r5, m__23daAlinkHIO_wallCatch_c0@l
/* 800FC348  38 A5 00 3C */	addi r5, r5, 0x3c
/* 800FC34C  4B FB 0D A9 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800FC350  80 7F 27 F4 */	lwz r3, 0x27f4(r31)
/* 800FC354  A8 63 04 E6 */	lha r3, 0x4e6(r3)
/* 800FC358  3C 63 00 01 */	addis r3, r3, 1
/* 800FC35C  38 03 80 00 */	addi r0, r3, -32768
/* 800FC360  B0 1F 30 0C */	sth r0, 0x300c(r31)
/* 800FC364  38 00 00 91 */	li r0, 0x91
/* 800FC368  90 1F 31 98 */	stw r0, 0x3198(r31)
/* 800FC36C  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800FC370  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 800FC374  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 800FC378  38 60 00 01 */	li r3, 1
lbl_800FC37C:
/* 800FC37C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800FC380  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800FC384  7C 08 03 A6 */	mtlr r0
/* 800FC388  38 21 00 10 */	addi r1, r1, 0x10
/* 800FC38C  4E 80 00 20 */	blr 
