lbl_80510B34:
/* 80510B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80510B38  7C 08 02 A6 */	mflr r0
/* 80510B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80510B40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80510B44  7C 7F 1B 78 */	mr r31, r3
/* 80510B48  4B B0 81 98 */	b fopAc_IsActor__FPv
/* 80510B4C  2C 03 00 00 */	cmpwi r3, 0
/* 80510B50  41 82 00 30 */	beq lbl_80510B80
/* 80510B54  A8 1F 00 08 */	lha r0, 8(r31)
/* 80510B58  2C 00 01 D4 */	cmpwi r0, 0x1d4
/* 80510B5C  40 82 00 24 */	bne lbl_80510B80
/* 80510B60  88 1F 05 BA */	lbz r0, 0x5ba(r31)
/* 80510B64  28 00 00 00 */	cmplwi r0, 0
/* 80510B68  41 82 00 18 */	beq lbl_80510B80
/* 80510B6C  3C 60 80 52 */	lis r3, rd_count@ha
/* 80510B70  38 83 93 34 */	addi r4, r3, rd_count@l
/* 80510B74  80 64 00 00 */	lwz r3, 0(r4)
/* 80510B78  38 03 00 01 */	addi r0, r3, 1
/* 80510B7C  90 04 00 00 */	stw r0, 0(r4)
lbl_80510B80:
/* 80510B80  38 60 00 00 */	li r3, 0
/* 80510B84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80510B88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80510B8C  7C 08 03 A6 */	mtlr r0
/* 80510B90  38 21 00 10 */	addi r1, r1, 0x10
/* 80510B94  4E 80 00 20 */	blr 
