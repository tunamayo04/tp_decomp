lbl_80AEBE58:
/* 80AEBE58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AEBE5C  7C 08 02 A6 */	mflr r0
/* 80AEBE60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AEBE64  48 00 00 51 */	bl create__16daNpc_shopMaro_cFv
/* 80AEBE68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AEBE6C  7C 08 03 A6 */	mtlr r0
/* 80AEBE70  38 21 00 10 */	addi r1, r1, 0x10
/* 80AEBE74  4E 80 00 20 */	blr 
