lbl_80285250:
/* 80285250  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80285254  7C 08 02 A6 */	mflr r0
/* 80285258  90 01 00 44 */	stw r0, 0x44(r1)
/* 8028525C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80285260  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80285264  7C 7E 1B 78 */	mr r30, r3
/* 80285268  7C 9F 23 78 */	mr r31, r4
/* 8028526C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80285270  D0 03 00 8C */	stfs f0, 0x8c(r3)
/* 80285274  C0 04 00 04 */	lfs f0, 4(r4)
/* 80285278  D0 03 00 90 */	stfs f0, 0x90(r3)
/* 8028527C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80285280  D0 03 00 94 */	stfs f0, 0x94(r3)
/* 80285284  D0 23 00 A4 */	stfs f1, 0xa4(r3)
/* 80285288  38 61 00 08 */	addi r3, r1, 8
/* 8028528C  38 80 00 79 */	li r4, 0x79
/* 80285290  C0 02 BA 5C */	lfs f0, lit_772(r2)
/* 80285294  EC 20 00 72 */	fmuls f1, f0, f1
/* 80285298  48 0C 14 11 */	bl PSMTXRotRad
/* 8028529C  38 61 00 08 */	addi r3, r1, 8
/* 802852A0  38 9E 00 AC */	addi r4, r30, 0xac
/* 802852A4  C0 3F 00 00 */	lfs f1, 0(r31)
/* 802852A8  C0 5F 00 04 */	lfs f2, 4(r31)
/* 802852AC  C0 7F 00 08 */	lfs f3, 8(r31)
/* 802852B0  48 0C 16 6D */	bl PSMTXTransApply
/* 802852B4  38 60 00 01 */	li r3, 1
/* 802852B8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802852BC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802852C0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802852C4  7C 08 03 A6 */	mtlr r0
/* 802852C8  38 21 00 40 */	addi r1, r1, 0x40
/* 802852CC  4E 80 00 20 */	blr 
