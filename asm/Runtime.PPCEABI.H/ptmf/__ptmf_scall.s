lbl_80362084:
/* 80362084  80 0C 00 00 */	lwz r0, 0(r12)
/* 80362088  81 6C 00 04 */	lwz r11, 4(r12)
/* 8036208C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80362090  7C 63 02 14 */	add r3, r3, r0
/* 80362094  2C 0B 00 00 */	cmpwi r11, 0
/* 80362098  41 80 00 0C */	blt lbl_803620A4
/* 8036209C  7D 83 60 2E */	lwzx r12, r3, r12
/* 803620A0  7D 8C 58 2E */	lwzx r12, r12, r11
lbl_803620A4:
/* 803620A4  7D 89 03 A6 */	mtctr r12
/* 803620A8  4E 80 04 20 */	bctr 
