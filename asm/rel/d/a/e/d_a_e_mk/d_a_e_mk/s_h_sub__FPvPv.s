lbl_80714534:
/* 80714534  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80714538  7C 08 02 A6 */	mflr r0
/* 8071453C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80714540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80714544  7C 7F 1B 78 */	mr r31, r3
/* 80714548  4B 90 47 98 */	b fopAc_IsActor__FPv
/* 8071454C  2C 03 00 00 */	cmpwi r3, 0
/* 80714550  41 82 00 3C */	beq lbl_8071458C
/* 80714554  A8 1F 00 08 */	lha r0, 8(r31)
/* 80714558  2C 00 00 33 */	cmpwi r0, 0x33
/* 8071455C  40 82 00 30 */	bne lbl_8071458C
/* 80714560  3C 60 80 72 */	lis r3, target_info_count@ha
/* 80714564  38 83 CB 8C */	addi r4, r3, target_info_count@l
/* 80714568  80 A4 00 00 */	lwz r5, 0(r4)
/* 8071456C  2C 05 00 14 */	cmpwi r5, 0x14
/* 80714570  40 80 00 1C */	bge lbl_8071458C
/* 80714574  54 A0 10 3A */	slwi r0, r5, 2
/* 80714578  3C 60 80 72 */	lis r3, target_info@ha
/* 8071457C  38 63 CB 3C */	addi r3, r3, target_info@l
/* 80714580  7F E3 01 2E */	stwx r31, r3, r0
/* 80714584  38 05 00 01 */	addi r0, r5, 1
/* 80714588  90 04 00 00 */	stw r0, 0(r4)
lbl_8071458C:
/* 8071458C  38 60 00 00 */	li r3, 0
/* 80714590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80714594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80714598  7C 08 03 A6 */	mtlr r0
/* 8071459C  38 21 00 10 */	addi r1, r1, 0x10
/* 807145A0  4E 80 00 20 */	blr 
