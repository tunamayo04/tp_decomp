lbl_80015590:
/* 80015590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015594  7C 08 02 A6 */	mflr r0
/* 80015598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001559C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800155A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 800155A4  41 82 00 1C */	beq lbl_800155C0
/* 800155A8  3C A0 80 3A */	lis r5, __vt__11J3DUClipper@ha
/* 800155AC  38 05 34 98 */	addi r0, r5, __vt__11J3DUClipper@l
/* 800155B0  90 1F 00 00 */	stw r0, 0(r31)
/* 800155B4  7C 80 07 35 */	extsh. r0, r4
/* 800155B8  40 81 00 08 */	ble lbl_800155C0
/* 800155BC  48 2B 97 81 */	bl __dl__FPv
lbl_800155C0:
/* 800155C0  7F E3 FB 78 */	mr r3, r31
/* 800155C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800155C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800155CC  7C 08 03 A6 */	mtlr r0
/* 800155D0  38 21 00 10 */	addi r1, r1, 0x10
/* 800155D4  4E 80 00 20 */	blr 
