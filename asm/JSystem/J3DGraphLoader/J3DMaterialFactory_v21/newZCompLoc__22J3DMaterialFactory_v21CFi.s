lbl_80334004:
/* 80334004  80 C3 00 04 */	lwz r6, 4(r3)
/* 80334008  80 A3 00 08 */	lwz r5, 8(r3)
/* 8033400C  54 80 08 3C */	slwi r0, r4, 1
/* 80334010  7C 05 02 2E */	lhzx r0, r5, r0
/* 80334014  1C 00 01 38 */	mulli r0, r0, 0x138
/* 80334018  7C 86 02 14 */	add r4, r6, r0
/* 8033401C  88 04 00 05 */	lbz r0, 5(r4)
/* 80334020  28 00 00 FF */	cmplwi r0, 0xff
/* 80334024  41 82 00 10 */	beq lbl_80334034
/* 80334028  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8033402C  7C 63 00 AE */	lbzx r3, r3, r0
/* 80334030  4E 80 00 20 */	blr 
lbl_80334034:
/* 80334034  38 60 00 00 */	li r3, 0
/* 80334038  4E 80 00 20 */	blr 
