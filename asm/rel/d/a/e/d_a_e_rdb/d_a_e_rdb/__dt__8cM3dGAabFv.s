lbl_8076AC48:
/* 8076AC48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8076AC4C  7C 08 02 A6 */	mflr r0
/* 8076AC50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8076AC54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8076AC58  7C 7F 1B 79 */	or. r31, r3, r3
/* 8076AC5C  41 82 00 1C */	beq lbl_8076AC78
/* 8076AC60  3C A0 80 77 */	lis r5, __vt__8cM3dGAab@ha
/* 8076AC64  38 05 B9 80 */	addi r0, r5, __vt__8cM3dGAab@l
/* 8076AC68  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8076AC6C  7C 80 07 35 */	extsh. r0, r4
/* 8076AC70  40 81 00 08 */	ble lbl_8076AC78
/* 8076AC74  4B B6 40 C8 */	b __dl__FPv
lbl_8076AC78:
/* 8076AC78  7F E3 FB 78 */	mr r3, r31
/* 8076AC7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8076AC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8076AC84  7C 08 03 A6 */	mtlr r0
/* 8076AC88  38 21 00 10 */	addi r1, r1, 0x10
/* 8076AC8C  4E 80 00 20 */	blr 
