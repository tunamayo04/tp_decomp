lbl_80AD4624:
/* 80AD4624  80 83 0D BC */	lwz r4, 0xdbc(r3)
/* 80AD4628  2C 04 00 00 */	cmpwi r4, 0
/* 80AD462C  4D 82 00 20 */	beqlr 
/* 80AD4630  38 04 FF FF */	addi r0, r4, -1
/* 80AD4634  90 03 0D BC */	stw r0, 0xdbc(r3)
/* 80AD4638  4E 80 00 20 */	blr 
