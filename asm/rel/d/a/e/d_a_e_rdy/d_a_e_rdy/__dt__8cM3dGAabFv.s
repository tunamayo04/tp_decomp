lbl_80779528:
/* 80779528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8077952C  7C 08 02 A6 */	mflr r0
/* 80779530  90 01 00 14 */	stw r0, 0x14(r1)
/* 80779534  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80779538  7C 7F 1B 79 */	or. r31, r3, r3
/* 8077953C  41 82 00 1C */	beq lbl_80779558
/* 80779540  3C A0 80 78 */	lis r5, __vt__8cM3dGAab@ha
/* 80779544  38 05 A7 BC */	addi r0, r5, __vt__8cM3dGAab@l
/* 80779548  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8077954C  7C 80 07 35 */	extsh. r0, r4
/* 80779550  40 81 00 08 */	ble lbl_80779558
/* 80779554  4B B5 57 E8 */	b __dl__FPv
lbl_80779558:
/* 80779558  7F E3 FB 78 */	mr r3, r31
/* 8077955C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80779560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80779564  7C 08 03 A6 */	mtlr r0
/* 80779568  38 21 00 10 */	addi r1, r1, 0x10
/* 8077956C  4E 80 00 20 */	blr 
