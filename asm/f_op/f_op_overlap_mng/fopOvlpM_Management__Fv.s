lbl_8001E650:
/* 8001E650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001E654  7C 08 02 A6 */	mflr r0
/* 8001E658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001E65C  80 6D 80 30 */	lwz r3, l_fopOvlpM_overlap(r13)
/* 8001E660  28 03 00 00 */	cmplwi r3, 0
/* 8001E664  41 82 00 24 */	beq lbl_8001E688
/* 8001E668  48 00 03 89 */	bl fopOvlpReq_Handler__FP21overlap_request_class
/* 8001E66C  2C 03 00 06 */	cmpwi r3, 6
/* 8001E670  40 80 00 18 */	bge lbl_8001E688
/* 8001E674  2C 03 00 03 */	cmpwi r3, 3
/* 8001E678  40 80 00 08 */	bge lbl_8001E680
/* 8001E67C  48 00 00 0C */	b lbl_8001E688
lbl_8001E680:
/* 8001E680  38 00 00 00 */	li r0, 0
/* 8001E684  90 0D 80 30 */	stw r0, l_fopOvlpM_overlap(r13)
lbl_8001E688:
/* 8001E688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001E68C  7C 08 03 A6 */	mtlr r0
/* 8001E690  38 21 00 10 */	addi r1, r1, 0x10
/* 8001E694  4E 80 00 20 */	blr 
