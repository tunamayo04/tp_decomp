lbl_802BB090:
/* 802BB090  88 04 00 00 */	lbz r0, 0(r4)
/* 802BB094  2C 00 00 01 */	cmpwi r0, 1
/* 802BB098  41 82 00 28 */	beq lbl_802BB0C0
/* 802BB09C  40 80 00 10 */	bge lbl_802BB0AC
/* 802BB0A0  2C 00 00 00 */	cmpwi r0, 0
/* 802BB0A4  40 80 00 14 */	bge lbl_802BB0B8
/* 802BB0A8  48 00 00 28 */	b lbl_802BB0D0
lbl_802BB0AC:
/* 802BB0AC  2C 00 00 03 */	cmpwi r0, 3
/* 802BB0B0  40 80 00 20 */	bge lbl_802BB0D0
/* 802BB0B4  48 00 00 14 */	b lbl_802BB0C8
lbl_802BB0B8:
/* 802BB0B8  38 60 00 00 */	li r3, 0
/* 802BB0BC  4E 80 00 20 */	blr 
lbl_802BB0C0:
/* 802BB0C0  38 60 00 01 */	li r3, 1
/* 802BB0C4  4E 80 00 20 */	blr 
lbl_802BB0C8:
/* 802BB0C8  38 60 00 02 */	li r3, 2
/* 802BB0CC  4E 80 00 20 */	blr 
lbl_802BB0D0:
/* 802BB0D0  38 60 FF FF */	li r3, -1
/* 802BB0D4  4E 80 00 20 */	blr 
