lbl_8026F664:
/* 8026F664  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026F668  7C 08 02 A6 */	mflr r0
/* 8026F66C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8026F670  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8026F674  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8026F678  7C 7F 1B 78 */	mr r31, r3
/* 8026F67C  FF E0 08 90 */	fmr f31, f1
/* 8026F680  4B FF FF C9 */	bl SetC__8cM3dGSphFRC4cXyz
/* 8026F684  7F E3 FB 78 */	mr r3, r31
/* 8026F688  FC 20 F8 90 */	fmr f1, f31
/* 8026F68C  48 00 00 7D */	bl SetR__8cM3dGSphFf
/* 8026F690  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8026F694  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8026F698  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026F69C  7C 08 03 A6 */	mtlr r0
/* 8026F6A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8026F6A4  4E 80 00 20 */	blr 
