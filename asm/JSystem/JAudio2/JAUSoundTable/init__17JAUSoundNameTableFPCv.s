lbl_802A73D4:
/* 802A73D4  28 04 00 00 */	cmplwi r4, 0
/* 802A73D8  41 82 00 38 */	beq lbl_802A7410
/* 802A73DC  90 83 00 00 */	stw r4, 0(r3)
/* 802A73E0  80 A3 00 00 */	lwz r5, 0(r3)
/* 802A73E4  80 85 00 00 */	lwz r4, 0(r5)
/* 802A73E8  3C 04 BD AD */	addis r0, r4, 0xbdad
/* 802A73EC  28 00 54 4E */	cmplwi r0, 0x544e
/* 802A73F0  41 82 00 10 */	beq lbl_802A7400
/* 802A73F4  38 00 00 00 */	li r0, 0
/* 802A73F8  90 03 00 00 */	stw r0, 0(r3)
/* 802A73FC  4E 80 00 20 */	blr 
lbl_802A7400:
/* 802A7400  80 05 00 0C */	lwz r0, 0xc(r5)
/* 802A7404  7C 05 02 14 */	add r0, r5, r0
/* 802A7408  90 03 00 04 */	stw r0, 4(r3)
/* 802A740C  4E 80 00 20 */	blr 
lbl_802A7410:
/* 802A7410  38 00 00 00 */	li r0, 0
/* 802A7414  90 03 00 00 */	stw r0, 0(r3)
/* 802A7418  90 03 00 04 */	stw r0, 4(r3)
/* 802A741C  4E 80 00 20 */	blr 
