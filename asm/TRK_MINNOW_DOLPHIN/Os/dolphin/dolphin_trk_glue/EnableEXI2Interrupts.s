lbl_80371E10:
/* 80371E10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80371E14  7C 08 02 A6 */	mflr r0
/* 80371E18  3C 60 80 45 */	lis r3, data_8044F820@ha
/* 80371E1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80371E20  88 03 F8 20 */	lbz r0, data_8044F820@l(r3)
/* 80371E24  28 00 00 00 */	cmplwi r0, 0
/* 80371E28  40 82 00 20 */	bne lbl_80371E48
/* 80371E2C  3C 60 80 3D */	lis r3, gDBCommTable@ha
/* 80371E30  38 63 32 A8 */	addi r3, r3, gDBCommTable@l
/* 80371E34  81 83 00 04 */	lwz r12, 4(r3)
/* 80371E38  28 0C 00 00 */	cmplwi r12, 0
/* 80371E3C  41 82 00 0C */	beq lbl_80371E48
/* 80371E40  7D 89 03 A6 */	mtctr r12
/* 80371E44  4E 80 04 21 */	bctrl 
lbl_80371E48:
/* 80371E48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80371E4C  7C 08 03 A6 */	mtlr r0
/* 80371E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80371E54  4E 80 00 20 */	blr 
