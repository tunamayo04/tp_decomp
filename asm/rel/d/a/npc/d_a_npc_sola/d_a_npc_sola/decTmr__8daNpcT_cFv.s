lbl_80AEEE3C:
/* 80AEEE3C  80 83 0D BC */	lwz r4, 0xdbc(r3)
/* 80AEEE40  2C 04 00 00 */	cmpwi r4, 0
/* 80AEEE44  4D 82 00 20 */	beqlr 
/* 80AEEE48  38 04 FF FF */	addi r0, r4, -1
/* 80AEEE4C  90 03 0D BC */	stw r0, 0xdbc(r3)
/* 80AEEE50  4E 80 00 20 */	blr 
