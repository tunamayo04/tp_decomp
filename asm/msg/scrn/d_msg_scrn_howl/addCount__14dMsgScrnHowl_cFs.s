lbl_80243F58:
/* 80243F58  38 84 00 01 */	addi r4, r4, 1
/* 80243F5C  7C 80 07 34 */	extsh r0, r4
/* 80243F60  A8 63 21 36 */	lha r3, 0x2136(r3)
/* 80243F64  7C 00 18 00 */	cmpw r0, r3
/* 80243F68  41 80 00 0C */	blt lbl_80243F74
/* 80243F6C  7C 03 20 50 */	subf r0, r3, r4
/* 80243F70  7C 04 07 34 */	extsh r4, r0
lbl_80243F74:
/* 80243F74  7C 83 23 78 */	mr r3, r4
/* 80243F78  4E 80 00 20 */	blr 
