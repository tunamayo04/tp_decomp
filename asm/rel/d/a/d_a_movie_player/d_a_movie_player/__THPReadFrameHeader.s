lbl_80872F48:
/* 80872F48  3C 60 80 88 */	lis r3, __THPInfo@ha
/* 80872F4C  84 A3 9B C4 */	lwzu r5, __THPInfo@l(r3)
/* 80872F50  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80872F54  38 04 00 02 */	addi r0, r4, 2
/* 80872F58  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80872F5C  80 A3 00 00 */	lwz r5, 0(r3)
/* 80872F60  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80872F64  38 04 00 01 */	addi r0, r4, 1
/* 80872F68  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80872F6C  88 04 00 00 */	lbz r0, 0(r4)
/* 80872F70  28 00 00 08 */	cmplwi r0, 8
/* 80872F74  41 82 00 0C */	beq lbl_80872F80
/* 80872F78  38 60 00 0A */	li r3, 0xa
/* 80872F7C  4E 80 00 20 */	blr 
lbl_80872F80:
/* 80872F80  80 C3 00 00 */	lwz r6, 0(r3)
/* 80872F84  80 A6 06 9C */	lwz r5, 0x69c(r6)
/* 80872F88  88 85 00 00 */	lbz r4, 0(r5)
/* 80872F8C  88 05 00 01 */	lbz r0, 1(r5)
/* 80872F90  50 80 44 2E */	rlwimi r0, r4, 8, 0x10, 0x17
/* 80872F94  B0 06 06 94 */	sth r0, 0x694(r6)
/* 80872F98  80 A3 00 00 */	lwz r5, 0(r3)
/* 80872F9C  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80872FA0  38 04 00 02 */	addi r0, r4, 2
/* 80872FA4  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80872FA8  80 C3 00 00 */	lwz r6, 0(r3)
/* 80872FAC  80 A6 06 9C */	lwz r5, 0x69c(r6)
/* 80872FB0  88 85 00 00 */	lbz r4, 0(r5)
/* 80872FB4  88 05 00 01 */	lbz r0, 1(r5)
/* 80872FB8  50 80 44 2E */	rlwimi r0, r4, 8, 0x10, 0x17
/* 80872FBC  B0 06 06 92 */	sth r0, 0x692(r6)
/* 80872FC0  80 A3 00 00 */	lwz r5, 0(r3)
/* 80872FC4  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80872FC8  38 04 00 02 */	addi r0, r4, 2
/* 80872FCC  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80872FD0  80 A3 00 00 */	lwz r5, 0(r3)
/* 80872FD4  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80872FD8  38 04 00 01 */	addi r0, r4, 1
/* 80872FDC  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80872FE0  88 04 00 00 */	lbz r0, 0(r4)
/* 80872FE4  28 00 00 03 */	cmplwi r0, 3
/* 80872FE8  41 82 00 0C */	beq lbl_80872FF4
/* 80872FEC  38 60 00 0C */	li r3, 0xc
/* 80872FF0  4E 80 00 20 */	blr 
lbl_80872FF4:
/* 80872FF4  38 E0 00 00 */	li r7, 0
/* 80872FF8  48 00 00 7C */	b lbl_80873074
lbl_80872FFC:
/* 80872FFC  80 A3 00 00 */	lwz r5, 0(r3)
/* 80873000  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80873004  38 04 00 01 */	addi r0, r4, 1
/* 80873008  90 05 06 9C */	stw r0, 0x69c(r5)
/* 8087300C  80 A3 00 00 */	lwz r5, 0(r3)
/* 80873010  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80873014  38 04 00 01 */	addi r0, r4, 1
/* 80873018  90 05 06 9C */	stw r0, 0x69c(r5)
/* 8087301C  88 84 00 00 */	lbz r4, 0(r4)
/* 80873020  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80873024  40 82 00 0C */	bne lbl_80873030
/* 80873028  28 04 00 22 */	cmplwi r4, 0x22
/* 8087302C  40 82 00 14 */	bne lbl_80873040
lbl_80873030:
/* 80873030  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80873034  41 82 00 14 */	beq lbl_80873048
/* 80873038  28 04 00 11 */	cmplwi r4, 0x11
/* 8087303C  41 82 00 0C */	beq lbl_80873048
lbl_80873040:
/* 80873040  38 60 00 13 */	li r3, 0x13
/* 80873044  4E 80 00 20 */	blr 
lbl_80873048:
/* 80873048  80 A3 00 00 */	lwz r5, 0(r3)
/* 8087304C  80 85 06 9C */	lwz r4, 0x69c(r5)
/* 80873050  38 04 00 01 */	addi r0, r4, 1
/* 80873054  90 05 06 9C */	stw r0, 0x69c(r5)
/* 80873058  88 C4 00 00 */	lbz r6, 0(r4)
/* 8087305C  80 A3 00 00 */	lwz r5, 0(r3)
/* 80873060  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 80873064  1C 80 00 06 */	mulli r4, r0, 6
/* 80873068  38 04 06 80 */	addi r0, r4, 0x680
/* 8087306C  7C C5 01 AE */	stbx r6, r5, r0
/* 80873070  38 E7 00 01 */	addi r7, r7, 1
lbl_80873074:
/* 80873074  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 80873078  28 00 00 03 */	cmplwi r0, 3
/* 8087307C  41 80 FF 80 */	blt lbl_80872FFC
/* 80873080  38 60 00 00 */	li r3, 0
/* 80873084  4E 80 00 20 */	blr 
