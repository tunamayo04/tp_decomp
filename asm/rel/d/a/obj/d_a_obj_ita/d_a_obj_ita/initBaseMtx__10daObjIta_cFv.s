lbl_80C28788:
/* 80C28788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C2878C  7C 08 02 A6 */	mflr r0
/* 80C28790  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C28794  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80C28798  38 04 00 24 */	addi r0, r4, 0x24
/* 80C2879C  90 03 05 04 */	stw r0, 0x504(r3)
/* 80C287A0  48 00 00 15 */	bl setBaseMtx__10daObjIta_cFv
/* 80C287A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C287A8  7C 08 03 A6 */	mtlr r0
/* 80C287AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80C287B0  4E 80 00 20 */	blr 
