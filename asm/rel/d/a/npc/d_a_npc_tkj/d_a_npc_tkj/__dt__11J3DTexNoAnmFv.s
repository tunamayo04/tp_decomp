lbl_80573E54:
/* 80573E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80573E58  7C 08 02 A6 */	mflr r0
/* 80573E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80573E60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80573E64  7C 7F 1B 79 */	or. r31, r3, r3
/* 80573E68  41 82 00 1C */	beq lbl_80573E84
/* 80573E6C  3C A0 80 57 */	lis r5, __vt__11J3DTexNoAnm@ha
/* 80573E70  38 05 68 50 */	addi r0, r5, __vt__11J3DTexNoAnm@l
/* 80573E74  90 1F 00 00 */	stw r0, 0(r31)
/* 80573E78  7C 80 07 35 */	extsh. r0, r4
/* 80573E7C  40 81 00 08 */	ble lbl_80573E84
/* 80573E80  4B D5 AE BC */	b __dl__FPv
lbl_80573E84:
/* 80573E84  7F E3 FB 78 */	mr r3, r31
/* 80573E88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80573E8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80573E90  7C 08 03 A6 */	mtlr r0
/* 80573E94  38 21 00 10 */	addi r1, r1, 0x10
/* 80573E98  4E 80 00 20 */	blr 
