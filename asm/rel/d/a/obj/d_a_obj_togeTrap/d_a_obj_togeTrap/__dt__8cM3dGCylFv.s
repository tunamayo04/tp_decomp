lbl_80D18158:
/* 80D18158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D1815C  7C 08 02 A6 */	mflr r0
/* 80D18160  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D18164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D18168  7C 7F 1B 79 */	or. r31, r3, r3
/* 80D1816C  41 82 00 1C */	beq lbl_80D18188
/* 80D18170  3C A0 80 D2 */	lis r5, __vt__8cM3dGCyl@ha
/* 80D18174  38 05 90 48 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 80D18178  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80D1817C  7C 80 07 35 */	extsh. r0, r4
/* 80D18180  40 81 00 08 */	ble lbl_80D18188
/* 80D18184  4B 5B 6B B8 */	b __dl__FPv
lbl_80D18188:
/* 80D18188  7F E3 FB 78 */	mr r3, r31
/* 80D1818C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D18190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D18194  7C 08 03 A6 */	mtlr r0
/* 80D18198  38 21 00 10 */	addi r1, r1, 0x10
/* 80D1819C  4E 80 00 20 */	blr 
