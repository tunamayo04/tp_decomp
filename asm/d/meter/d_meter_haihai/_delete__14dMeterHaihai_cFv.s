lbl_8020BDAC:
/* 8020BDAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020BDB0  7C 08 02 A6 */	mflr r0
/* 8020BDB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020BDB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020BDBC  7C 7F 1B 78 */	mr r31, r3
/* 8020BDC0  80 63 00 04 */	lwz r3, 4(r3)
/* 8020BDC4  28 03 00 00 */	cmplwi r3, 0
/* 8020BDC8  41 82 00 18 */	beq lbl_8020BDE0
/* 8020BDCC  38 80 00 01 */	li r4, 1
/* 8020BDD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BDD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BDD8  7D 89 03 A6 */	mtctr r12
/* 8020BDDC  4E 80 04 21 */	bctrl 
lbl_8020BDE0:
/* 8020BDE0  38 00 00 00 */	li r0, 0
/* 8020BDE4  90 1F 00 04 */	stw r0, 4(r31)
/* 8020BDE8  80 7F 00 08 */	lwz r3, 8(r31)
/* 8020BDEC  28 03 00 00 */	cmplwi r3, 0
/* 8020BDF0  41 82 00 18 */	beq lbl_8020BE08
/* 8020BDF4  38 80 00 01 */	li r4, 1
/* 8020BDF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BDFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BE00  7D 89 03 A6 */	mtctr r12
/* 8020BE04  4E 80 04 21 */	bctrl 
lbl_8020BE08:
/* 8020BE08  38 00 00 00 */	li r0, 0
/* 8020BE0C  90 1F 00 08 */	stw r0, 8(r31)
/* 8020BE10  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8020BE14  28 03 00 00 */	cmplwi r3, 0
/* 8020BE18  41 82 00 18 */	beq lbl_8020BE30
/* 8020BE1C  38 80 00 01 */	li r4, 1
/* 8020BE20  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE24  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BE28  7D 89 03 A6 */	mtctr r12
/* 8020BE2C  4E 80 04 21 */	bctrl 
lbl_8020BE30:
/* 8020BE30  38 00 00 00 */	li r0, 0
/* 8020BE34  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8020BE38  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8020BE3C  28 03 00 00 */	cmplwi r3, 0
/* 8020BE40  41 82 00 18 */	beq lbl_8020BE58
/* 8020BE44  38 80 00 01 */	li r4, 1
/* 8020BE48  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BE50  7D 89 03 A6 */	mtctr r12
/* 8020BE54  4E 80 04 21 */	bctrl 
lbl_8020BE58:
/* 8020BE58  38 00 00 00 */	li r0, 0
/* 8020BE5C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8020BE60  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8020BE64  28 03 00 00 */	cmplwi r3, 0
/* 8020BE68  41 82 00 18 */	beq lbl_8020BE80
/* 8020BE6C  38 80 00 01 */	li r4, 1
/* 8020BE70  81 83 00 00 */	lwz r12, 0(r3)
/* 8020BE74  81 8C 00 08 */	lwz r12, 8(r12)
/* 8020BE78  7D 89 03 A6 */	mtctr r12
/* 8020BE7C  4E 80 04 21 */	bctrl 
lbl_8020BE80:
/* 8020BE80  38 00 00 00 */	li r0, 0
/* 8020BE84  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8020BE88  38 60 00 01 */	li r3, 1
/* 8020BE8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020BE90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020BE94  7C 08 03 A6 */	mtlr r0
/* 8020BE98  38 21 00 10 */	addi r1, r1, 0x10
/* 8020BE9C  4E 80 00 20 */	blr 
