lbl_8054A8DC:
/* 8054A8DC  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 8054A8E0  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 8054A8E4  54 60 18 38 */	slwi r0, r3, 3
/* 8054A8E8  7C 64 02 14 */	add r3, r4, r0
/* 8054A8EC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 8054A8F0  4E 80 00 20 */	blr 
