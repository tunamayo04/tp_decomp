lbl_80073CEC:
/* 80073CEC  80 03 00 00 */	lwz r0, 0(r3)
/* 80073CF0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80073CF4  38 00 FF FF */	li r0, -1
/* 80073CF8  90 03 00 00 */	stw r0, 0(r3)
/* 80073CFC  38 00 00 03 */	li r0, 3
/* 80073D00  90 03 00 04 */	stw r0, 4(r3)
/* 80073D04  4E 80 00 20 */	blr 
