lbl_80263D7C:
/* 80263D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80263D80  7C 08 02 A6 */	mflr r0
/* 80263D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80263D88  28 04 00 00 */	cmplwi r4, 0
/* 80263D8C  41 82 00 08 */	beq lbl_80263D94
/* 80263D90  38 84 00 20 */	addi r4, r4, 0x20
lbl_80263D94:
/* 80263D94  38 63 00 20 */	addi r3, r3, 0x20
/* 80263D98  48 00 96 3D */	bl cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec
/* 80263D9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80263DA0  41 82 00 0C */	beq lbl_80263DAC
/* 80263DA4  38 60 00 01 */	li r3, 1
/* 80263DA8  48 00 00 08 */	b lbl_80263DB0
lbl_80263DAC:
/* 80263DAC  38 60 00 00 */	li r3, 0
lbl_80263DB0:
/* 80263DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80263DB4  7C 08 03 A6 */	mtlr r0
/* 80263DB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80263DBC  4E 80 00 20 */	blr 
