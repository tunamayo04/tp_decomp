lbl_8084642C:
/* 8084642C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80846430  7C 08 02 A6 */	mflr r0
/* 80846434  90 01 00 14 */	stw r0, 0x14(r1)
/* 80846438  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8084643C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80846440  41 82 00 40 */	beq lbl_80846480
/* 80846444  3C 60 80 85 */	lis r3, data_80848F78@ha
/* 80846448  38 03 8F 78 */	addi r0, r3, data_80848F78@l
/* 8084644C  90 1F 00 00 */	stw r0, 0(r31)
/* 80846450  41 82 00 20 */	beq lbl_80846470
/* 80846454  3C 60 80 85 */	lis r3, __vt__19J3DMtxCalcNoAnmBase@ha
/* 80846458  38 03 8F A4 */	addi r0, r3, __vt__19J3DMtxCalcNoAnmBase@l
/* 8084645C  90 1F 00 00 */	stw r0, 0(r31)
/* 80846460  41 82 00 10 */	beq lbl_80846470
/* 80846464  3C 60 80 85 */	lis r3, __vt__10J3DMtxCalc@ha
/* 80846468  38 03 8F D0 */	addi r0, r3, __vt__10J3DMtxCalc@l
/* 8084646C  90 1F 00 00 */	stw r0, 0(r31)
lbl_80846470:
/* 80846470  7C 80 07 35 */	extsh. r0, r4
/* 80846474  40 81 00 0C */	ble lbl_80846480
/* 80846478  7F E3 FB 78 */	mr r3, r31
/* 8084647C  4B A8 88 C0 */	b __dl__FPv
lbl_80846480:
/* 80846480  7F E3 FB 78 */	mr r3, r31
/* 80846484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80846488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8084648C  7C 08 03 A6 */	mtlr r0
/* 80846490  38 21 00 10 */	addi r1, r1, 0x10
/* 80846494  4E 80 00 20 */	blr 
