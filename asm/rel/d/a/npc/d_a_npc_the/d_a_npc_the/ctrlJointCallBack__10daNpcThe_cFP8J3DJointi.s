lbl_80AF8114:
/* 80AF8114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AF8118  7C 08 02 A6 */	mflr r0
/* 80AF811C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AF8120  7C 60 1B 78 */	mr r0, r3
/* 80AF8124  2C 04 00 00 */	cmpwi r4, 0
/* 80AF8128  40 82 00 24 */	bne lbl_80AF814C
/* 80AF812C  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80AF8130  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80AF8134  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80AF8138  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80AF813C  28 03 00 00 */	cmplwi r3, 0
/* 80AF8140  41 82 00 0C */	beq lbl_80AF814C
/* 80AF8144  7C 04 03 78 */	mr r4, r0
/* 80AF8148  4B FF F9 99 */	bl ctrlJoint__10daNpcThe_cFP8J3DJointP8J3DModel
lbl_80AF814C:
/* 80AF814C  38 60 00 01 */	li r3, 1
/* 80AF8150  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AF8154  7C 08 03 A6 */	mtlr r0
/* 80AF8158  38 21 00 10 */	addi r1, r1, 0x10
/* 80AF815C  4E 80 00 20 */	blr 
