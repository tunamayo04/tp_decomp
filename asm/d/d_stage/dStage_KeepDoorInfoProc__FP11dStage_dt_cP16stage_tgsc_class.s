lbl_80023F84:
/* 80023F84  28 04 00 00 */	cmplwi r4, 0
/* 80023F88  40 82 00 14 */	bne lbl_80023F9C
/* 80023F8C  38 00 00 00 */	li r0, 0
/* 80023F90  3C 60 80 3F */	lis r3, DoorInfo@ha
/* 80023F94  90 03 4E 74 */	stw r0, DoorInfo@l(r3)
/* 80023F98  4E 80 00 20 */	blr 
lbl_80023F9C:
/* 80023F9C  80 04 00 00 */	lwz r0, 0(r4)
/* 80023FA0  2C 00 00 40 */	cmpwi r0, 0x40
/* 80023FA4  40 80 00 0C */	bge lbl_80023FB0
/* 80023FA8  2C 00 00 00 */	cmpwi r0, 0
/* 80023FAC  40 80 00 14 */	bge lbl_80023FC0
lbl_80023FB0:
/* 80023FB0  38 00 00 00 */	li r0, 0
/* 80023FB4  3C 60 80 3F */	lis r3, DoorInfo@ha
/* 80023FB8  90 03 4E 74 */	stw r0, DoorInfo@l(r3)
/* 80023FBC  4E 80 00 20 */	blr 
lbl_80023FC0:
/* 80023FC0  3C 60 80 3F */	lis r3, DoorInfo@ha
/* 80023FC4  38 A3 4E 74 */	addi r5, r3, DoorInfo@l
/* 80023FC8  90 05 00 00 */	stw r0, 0(r5)
/* 80023FCC  4D 82 00 20 */	beqlr 
/* 80023FD0  80 84 00 04 */	lwz r4, 4(r4)
/* 80023FD4  38 C5 00 04 */	addi r6, r5, 4
/* 80023FD8  38 E0 00 00 */	li r7, 0
/* 80023FDC  48 00 00 70 */	b lbl_8002404C
lbl_80023FE0:
/* 80023FE0  80 64 00 00 */	lwz r3, 0(r4)
/* 80023FE4  80 04 00 04 */	lwz r0, 4(r4)
/* 80023FE8  90 66 00 00 */	stw r3, 0(r6)
/* 80023FEC  90 06 00 04 */	stw r0, 4(r6)
/* 80023FF0  80 04 00 08 */	lwz r0, 8(r4)
/* 80023FF4  90 06 00 08 */	stw r0, 8(r6)
/* 80023FF8  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80023FFC  D0 06 00 0C */	stfs f0, 0xc(r6)
/* 80024000  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80024004  D0 06 00 10 */	stfs f0, 0x10(r6)
/* 80024008  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8002400C  D0 06 00 14 */	stfs f0, 0x14(r6)
/* 80024010  A8 04 00 18 */	lha r0, 0x18(r4)
/* 80024014  B0 06 00 18 */	sth r0, 0x18(r6)
/* 80024018  A8 04 00 1A */	lha r0, 0x1a(r4)
/* 8002401C  B0 06 00 1A */	sth r0, 0x1a(r6)
/* 80024020  A8 04 00 1C */	lha r0, 0x1c(r4)
/* 80024024  B0 06 00 1C */	sth r0, 0x1c(r6)
/* 80024028  A0 04 00 1E */	lhz r0, 0x1e(r4)
/* 8002402C  B0 06 00 1E */	sth r0, 0x1e(r6)
/* 80024030  A0 04 00 20 */	lhz r0, 0x20(r4)
/* 80024034  B0 06 00 20 */	sth r0, 0x20(r6)
/* 80024038  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8002403C  98 06 00 22 */	stb r0, 0x22(r6)
/* 80024040  38 C6 00 24 */	addi r6, r6, 0x24
/* 80024044  38 84 00 24 */	addi r4, r4, 0x24
/* 80024048  38 E7 00 01 */	addi r7, r7, 1
lbl_8002404C:
/* 8002404C  80 05 00 00 */	lwz r0, 0(r5)
/* 80024050  7C 07 00 00 */	cmpw r7, r0
/* 80024054  41 80 FF 8C */	blt lbl_80023FE0
/* 80024058  4E 80 00 20 */	blr 
