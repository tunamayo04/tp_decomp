lbl_80157810:
/* 80157810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80157814  7C 08 02 A6 */	mflr r0
/* 80157818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015781C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80157820  7C 7F 1B 79 */	or. r31, r3, r3
/* 80157824  41 82 00 1C */	beq lbl_80157840
/* 80157828  3C A0 80 3B */	lis r5, __vt__17daNpcCd_HIO_Jnt_c@ha
/* 8015782C  38 05 61 84 */	addi r0, r5, __vt__17daNpcCd_HIO_Jnt_c@l
/* 80157830  90 1F 00 00 */	stw r0, 0(r31)
/* 80157834  7C 80 07 35 */	extsh. r0, r4
/* 80157838  40 81 00 08 */	ble lbl_80157840
/* 8015783C  48 17 75 01 */	bl __dl__FPv
lbl_80157840:
/* 80157840  7F E3 FB 78 */	mr r3, r31
/* 80157844  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80157848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015784C  7C 08 03 A6 */	mtlr r0
/* 80157850  38 21 00 10 */	addi r1, r1, 0x10
/* 80157854  4E 80 00 20 */	blr 
