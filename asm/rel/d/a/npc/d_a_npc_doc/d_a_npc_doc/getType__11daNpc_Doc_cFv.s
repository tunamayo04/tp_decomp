lbl_809A7628:
/* 809A7628  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 809A762C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 809A7630  2C 00 00 01 */	cmpwi r0, 1
/* 809A7634  41 82 00 1C */	beq lbl_809A7650
/* 809A7638  40 80 00 20 */	bge lbl_809A7658
/* 809A763C  2C 00 00 00 */	cmpwi r0, 0
/* 809A7640  40 80 00 08 */	bge lbl_809A7648
/* 809A7644  48 00 00 14 */	b lbl_809A7658
lbl_809A7648:
/* 809A7648  38 60 00 00 */	li r3, 0
/* 809A764C  4E 80 00 20 */	blr 
lbl_809A7650:
/* 809A7650  38 60 00 01 */	li r3, 1
/* 809A7654  4E 80 00 20 */	blr 
lbl_809A7658:
/* 809A7658  38 60 00 02 */	li r3, 2
/* 809A765C  4E 80 00 20 */	blr 
