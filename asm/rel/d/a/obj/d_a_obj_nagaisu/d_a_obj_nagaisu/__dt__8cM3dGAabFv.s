lbl_80C9FC94:
/* 80C9FC94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C9FC98  7C 08 02 A6 */	mflr r0
/* 80C9FC9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C9FCA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C9FCA4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C9FCA8  41 82 00 1C */	beq lbl_80C9FCC4
/* 80C9FCAC  3C A0 80 CA */	lis r5, __vt__8cM3dGAab@ha
/* 80C9FCB0  38 05 04 68 */	addi r0, r5, __vt__8cM3dGAab@l
/* 80C9FCB4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80C9FCB8  7C 80 07 35 */	extsh. r0, r4
/* 80C9FCBC  40 81 00 08 */	ble lbl_80C9FCC4
/* 80C9FCC0  4B 62 F0 7C */	b __dl__FPv
lbl_80C9FCC4:
/* 80C9FCC4  7F E3 FB 78 */	mr r3, r31
/* 80C9FCC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C9FCCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C9FCD0  7C 08 03 A6 */	mtlr r0
/* 80C9FCD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80C9FCD8  4E 80 00 20 */	blr 
