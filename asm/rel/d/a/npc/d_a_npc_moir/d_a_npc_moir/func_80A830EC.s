lbl_80A830EC:
/* 80A830EC  80 83 00 00 */	lwz r4, 0(r3)
/* 80A830F0  2C 04 00 00 */	cmpwi r4, 0
/* 80A830F4  41 82 00 0C */	beq lbl_80A83100
/* 80A830F8  38 04 FF FF */	addi r0, r4, -1
/* 80A830FC  90 03 00 00 */	stw r0, 0(r3)
lbl_80A83100:
/* 80A83100  80 63 00 00 */	lwz r3, 0(r3)
/* 80A83104  4E 80 00 20 */	blr 
