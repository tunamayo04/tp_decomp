lbl_80950F4C:
/* 80950F4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80950F50  7C 08 02 A6 */	mflr r0
/* 80950F54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80950F58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80950F5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80950F60  41 82 00 1C */	beq lbl_80950F7C
/* 80950F64  3C A0 80 95 */	lis r5, __vt__8cM3dGAab@ha
/* 80950F68  38 05 15 00 */	addi r0, r5, __vt__8cM3dGAab@l
/* 80950F6C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80950F70  7C 80 07 35 */	extsh. r0, r4
/* 80950F74  40 81 00 08 */	ble lbl_80950F7C
/* 80950F78  4B 97 DD C4 */	b __dl__FPv
lbl_80950F7C:
/* 80950F7C  7F E3 FB 78 */	mr r3, r31
/* 80950F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80950F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80950F88  7C 08 03 A6 */	mtlr r0
/* 80950F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80950F90  4E 80 00 20 */	blr 
