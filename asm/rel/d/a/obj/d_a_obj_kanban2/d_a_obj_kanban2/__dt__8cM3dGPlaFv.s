lbl_805826D4:
/* 805826D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805826D8  7C 08 02 A6 */	mflr r0
/* 805826DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 805826E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805826E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 805826E8  41 82 00 1C */	beq lbl_80582704
/* 805826EC  3C A0 80 58 */	lis r5, __vt__8cM3dGPla@ha
/* 805826F0  38 05 5C 58 */	addi r0, r5, __vt__8cM3dGPla@l
/* 805826F4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 805826F8  7C 80 07 35 */	extsh. r0, r4
/* 805826FC  40 81 00 08 */	ble lbl_80582704
/* 80582700  4B D4 C6 3C */	b __dl__FPv
lbl_80582704:
/* 80582704  7F E3 FB 78 */	mr r3, r31
/* 80582708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8058270C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80582710  7C 08 03 A6 */	mtlr r0
/* 80582714  38 21 00 10 */	addi r1, r1, 0x10
/* 80582718  4E 80 00 20 */	blr 
