lbl_80229768:
/* 80229768  A8 03 04 0C */	lha r0, 0x40c(r3)
/* 8022976C  54 00 08 3C */	slwi r0, r0, 1
/* 80229770  7C A3 02 14 */	add r5, r3, r0
/* 80229774  B0 85 00 0C */	sth r4, 0xc(r5)
/* 80229778  A8 83 04 0C */	lha r4, 0x40c(r3)
/* 8022977C  38 04 00 01 */	addi r0, r4, 1
/* 80229780  B0 03 04 0C */	sth r0, 0x40c(r3)
/* 80229784  4E 80 00 20 */	blr 
