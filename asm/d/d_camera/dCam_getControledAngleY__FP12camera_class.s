lbl_80181614:
/* 80181614  80 03 08 54 */	lwz r0, 0x854(r3)
/* 80181618  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8018161C  41 82 00 0C */	beq lbl_80181628
/* 80181620  A8 63 02 AA */	lha r3, 0x2aa(r3)
/* 80181624  4E 80 00 20 */	blr 
lbl_80181628:
/* 80181628  A8 63 02 D4 */	lha r3, 0x2d4(r3)
/* 8018162C  4E 80 00 20 */	blr 
