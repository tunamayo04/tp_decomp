lbl_80339DD4:
/* 80339DD4  7C 60 00 A6 */	mfmsr r3
/* 80339DD8  60 63 20 00 */	ori r3, r3, 0x2000
/* 80339DDC  7C 60 01 24 */	mtmsr r3
/* 80339DE0  7C 78 E2 A6 */	mfspr r3, 0x398
/* 80339DE4  54 63 1F FF */	rlwinm. r3, r3, 3, 0x1f, 0x1f
/* 80339DE8  41 82 00 8C */	beq lbl_80339E74
/* 80339DEC  3C 60 80 45 */	lis r3, ZeroPS@ha
/* 80339DF0  38 63 16 18 */	addi r3, r3, ZeroPS@l
/* 80339DF4  E0 03 00 00 */	psq_l f0, 0(r3), 0, 0 /* qr0 */
/* 80339DF8  10 20 00 90 */	ps_mr f1, f0
/* 80339DFC  10 40 00 90 */	ps_mr f2, f0
/* 80339E00  10 60 00 90 */	ps_mr f3, f0
/* 80339E04  10 80 00 90 */	ps_mr f4, f0
/* 80339E08  10 A0 00 90 */	ps_mr f5, f0
/* 80339E0C  10 C0 00 90 */	ps_mr f6, f0
/* 80339E10  10 E0 00 90 */	ps_mr f7, f0
/* 80339E14  11 00 00 90 */	ps_mr f8, f0
/* 80339E18  11 20 00 90 */	ps_mr f9, f0
/* 80339E1C  11 40 00 90 */	ps_mr f10, f0
/* 80339E20  11 60 00 90 */	ps_mr f11, f0
/* 80339E24  11 80 00 90 */	ps_mr f12, f0
/* 80339E28  11 A0 00 90 */	ps_mr f13, f0
/* 80339E2C  11 C0 00 90 */	ps_mr f14, f0
/* 80339E30  11 E0 00 90 */	ps_mr f15, f0
/* 80339E34  12 00 00 90 */	ps_mr f16, f0
/* 80339E38  12 20 00 90 */	ps_mr f17, f0
/* 80339E3C  12 40 00 90 */	ps_mr f18, f0
/* 80339E40  12 60 00 90 */	ps_mr f19, f0
/* 80339E44  12 80 00 90 */	ps_mr f20, f0
/* 80339E48  12 A0 00 90 */	ps_mr f21, f0
/* 80339E4C  12 C0 00 90 */	ps_mr f22, f0
/* 80339E50  12 E0 00 90 */	ps_mr f23, f0
/* 80339E54  13 00 00 90 */	ps_mr f24, f0
/* 80339E58  13 20 00 90 */	ps_mr f25, f0
/* 80339E5C  13 40 00 90 */	ps_mr f26, f0
/* 80339E60  13 60 00 90 */	ps_mr f27, f0
/* 80339E64  13 80 00 90 */	ps_mr f28, f0
/* 80339E68  13 A0 00 90 */	ps_mr f29, f0
/* 80339E6C  13 C0 00 90 */	ps_mr f30, f0
/* 80339E70  13 E0 00 90 */	ps_mr f31, f0
lbl_80339E74:
/* 80339E74  C8 0D 90 90 */	lfd f0, ZeroF(r13)
/* 80339E78  FC 20 00 90 */	fmr f1, f0
/* 80339E7C  FC 40 00 90 */	fmr f2, f0
/* 80339E80  FC 60 00 90 */	fmr f3, f0
/* 80339E84  FC 80 00 90 */	fmr f4, f0
/* 80339E88  FC A0 00 90 */	fmr f5, f0
/* 80339E8C  FC C0 00 90 */	fmr f6, f0
/* 80339E90  FC E0 00 90 */	fmr f7, f0
/* 80339E94  FD 00 00 90 */	fmr f8, f0
/* 80339E98  FD 20 00 90 */	fmr f9, f0
/* 80339E9C  FD 40 00 90 */	fmr f10, f0
/* 80339EA0  FD 60 00 90 */	fmr f11, f0
/* 80339EA4  FD 80 00 90 */	fmr f12, f0
/* 80339EA8  FD A0 00 90 */	fmr f13, f0
/* 80339EAC  FD C0 00 90 */	fmr f14, f0
/* 80339EB0  FD E0 00 90 */	fmr f15, f0
/* 80339EB4  FE 00 00 90 */	fmr f16, f0
/* 80339EB8  FE 20 00 90 */	fmr f17, f0
/* 80339EBC  FE 40 00 90 */	fmr f18, f0
/* 80339EC0  FE 60 00 90 */	fmr f19, f0
/* 80339EC4  FE 80 00 90 */	fmr f20, f0
/* 80339EC8  FE A0 00 90 */	fmr f21, f0
/* 80339ECC  FE C0 00 90 */	fmr f22, f0
/* 80339ED0  FE E0 00 90 */	fmr f23, f0
/* 80339ED4  FF 00 00 90 */	fmr f24, f0
/* 80339ED8  FF 20 00 90 */	fmr f25, f0
/* 80339EDC  FF 40 00 90 */	fmr f26, f0
/* 80339EE0  FF 60 00 90 */	fmr f27, f0
/* 80339EE4  FF 80 00 90 */	fmr f28, f0
/* 80339EE8  FF A0 00 90 */	fmr f29, f0
/* 80339EEC  FF C0 00 90 */	fmr f30, f0
/* 80339EF0  FF E0 00 90 */	fmr f31, f0
/* 80339EF4  FD FE 05 8E */	mtfsf 0xff, f0
/* 80339EF8  4E 80 00 20 */	blr 
