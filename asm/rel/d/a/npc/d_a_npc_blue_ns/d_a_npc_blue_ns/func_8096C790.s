lbl_8096C790:
/* 8096C790  80 83 00 00 */	lwz r4, 0(r3)
/* 8096C794  2C 04 00 00 */	cmpwi r4, 0
/* 8096C798  41 82 00 0C */	beq lbl_8096C7A4
/* 8096C79C  38 04 FF FF */	addi r0, r4, -1
/* 8096C7A0  90 03 00 00 */	stw r0, 0(r3)
lbl_8096C7A4:
/* 8096C7A4  80 63 00 00 */	lwz r3, 0(r3)
/* 8096C7A8  4E 80 00 20 */	blr 
