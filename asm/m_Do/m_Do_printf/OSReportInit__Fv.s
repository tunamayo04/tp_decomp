lbl_800068C4:
/* 800068C4  88 0D 86 34 */	lbz r0, struct_80450BB4+0x0(r13)
/* 800068C8  28 00 00 00 */	cmplwi r0, 0
/* 800068CC  4C 82 00 20 */	bnelr 
/* 800068D0  38 00 00 01 */	li r0, 1
/* 800068D4  98 0D 86 34 */	stb r0, struct_80450BB4+0x0(r13)
/* 800068D8  4E 80 00 20 */	blr 
