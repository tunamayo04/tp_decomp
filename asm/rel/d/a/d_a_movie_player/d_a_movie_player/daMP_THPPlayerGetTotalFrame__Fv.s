lbl_808785F8:
/* 808785F8  3C 60 80 88 */	lis r3, daMP_ActivePlayer@ha
/* 808785FC  38 63 9B D0 */	addi r3, r3, daMP_ActivePlayer@l
/* 80878600  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 80878604  2C 00 00 00 */	cmpwi r0, 0
/* 80878608  41 82 00 0C */	beq lbl_80878614
/* 8087860C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 80878610  4E 80 00 20 */	blr 
lbl_80878614:
/* 80878614  38 60 00 00 */	li r3, 0
/* 80878618  4E 80 00 20 */	blr 
