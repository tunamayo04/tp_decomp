lbl_8020123C:
/* 8020123C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201240  7C 08 02 A6 */	mflr r0
/* 80201244  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201248  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020124C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80201250  41 82 00 1C */	beq lbl_8020126C
/* 80201254  3C A0 80 3C */	lis r5, __vt__16dMeter_menuHIO_c@ha
/* 80201258  38 05 F1 9C */	addi r0, r5, __vt__16dMeter_menuHIO_c@l
/* 8020125C  90 1F 00 00 */	stw r0, 0(r31)
/* 80201260  7C 80 07 35 */	extsh. r0, r4
/* 80201264  40 81 00 08 */	ble lbl_8020126C
/* 80201268  48 0C DA D5 */	bl __dl__FPv
lbl_8020126C:
/* 8020126C  7F E3 FB 78 */	mr r3, r31
/* 80201270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80201274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201278  7C 08 03 A6 */	mtlr r0
/* 8020127C  38 21 00 10 */	addi r1, r1, 0x10
/* 80201280  4E 80 00 20 */	blr 
