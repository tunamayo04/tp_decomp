lbl_800216B4:
/* 800216B4  A8 83 00 28 */	lha r4, 0x28(r3)
/* 800216B8  38 04 00 01 */	addi r0, r4, 1
/* 800216BC  B0 03 00 28 */	sth r0, 0x28(r3)
/* 800216C0  4E 80 00 20 */	blr 
