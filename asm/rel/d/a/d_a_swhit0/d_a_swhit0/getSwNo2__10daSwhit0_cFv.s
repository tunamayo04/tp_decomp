lbl_80486004:
/* 80486004  A8 03 04 B8 */	lha r0, 0x4b8(r3)
/* 80486008  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8048600C  4E 80 00 20 */	blr 
