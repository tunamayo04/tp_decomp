lbl_80D3EE18:
/* 80D3EE18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D3EE1C  7C 08 02 A6 */	mflr r0
/* 80D3EE20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D3EE24  80 83 05 74 */	lwz r4, 0x574(r3)
/* 80D3EE28  C0 03 04 EC */	lfs f0, 0x4ec(r3)
/* 80D3EE2C  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80D3EE30  C0 03 04 F0 */	lfs f0, 0x4f0(r3)
/* 80D3EE34  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80D3EE38  C0 03 04 F4 */	lfs f0, 0x4f4(r3)
/* 80D3EE3C  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80D3EE40  48 00 00 15 */	bl setBaseMtx__13daObjZCloth_cFv
/* 80D3EE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D3EE48  7C 08 03 A6 */	mtlr r0
/* 80D3EE4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80D3EE50  4E 80 00 20 */	blr 
