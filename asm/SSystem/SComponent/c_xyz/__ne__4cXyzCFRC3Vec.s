lbl_8026706C:
/* 8026706C  38 00 00 00 */	li r0, 0
/* 80267070  C0 23 00 00 */	lfs f1, 0(r3)
/* 80267074  C0 04 00 00 */	lfs f0, 0(r4)
/* 80267078  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8026707C  40 82 00 24 */	bne lbl_802670A0
/* 80267080  C0 23 00 04 */	lfs f1, 4(r3)
/* 80267084  C0 04 00 04 */	lfs f0, 4(r4)
/* 80267088  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8026708C  40 82 00 14 */	bne lbl_802670A0
/* 80267090  C0 23 00 08 */	lfs f1, 8(r3)
/* 80267094  C0 04 00 08 */	lfs f0, 8(r4)
/* 80267098  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8026709C  41 82 00 08 */	beq lbl_802670A4
lbl_802670A0:
/* 802670A0  38 00 00 01 */	li r0, 1
lbl_802670A4:
/* 802670A4  7C 03 03 78 */	mr r3, r0
/* 802670A8  4E 80 00 20 */	blr 
