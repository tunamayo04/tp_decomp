lbl_806582AC:
/* 806582AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806582B0  7C 08 02 A6 */	mflr r0
/* 806582B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806582B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806582BC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806582C0  41 82 00 1C */	beq lbl_806582DC
/* 806582C4  3C A0 80 66 */	lis r5, __vt__8cM3dGSph@ha
/* 806582C8  38 05 84 D0 */	addi r0, r5, __vt__8cM3dGSph@l
/* 806582CC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 806582D0  7C 80 07 35 */	extsh. r0, r4
/* 806582D4  40 81 00 08 */	ble lbl_806582DC
/* 806582D8  4B C7 6A 64 */	b __dl__FPv
lbl_806582DC:
/* 806582DC  7F E3 FB 78 */	mr r3, r31
/* 806582E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806582E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806582E8  7C 08 03 A6 */	mtlr r0
/* 806582EC  38 21 00 10 */	addi r1, r1, 0x10
/* 806582F0  4E 80 00 20 */	blr 
