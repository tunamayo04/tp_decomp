lbl_8058E52C:
/* 8058E52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8058E530  7C 08 02 A6 */	mflr r0
/* 8058E534  90 01 00 14 */	stw r0, 0x14(r1)
/* 8058E538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8058E53C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8058E540  41 82 00 1C */	beq lbl_8058E55C
/* 8058E544  3C A0 80 59 */	lis r5, __vt__8cM3dGCyl@ha
/* 8058E548  38 05 F2 68 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 8058E54C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8058E550  7C 80 07 35 */	extsh. r0, r4
/* 8058E554  40 81 00 08 */	ble lbl_8058E55C
/* 8058E558  4B D4 07 E4 */	b __dl__FPv
lbl_8058E55C:
/* 8058E55C  7F E3 FB 78 */	mr r3, r31
/* 8058E560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8058E564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8058E568  7C 08 03 A6 */	mtlr r0
/* 8058E56C  38 21 00 10 */	addi r1, r1, 0x10
/* 8058E570  4E 80 00 20 */	blr 
