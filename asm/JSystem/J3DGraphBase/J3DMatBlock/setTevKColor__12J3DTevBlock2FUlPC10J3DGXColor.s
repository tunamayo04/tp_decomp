lbl_803224E8:
/* 803224E8  88 05 00 00 */	lbz r0, 0(r5)
/* 803224EC  54 84 10 3A */	slwi r4, r4, 2
/* 803224F0  7C 63 22 14 */	add r3, r3, r4
/* 803224F4  98 03 00 45 */	stb r0, 0x45(r3)
/* 803224F8  88 05 00 01 */	lbz r0, 1(r5)
/* 803224FC  98 03 00 46 */	stb r0, 0x46(r3)
/* 80322500  88 05 00 02 */	lbz r0, 2(r5)
/* 80322504  98 03 00 47 */	stb r0, 0x47(r3)
/* 80322508  88 05 00 03 */	lbz r0, 3(r5)
/* 8032250C  98 03 00 48 */	stb r0, 0x48(r3)
/* 80322510  4E 80 00 20 */	blr 
