lbl_802B43E0:
/* 802B43E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B43E4  80 A3 00 04 */	lwz r5, 4(r3)
/* 802B43E8  28 05 00 00 */	cmplwi r5, 0
/* 802B43EC  41 82 00 10 */	beq lbl_802B43FC
/* 802B43F0  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 802B43F4  90 A1 00 08 */	stw r5, 8(r1)
/* 802B43F8  48 00 00 08 */	b lbl_802B4400
lbl_802B43FC:
/* 802B43FC  38 A0 FF FF */	li r5, -1
lbl_802B4400:
/* 802B4400  3C 05 FF 00 */	addis r0, r5, 0xff00
/* 802B4404  28 00 00 0F */	cmplwi r0, 0xf
/* 802B4408  40 82 00 88 */	bne lbl_802B4490
/* 802B440C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802B4410  41 82 00 44 */	beq lbl_802B4454
/* 802B4414  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802B4418  38 00 00 05 */	li r0, 5
/* 802B441C  90 03 00 30 */	stw r0, 0x30(r3)
/* 802B4420  C0 62 BF 98 */	lfs f3, lit_3372(r2)
/* 802B4424  EC 43 00 28 */	fsubs f2, f3, f0
/* 802B4428  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802B442C  C8 22 BF A8 */	lfd f1, lit_3561(r2)
/* 802B4430  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B4434  3C 00 43 30 */	lis r0, 0x4330
/* 802B4438  90 01 00 10 */	stw r0, 0x10(r1)
/* 802B443C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802B4440  EC 00 08 28 */	fsubs f0, f0, f1
/* 802B4444  EC 02 00 24 */	fdivs f0, f2, f0
/* 802B4448  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802B444C  D0 63 00 2C */	stfs f3, 0x2c(r3)
/* 802B4450  48 00 00 40 */	b lbl_802B4490
lbl_802B4454:
/* 802B4454  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802B4458  38 00 00 05 */	li r0, 5
/* 802B445C  90 03 00 30 */	stw r0, 0x30(r3)
/* 802B4460  C0 62 C0 14 */	lfs f3, lit_5913(r2)
/* 802B4464  EC 43 00 28 */	fsubs f2, f3, f0
/* 802B4468  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802B446C  C8 22 BF A8 */	lfd f1, lit_3561(r2)
/* 802B4470  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B4474  3C 00 43 30 */	lis r0, 0x4330
/* 802B4478  90 01 00 10 */	stw r0, 0x10(r1)
/* 802B447C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802B4480  EC 00 08 28 */	fsubs f0, f0, f1
/* 802B4484  EC 02 00 24 */	fdivs f0, f2, f0
/* 802B4488  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802B448C  D0 63 00 2C */	stfs f3, 0x2c(r3)
lbl_802B4490:
/* 802B4490  38 21 00 20 */	addi r1, r1, 0x20
/* 802B4494  4E 80 00 20 */	blr 
