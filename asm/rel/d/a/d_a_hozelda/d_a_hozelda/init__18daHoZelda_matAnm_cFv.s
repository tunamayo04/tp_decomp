lbl_80845EAC:
/* 80845EAC  3C 80 80 85 */	lis r4, lit_3697@ha
/* 80845EB0  C0 04 8E 54 */	lfs f0, lit_3697@l(r4)
/* 80845EB4  D0 03 00 F4 */	stfs f0, 0xf4(r3)
/* 80845EB8  D0 03 00 F8 */	stfs f0, 0xf8(r3)
/* 80845EBC  D0 03 00 FC */	stfs f0, 0xfc(r3)
/* 80845EC0  D0 03 01 00 */	stfs f0, 0x100(r3)
/* 80845EC4  38 00 00 00 */	li r0, 0
/* 80845EC8  3C 60 80 85 */	lis r3, struct_80849010+0x0@ha
/* 80845ECC  98 03 90 10 */	stb r0, struct_80849010+0x0@l(r3)
/* 80845ED0  3C 60 80 85 */	lis r3, struct_80849010+0x1@ha
/* 80845ED4  98 03 90 11 */	stb r0, struct_80849010+0x1@l(r3)
/* 80845ED8  4E 80 00 20 */	blr 
