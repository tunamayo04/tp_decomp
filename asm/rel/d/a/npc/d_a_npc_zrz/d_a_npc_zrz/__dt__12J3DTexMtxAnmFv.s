lbl_80B9494C:
/* 80B9494C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B94950  7C 08 02 A6 */	mflr r0
/* 80B94954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B94958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B9495C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B94960  41 82 00 10 */	beq lbl_80B94970
/* 80B94964  7C 80 07 35 */	extsh. r0, r4
/* 80B94968  40 81 00 08 */	ble lbl_80B94970
/* 80B9496C  4B 73 A3 D0 */	b __dl__FPv
lbl_80B94970:
/* 80B94970  7F E3 FB 78 */	mr r3, r31
/* 80B94974  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B94978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B9497C  7C 08 03 A6 */	mtlr r0
/* 80B94980  38 21 00 10 */	addi r1, r1, 0x10
/* 80B94984  4E 80 00 20 */	blr 
