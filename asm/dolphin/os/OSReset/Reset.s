lbl_8033F78C:
/* 8033F78C  48 00 00 20 */	b lbl_8033F7AC
lbl_8033F790:
/* 8033F790  7D 10 FA A6 */	mfspr r8, 0x3f0
/* 8033F794  61 08 00 08 */	ori r8, r8, 8
/* 8033F798  7D 10 FB A6 */	mtspr 0x3f0, r8
/* 8033F79C  4C 00 01 2C */	isync 
/* 8033F7A0  7C 00 04 AC */	sync
/* 8033F7A4  60 00 00 00 */	nop 
/* 8033F7A8  48 00 00 08 */	b lbl_8033F7B0
lbl_8033F7AC:
/* 8033F7AC  48 00 00 20 */	b lbl_8033F7CC
lbl_8033F7B0:
/* 8033F7B0  7C AC 42 E6 */	mftb r5, 0x10c
lbl_8033F7B4:
/* 8033F7B4  7C CC 42 E6 */	mftb r6, 0x10c
/* 8033F7B8  7C E5 30 50 */	subf r7, r5, r6
/* 8033F7BC  28 07 11 24 */	cmplwi r7, 0x1124
/* 8033F7C0  41 80 FF F4 */	blt lbl_8033F7B4
/* 8033F7C4  60 00 00 00 */	nop 
/* 8033F7C8  48 00 00 08 */	b lbl_8033F7D0
lbl_8033F7CC:
/* 8033F7CC  48 00 00 20 */	b lbl_8033F7EC
lbl_8033F7D0:
/* 8033F7D0  3D 00 CC 00 */	lis r8, 0xCC00 /* 0xCC003000@h */
/* 8033F7D4  61 08 30 00 */	ori r8, r8, 0x3000 /* 0xCC003000@l */
/* 8033F7D8  38 80 00 03 */	li r4, 3
/* 8033F7DC  90 88 00 24 */	stw r4, 0x24(r8)
/* 8033F7E0  90 68 00 24 */	stw r3, 0x24(r8)
/* 8033F7E4  60 00 00 00 */	nop 
/* 8033F7E8  48 00 00 08 */	b lbl_8033F7F0
lbl_8033F7EC:
/* 8033F7EC  48 00 00 0C */	b lbl_8033F7F8
lbl_8033F7F0:
/* 8033F7F0  60 00 00 00 */	nop 
/* 8033F7F4  4B FF FF FC */	b lbl_8033F7F0
lbl_8033F7F8:
/* 8033F7F8  4B FF FF 98 */	b lbl_8033F790
