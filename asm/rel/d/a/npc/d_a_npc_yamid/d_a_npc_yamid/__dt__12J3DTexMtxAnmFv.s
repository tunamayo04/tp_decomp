lbl_80B436E0:
/* 80B436E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B436E4  7C 08 02 A6 */	mflr r0
/* 80B436E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B436EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B436F0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B436F4  41 82 00 10 */	beq lbl_80B43704
/* 80B436F8  7C 80 07 35 */	extsh. r0, r4
/* 80B436FC  40 81 00 08 */	ble lbl_80B43704
/* 80B43700  4B 78 B6 3C */	b __dl__FPv
lbl_80B43704:
/* 80B43704  7F E3 FB 78 */	mr r3, r31
/* 80B43708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B4370C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B43710  7C 08 03 A6 */	mtlr r0
/* 80B43714  38 21 00 10 */	addi r1, r1, 0x10
/* 80B43718  4E 80 00 20 */	blr 
