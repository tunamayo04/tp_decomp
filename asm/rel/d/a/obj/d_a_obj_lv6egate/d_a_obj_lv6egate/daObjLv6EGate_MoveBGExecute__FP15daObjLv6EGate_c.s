lbl_80C829EC:
/* 80C829EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C829F0  7C 08 02 A6 */	mflr r0
/* 80C829F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C829F8  4B 3F 5F 58 */	b MoveBGExecute__16dBgS_MoveBgActorFv
/* 80C829FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C82A00  7C 08 03 A6 */	mtlr r0
/* 80C82A04  38 21 00 10 */	addi r1, r1, 0x10
/* 80C82A08  4E 80 00 20 */	blr 
