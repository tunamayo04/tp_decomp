lbl_800E3880:
/* 800E3880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E3884  7C 08 02 A6 */	mflr r0
/* 800E3888  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E388C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800E3890  7C 7F 1B 78 */	mr r31, r3
/* 800E3894  48 07 BE 05 */	bl checkCarryStartLightBallA__9daPy_py_cFv
/* 800E3898  28 03 00 00 */	cmplwi r3, 0
/* 800E389C  41 82 00 14 */	beq lbl_800E38B0
/* 800E38A0  7F E3 FB 78 */	mr r3, r31
/* 800E38A4  4B FF FF 8D */	bl daAlink_checkLightBallA__FP10fopAc_ac_c
/* 800E38A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800E38AC  40 82 00 20 */	bne lbl_800E38CC
lbl_800E38B0:
/* 800E38B0  48 07 BE 81 */	bl checkCarryStartLightBallB__9daPy_py_cFv
/* 800E38B4  28 03 00 00 */	cmplwi r3, 0
/* 800E38B8  41 82 00 1C */	beq lbl_800E38D4
/* 800E38BC  7F E3 FB 78 */	mr r3, r31
/* 800E38C0  4B FF FF 99 */	bl daAlink_checkLightBallB__FP10fopAc_ac_c
/* 800E38C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800E38C8  41 82 00 0C */	beq lbl_800E38D4
lbl_800E38CC:
/* 800E38CC  7F E3 FB 78 */	mr r3, r31
/* 800E38D0  48 00 00 08 */	b lbl_800E38D8
lbl_800E38D4:
/* 800E38D4  38 60 00 00 */	li r3, 0
lbl_800E38D8:
/* 800E38D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800E38DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E38E0  7C 08 03 A6 */	mtlr r0
/* 800E38E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800E38E8  4E 80 00 20 */	blr 
