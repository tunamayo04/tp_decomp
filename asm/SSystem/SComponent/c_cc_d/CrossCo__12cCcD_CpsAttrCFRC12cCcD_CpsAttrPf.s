lbl_80263ED4:
/* 80263ED4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80263ED8  7C 08 02 A6 */	mflr r0
/* 80263EDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80263EE0  C0 02 B6 20 */	lfs f0, lit_2431(r2)
/* 80263EE4  D0 05 00 00 */	stfs f0, 0(r5)
/* 80263EE8  28 04 00 00 */	cmplwi r4, 0
/* 80263EEC  41 82 00 08 */	beq lbl_80263EF4
/* 80263EF0  38 84 00 20 */	addi r4, r4, 0x20
lbl_80263EF4:
/* 80263EF4  38 63 00 20 */	addi r3, r3, 0x20
/* 80263EF8  38 A1 00 08 */	addi r5, r1, 8
/* 80263EFC  48 00 92 19 */	bl cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec
/* 80263F00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80263F04  41 82 00 0C */	beq lbl_80263F10
/* 80263F08  38 60 00 01 */	li r3, 1
/* 80263F0C  48 00 00 08 */	b lbl_80263F14
lbl_80263F10:
/* 80263F10  38 60 00 00 */	li r3, 0
lbl_80263F14:
/* 80263F14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80263F18  7C 08 03 A6 */	mtlr r0
/* 80263F1C  38 21 00 20 */	addi r1, r1, 0x20
/* 80263F20  4E 80 00 20 */	blr 
