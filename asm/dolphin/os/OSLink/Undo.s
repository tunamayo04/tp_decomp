lbl_8033E570:
/* 8033E570  7C 08 02 A6 */	mflr r0
/* 8033E574  90 01 00 04 */	stw r0, 4(r1)
/* 8033E578  94 21 FF C8 */	stwu r1, -0x38(r1)
/* 8033E57C  BF 21 00 1C */	stmw r25, 0x1c(r1)
/* 8033E580  7C 9C 23 78 */	mr r28, r4
/* 8033E584  80 83 00 00 */	lwz r4, 0(r3)
/* 8033E588  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 8033E58C  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 8033E590  38 A3 00 00 */	addi r5, r3, 0
/* 8033E594  7C 63 02 14 */	add r3, r3, r0
/* 8033E598  38 03 00 07 */	addi r0, r3, 7
/* 8033E59C  7C 05 00 50 */	subf r0, r5, r0
/* 8033E5A0  54 00 E8 FE */	srwi r0, r0, 3
/* 8033E5A4  7C 05 18 40 */	cmplw r5, r3
/* 8033E5A8  7C 09 03 A6 */	mtctr r0
/* 8033E5AC  40 80 00 18 */	bge lbl_8033E5C4
lbl_8033E5B0:
/* 8033E5B0  80 05 00 00 */	lwz r0, 0(r5)
/* 8033E5B4  7C 00 20 40 */	cmplw r0, r4
/* 8033E5B8  41 82 00 14 */	beq lbl_8033E5CC
/* 8033E5BC  38 A5 00 08 */	addi r5, r5, 8
/* 8033E5C0  42 00 FF F0 */	bdnz lbl_8033E5B0
lbl_8033E5C4:
/* 8033E5C4  38 60 00 00 */	li r3, 0
/* 8033E5C8  48 00 01 CC */	b lbl_8033E794
lbl_8033E5CC:
/* 8033E5CC  3C 60 80 3D */	lis r3, lit_189@ha
/* 8033E5D0  83 E5 00 04 */	lwz r31, 4(r5)
/* 8033E5D4  3B 63 07 B0 */	addi r27, r3, lit_189@l
/* 8033E5D8  3B C0 00 00 */	li r30, 0
/* 8033E5DC  48 00 01 80 */	b lbl_8033E75C
lbl_8033E5E0:
/* 8033E5E0  A0 1F 00 00 */	lhz r0, 0(r31)
/* 8033E5E4  2C 04 00 06 */	cmpwi r4, 6
/* 8033E5E8  38 60 00 00 */	li r3, 0
/* 8033E5EC  7F BD 02 14 */	add r29, r29, r0
/* 8033E5F0  41 82 00 A4 */	beq lbl_8033E694
/* 8033E5F4  40 80 00 30 */	bge lbl_8033E624
/* 8033E5F8  2C 04 00 02 */	cmpwi r4, 2
/* 8033E5FC  41 82 00 64 */	beq lbl_8033E660
/* 8033E600  40 80 00 14 */	bge lbl_8033E614
/* 8033E604  2C 04 00 00 */	cmpwi r4, 0
/* 8033E608  41 82 01 50 */	beq lbl_8033E758
/* 8033E60C  40 80 00 48 */	bge lbl_8033E654
/* 8033E610  48 00 01 3C */	b lbl_8033E74C
lbl_8033E614:
/* 8033E614  2C 04 00 04 */	cmpwi r4, 4
/* 8033E618  41 82 00 64 */	beq lbl_8033E67C
/* 8033E61C  40 80 00 6C */	bge lbl_8033E688
/* 8033E620  48 00 00 50 */	b lbl_8033E670
lbl_8033E624:
/* 8033E624  2C 04 00 C9 */	cmpwi r4, 0xc9
/* 8033E628  41 82 01 30 */	beq lbl_8033E758
/* 8033E62C  40 80 00 1C */	bge lbl_8033E648
/* 8033E630  2C 04 00 0A */	cmpwi r4, 0xa
/* 8033E634  41 82 00 7C */	beq lbl_8033E6B0
/* 8033E638  41 80 00 68 */	blt lbl_8033E6A0
/* 8033E63C  2C 04 00 0E */	cmpwi r4, 0xe
/* 8033E640  40 80 01 0C */	bge lbl_8033E74C
/* 8033E644  48 00 00 94 */	b lbl_8033E6D8
lbl_8033E648:
/* 8033E648  2C 04 00 CB */	cmpwi r4, 0xcb
/* 8033E64C  40 80 01 00 */	bge lbl_8033E74C
/* 8033E650  48 00 00 98 */	b lbl_8033E6E8
lbl_8033E654:
/* 8033E654  38 00 00 00 */	li r0, 0
/* 8033E658  90 1D 00 00 */	stw r0, 0(r29)
/* 8033E65C  48 00 00 FC */	b lbl_8033E758
lbl_8033E660:
/* 8033E660  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E664  54 00 07 8A */	rlwinm r0, r0, 0, 0x1e, 5
/* 8033E668  90 1D 00 00 */	stw r0, 0(r29)
/* 8033E66C  48 00 00 EC */	b lbl_8033E758
lbl_8033E670:
/* 8033E670  38 00 00 00 */	li r0, 0
/* 8033E674  B0 1D 00 00 */	sth r0, 0(r29)
/* 8033E678  48 00 00 E0 */	b lbl_8033E758
lbl_8033E67C:
/* 8033E67C  38 00 00 00 */	li r0, 0
/* 8033E680  B0 1D 00 00 */	sth r0, 0(r29)
/* 8033E684  48 00 00 D4 */	b lbl_8033E758
lbl_8033E688:
/* 8033E688  38 00 00 00 */	li r0, 0
/* 8033E68C  B0 1D 00 00 */	sth r0, 0(r29)
/* 8033E690  48 00 00 C8 */	b lbl_8033E758
lbl_8033E694:
/* 8033E694  38 00 00 00 */	li r0, 0
/* 8033E698  B0 1D 00 00 */	sth r0, 0(r29)
/* 8033E69C  48 00 00 BC */	b lbl_8033E758
lbl_8033E6A0:
/* 8033E6A0  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E6A4  54 00 07 9E */	rlwinm r0, r0, 0, 0x1e, 0xf
/* 8033E6A8  90 1D 00 00 */	stw r0, 0(r29)
/* 8033E6AC  48 00 00 AC */	b lbl_8033E758
lbl_8033E6B0:
/* 8033E6B0  88 1C 00 32 */	lbz r0, 0x32(r28)
/* 8033E6B4  28 00 00 00 */	cmplwi r0, 0
/* 8033E6B8  41 82 00 0C */	beq lbl_8033E6C4
/* 8033E6BC  80 1C 00 3C */	lwz r0, 0x3c(r28)
/* 8033E6C0  7C 7D 00 50 */	subf r3, r29, r0
lbl_8033E6C4:
/* 8033E6C4  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E6C8  54 00 07 8A */	rlwinm r0, r0, 0, 0x1e, 5
/* 8033E6CC  50 60 01 BA */	rlwimi r0, r3, 0, 6, 0x1d
/* 8033E6D0  90 1D 00 00 */	stw r0, 0(r29)
/* 8033E6D4  48 00 00 84 */	b lbl_8033E758
lbl_8033E6D8:
/* 8033E6D8  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E6DC  54 00 07 9E */	rlwinm r0, r0, 0, 0x1e, 0xf
/* 8033E6E0  90 1D 00 00 */	stw r0, 0(r29)
/* 8033E6E4  48 00 00 74 */	b lbl_8033E758
lbl_8033E6E8:
/* 8033E6E8  88 1F 00 03 */	lbz r0, 3(r31)
/* 8033E6EC  28 1E 00 00 */	cmplwi r30, 0
/* 8033E6F0  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 8033E6F4  54 00 18 38 */	slwi r0, r0, 3
/* 8033E6F8  7C 63 02 14 */	add r3, r3, r0
/* 8033E6FC  80 03 00 00 */	lwz r0, 0(r3)
/* 8033E700  3B 43 00 00 */	addi r26, r3, 0
/* 8033E704  54 1D 00 3C */	rlwinm r29, r0, 0, 0, 0x1e
/* 8033E708  41 82 00 24 */	beq lbl_8033E72C
/* 8033E70C  80 1E 00 00 */	lwz r0, 0(r30)
/* 8033E710  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033E714  54 19 00 3C */	rlwinm r25, r0, 0, 0, 0x1e
/* 8033E718  38 79 00 00 */	addi r3, r25, 0
/* 8033E71C  4B FF CE 91 */	bl DCFlushRange
/* 8033E720  7F 23 CB 78 */	mr r3, r25
/* 8033E724  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033E728  4B FF CF 69 */	bl ICInvalidateRange
lbl_8033E72C:
/* 8033E72C  80 1A 00 00 */	lwz r0, 0(r26)
/* 8033E730  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8033E734  41 82 00 0C */	beq lbl_8033E740
/* 8033E738  7F 40 D3 78 */	mr r0, r26
/* 8033E73C  48 00 00 08 */	b lbl_8033E744
lbl_8033E740:
/* 8033E740  38 00 00 00 */	li r0, 0
lbl_8033E744:
/* 8033E744  7C 1E 03 78 */	mr r30, r0
/* 8033E748  48 00 00 10 */	b lbl_8033E758
lbl_8033E74C:
/* 8033E74C  38 7B 00 00 */	addi r3, r27, 0
/* 8033E750  4C C6 31 82 */	crclr 6
/* 8033E754  4B CC 83 69 */	bl OSReport
lbl_8033E758:
/* 8033E758  3B FF 00 08 */	addi r31, r31, 8
lbl_8033E75C:
/* 8033E75C  88 9F 00 02 */	lbz r4, 2(r31)
/* 8033E760  28 04 00 CB */	cmplwi r4, 0xcb
/* 8033E764  40 82 FE 7C */	bne lbl_8033E5E0
/* 8033E768  28 1E 00 00 */	cmplwi r30, 0
/* 8033E76C  41 82 00 24 */	beq lbl_8033E790
/* 8033E770  80 1E 00 00 */	lwz r0, 0(r30)
/* 8033E774  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033E778  54 1B 00 3C */	rlwinm r27, r0, 0, 0, 0x1e
/* 8033E77C  38 7B 00 00 */	addi r3, r27, 0
/* 8033E780  4B FF CE 2D */	bl DCFlushRange
/* 8033E784  7F 63 DB 78 */	mr r3, r27
/* 8033E788  80 9E 00 04 */	lwz r4, 4(r30)
/* 8033E78C  4B FF CF 05 */	bl ICInvalidateRange
lbl_8033E790:
/* 8033E790  38 60 00 01 */	li r3, 1
lbl_8033E794:
/* 8033E794  BB 21 00 1C */	lmw r25, 0x1c(r1)
/* 8033E798  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8033E79C  38 21 00 38 */	addi r1, r1, 0x38
/* 8033E7A0  7C 08 03 A6 */	mtlr r0
/* 8033E7A4  4E 80 00 20 */	blr 
