lbl_80073D08:
/* 80073D08  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80073D0C  7C 08 02 A6 */	mflr r0
/* 80073D10  90 01 00 94 */	stw r0, 0x94(r1)
/* 80073D14  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80073D18  F3 E1 00 88 */	psq_st f31, 136(r1), 0, 0 /* qr0 */
/* 80073D1C  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80073D20  F3 C1 00 78 */	psq_st f30, 120(r1), 0, 0 /* qr0 */
/* 80073D24  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80073D28  F3 A1 00 68 */	psq_st f29, 104(r1), 0, 0 /* qr0 */
/* 80073D2C  39 61 00 60 */	addi r11, r1, 0x60
/* 80073D30  48 2E E4 A5 */	bl _savegpr_27
/* 80073D34  7C 7C 1B 78 */	mr r28, r3
/* 80073D38  7C 9D 23 78 */	mr r29, r4
/* 80073D3C  FF E0 08 90 */	fmr f31, f1
/* 80073D40  FF A0 10 90 */	fmr f29, f2
/* 80073D44  FF C0 18 90 */	fmr f30, f3
/* 80073D48  7C BE 2B 78 */	mr r30, r5
/* 80073D4C  7C DF 33 78 */	mr r31, r6
/* 80073D50  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80073D54  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80073D58  83 63 5D AC */	lwz r27, 0x5dac(r3)
/* 80073D5C  80 1C 00 04 */	lwz r0, 4(r28)
/* 80073D60  7C 1F 00 00 */	cmpw r31, r0
/* 80073D64  40 81 00 0C */	ble lbl_80073D70
/* 80073D68  38 60 00 00 */	li r3, 0
/* 80073D6C  48 00 02 28 */	b lbl_80073F94
lbl_80073D70:
/* 80073D70  38 61 00 30 */	addi r3, r1, 0x30
/* 80073D74  38 9D 05 38 */	addi r4, r29, 0x538
/* 80073D78  38 BB 05 38 */	addi r5, r27, 0x538
/* 80073D7C  48 1F 2D B9 */	bl __mi__4cXyzCFRC3Vec
/* 80073D80  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80073D84  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80073D88  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80073D8C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80073D90  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80073D94  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80073D98  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80073D9C  41 80 00 0C */	blt lbl_80073DA8
/* 80073DA0  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80073DA4  40 81 00 0C */	ble lbl_80073DB0
lbl_80073DA8:
/* 80073DA8  38 60 00 00 */	li r3, 0
/* 80073DAC  48 00 01 E8 */	b lbl_80073F94
lbl_80073DB0:
/* 80073DB0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80073DB4  C0 02 8C 50 */	lfs f0, lit_4071(r2)
/* 80073DB8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80073DBC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80073DC0  38 61 00 18 */	addi r3, r1, 0x18
/* 80073DC4  48 2D 33 75 */	bl PSVECSquareMag
/* 80073DC8  C0 02 8C 50 */	lfs f0, lit_4071(r2)
/* 80073DCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80073DD0  40 81 00 58 */	ble lbl_80073E28
/* 80073DD4  FC 00 08 34 */	frsqrte f0, f1
/* 80073DD8  C8 82 8C 78 */	lfd f4, lit_4514(r2)
/* 80073DDC  FC 44 00 32 */	fmul f2, f4, f0
/* 80073DE0  C8 62 8C 80 */	lfd f3, lit_4515(r2)
/* 80073DE4  FC 00 00 32 */	fmul f0, f0, f0
/* 80073DE8  FC 01 00 32 */	fmul f0, f1, f0
/* 80073DEC  FC 03 00 28 */	fsub f0, f3, f0
/* 80073DF0  FC 02 00 32 */	fmul f0, f2, f0
/* 80073DF4  FC 44 00 32 */	fmul f2, f4, f0
/* 80073DF8  FC 00 00 32 */	fmul f0, f0, f0
/* 80073DFC  FC 01 00 32 */	fmul f0, f1, f0
/* 80073E00  FC 03 00 28 */	fsub f0, f3, f0
/* 80073E04  FC 02 00 32 */	fmul f0, f2, f0
/* 80073E08  FC 44 00 32 */	fmul f2, f4, f0
/* 80073E0C  FC 00 00 32 */	fmul f0, f0, f0
/* 80073E10  FC 01 00 32 */	fmul f0, f1, f0
/* 80073E14  FC 03 00 28 */	fsub f0, f3, f0
/* 80073E18  FC 02 00 32 */	fmul f0, f2, f0
/* 80073E1C  FF C1 00 32 */	fmul f30, f1, f0
/* 80073E20  FF C0 F0 18 */	frsp f30, f30
/* 80073E24  48 00 00 90 */	b lbl_80073EB4
lbl_80073E28:
/* 80073E28  C8 02 8C 88 */	lfd f0, lit_4516(r2)
/* 80073E2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80073E30  40 80 00 10 */	bge lbl_80073E40
/* 80073E34  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80073E38  C3 C3 0A E0 */	lfs f30, __float_nan@l(r3)
/* 80073E3C  48 00 00 78 */	b lbl_80073EB4
lbl_80073E40:
/* 80073E40  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80073E44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80073E48  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80073E4C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80073E50  7C 03 00 00 */	cmpw r3, r0
/* 80073E54  41 82 00 14 */	beq lbl_80073E68
/* 80073E58  40 80 00 40 */	bge lbl_80073E98
/* 80073E5C  2C 03 00 00 */	cmpwi r3, 0
/* 80073E60  41 82 00 20 */	beq lbl_80073E80
/* 80073E64  48 00 00 34 */	b lbl_80073E98
lbl_80073E68:
/* 80073E68  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80073E6C  41 82 00 0C */	beq lbl_80073E78
/* 80073E70  38 00 00 01 */	li r0, 1
/* 80073E74  48 00 00 28 */	b lbl_80073E9C
lbl_80073E78:
/* 80073E78  38 00 00 02 */	li r0, 2
/* 80073E7C  48 00 00 20 */	b lbl_80073E9C
lbl_80073E80:
/* 80073E80  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80073E84  41 82 00 0C */	beq lbl_80073E90
/* 80073E88  38 00 00 05 */	li r0, 5
/* 80073E8C  48 00 00 10 */	b lbl_80073E9C
lbl_80073E90:
/* 80073E90  38 00 00 03 */	li r0, 3
/* 80073E94  48 00 00 08 */	b lbl_80073E9C
lbl_80073E98:
/* 80073E98  38 00 00 04 */	li r0, 4
lbl_80073E9C:
/* 80073E9C  2C 00 00 01 */	cmpwi r0, 1
/* 80073EA0  40 82 00 10 */	bne lbl_80073EB0
/* 80073EA4  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80073EA8  C3 C3 0A E0 */	lfs f30, __float_nan@l(r3)
/* 80073EAC  48 00 00 08 */	b lbl_80073EB4
lbl_80073EB0:
/* 80073EB0  FF C0 08 90 */	fmr f30, f1
lbl_80073EB4:
/* 80073EB4  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80073EB8  40 81 00 0C */	ble lbl_80073EC4
/* 80073EBC  38 60 00 00 */	li r3, 0
/* 80073EC0  48 00 00 D4 */	b lbl_80073F94
lbl_80073EC4:
/* 80073EC4  7F C0 07 35 */	extsh. r0, r30
/* 80073EC8  41 82 00 88 */	beq lbl_80073F50
/* 80073ECC  38 61 00 24 */	addi r3, r1, 0x24
/* 80073ED0  38 9D 04 D0 */	addi r4, r29, 0x4d0
/* 80073ED4  38 BB 04 D0 */	addi r5, r27, 0x4d0
/* 80073ED8  48 1F 2C 5D */	bl __mi__4cXyzCFRC3Vec
/* 80073EDC  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80073EE0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80073EE4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80073EE8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80073EEC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80073EF0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80073EF4  38 61 00 10 */	addi r3, r1, 0x10
/* 80073EF8  38 81 00 3C */	addi r4, r1, 0x3c
/* 80073EFC  48 1F D9 85 */	bl __ct__7cSGlobeFRC4cXyz
/* 80073F00  38 61 00 08 */	addi r3, r1, 8
/* 80073F04  38 81 00 16 */	addi r4, r1, 0x16
/* 80073F08  A8 BB 04 E6 */	lha r5, 0x4e6(r27)
/* 80073F0C  48 1F D3 1D */	bl __mi__7cSAngleCFs
/* 80073F10  A8 01 00 08 */	lha r0, 8(r1)
/* 80073F14  7C 00 07 35 */	extsh. r0, r0
/* 80073F18  7C 03 03 78 */	mr r3, r0
/* 80073F1C  40 80 00 0C */	bge lbl_80073F28
/* 80073F20  7C 00 00 D0 */	neg r0, r0
/* 80073F24  7C 03 07 34 */	extsh r3, r0
lbl_80073F28:
/* 80073F28  7C 60 07 34 */	extsh r0, r3
/* 80073F2C  2C 00 80 00 */	cmpwi r0, -32768
/* 80073F30  40 82 00 08 */	bne lbl_80073F38
/* 80073F34  38 60 7F FF */	li r3, 0x7fff
lbl_80073F38:
/* 80073F38  7C 63 07 34 */	extsh r3, r3
/* 80073F3C  7F C0 07 34 */	extsh r0, r30
/* 80073F40  7C 03 00 00 */	cmpw r3, r0
/* 80073F44  40 81 00 0C */	ble lbl_80073F50
/* 80073F48  38 60 00 00 */	li r3, 0
/* 80073F4C  48 00 00 48 */	b lbl_80073F94
lbl_80073F50:
/* 80073F50  80 1C 00 04 */	lwz r0, 4(r28)
/* 80073F54  7C 1F 00 00 */	cmpw r31, r0
/* 80073F58  41 80 00 10 */	blt lbl_80073F68
/* 80073F5C  C0 1C 00 08 */	lfs f0, 8(r28)
/* 80073F60  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80073F64  40 80 00 2C */	bge lbl_80073F90
lbl_80073F68:
/* 80073F68  93 FC 00 04 */	stw r31, 4(r28)
/* 80073F6C  28 1D 00 00 */	cmplwi r29, 0
/* 80073F70  41 82 00 0C */	beq lbl_80073F7C
/* 80073F74  80 1D 00 04 */	lwz r0, 4(r29)
/* 80073F78  48 00 00 08 */	b lbl_80073F80
lbl_80073F7C:
/* 80073F7C  38 00 FF FF */	li r0, -1
lbl_80073F80:
/* 80073F80  90 1C 00 00 */	stw r0, 0(r28)
/* 80073F84  D3 DC 00 08 */	stfs f30, 8(r28)
/* 80073F88  38 60 00 01 */	li r3, 1
/* 80073F8C  48 00 00 08 */	b lbl_80073F94
lbl_80073F90:
/* 80073F90  38 60 00 00 */	li r3, 0
lbl_80073F94:
/* 80073F94  E3 E1 00 88 */	psq_l f31, 136(r1), 0, 0 /* qr0 */
/* 80073F98  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80073F9C  E3 C1 00 78 */	psq_l f30, 120(r1), 0, 0 /* qr0 */
/* 80073FA0  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80073FA4  E3 A1 00 68 */	psq_l f29, 104(r1), 0, 0 /* qr0 */
/* 80073FA8  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80073FAC  39 61 00 60 */	addi r11, r1, 0x60
/* 80073FB0  48 2E E2 71 */	bl _restgpr_27
/* 80073FB4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80073FB8  7C 08 03 A6 */	mtlr r0
/* 80073FBC  38 21 00 90 */	addi r1, r1, 0x90
/* 80073FC0  4E 80 00 20 */	blr 
