lbl_80563904:
/* 80563904  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80563908  7C 08 02 A6 */	mflr r0
/* 8056390C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80563910  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80563914  7C 7F 1B 79 */	or. r31, r3, r3
/* 80563918  41 82 00 1C */	beq lbl_80563934
/* 8056391C  3C A0 80 56 */	lis r5, __vt__8cM3dGCyl@ha
/* 80563920  38 05 5C 98 */	addi r0, r5, __vt__8cM3dGCyl@l
/* 80563924  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80563928  7C 80 07 35 */	extsh. r0, r4
/* 8056392C  40 81 00 08 */	ble lbl_80563934
/* 80563930  4B D6 B4 0C */	b __dl__FPv
lbl_80563934:
/* 80563934  7F E3 FB 78 */	mr r3, r31
/* 80563938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8056393C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80563940  7C 08 03 A6 */	mtlr r0
/* 80563944  38 21 00 10 */	addi r1, r1, 0x10
/* 80563948  4E 80 00 20 */	blr 
