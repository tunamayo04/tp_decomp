lbl_80535DA8:
/* 80535DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80535DAC  7C 08 02 A6 */	mflr r0
/* 80535DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80535DB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80535DB8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80535DBC  41 82 00 1C */	beq lbl_80535DD8
/* 80535DC0  3C A0 80 53 */	lis r5, __vt__8cM3dGCyl@ha
/* 80535DC4  38 05 6A E0 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 80535DC8  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80535DCC  7C 80 07 35 */	extsh. r0, r4
/* 80535DD0  40 81 00 08 */	ble lbl_80535DD8
/* 80535DD4  4B D9 8F 68 */	b __dl__FPv
lbl_80535DD8:
/* 80535DD8  7F E3 FB 78 */	mr r3, r31
/* 80535DDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80535DE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80535DE4  7C 08 03 A6 */	mtlr r0
/* 80535DE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80535DEC  4E 80 00 20 */	blr 
