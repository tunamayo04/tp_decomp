lbl_80860EAC:
/* 80860EAC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80860EB0  7C 08 02 A6 */	mflr r0
/* 80860EB4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80860EB8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80860EBC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80860EC0  7C 7E 1B 78 */	mr r30, r3
/* 80860EC4  3C 80 80 86 */	lis r4, lit_3839@ha
/* 80860EC8  3B E4 11 34 */	addi r31, r4, lit_3839@l
/* 80860ECC  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 80860ED0  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80860ED4  40 82 00 1C */	bne lbl_80860EF0
/* 80860ED8  28 1E 00 00 */	cmplwi r30, 0
/* 80860EDC  41 82 00 08 */	beq lbl_80860EE4
/* 80860EE0  4B 7B 7C 84 */	b __ct__10fopAc_ac_cFv
lbl_80860EE4:
/* 80860EE4  80 1E 04 A0 */	lwz r0, 0x4a0(r30)
/* 80860EE8  60 00 00 08 */	ori r0, r0, 8
/* 80860EEC  90 1E 04 A0 */	stw r0, 0x4a0(r30)
lbl_80860EF0:
/* 80860EF0  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80860EF4  98 1E 05 73 */	stb r0, 0x573(r30)
/* 80860EF8  A8 1E 04 E0 */	lha r0, 0x4e0(r30)
/* 80860EFC  54 00 B6 BE */	rlwinm r0, r0, 0x16, 0x1a, 0x1f
/* 80860F00  98 1E 05 6C */	stb r0, 0x56c(r30)
/* 80860F04  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80860F08  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 80860F0C  98 1E 05 6D */	stb r0, 0x56d(r30)
/* 80860F10  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80860F14  54 00 86 3E */	rlwinm r0, r0, 0x10, 0x18, 0x1f
/* 80860F18  98 1E 05 6E */	stb r0, 0x56e(r30)
/* 80860F1C  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80860F20  54 00 46 3E */	srwi r0, r0, 0x18
/* 80860F24  98 1E 05 6F */	stb r0, 0x56f(r30)
/* 80860F28  A8 1E 04 E0 */	lha r0, 0x4e0(r30)
/* 80860F2C  54 00 06 FE */	clrlwi r0, r0, 0x1b
/* 80860F30  98 1E 05 71 */	stb r0, 0x571(r30)
/* 80860F34  A8 1E 04 E0 */	lha r0, 0x4e0(r30)
/* 80860F38  54 00 DE FE */	rlwinm r0, r0, 0x1b, 0x1b, 0x1f
/* 80860F3C  98 1E 05 72 */	stb r0, 0x572(r30)
/* 80860F40  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 80860F44  A8 1E 04 E4 */	lha r0, 0x4e4(r30)
/* 80860F48  C8 5F 00 58 */	lfd f2, 0x58(r31)
/* 80860F4C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80860F50  90 01 00 0C */	stw r0, 0xc(r1)
/* 80860F54  3C 60 43 30 */	lis r3, 0x4330
/* 80860F58  90 61 00 08 */	stw r3, 8(r1)
/* 80860F5C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80860F60  EC 00 10 28 */	fsubs f0, f0, f2
/* 80860F64  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80860F68  EC 00 08 24 */	fdivs f0, f0, f1
/* 80860F6C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80860F70  D0 1E 05 78 */	stfs f0, 0x578(r30)
/* 80860F74  A8 1E 04 E6 */	lha r0, 0x4e6(r30)
/* 80860F78  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80860F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80860F80  90 61 00 10 */	stw r3, 0x10(r1)
/* 80860F84  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80860F88  EC 00 10 28 */	fsubs f0, f0, f2
/* 80860F8C  EC 00 08 24 */	fdivs f0, f0, f1
/* 80860F90  EC 03 00 32 */	fmuls f0, f3, f0
/* 80860F94  D0 1E 05 7C */	stfs f0, 0x57c(r30)
/* 80860F98  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 80860F9C  4B A0 69 F0 */	b cM_rndFX__Ff
/* 80860FA0  FC 00 08 1E */	fctiwz f0, f1
/* 80860FA4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80860FA8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80860FAC  B0 1E 05 88 */	sth r0, 0x588(r30)
/* 80860FB0  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 80860FB4  4B A0 69 D8 */	b cM_rndFX__Ff
/* 80860FB8  FC 00 08 1E */	fctiwz f0, f1
/* 80860FBC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80860FC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80860FC4  B0 1E 05 8A */	sth r0, 0x58a(r30)
/* 80860FC8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80860FCC  D0 3E 05 84 */	stfs f1, 0x584(r30)
/* 80860FD0  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80860FD4  D0 1E 05 68 */	stfs f0, 0x568(r30)
/* 80860FD8  88 1E 05 6C */	lbz r0, 0x56c(r30)
/* 80860FDC  28 00 00 07 */	cmplwi r0, 7
/* 80860FE0  41 81 01 30 */	bgt lbl_80861110
/* 80860FE4  3C 60 80 86 */	lis r3, lit_3917@ha
/* 80860FE8  38 63 11 9C */	addi r3, r3, lit_3917@l
/* 80860FEC  54 00 10 3A */	slwi r0, r0, 2
/* 80860FF0  7C 03 00 2E */	lwzx r0, r3, r0
/* 80860FF4  7C 09 03 A6 */	mtctr r0
/* 80860FF8  4E 80 04 20 */	bctr 
lbl_80860FFC:
/* 80860FFC  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80861000  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 80861004  D0 3E 05 74 */	stfs f1, 0x574(r30)
/* 80861008  38 00 00 00 */	li r0, 0
/* 8086100C  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 80861010  38 00 00 03 */	li r0, 3
/* 80861014  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 80861018  48 00 00 F8 */	b lbl_80861110
lbl_8086101C:
/* 8086101C  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80861020  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 80861024  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80861028  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 8086102C  38 00 00 00 */	li r0, 0
/* 80861030  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 80861034  38 00 00 03 */	li r0, 3
/* 80861038  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 8086103C  48 00 00 D4 */	b lbl_80861110
lbl_80861040:
/* 80861040  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80861044  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 80861048  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 8086104C  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 80861050  38 00 00 00 */	li r0, 0
/* 80861054  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 80861058  38 00 00 03 */	li r0, 3
/* 8086105C  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 80861060  48 00 00 B0 */	b lbl_80861110
lbl_80861064:
/* 80861064  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 80861068  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 8086106C  D0 3E 05 74 */	stfs f1, 0x574(r30)
/* 80861070  38 00 00 02 */	li r0, 2
/* 80861074  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 80861078  38 00 00 03 */	li r0, 3
/* 8086107C  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 80861080  48 00 00 90 */	b lbl_80861110
lbl_80861084:
/* 80861084  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80861088  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 8086108C  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80861090  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 80861094  38 00 00 02 */	li r0, 2
/* 80861098  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 8086109C  38 00 00 03 */	li r0, 3
/* 808610A0  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 808610A4  48 00 00 6C */	b lbl_80861110
lbl_808610A8:
/* 808610A8  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 808610AC  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 808610B0  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 808610B4  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 808610B8  38 00 00 02 */	li r0, 2
/* 808610BC  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 808610C0  38 00 00 03 */	li r0, 3
/* 808610C4  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 808610C8  48 00 00 48 */	b lbl_80861110
lbl_808610CC:
/* 808610CC  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 808610D0  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 808610D4  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 808610D8  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 808610DC  38 00 00 02 */	li r0, 2
/* 808610E0  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 808610E4  38 00 00 01 */	li r0, 1
/* 808610E8  98 1E 05 8D */	stb r0, 0x58d(r30)
/* 808610EC  48 00 00 24 */	b lbl_80861110
lbl_808610F0:
/* 808610F0  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 808610F4  D0 1E 05 80 */	stfs f0, 0x580(r30)
/* 808610F8  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 808610FC  D0 1E 05 74 */	stfs f0, 0x574(r30)
/* 80861100  38 00 00 02 */	li r0, 2
/* 80861104  98 1E 05 8C */	stb r0, 0x58c(r30)
/* 80861108  38 00 00 01 */	li r0, 1
/* 8086110C  98 1E 05 8D */	stb r0, 0x58d(r30)
lbl_80861110:
/* 80861110  38 60 00 04 */	li r3, 4
/* 80861114  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80861118  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8086111C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80861120  7C 08 03 A6 */	mtlr r0
/* 80861124  38 21 00 30 */	addi r1, r1, 0x30
/* 80861128  4E 80 00 20 */	blr 
