lbl_8058D6E8:
/* 8058D6E8  3C 80 80 59 */	lis r4, data_8058DD50@ha
/* 8058D6EC  38 84 DD 50 */	addi r4, r4, data_8058DD50@l
/* 8058D6F0  A8 04 00 1A */	lha r0, 0x1a(r4)
/* 8058D6F4  B0 03 05 B4 */	sth r0, 0x5b4(r3)
/* 8058D6F8  38 00 00 00 */	li r0, 0
/* 8058D6FC  B0 03 06 10 */	sth r0, 0x610(r3)
/* 8058D700  B0 03 06 12 */	sth r0, 0x612(r3)
/* 8058D704  38 00 00 02 */	li r0, 2
/* 8058D708  90 03 05 B0 */	stw r0, 0x5b0(r3)
/* 8058D70C  4E 80 00 20 */	blr 
