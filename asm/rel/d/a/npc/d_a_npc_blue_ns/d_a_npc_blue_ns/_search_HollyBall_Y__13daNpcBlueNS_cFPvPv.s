lbl_80969DE4:
/* 80969DE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80969DE8  7C 08 02 A6 */	mflr r0
/* 80969DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80969DF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80969DF4  7C 7F 1B 78 */	mr r31, r3
/* 80969DF8  4B 6A EE E8 */	b fopAc_IsActor__FPv
/* 80969DFC  2C 03 00 00 */	cmpwi r3, 0
/* 80969E00  40 82 00 0C */	bne lbl_80969E0C
/* 80969E04  38 60 00 00 */	li r3, 0
/* 80969E08  48 00 00 80 */	b lbl_80969E88
lbl_80969E0C:
/* 80969E0C  28 1F 00 00 */	cmplwi r31, 0
/* 80969E10  41 82 00 0C */	beq lbl_80969E1C
/* 80969E14  80 7F 00 04 */	lwz r3, 4(r31)
/* 80969E18  48 00 00 08 */	b lbl_80969E20
lbl_80969E1C:
/* 80969E1C  38 60 FF FF */	li r3, -1
lbl_80969E20:
/* 80969E20  4B 6B 83 18 */	b fpcM_IsCreating__FUi
/* 80969E24  2C 03 00 00 */	cmpwi r3, 0
/* 80969E28  41 82 00 0C */	beq lbl_80969E34
/* 80969E2C  38 60 00 00 */	li r3, 0
/* 80969E30  48 00 00 58 */	b lbl_80969E88
lbl_80969E34:
/* 80969E34  A8 1F 00 08 */	lha r0, 8(r31)
/* 80969E38  2C 00 02 FC */	cmpwi r0, 0x2fc
/* 80969E3C  41 82 00 0C */	beq lbl_80969E48
/* 80969E40  38 60 00 00 */	li r3, 0
/* 80969E44  48 00 00 44 */	b lbl_80969E88
lbl_80969E48:
/* 80969E48  38 00 00 00 */	li r0, 0
/* 80969E4C  88 7F 0C F0 */	lbz r3, 0xcf0(r31)
/* 80969E50  2C 03 00 08 */	cmpwi r3, 8
/* 80969E54  41 82 00 0C */	beq lbl_80969E60
/* 80969E58  2C 03 00 09 */	cmpwi r3, 9
/* 80969E5C  40 82 00 08 */	bne lbl_80969E64
lbl_80969E60:
/* 80969E60  38 00 00 01 */	li r0, 1
lbl_80969E64:
/* 80969E64  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80969E68  40 82 00 0C */	bne lbl_80969E74
/* 80969E6C  38 60 00 00 */	li r3, 0
/* 80969E70  48 00 00 18 */	b lbl_80969E88
lbl_80969E74:
/* 80969E74  2C 03 00 08 */	cmpwi r3, 8
/* 80969E78  41 82 00 0C */	beq lbl_80969E84
/* 80969E7C  38 60 00 00 */	li r3, 0
/* 80969E80  48 00 00 08 */	b lbl_80969E88
lbl_80969E84:
/* 80969E84  7F E3 FB 78 */	mr r3, r31
lbl_80969E88:
/* 80969E88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80969E8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80969E90  7C 08 03 A6 */	mtlr r0
/* 80969E94  38 21 00 10 */	addi r1, r1, 0x10
/* 80969E98  4E 80 00 20 */	blr 
