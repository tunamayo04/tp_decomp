lbl_8057D600:
/* 8057D600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057D604  7C 08 02 A6 */	mflr r0
/* 8057D608  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057D60C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8057D610  7C 7F 1B 79 */	or. r31, r3, r3
/* 8057D614  41 82 00 1C */	beq lbl_8057D630
/* 8057D618  3C A0 80 58 */	lis r5, __vt__8cM3dGCyl@ha
/* 8057D61C  38 05 F8 54 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 8057D620  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8057D624  7C 80 07 35 */	extsh. r0, r4
/* 8057D628  40 81 00 08 */	ble lbl_8057D630
/* 8057D62C  4B D5 17 10 */	b __dl__FPv
lbl_8057D630:
/* 8057D630  7F E3 FB 78 */	mr r3, r31
/* 8057D634  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8057D638  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057D63C  7C 08 03 A6 */	mtlr r0
/* 8057D640  38 21 00 10 */	addi r1, r1, 0x10
/* 8057D644  4E 80 00 20 */	blr 
