lbl_80BFD23C:
/* 80BFD23C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BFD240  7C 08 02 A6 */	mflr r0
/* 80BFD244  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BFD248  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BFD24C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BFD250  41 82 00 1C */	beq lbl_80BFD26C
/* 80BFD254  3C A0 80 C0 */	lis r5, __vt__10cCcD_GStts@ha
/* 80BFD258  38 05 D5 30 */	addi r0, r5, __vt__10cCcD_GStts@l
/* 80BFD25C  90 1F 00 00 */	stw r0, 0(r31)
/* 80BFD260  7C 80 07 35 */	extsh. r0, r4
/* 80BFD264  40 81 00 08 */	ble lbl_80BFD26C
/* 80BFD268  4B 6D 1A D4 */	b __dl__FPv
lbl_80BFD26C:
/* 80BFD26C  7F E3 FB 78 */	mr r3, r31
/* 80BFD270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BFD274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BFD278  7C 08 03 A6 */	mtlr r0
/* 80BFD27C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BFD280  4E 80 00 20 */	blr 
