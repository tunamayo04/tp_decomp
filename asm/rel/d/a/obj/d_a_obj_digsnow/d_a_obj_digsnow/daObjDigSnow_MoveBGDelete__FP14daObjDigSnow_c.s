lbl_80BDD5E4:
/* 80BDD5E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BDD5E8  7C 08 02 A6 */	mflr r0
/* 80BDD5EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BDD5F0  4B 49 B2 EC */	b MoveBGDelete__16dBgS_MoveBgActorFv
/* 80BDD5F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BDD5F8  7C 08 03 A6 */	mtlr r0
/* 80BDD5FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80BDD600  4E 80 00 20 */	blr 
