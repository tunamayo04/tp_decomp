lbl_806024EC:
/* 806024EC  38 A0 00 01 */	li r5, 1
/* 806024F0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806024F4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806024F8  40 82 00 1C */	bne lbl_80602514
/* 806024FC  3C 80 80 60 */	lis r4, lit_3835@ha
/* 80602500  C0 24 26 78 */	lfs f1, lit_3835@l(r4)
/* 80602504  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80602508  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8060250C  41 82 00 08 */	beq lbl_80602514
/* 80602510  38 A0 00 00 */	li r5, 0
lbl_80602514:
/* 80602514  54 A3 06 3E */	clrlwi r3, r5, 0x18
/* 80602518  4E 80 00 20 */	blr 
