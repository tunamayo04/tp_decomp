lbl_80C23058:
/* 80C23058  3C 80 80 C2 */	lis r4, lit_4079@ha
/* 80C2305C  C0 04 43 98 */	lfs f0, lit_4079@l(r4)
/* 80C23060  D0 03 05 30 */	stfs f0, 0x530(r3)
/* 80C23064  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80C23068  D0 03 09 C4 */	stfs f0, 0x9c4(r3)
/* 80C2306C  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80C23070  D0 03 09 C8 */	stfs f0, 0x9c8(r3)
/* 80C23074  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 80C23078  D0 03 09 CC */	stfs f0, 0x9cc(r3)
/* 80C2307C  38 00 00 01 */	li r0, 1
/* 80C23080  98 03 09 4D */	stb r0, 0x94d(r3)
/* 80C23084  4E 80 00 20 */	blr 
