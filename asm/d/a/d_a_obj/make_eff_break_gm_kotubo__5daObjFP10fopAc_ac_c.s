lbl_800372A0:
/* 800372A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800372A4  7C 08 02 A6 */	mflr r0
/* 800372A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800372AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800372B0  7C 7F 1B 78 */	mr r31, r3
/* 800372B4  88 0D 88 72 */	lbz r0, struct_80450DF0+0x2(r13)
/* 800372B8  7C 00 07 75 */	extsb. r0, r0
/* 800372BC  40 82 00 34 */	bne lbl_800372F0
/* 800372C0  C0 02 83 98 */	lfs f0, lit_3671(r2)
/* 800372C4  3C 60 80 42 */	lis r3, scale_3718@ha
/* 800372C8  D4 03 46 24 */	stfsu f0, scale_3718@l(r3)
/* 800372CC  D0 03 00 04 */	stfs f0, 4(r3)
/* 800372D0  D0 03 00 08 */	stfs f0, 8(r3)
/* 800372D4  3C 80 80 01 */	lis r4, __dt__4cXyzFv@ha
/* 800372D8  38 84 91 84 */	addi r4, r4, __dt__4cXyzFv@l
/* 800372DC  3C A0 80 42 */	lis r5, lit_3719@ha
/* 800372E0  38 A5 46 18 */	addi r5, r5, lit_3719@l
/* 800372E4  48 32 A9 41 */	bl __register_global_object
/* 800372E8  38 00 00 01 */	li r0, 1
/* 800372EC  98 0D 88 72 */	stb r0, struct_80450DF0+0x2(r13)
lbl_800372F0:
/* 800372F0  3C 60 80 42 */	lis r3, scale_3718@ha
/* 800372F4  C4 03 46 24 */	lfsu f0, scale_3718@l(r3)
/* 800372F8  D0 01 00 08 */	stfs f0, 8(r1)
/* 800372FC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80037300  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80037304  C0 03 00 08 */	lfs f0, 8(r3)
/* 80037308  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8003730C  7F E3 FB 78 */	mr r3, r31
/* 80037310  38 81 00 08 */	addi r4, r1, 8
/* 80037314  38 A0 00 03 */	li r5, 3
/* 80037318  4B FF FD 21 */	bl eff_break_tsubo__5daObjFP10fopAc_ac_c4cXyzi
/* 8003731C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80037320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80037324  7C 08 03 A6 */	mtlr r0
/* 80037328  38 21 00 20 */	addi r1, r1, 0x20
/* 8003732C  4E 80 00 20 */	blr 
