lbl_806051D8:
/* 806051D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806051DC  7C 08 02 A6 */	mflr r0
/* 806051E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 806051E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806051E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 806051EC  41 82 00 1C */	beq lbl_80605208
/* 806051F0  3C A0 80 60 */	lis r5, __vt__8cM3dGCyl@ha
/* 806051F4  38 05 55 A8 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 806051F8  90 1F 00 14 */	stw r0, 0x14(r31)
/* 806051FC  7C 80 07 35 */	extsh. r0, r4
/* 80605200  40 81 00 08 */	ble lbl_80605208
/* 80605204  4B CC 9B 38 */	b __dl__FPv
lbl_80605208:
/* 80605208  7F E3 FB 78 */	mr r3, r31
/* 8060520C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80605210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80605214  7C 08 03 A6 */	mtlr r0
/* 80605218  38 21 00 10 */	addi r1, r1, 0x10
/* 8060521C  4E 80 00 20 */	blr 
