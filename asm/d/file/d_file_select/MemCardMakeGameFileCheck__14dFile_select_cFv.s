lbl_8018F650:
/* 8018F650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8018F654  7C 08 02 A6 */	mflr r0
/* 8018F658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8018F65C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8018F660  7C 7F 1B 78 */	mr r31, r3
/* 8018F664  48 00 06 CD */	bl errorTxtChangeAnm__14dFile_select_cFv
/* 8018F668  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8018F66C  28 00 00 01 */	cmplwi r0, 1
/* 8018F670  40 82 00 58 */	bne lbl_8018F6C8
/* 8018F674  3C 60 80 3A */	lis r3, __ptmf_null@ha
/* 8018F678  38 83 21 80 */	addi r4, r3, __ptmf_null@l
/* 8018F67C  80 64 00 00 */	lwz r3, 0(r4)
/* 8018F680  80 04 00 04 */	lwz r0, 4(r4)
/* 8018F684  90 7F 02 84 */	stw r3, 0x284(r31)
/* 8018F688  90 1F 02 88 */	stw r0, 0x288(r31)
/* 8018F68C  80 04 00 08 */	lwz r0, 8(r4)
/* 8018F690  90 1F 02 8C */	stw r0, 0x28c(r31)
/* 8018F694  80 64 00 00 */	lwz r3, 0(r4)
/* 8018F698  80 04 00 04 */	lwz r0, 4(r4)
/* 8018F69C  90 7F 02 90 */	stw r3, 0x290(r31)
/* 8018F6A0  90 1F 02 94 */	stw r0, 0x294(r31)
/* 8018F6A4  80 04 00 08 */	lwz r0, 8(r4)
/* 8018F6A8  90 1F 02 98 */	stw r0, 0x298(r31)
/* 8018F6AC  38 60 00 00 */	li r3, 0
/* 8018F6B0  98 7F 02 73 */	stb r3, 0x273(r31)
/* 8018F6B4  38 00 00 18 */	li r0, 0x18
/* 8018F6B8  98 1F 02 74 */	stb r0, 0x274(r31)
/* 8018F6BC  38 00 00 02 */	li r0, 2
/* 8018F6C0  98 1F 02 71 */	stb r0, 0x271(r31)
/* 8018F6C4  98 7F 03 B1 */	stb r3, 0x3b1(r31)
lbl_8018F6C8:
/* 8018F6C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8018F6CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8018F6D0  7C 08 03 A6 */	mtlr r0
/* 8018F6D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8018F6D8  4E 80 00 20 */	blr 
