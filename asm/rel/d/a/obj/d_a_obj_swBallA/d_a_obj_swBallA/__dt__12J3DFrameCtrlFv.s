lbl_80CF3928:
/* 80CF3928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CF392C  7C 08 02 A6 */	mflr r0
/* 80CF3930  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CF3934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80CF3938  7C 7F 1B 79 */	or. r31, r3, r3
/* 80CF393C  41 82 00 1C */	beq lbl_80CF3958
/* 80CF3940  3C A0 80 CF */	lis r5, __vt__12J3DFrameCtrl@ha
/* 80CF3944  38 05 44 F8 */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 80CF3948  90 1F 00 00 */	stw r0, 0(r31)
/* 80CF394C  7C 80 07 35 */	extsh. r0, r4
/* 80CF3950  40 81 00 08 */	ble lbl_80CF3958
/* 80CF3954  4B 5D B3 E8 */	b __dl__FPv
lbl_80CF3958:
/* 80CF3958  7F E3 FB 78 */	mr r3, r31
/* 80CF395C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80CF3960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CF3964  7C 08 03 A6 */	mtlr r0
/* 80CF3968  38 21 00 10 */	addi r1, r1, 0x10
/* 80CF396C  4E 80 00 20 */	blr 
