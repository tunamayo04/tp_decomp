lbl_8054A558:
/* 8054A558  80 03 05 70 */	lwz r0, 0x570(r3)
/* 8054A55C  54 00 01 46 */	rlwinm r0, r0, 0, 5, 3
/* 8054A560  90 03 05 70 */	stw r0, 0x570(r3)
/* 8054A564  4E 80 00 20 */	blr 
