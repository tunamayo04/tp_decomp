lbl_80C616F0:
/* 80C616F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C616F4  7C 08 02 A6 */	mflr r0
/* 80C616F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C616FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C61700  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C61704  41 82 00 30 */	beq lbl_80C61734
/* 80C61708  3C 60 80 C6 */	lis r3, __vt__10dCcD_GStts@ha
/* 80C6170C  38 03 1C 90 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 80C61710  90 1F 00 00 */	stw r0, 0(r31)
/* 80C61714  41 82 00 10 */	beq lbl_80C61724
/* 80C61718  3C 60 80 C6 */	lis r3, __vt__10cCcD_GStts@ha
/* 80C6171C  38 03 1C 84 */	addi r0, r3, __vt__10cCcD_GStts@l
/* 80C61720  90 1F 00 00 */	stw r0, 0(r31)
lbl_80C61724:
/* 80C61724  7C 80 07 35 */	extsh. r0, r4
/* 80C61728  40 81 00 0C */	ble lbl_80C61734
/* 80C6172C  7F E3 FB 78 */	mr r3, r31
/* 80C61730  4B 66 D6 0C */	b __dl__FPv
lbl_80C61734:
/* 80C61734  7F E3 FB 78 */	mr r3, r31
/* 80C61738  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C6173C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C61740  7C 08 03 A6 */	mtlr r0
/* 80C61744  38 21 00 10 */	addi r1, r1, 0x10
/* 80C61748  4E 80 00 20 */	blr 
