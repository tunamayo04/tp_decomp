lbl_80329F14:
/* 80329F14  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80329F18  7C 08 02 A6 */	mflr r0
/* 80329F1C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80329F20  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80329F24  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 80329F28  39 61 00 30 */	addi r11, r1, 0x30
/* 80329F2C  48 03 82 A9 */	bl _savegpr_27
/* 80329F30  7C 7B 1B 78 */	mr r27, r3
/* 80329F34  FF E0 08 90 */	fmr f31, f1
/* 80329F38  7C BC 2B 78 */	mr r28, r5
/* 80329F3C  1C 04 00 03 */	mulli r0, r4, 3
/* 80329F40  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 80329F44  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80329F48  1C 04 00 12 */	mulli r0, r4, 0x12
/* 80329F4C  7F E3 02 14 */	add r31, r3, r0
/* 80329F50  38 04 00 01 */	addi r0, r4, 1
/* 80329F54  1C 00 00 12 */	mulli r0, r0, 0x12
/* 80329F58  7F C3 02 14 */	add r30, r3, r0
/* 80329F5C  38 04 00 02 */	addi r0, r4, 2
/* 80329F60  1C 00 00 12 */	mulli r0, r0, 0x12
/* 80329F64  7F A3 02 14 */	add r29, r3, r0
/* 80329F68  A0 1F 00 00 */	lhz r0, 0(r31)
/* 80329F6C  2C 00 00 01 */	cmpwi r0, 1
/* 80329F70  41 82 00 20 */	beq lbl_80329F90
/* 80329F74  40 80 00 34 */	bge lbl_80329FA8
/* 80329F78  2C 00 00 00 */	cmpwi r0, 0
/* 80329F7C  40 80 00 08 */	bge lbl_80329F84
/* 80329F80  48 00 00 28 */	b lbl_80329FA8
lbl_80329F84:
/* 80329F84  C0 02 CA 30 */	lfs f0, lit_852(r2)
/* 80329F88  D0 1C 00 00 */	stfs f0, 0(r28)
/* 80329F8C  48 00 00 3C */	b lbl_80329FC8
lbl_80329F90:
/* 80329F90  80 7B 00 1C */	lwz r3, 0x1c(r27)
/* 80329F94  A0 1F 00 02 */	lhz r0, 2(r31)
/* 80329F98  54 00 10 3A */	slwi r0, r0, 2
/* 80329F9C  7C 03 04 2E */	lfsx f0, r3, r0
/* 80329FA0  D0 1C 00 00 */	stfs f0, 0(r28)
/* 80329FA4  48 00 00 24 */	b lbl_80329FC8
lbl_80329FA8:
/* 80329FA8  FC 20 F8 90 */	fmr f1, f31
/* 80329FAC  7F E3 FB 78 */	mr r3, r31
/* 80329FB0  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 80329FB4  A0 1F 00 02 */	lhz r0, 2(r31)
/* 80329FB8  54 00 10 3A */	slwi r0, r0, 2
/* 80329FBC  7C 84 02 14 */	add r4, r4, r0
/* 80329FC0  48 00 1B 15 */	bl func_8032BAD4
/* 80329FC4  D0 3C 00 00 */	stfs f1, 0(r28)
lbl_80329FC8:
/* 80329FC8  A0 1E 00 00 */	lhz r0, 0(r30)
/* 80329FCC  2C 00 00 01 */	cmpwi r0, 1
/* 80329FD0  41 82 00 20 */	beq lbl_80329FF0
/* 80329FD4  40 80 00 34 */	bge lbl_8032A008
/* 80329FD8  2C 00 00 00 */	cmpwi r0, 0
/* 80329FDC  40 80 00 08 */	bge lbl_80329FE4
/* 80329FE0  48 00 00 28 */	b lbl_8032A008
lbl_80329FE4:
/* 80329FE4  C0 02 CA 30 */	lfs f0, lit_852(r2)
/* 80329FE8  D0 1C 00 04 */	stfs f0, 4(r28)
/* 80329FEC  48 00 00 3C */	b lbl_8032A028
lbl_80329FF0:
/* 80329FF0  80 7B 00 1C */	lwz r3, 0x1c(r27)
/* 80329FF4  A0 1E 00 02 */	lhz r0, 2(r30)
/* 80329FF8  54 00 10 3A */	slwi r0, r0, 2
/* 80329FFC  7C 03 04 2E */	lfsx f0, r3, r0
/* 8032A000  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8032A004  48 00 00 24 */	b lbl_8032A028
lbl_8032A008:
/* 8032A008  FC 20 F8 90 */	fmr f1, f31
/* 8032A00C  7F C3 F3 78 */	mr r3, r30
/* 8032A010  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 8032A014  A0 1E 00 02 */	lhz r0, 2(r30)
/* 8032A018  54 00 10 3A */	slwi r0, r0, 2
/* 8032A01C  7C 84 02 14 */	add r4, r4, r0
/* 8032A020  48 00 1A B5 */	bl func_8032BAD4
/* 8032A024  D0 3C 00 04 */	stfs f1, 4(r28)
lbl_8032A028:
/* 8032A028  A0 1D 00 06 */	lhz r0, 6(r29)
/* 8032A02C  2C 00 00 01 */	cmpwi r0, 1
/* 8032A030  41 82 00 20 */	beq lbl_8032A050
/* 8032A034  40 80 00 3C */	bge lbl_8032A070
/* 8032A038  2C 00 00 00 */	cmpwi r0, 0
/* 8032A03C  40 80 00 08 */	bge lbl_8032A044
/* 8032A040  48 00 00 30 */	b lbl_8032A070
lbl_8032A044:
/* 8032A044  38 00 00 00 */	li r0, 0
/* 8032A048  B0 1C 00 08 */	sth r0, 8(r28)
/* 8032A04C  48 00 00 58 */	b lbl_8032A0A4
lbl_8032A050:
/* 8032A050  80 7B 00 20 */	lwz r3, 0x20(r27)
/* 8032A054  A0 1D 00 08 */	lhz r0, 8(r29)
/* 8032A058  54 00 08 3C */	slwi r0, r0, 1
/* 8032A05C  7C 63 02 AE */	lhax r3, r3, r0
/* 8032A060  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 8032A064  7C 60 00 30 */	slw r0, r3, r0
/* 8032A068  B0 1C 00 08 */	sth r0, 8(r28)
/* 8032A06C  48 00 00 38 */	b lbl_8032A0A4
lbl_8032A070:
/* 8032A070  FC 20 F8 90 */	fmr f1, f31
/* 8032A074  38 7D 00 06 */	addi r3, r29, 6
/* 8032A078  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 8032A07C  A0 1D 00 08 */	lhz r0, 8(r29)
/* 8032A080  54 00 08 3C */	slwi r0, r0, 1
/* 8032A084  7C 84 02 14 */	add r4, r4, r0
/* 8032A088  48 00 18 19 */	bl func_8032B8A0
/* 8032A08C  FC 00 08 1E */	fctiwz f0, f1
/* 8032A090  D8 01 00 08 */	stfd f0, 8(r1)
/* 8032A094  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8032A098  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 8032A09C  7C 60 00 30 */	slw r0, r3, r0
/* 8032A0A0  B0 1C 00 08 */	sth r0, 8(r28)
lbl_8032A0A4:
/* 8032A0A4  A0 1F 00 0C */	lhz r0, 0xc(r31)
/* 8032A0A8  2C 00 00 01 */	cmpwi r0, 1
/* 8032A0AC  41 82 00 20 */	beq lbl_8032A0CC
/* 8032A0B0  40 80 00 34 */	bge lbl_8032A0E4
/* 8032A0B4  2C 00 00 00 */	cmpwi r0, 0
/* 8032A0B8  40 80 00 08 */	bge lbl_8032A0C0
/* 8032A0BC  48 00 00 28 */	b lbl_8032A0E4
lbl_8032A0C0:
/* 8032A0C0  C0 02 CA 34 */	lfs f0, lit_853(r2)
/* 8032A0C4  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8032A0C8  48 00 00 3C */	b lbl_8032A104
lbl_8032A0CC:
/* 8032A0CC  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8032A0D0  A0 1F 00 0E */	lhz r0, 0xe(r31)
/* 8032A0D4  54 00 10 3A */	slwi r0, r0, 2
/* 8032A0D8  7C 03 04 2E */	lfsx f0, r3, r0
/* 8032A0DC  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8032A0E0  48 00 00 24 */	b lbl_8032A104
lbl_8032A0E4:
/* 8032A0E4  FC 20 F8 90 */	fmr f1, f31
/* 8032A0E8  38 7F 00 0C */	addi r3, r31, 0xc
/* 8032A0EC  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 8032A0F0  A0 1F 00 0E */	lhz r0, 0xe(r31)
/* 8032A0F4  54 00 10 3A */	slwi r0, r0, 2
/* 8032A0F8  7C 84 02 14 */	add r4, r4, r0
/* 8032A0FC  48 00 19 D9 */	bl func_8032BAD4
/* 8032A100  D0 3C 00 0C */	stfs f1, 0xc(r28)
lbl_8032A104:
/* 8032A104  A0 1E 00 0C */	lhz r0, 0xc(r30)
/* 8032A108  2C 00 00 01 */	cmpwi r0, 1
/* 8032A10C  41 82 00 20 */	beq lbl_8032A12C
/* 8032A110  40 80 00 34 */	bge lbl_8032A144
/* 8032A114  2C 00 00 00 */	cmpwi r0, 0
/* 8032A118  40 80 00 08 */	bge lbl_8032A120
/* 8032A11C  48 00 00 28 */	b lbl_8032A144
lbl_8032A120:
/* 8032A120  C0 02 CA 34 */	lfs f0, lit_853(r2)
/* 8032A124  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8032A128  48 00 00 3C */	b lbl_8032A164
lbl_8032A12C:
/* 8032A12C  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8032A130  A0 1E 00 0E */	lhz r0, 0xe(r30)
/* 8032A134  54 00 10 3A */	slwi r0, r0, 2
/* 8032A138  7C 03 04 2E */	lfsx f0, r3, r0
/* 8032A13C  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8032A140  48 00 00 24 */	b lbl_8032A164
lbl_8032A144:
/* 8032A144  FC 20 F8 90 */	fmr f1, f31
/* 8032A148  38 7E 00 0C */	addi r3, r30, 0xc
/* 8032A14C  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 8032A150  A0 1E 00 0E */	lhz r0, 0xe(r30)
/* 8032A154  54 00 10 3A */	slwi r0, r0, 2
/* 8032A158  7C 84 02 14 */	add r4, r4, r0
/* 8032A15C  48 00 19 79 */	bl func_8032BAD4
/* 8032A160  D0 3C 00 10 */	stfs f1, 0x10(r28)
lbl_8032A164:
/* 8032A164  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 8032A168  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8032A16C  39 61 00 30 */	addi r11, r1, 0x30
/* 8032A170  48 03 80 B1 */	bl _restgpr_27
/* 8032A174  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8032A178  7C 08 03 A6 */	mtlr r0
/* 8032A17C  38 21 00 40 */	addi r1, r1, 0x40
/* 8032A180  4E 80 00 20 */	blr 
