lbl_80C66444:
/* 80C66444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C66448  7C 08 02 A6 */	mflr r0
/* 80C6644C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C66450  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C66454  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C66458  41 82 00 1C */	beq lbl_80C66474
/* 80C6645C  3C A0 80 C6 */	lis r5, __vt__8cM3dGSph@ha
/* 80C66460  38 05 6A 30 */	addi r0, r5, __vt__8cM3dGSph@l
/* 80C66464  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80C66468  7C 80 07 35 */	extsh. r0, r4
/* 80C6646C  40 81 00 08 */	ble lbl_80C66474
/* 80C66470  4B 66 88 CC */	b __dl__FPv
lbl_80C66474:
/* 80C66474  7F E3 FB 78 */	mr r3, r31
/* 80C66478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C6647C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C66480  7C 08 03 A6 */	mtlr r0
/* 80C66484  38 21 00 10 */	addi r1, r1, 0x10
/* 80C66488  4E 80 00 20 */	blr 
