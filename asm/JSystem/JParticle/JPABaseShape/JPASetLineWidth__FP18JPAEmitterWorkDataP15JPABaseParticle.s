lbl_80276B4C:
/* 80276B4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80276B50  7C 08 02 A6 */	mflr r0
/* 80276B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80276B58  C0 44 00 60 */	lfs f2, 0x60(r4)
/* 80276B5C  C0 22 B8 A8 */	lfs f1, lit_2262(r2)
/* 80276B60  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 80276B64  EC 01 00 32 */	fmuls f0, f1, f0
/* 80276B68  EC 02 00 32 */	fmuls f0, f2, f0
/* 80276B6C  FC 00 00 1E */	fctiwz f0, f0
/* 80276B70  D8 01 00 08 */	stfd f0, 8(r1)
/* 80276B74  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80276B78  38 80 00 05 */	li r4, 5
/* 80276B7C  48 0E 5D 41 */	bl GXSetLineWidth
/* 80276B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80276B84  7C 08 03 A6 */	mtlr r0
/* 80276B88  38 21 00 10 */	addi r1, r1, 0x10
/* 80276B8C  4E 80 00 20 */	blr 
