lbl_80A3904C:
/* 80A3904C  80 E3 05 BC */	lwz r7, 0x5bc(r3)
/* 80A39050  88 07 00 10 */	lbz r0, 0x10(r7)
/* 80A39054  2C 00 00 02 */	cmpwi r0, 2
/* 80A39058  41 82 00 18 */	beq lbl_80A39070
/* 80A3905C  40 80 00 94 */	bge lbl_80A390F0
/* 80A39060  2C 00 00 00 */	cmpwi r0, 0
/* 80A39064  40 80 00 18 */	bge lbl_80A3907C
/* 80A39068  48 00 00 88 */	b lbl_80A390F0
/* 80A3906C  48 00 00 84 */	b lbl_80A390F0
lbl_80A39070:
/* 80A39070  88 07 00 11 */	lbz r0, 0x11(r7)
/* 80A39074  54 03 FF FE */	rlwinm r3, r0, 0x1f, 0x1f, 0x1f
/* 80A39078  4E 80 00 20 */	blr 
lbl_80A3907C:
/* 80A3907C  38 80 00 00 */	li r4, 0
/* 80A39080  7C 85 23 78 */	mr r5, r4
/* 80A39084  38 C0 00 01 */	li r6, 1
/* 80A39088  88 07 00 11 */	lbz r0, 0x11(r7)
/* 80A3908C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80A39090  40 82 00 1C */	bne lbl_80A390AC
/* 80A39094  3C 60 80 A4 */	lis r3, lit_4204@ha
/* 80A39098  C0 43 09 00 */	lfs f2, lit_4204@l(r3)
/* 80A3909C  C0 07 00 18 */	lfs f0, 0x18(r7)
/* 80A390A0  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80A390A4  41 82 00 08 */	beq lbl_80A390AC
/* 80A390A8  7C 86 23 78 */	mr r6, r4
lbl_80A390AC:
/* 80A390AC  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80A390B0  41 82 00 1C */	beq lbl_80A390CC
/* 80A390B4  C0 47 00 18 */	lfs f2, 0x18(r7)
/* 80A390B8  3C 60 80 A4 */	lis r3, lit_4204@ha
/* 80A390BC  C0 03 09 00 */	lfs f0, lit_4204@l(r3)
/* 80A390C0  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 80A390C4  40 82 00 08 */	bne lbl_80A390CC
/* 80A390C8  38 A0 00 01 */	li r5, 1
lbl_80A390CC:
/* 80A390CC  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80A390D0  41 82 00 18 */	beq lbl_80A390E8
/* 80A390D4  3C 60 80 A4 */	lis r3, lit_4204@ha
/* 80A390D8  C0 03 09 00 */	lfs f0, lit_4204@l(r3)
/* 80A390DC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80A390E0  41 82 00 08 */	beq lbl_80A390E8
/* 80A390E4  38 80 00 01 */	li r4, 1
lbl_80A390E8:
/* 80A390E8  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 80A390EC  4E 80 00 20 */	blr 
lbl_80A390F0:
/* 80A390F0  38 60 00 00 */	li r3, 0
/* 80A390F4  4E 80 00 20 */	blr 
