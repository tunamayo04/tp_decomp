lbl_8057D648:
/* 8057D648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057D64C  7C 08 02 A6 */	mflr r0
/* 8057D650  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057D654  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8057D658  7C 7F 1B 79 */	or. r31, r3, r3
/* 8057D65C  41 82 00 1C */	beq lbl_8057D678
/* 8057D660  3C A0 80 58 */	lis r5, __vt__8cM3dGAab@ha
/* 8057D664  38 05 F8 60 */	addi r0, r5, __vt__8cM3dGAab@l
/* 8057D668  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8057D66C  7C 80 07 35 */	extsh. r0, r4
/* 8057D670  40 81 00 08 */	ble lbl_8057D678
/* 8057D674  4B D5 16 C8 */	b __dl__FPv
lbl_8057D678:
/* 8057D678  7F E3 FB 78 */	mr r3, r31
/* 8057D67C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8057D680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057D684  7C 08 03 A6 */	mtlr r0
/* 8057D688  38 21 00 10 */	addi r1, r1, 0x10
/* 8057D68C  4E 80 00 20 */	blr 
