lbl_8026F03C:
/* 8026F03C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026F040  7C 08 02 A6 */	mflr r0
/* 8026F044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026F048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026F04C  93 C1 00 08 */	stw r30, 8(r1)
/* 8026F050  7C 7E 1B 78 */	mr r30, r3
/* 8026F054  7C 9F 23 78 */	mr r31, r4
/* 8026F058  38 BF 00 0C */	addi r5, r31, 0xc
/* 8026F05C  48 00 02 C1 */	bl SetStartEnd__8cM3dGLinFRC3VecRC3Vec
/* 8026F060  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8026F064  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8026F068  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026F06C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026F070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026F074  7C 08 03 A6 */	mtlr r0
/* 8026F078  38 21 00 10 */	addi r1, r1, 0x10
/* 8026F07C  4E 80 00 20 */	blr 
