lbl_80742004:
/* 80742004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80742008  7C 08 02 A6 */	mflr r0
/* 8074200C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80742010  28 03 00 00 */	cmplwi r3, 0
/* 80742014  41 82 00 10 */	beq lbl_80742024
/* 80742018  4B FF FF 9D */	bl DemoSkip__8daE_PM_cFi
/* 8074201C  38 60 00 01 */	li r3, 1
/* 80742020  48 00 00 08 */	b lbl_80742028
lbl_80742024:
/* 80742024  38 60 00 00 */	li r3, 0
lbl_80742028:
/* 80742028  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8074202C  7C 08 03 A6 */	mtlr r0
/* 80742030  38 21 00 10 */	addi r1, r1, 0x10
/* 80742034  4E 80 00 20 */	blr 
