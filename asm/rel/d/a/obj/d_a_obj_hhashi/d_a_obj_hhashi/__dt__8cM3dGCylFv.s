lbl_8058112C:
/* 8058112C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80581130  7C 08 02 A6 */	mflr r0
/* 80581134  90 01 00 14 */	stw r0, 0x14(r1)
/* 80581138  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8058113C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80581140  41 82 00 1C */	beq lbl_8058115C
/* 80581144  3C A0 80 58 */	lis r5, __vt__8cM3dGCyl@ha
/* 80581148  38 05 16 38 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 8058114C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80581150  7C 80 07 35 */	extsh. r0, r4
/* 80581154  40 81 00 08 */	ble lbl_8058115C
/* 80581158  4B D4 DB E4 */	b __dl__FPv
lbl_8058115C:
/* 8058115C  7F E3 FB 78 */	mr r3, r31
/* 80581160  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80581164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80581168  7C 08 03 A6 */	mtlr r0
/* 8058116C  38 21 00 10 */	addi r1, r1, 0x10
/* 80581170  4E 80 00 20 */	blr 
