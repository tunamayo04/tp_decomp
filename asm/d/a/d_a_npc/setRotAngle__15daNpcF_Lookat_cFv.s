lbl_80151F54:
/* 80151F54  38 E0 00 00 */	li r7, 0
/* 80151F58  39 00 00 00 */	li r8, 0
/* 80151F5C  38 80 00 00 */	li r4, 0
/* 80151F60  38 00 00 04 */	li r0, 4
/* 80151F64  7C 09 03 A6 */	mtctr r0
lbl_80151F68:
/* 80151F68  7C C3 22 14 */	add r6, r3, r4
/* 80151F6C  A8 06 00 34 */	lha r0, 0x34(r6)
/* 80151F70  7C E7 02 14 */	add r7, r7, r0
/* 80151F74  2C 07 80 00 */	cmpwi r7, -32768
/* 80151F78  40 80 00 0C */	bge lbl_80151F84
/* 80151F7C  38 A0 80 00 */	li r5, -32768
/* 80151F80  48 00 00 14 */	b lbl_80151F94
lbl_80151F84:
/* 80151F84  2C 07 7F FF */	cmpwi r7, 0x7fff
/* 80151F88  38 A0 7F FF */	li r5, 0x7fff
/* 80151F8C  41 81 00 08 */	bgt lbl_80151F94
/* 80151F90  7C E5 3B 78 */	mr r5, r7
lbl_80151F94:
/* 80151F94  7C A7 2B 78 */	mr r7, r5
/* 80151F98  A8 06 00 36 */	lha r0, 0x36(r6)
/* 80151F9C  7D 08 02 14 */	add r8, r8, r0
/* 80151FA0  2C 08 80 00 */	cmpwi r8, -32768
/* 80151FA4  40 80 00 0C */	bge lbl_80151FB0
/* 80151FA8  38 00 80 00 */	li r0, -32768
/* 80151FAC  48 00 00 14 */	b lbl_80151FC0
lbl_80151FB0:
/* 80151FB0  2C 08 7F FF */	cmpwi r8, 0x7fff
/* 80151FB4  38 00 7F FF */	li r0, 0x7fff
/* 80151FB8  41 81 00 08 */	bgt lbl_80151FC0
/* 80151FBC  7D 00 43 78 */	mr r0, r8
lbl_80151FC0:
/* 80151FC0  7C 08 03 78 */	mr r8, r0
/* 80151FC4  B0 A6 00 7C */	sth r5, 0x7c(r6)
/* 80151FC8  B0 06 00 7E */	sth r0, 0x7e(r6)
/* 80151FCC  38 00 00 00 */	li r0, 0
/* 80151FD0  B0 06 00 80 */	sth r0, 0x80(r6)
/* 80151FD4  38 84 00 06 */	addi r4, r4, 6
/* 80151FD8  42 00 FF 90 */	bdnz lbl_80151F68
/* 80151FDC  4E 80 00 20 */	blr 
