lbl_8023413C:
/* 8023413C  38 60 00 00 */	li r3, 0
/* 80234140  28 04 13 88 */	cmplwi r4, 0x1388
/* 80234144  4C 81 00 20 */	blelr 
/* 80234148  A8 6D 8B 48 */	lha r3, s_groupID(r13)
/* 8023414C  4E 80 00 20 */	blr 
