lbl_8036CC3C:
/* 8036CC3C  90 83 00 00 */	stw r4, 0(r3)
/* 8036CC40  38 80 00 00 */	li r4, 0
/* 8036CC44  38 00 FF FF */	li r0, -1
/* 8036CC48  90 83 00 04 */	stw r4, 4(r3)
/* 8036CC4C  90 03 00 08 */	stw r0, 8(r3)
/* 8036CC50  4E 80 00 20 */	blr 
