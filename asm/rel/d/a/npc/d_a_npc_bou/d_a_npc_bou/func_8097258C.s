lbl_8097258C:
/* 8097258C  80 83 00 00 */	lwz r4, 0(r3)
/* 80972590  2C 04 00 00 */	cmpwi r4, 0
/* 80972594  41 82 00 0C */	beq lbl_809725A0
/* 80972598  38 04 FF FF */	addi r0, r4, -1
/* 8097259C  90 03 00 00 */	stw r0, 0(r3)
lbl_809725A0:
/* 809725A0  80 63 00 00 */	lwz r3, 0(r3)
/* 809725A4  4E 80 00 20 */	blr 
