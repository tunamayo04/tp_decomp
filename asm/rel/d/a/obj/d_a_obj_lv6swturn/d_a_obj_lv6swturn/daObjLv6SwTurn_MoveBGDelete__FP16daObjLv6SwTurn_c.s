lbl_80C84630:
/* 80C84630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C84634  7C 08 02 A6 */	mflr r0
/* 80C84638  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8463C  4B 3F 42 A0 */	b MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C84640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C84644  7C 08 03 A6 */	mtlr r0
/* 80C84648  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8464C  4E 80 00 20 */	blr 
