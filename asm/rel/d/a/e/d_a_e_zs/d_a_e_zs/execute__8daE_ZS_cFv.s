lbl_80834650:
/* 80834650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80834654  7C 08 02 A6 */	mflr r0
/* 80834658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8083465C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80834660  7C 7F 1B 78 */	mr r31, r3
/* 80834664  88 63 06 70 */	lbz r3, 0x670(r3)
/* 80834668  28 03 00 00 */	cmplwi r3, 0
/* 8083466C  41 82 00 0C */	beq lbl_80834678
/* 80834670  38 03 FF FF */	addi r0, r3, -1
/* 80834674  98 1F 06 70 */	stb r0, 0x670(r31)
lbl_80834678:
/* 80834678  88 7F 06 71 */	lbz r3, 0x671(r31)
/* 8083467C  28 03 00 00 */	cmplwi r3, 0
/* 80834680  41 82 00 0C */	beq lbl_8083468C
/* 80834684  38 03 FF FF */	addi r0, r3, -1
/* 80834688  98 1F 06 71 */	stb r0, 0x671(r31)
lbl_8083468C:
/* 8083468C  7F E3 FB 78 */	mr r3, r31
/* 80834690  4B FF FC 39 */	bl action__8daE_ZS_cFv
/* 80834694  7F E3 FB 78 */	mr r3, r31
/* 80834698  4B FF FD E1 */	bl mtx_set__8daE_ZS_cFv
/* 8083469C  7F E3 FB 78 */	mr r3, r31
/* 808346A0  4B FF FE 79 */	bl cc_set__8daE_ZS_cFv
/* 808346A4  38 60 00 01 */	li r3, 1
/* 808346A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808346AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808346B0  7C 08 03 A6 */	mtlr r0
/* 808346B4  38 21 00 10 */	addi r1, r1, 0x10
/* 808346B8  4E 80 00 20 */	blr 
