lbl_80630E3C:
/* 80630E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80630E40  7C 08 02 A6 */	mflr r0
/* 80630E44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80630E48  28 03 00 00 */	cmplwi r3, 0
/* 80630E4C  41 82 00 10 */	beq lbl_80630E5C
/* 80630E50  4B FF FF 89 */	bl demo_skip__8daB_YO_cFi
/* 80630E54  38 60 00 01 */	li r3, 1
/* 80630E58  48 00 00 08 */	b lbl_80630E60
lbl_80630E5C:
/* 80630E5C  38 60 00 00 */	li r3, 0
lbl_80630E60:
/* 80630E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80630E64  7C 08 03 A6 */	mtlr r0
/* 80630E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80630E6C  4E 80 00 20 */	blr 
