lbl_80263B90:
/* 80263B90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263B94  7C 08 02 A6 */	mflr r0
/* 80263B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263B9C  7C 66 1B 78 */	mr r6, r3
/* 80263BA0  38 64 00 20 */	addi r3, r4, 0x20
/* 80263BA4  38 86 00 20 */	addi r4, r6, 0x20
/* 80263BA8  48 00 83 5D */	bl cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec
/* 80263BAC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80263BB0  30 03 FF FF */	addic r0, r3, -1
/* 80263BB4  7C 00 19 10 */	subfe r0, r0, r3
/* 80263BB8  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80263BBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263BC0  7C 08 03 A6 */	mtlr r0
/* 80263BC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80263BC8  4E 80 00 20 */	blr 
