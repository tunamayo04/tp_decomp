lbl_80725FF0:
/* 80725FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80725FF4  7C 08 02 A6 */	mflr r0
/* 80725FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80725FFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80726000  7C 7F 1B 78 */	mr r31, r3
/* 80726004  4B 8F 2C DC */	b fopAc_IsActor__FPv
/* 80726008  2C 03 00 00 */	cmpwi r3, 0
/* 8072600C  41 82 00 48 */	beq lbl_80726054
/* 80726010  A8 1F 00 08 */	lha r0, 8(r31)
/* 80726014  2C 00 02 FC */	cmpwi r0, 0x2fc
/* 80726018  40 82 00 3C */	bne lbl_80726054
/* 8072601C  88 1F 0C F0 */	lbz r0, 0xcf0(r31)
/* 80726020  2C 00 00 05 */	cmpwi r0, 5
/* 80726024  40 82 00 30 */	bne lbl_80726054
/* 80726028  3C 60 80 73 */	lis r3, target_info_count@ha
/* 8072602C  38 83 98 78 */	addi r4, r3, target_info_count@l
/* 80726030  80 A4 00 00 */	lwz r5, 0(r4)
/* 80726034  2C 05 00 14 */	cmpwi r5, 0x14
/* 80726038  40 80 00 1C */	bge lbl_80726054
/* 8072603C  54 A0 10 3A */	slwi r0, r5, 2
/* 80726040  3C 60 80 73 */	lis r3, target_info@ha
/* 80726044  38 63 98 28 */	addi r3, r3, target_info@l
/* 80726048  7F E3 01 2E */	stwx r31, r3, r0
/* 8072604C  38 05 00 01 */	addi r0, r5, 1
/* 80726050  90 04 00 00 */	stw r0, 0(r4)
lbl_80726054:
/* 80726054  38 60 00 00 */	li r3, 0
/* 80726058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8072605C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80726060  7C 08 03 A6 */	mtlr r0
/* 80726064  38 21 00 10 */	addi r1, r1, 0x10
/* 80726068  4E 80 00 20 */	blr 
