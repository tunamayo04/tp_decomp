lbl_80037180:
/* 80037180  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80037184  7C 08 02 A6 */	mflr r0
/* 80037188  90 01 00 24 */	stw r0, 0x24(r1)
/* 8003718C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80037190  7C 7F 1B 78 */	mr r31, r3
/* 80037194  88 0D 88 70 */	lbz r0, struct_80450DF0+0x0(r13)
/* 80037198  7C 00 07 75 */	extsb. r0, r0
/* 8003719C  40 82 00 34 */	bne lbl_800371D0
/* 800371A0  C0 02 83 98 */	lfs f0, lit_3671(r2)
/* 800371A4  3C 60 80 42 */	lis r3, scale_3676@ha
/* 800371A8  D4 03 45 F4 */	stfsu f0, scale_3676@l(r3)
/* 800371AC  D0 03 00 04 */	stfs f0, 4(r3)
/* 800371B0  D0 03 00 08 */	stfs f0, 8(r3)
/* 800371B4  3C 80 80 01 */	lis r4, __dt__4cXyzFv@ha
/* 800371B8  38 84 91 84 */	addi r4, r4, __dt__4cXyzFv@l
/* 800371BC  3C A0 80 42 */	lis r5, lit_3677@ha
/* 800371C0  38 A5 45 E8 */	addi r5, r5, lit_3677@l
/* 800371C4  48 32 AA 61 */	bl __register_global_object
/* 800371C8  38 00 00 01 */	li r0, 1
/* 800371CC  98 0D 88 70 */	stb r0, struct_80450DF0+0x0(r13)
lbl_800371D0:
/* 800371D0  3C 60 80 42 */	lis r3, scale_3676@ha
/* 800371D4  C4 03 45 F4 */	lfsu f0, scale_3676@l(r3)
/* 800371D8  D0 01 00 08 */	stfs f0, 8(r1)
/* 800371DC  C0 03 00 04 */	lfs f0, 4(r3)
/* 800371E0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 800371E4  C0 03 00 08 */	lfs f0, 8(r3)
/* 800371E8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 800371EC  7F E3 FB 78 */	mr r3, r31
/* 800371F0  38 81 00 08 */	addi r4, r1, 8
/* 800371F4  38 A0 00 00 */	li r5, 0
/* 800371F8  4B FF FE 41 */	bl eff_break_tsubo__5daObjFP10fopAc_ac_c4cXyzi
/* 800371FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80037200  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80037204  7C 08 03 A6 */	mtlr r0
/* 80037208  38 21 00 20 */	addi r1, r1, 0x20
/* 8003720C  4E 80 00 20 */	blr 
