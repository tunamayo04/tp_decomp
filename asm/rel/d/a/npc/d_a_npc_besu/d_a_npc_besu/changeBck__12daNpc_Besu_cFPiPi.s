lbl_80539840:
/* 80539840  88 03 10 C4 */	lbz r0, 0x10c4(r3)
/* 80539844  28 00 00 11 */	cmplwi r0, 0x11
/* 80539848  4C 82 00 20 */	bnelr 
/* 8053984C  80 04 00 00 */	lwz r0, 0(r4)
/* 80539850  2C 00 00 07 */	cmpwi r0, 7
/* 80539854  41 82 00 50 */	beq lbl_805398A4
/* 80539858  40 80 00 14 */	bge lbl_8053986C
/* 8053985C  2C 00 00 05 */	cmpwi r0, 5
/* 80539860  41 82 00 1C */	beq lbl_8053987C
/* 80539864  40 80 00 2C */	bge lbl_80539890
/* 80539868  4E 80 00 20 */	blr 
lbl_8053986C:
/* 8053986C  2C 00 00 09 */	cmpwi r0, 9
/* 80539870  41 82 00 58 */	beq lbl_805398C8
/* 80539874  4C 80 00 20 */	bgelr 
/* 80539878  48 00 00 3C */	b lbl_805398B4
lbl_8053987C:
/* 8053987C  38 00 00 05 */	li r0, 5
/* 80539880  90 04 00 00 */	stw r0, 0(r4)
/* 80539884  38 00 00 07 */	li r0, 7
/* 80539888  90 05 00 00 */	stw r0, 0(r5)
/* 8053988C  4E 80 00 20 */	blr 
lbl_80539890:
/* 80539890  38 00 00 06 */	li r0, 6
/* 80539894  90 04 00 00 */	stw r0, 0(r4)
/* 80539898  38 00 00 07 */	li r0, 7
/* 8053989C  90 05 00 00 */	stw r0, 0(r5)
/* 805398A0  4E 80 00 20 */	blr 
lbl_805398A4:
/* 805398A4  38 00 00 07 */	li r0, 7
/* 805398A8  90 04 00 00 */	stw r0, 0(r4)
/* 805398AC  90 05 00 00 */	stw r0, 0(r5)
/* 805398B0  4E 80 00 20 */	blr 
lbl_805398B4:
/* 805398B4  38 00 00 08 */	li r0, 8
/* 805398B8  90 04 00 00 */	stw r0, 0(r4)
/* 805398BC  38 00 00 07 */	li r0, 7
/* 805398C0  90 05 00 00 */	stw r0, 0(r5)
/* 805398C4  4E 80 00 20 */	blr 
lbl_805398C8:
/* 805398C8  38 00 00 09 */	li r0, 9
/* 805398CC  90 04 00 00 */	stw r0, 0(r4)
/* 805398D0  38 00 00 07 */	li r0, 7
/* 805398D4  90 05 00 00 */	stw r0, 0(r5)
/* 805398D8  4E 80 00 20 */	blr 
