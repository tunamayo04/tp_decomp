lbl_8004A3AC:
/* 8004A3AC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8004A3B0  7C 08 02 A6 */	mflr r0
/* 8004A3B4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8004A3B8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8004A3BC  7C 7F 1B 78 */	mr r31, r3
/* 8004A3C0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8004A3C4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8004A3C8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8004A3CC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8004A3D0  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8004A3D4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8004A3D8  38 61 00 30 */	addi r3, r1, 0x30
/* 8004A3DC  38 81 00 24 */	addi r4, r1, 0x24
/* 8004A3E0  38 A1 00 08 */	addi r5, r1, 8
/* 8004A3E4  48 01 0F 15 */	bl dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf
/* 8004A3E8  C0 02 85 54 */	lfs f0, lit_4048(r2)
/* 8004A3EC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8004A3F0  38 61 00 0C */	addi r3, r1, 0xc
/* 8004A3F4  38 81 00 24 */	addi r4, r1, 0x24
/* 8004A3F8  C0 22 85 58 */	lfs f1, lit_4049(r2)
/* 8004A3FC  C0 01 00 08 */	lfs f0, 8(r1)
/* 8004A400  EC 21 00 32 */	fmuls f1, f1, f0
/* 8004A404  48 21 C7 81 */	bl __ml__4cXyzCFf
/* 8004A408  E0 21 00 0C */	psq_l f1, 12(r1), 0, 0 /* qr0 */
/* 8004A40C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8004A410  F0 21 00 18 */	psq_st f1, 24(r1), 0, 0 /* qr0 */
/* 8004A414  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8004A418  E0 01 00 30 */	psq_l f0, 48(r1), 0, 0 /* qr0 */
/* 8004A41C  10 00 08 2A */	ps_add f0, f0, f1
/* 8004A420  F0 01 00 30 */	psq_st f0, 48(r1), 0, 0 /* qr0 */
/* 8004A424  E0 21 80 38 */	psq_l f1, 56(r1), 1, 0 /* qr0 */
/* 8004A428  E0 01 80 20 */	psq_l f0, 32(r1), 1, 0 /* qr0 */
/* 8004A42C  10 01 00 2A */	ps_add f0, f1, f0
/* 8004A430  F0 01 80 38 */	psq_st f0, 56(r1), 1, 0 /* qr0 */
/* 8004A434  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8004A438  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8004A43C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8004A440  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8004A444  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8004A448  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8004A44C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8004A450  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8004A454  7C 08 03 A6 */	mtlr r0
/* 8004A458  38 21 00 50 */	addi r1, r1, 0x50
/* 8004A45C  4E 80 00 20 */	blr 
