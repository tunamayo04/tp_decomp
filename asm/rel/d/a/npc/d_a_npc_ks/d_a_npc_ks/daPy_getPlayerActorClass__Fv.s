lbl_80A5DBC4:
/* 80A5DBC4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80A5DBC8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80A5DBCC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80A5DBD0  4E 80 00 20 */	blr 
