lbl_80264644:
/* 80264644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264648  7C 08 02 A6 */	mflr r0
/* 8026464C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264650  28 04 00 00 */	cmplwi r4, 0
/* 80264654  41 82 00 08 */	beq lbl_8026465C
/* 80264658  38 84 00 20 */	addi r4, r4, 0x20
lbl_8026465C:
/* 8026465C  38 63 00 20 */	addi r3, r3, 0x20
/* 80264660  48 00 76 1D */	bl cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPf
/* 80264664  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80264668  41 82 00 0C */	beq lbl_80264674
/* 8026466C  38 60 00 01 */	li r3, 1
/* 80264670  48 00 00 08 */	b lbl_80264678
lbl_80264674:
/* 80264674  38 60 00 00 */	li r3, 0
lbl_80264678:
/* 80264678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026467C  7C 08 03 A6 */	mtlr r0
/* 80264680  38 21 00 10 */	addi r1, r1, 0x10
/* 80264684  4E 80 00 20 */	blr 
