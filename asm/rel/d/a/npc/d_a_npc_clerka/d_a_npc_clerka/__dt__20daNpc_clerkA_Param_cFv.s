lbl_809956D4:
/* 809956D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809956D8  7C 08 02 A6 */	mflr r0
/* 809956DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809956E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809956E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 809956E8  41 82 00 1C */	beq lbl_80995704
/* 809956EC  3C A0 80 99 */	lis r5, __vt__20daNpc_clerkA_Param_c@ha
/* 809956F0  38 05 5E 0C */	addi r0, r5, __vt__20daNpc_clerkA_Param_c@l
/* 809956F4  90 1F 00 00 */	stw r0, 0(r31)
/* 809956F8  7C 80 07 35 */	extsh. r0, r4
/* 809956FC  40 81 00 08 */	ble lbl_80995704
/* 80995700  4B 93 96 3C */	b __dl__FPv
lbl_80995704:
/* 80995704  7F E3 FB 78 */	mr r3, r31
/* 80995708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8099570C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80995710  7C 08 03 A6 */	mtlr r0
/* 80995714  38 21 00 10 */	addi r1, r1, 0x10
/* 80995718  4E 80 00 20 */	blr 
