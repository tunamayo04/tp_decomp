lbl_80B6D77C:
/* 80B6D77C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B6D780  7C 08 02 A6 */	mflr r0
/* 80B6D784  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B6D788  4B FF EB 49 */	bl create__12daNpc_Zant_cFv
/* 80B6D78C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B6D790  7C 08 03 A6 */	mtlr r0
/* 80B6D794  38 21 00 10 */	addi r1, r1, 0x10
/* 80B6D798  4E 80 00 20 */	blr 
