lbl_807576B4:
/* 807576B4  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 807576B8  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 807576BC  54 60 18 38 */	slwi r0, r3, 3
/* 807576C0  7C 64 02 14 */	add r3, r4, r0
/* 807576C4  88 63 5D B0 */	lbz r3, 0x5db0(r3)
/* 807576C8  7C 63 07 74 */	extsb r3, r3
/* 807576CC  4E 80 00 20 */	blr 
