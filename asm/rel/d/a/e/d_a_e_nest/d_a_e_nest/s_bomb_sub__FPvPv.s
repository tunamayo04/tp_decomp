lbl_80501040:
/* 80501040  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80501044  7C 08 02 A6 */	mflr r0
/* 80501048  90 01 00 44 */	stw r0, 0x44(r1)
/* 8050104C  39 61 00 40 */	addi r11, r1, 0x40
/* 80501050  4B E6 11 8C */	b _savegpr_29
/* 80501054  7C 7D 1B 78 */	mr r29, r3
/* 80501058  7C 9E 23 78 */	mr r30, r4
/* 8050105C  3C 80 80 50 */	lis r4, lit_3999@ha
/* 80501060  3B E4 46 DC */	addi r31, r4, lit_3999@l
/* 80501064  4B B1 7C 7C */	b fopAc_IsActor__FPv
/* 80501068  2C 03 00 00 */	cmpwi r3, 0
/* 8050106C  41 82 01 44 */	beq lbl_805011B0
/* 80501070  A8 1D 00 08 */	lha r0, 8(r29)
/* 80501074  2C 00 02 21 */	cmpwi r0, 0x221
/* 80501078  40 82 01 38 */	bne lbl_805011B0
/* 8050107C  80 1D 00 B0 */	lwz r0, 0xb0(r29)
/* 80501080  28 00 00 00 */	cmplwi r0, 0
/* 80501084  40 82 01 2C */	bne lbl_805011B0
/* 80501088  38 61 00 0C */	addi r3, r1, 0xc
/* 8050108C  38 9E 00 04 */	addi r4, r30, 4
/* 80501090  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 80501094  4B D6 5A A0 */	b __mi__4cXyzCFRC3Vec
/* 80501098  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8050109C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 805010A0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 805010A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 805010A8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 805010AC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 805010B0  38 61 00 18 */	addi r3, r1, 0x18
/* 805010B4  4B E4 60 84 */	b PSVECSquareMag
/* 805010B8  C0 1F 00 04 */	lfs f0, 4(r31)
/* 805010BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805010C0  40 81 00 58 */	ble lbl_80501118
/* 805010C4  FC 00 08 34 */	frsqrte f0, f1
/* 805010C8  C8 9F 00 08 */	lfd f4, 8(r31)
/* 805010CC  FC 44 00 32 */	fmul f2, f4, f0
/* 805010D0  C8 7F 00 10 */	lfd f3, 0x10(r31)
/* 805010D4  FC 00 00 32 */	fmul f0, f0, f0
/* 805010D8  FC 01 00 32 */	fmul f0, f1, f0
/* 805010DC  FC 03 00 28 */	fsub f0, f3, f0
/* 805010E0  FC 02 00 32 */	fmul f0, f2, f0
/* 805010E4  FC 44 00 32 */	fmul f2, f4, f0
/* 805010E8  FC 00 00 32 */	fmul f0, f0, f0
/* 805010EC  FC 01 00 32 */	fmul f0, f1, f0
/* 805010F0  FC 03 00 28 */	fsub f0, f3, f0
/* 805010F4  FC 02 00 32 */	fmul f0, f2, f0
/* 805010F8  FC 44 00 32 */	fmul f2, f4, f0
/* 805010FC  FC 00 00 32 */	fmul f0, f0, f0
/* 80501100  FC 01 00 32 */	fmul f0, f1, f0
/* 80501104  FC 03 00 28 */	fsub f0, f3, f0
/* 80501108  FC 02 00 32 */	fmul f0, f2, f0
/* 8050110C  FC 21 00 32 */	fmul f1, f1, f0
/* 80501110  FC 20 08 18 */	frsp f1, f1
/* 80501114  48 00 00 88 */	b lbl_8050119C
lbl_80501118:
/* 80501118  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8050111C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80501120  40 80 00 10 */	bge lbl_80501130
/* 80501124  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80501128  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 8050112C  48 00 00 70 */	b lbl_8050119C
lbl_80501130:
/* 80501130  D0 21 00 08 */	stfs f1, 8(r1)
/* 80501134  80 81 00 08 */	lwz r4, 8(r1)
/* 80501138  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8050113C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80501140  7C 03 00 00 */	cmpw r3, r0
/* 80501144  41 82 00 14 */	beq lbl_80501158
/* 80501148  40 80 00 40 */	bge lbl_80501188
/* 8050114C  2C 03 00 00 */	cmpwi r3, 0
/* 80501150  41 82 00 20 */	beq lbl_80501170
/* 80501154  48 00 00 34 */	b lbl_80501188
lbl_80501158:
/* 80501158  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8050115C  41 82 00 0C */	beq lbl_80501168
/* 80501160  38 00 00 01 */	li r0, 1
/* 80501164  48 00 00 28 */	b lbl_8050118C
lbl_80501168:
/* 80501168  38 00 00 02 */	li r0, 2
/* 8050116C  48 00 00 20 */	b lbl_8050118C
lbl_80501170:
/* 80501170  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80501174  41 82 00 0C */	beq lbl_80501180
/* 80501178  38 00 00 05 */	li r0, 5
/* 8050117C  48 00 00 10 */	b lbl_8050118C
lbl_80501180:
/* 80501180  38 00 00 03 */	li r0, 3
/* 80501184  48 00 00 08 */	b lbl_8050118C
lbl_80501188:
/* 80501188  38 00 00 04 */	li r0, 4
lbl_8050118C:
/* 8050118C  2C 00 00 01 */	cmpwi r0, 1
/* 80501190  40 82 00 0C */	bne lbl_8050119C
/* 80501194  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80501198  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_8050119C:
/* 8050119C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 805011A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805011A4  40 80 00 0C */	bge lbl_805011B0
/* 805011A8  7F A3 EB 78 */	mr r3, r29
/* 805011AC  48 00 00 08 */	b lbl_805011B4
lbl_805011B0:
/* 805011B0  38 60 00 00 */	li r3, 0
lbl_805011B4:
/* 805011B4  39 61 00 40 */	addi r11, r1, 0x40
/* 805011B8  4B E6 10 70 */	b _restgpr_29
/* 805011BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 805011C0  7C 08 03 A6 */	mtlr r0
/* 805011C4  38 21 00 40 */	addi r1, r1, 0x40
/* 805011C8  4E 80 00 20 */	blr 
