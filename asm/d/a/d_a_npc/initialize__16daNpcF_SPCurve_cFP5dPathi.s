lbl_80150870:
/* 80150870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150874  7C 08 02 A6 */	mflr r0
/* 80150878  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015087C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80150880  7C 7F 1B 78 */	mr r31, r3
/* 80150884  38 60 00 00 */	li r3, 0
/* 80150888  B0 7F 00 00 */	sth r3, 0(r31)
/* 8015088C  B0 7F 00 02 */	sth r3, 2(r31)
/* 80150890  98 BF 00 04 */	stb r5, 4(r31)
/* 80150894  98 7F 00 05 */	stb r3, 5(r31)
/* 80150898  C0 02 99 D8 */	lfs f0, lit_4116(r2)
/* 8015089C  38 00 00 60 */	li r0, 0x60
/* 801508A0  7C 09 03 A6 */	mtctr r0
lbl_801508A4:
/* 801508A4  7C BF 1A 14 */	add r5, r31, r3
/* 801508A8  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 801508AC  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 801508B0  D0 05 00 14 */	stfs f0, 0x14(r5)
/* 801508B4  38 63 00 10 */	addi r3, r3, 0x10
/* 801508B8  42 00 FF EC */	bdnz lbl_801508A4
/* 801508BC  28 04 00 00 */	cmplwi r4, 0
/* 801508C0  41 82 00 2C */	beq lbl_801508EC
/* 801508C4  88 04 00 05 */	lbz r0, 5(r4)
/* 801508C8  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 801508CC  98 1F 00 05 */	stb r0, 5(r31)
/* 801508D0  80 64 00 08 */	lwz r3, 8(r4)
/* 801508D4  A0 84 00 00 */	lhz r4, 0(r4)
/* 801508D8  38 A0 00 60 */	li r5, 0x60
/* 801508DC  38 DF 00 08 */	addi r6, r31, 8
/* 801508E0  88 FF 00 05 */	lbz r7, 5(r31)
/* 801508E4  48 00 45 71 */	bl daNpcF_putNurbs__FP4dPntiiP4dPnti
/* 801508E8  B0 7F 00 00 */	sth r3, 0(r31)
lbl_801508EC:
/* 801508EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801508F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801508F4  7C 08 03 A6 */	mtlr r0
/* 801508F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801508FC  4E 80 00 20 */	blr 
