lbl_80992F68:
/* 80992F68  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80992F6C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80992F70  41 82 00 08 */	beq lbl_80992F78
/* 80992F74  48 00 00 0C */	b lbl_80992F80
lbl_80992F78:
/* 80992F78  38 60 00 00 */	li r3, 0
/* 80992F7C  4E 80 00 20 */	blr 
lbl_80992F80:
/* 80992F80  38 60 00 01 */	li r3, 1
/* 80992F84  4E 80 00 20 */	blr 
