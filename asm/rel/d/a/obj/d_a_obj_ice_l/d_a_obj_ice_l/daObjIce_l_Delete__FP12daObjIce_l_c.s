lbl_80C20088:
/* 80C20088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C2008C  7C 08 02 A6 */	mflr r0
/* 80C20090  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C20094  4B 45 88 48 */	b MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C20098  38 60 00 01 */	li r3, 1
/* 80C2009C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C200A0  7C 08 03 A6 */	mtlr r0
/* 80C200A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80C200A8  4E 80 00 20 */	blr 
