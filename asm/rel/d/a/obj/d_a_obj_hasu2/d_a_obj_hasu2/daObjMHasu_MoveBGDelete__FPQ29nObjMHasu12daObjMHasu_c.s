lbl_80C18974:
/* 80C18974  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C18978  7C 08 02 A6 */	mflr r0
/* 80C1897C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C18980  4B 45 FF 5C */	b MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C18984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C18988  7C 08 03 A6 */	mtlr r0
/* 80C1898C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C18990  4E 80 00 20 */	blr 
