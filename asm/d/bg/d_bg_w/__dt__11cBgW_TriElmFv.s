lbl_800796F8:
/* 800796F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800796FC  7C 08 02 A6 */	mflr r0
/* 80079700  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079704  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80079708  7C 7F 1B 79 */	or. r31, r3, r3
/* 8007970C  41 82 00 30 */	beq lbl_8007973C
/* 80079710  3C 60 80 3B */	lis r3, __vt__11cBgW_TriElm@ha
/* 80079714  38 03 BB 9C */	addi r0, r3, __vt__11cBgW_TriElm@l
/* 80079718  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8007971C  41 82 00 10 */	beq lbl_8007972C
/* 80079720  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha
/* 80079724  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l
/* 80079728  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_8007972C:
/* 8007972C  7C 80 07 35 */	extsh. r0, r4
/* 80079730  40 81 00 0C */	ble lbl_8007973C
/* 80079734  7F E3 FB 78 */	mr r3, r31
/* 80079738  48 25 56 05 */	bl __dl__FPv
lbl_8007973C:
/* 8007973C  7F E3 FB 78 */	mr r3, r31
/* 80079740  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079748  7C 08 03 A6 */	mtlr r0
/* 8007974C  38 21 00 10 */	addi r1, r1, 0x10
/* 80079750  4E 80 00 20 */	blr 
