lbl_80CFDDE4:
/* 80CFDDE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CFDDE8  7C 08 02 A6 */	mflr r0
/* 80CFDDEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CFDDF0  4B FF FF 7D */	bl _delete__12daObjSword_cFv
/* 80CFDDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CFDDF8  7C 08 03 A6 */	mtlr r0
/* 80CFDDFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80CFDE00  4E 80 00 20 */	blr 
