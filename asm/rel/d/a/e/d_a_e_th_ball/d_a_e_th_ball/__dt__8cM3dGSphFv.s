lbl_807B7D5C:
/* 807B7D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807B7D60  7C 08 02 A6 */	mflr r0
/* 807B7D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 807B7D68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807B7D6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 807B7D70  41 82 00 1C */	beq lbl_807B7D8C
/* 807B7D74  3C A0 80 7C */	lis r5, __vt__8cM3dGSph@ha
/* 807B7D78  38 05 80 A0 */	addi r0, r5, __vt__8cM3dGSph@l
/* 807B7D7C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 807B7D80  7C 80 07 35 */	extsh. r0, r4
/* 807B7D84  40 81 00 08 */	ble lbl_807B7D8C
/* 807B7D88  4B B1 6F B4 */	b __dl__FPv
lbl_807B7D8C:
/* 807B7D8C  7F E3 FB 78 */	mr r3, r31
/* 807B7D90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807B7D94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807B7D98  7C 08 03 A6 */	mtlr r0
/* 807B7D9C  38 21 00 10 */	addi r1, r1, 0x10
/* 807B7DA0  4E 80 00 20 */	blr 
