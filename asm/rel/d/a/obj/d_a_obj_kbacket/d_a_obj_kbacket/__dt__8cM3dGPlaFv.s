lbl_80587558:
/* 80587558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8058755C  7C 08 02 A6 */	mflr r0
/* 80587560  90 01 00 14 */	stw r0, 0x14(r1)
/* 80587564  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80587568  7C 7F 1B 79 */	or. r31, r3, r3
/* 8058756C  41 82 00 1C */	beq lbl_80587588
/* 80587570  3C A0 80 58 */	lis r5, __vt__8cM3dGPla@ha
/* 80587574  38 05 7F 48 */	addi r0, r5, __vt__8cM3dGPla@l
/* 80587578  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8058757C  7C 80 07 35 */	extsh. r0, r4
/* 80587580  40 81 00 08 */	ble lbl_80587588
/* 80587584  4B D4 77 B8 */	b __dl__FPv
lbl_80587588:
/* 80587588  7F E3 FB 78 */	mr r3, r31
/* 8058758C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80587590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80587594  7C 08 03 A6 */	mtlr r0
/* 80587598  38 21 00 10 */	addi r1, r1, 0x10
/* 8058759C  4E 80 00 20 */	blr 
