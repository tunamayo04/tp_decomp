lbl_80333834:
/* 80333834  80 C3 00 04 */	lwz r6, 4(r3)
/* 80333838  80 A3 00 08 */	lwz r5, 8(r3)
/* 8033383C  54 80 08 3C */	slwi r0, r4, 1
/* 80333840  7C 05 02 2E */	lhzx r0, r5, r0
/* 80333844  1C 00 01 38 */	mulli r0, r0, 0x138
/* 80333848  7C 86 02 14 */	add r4, r6, r0
/* 8033384C  88 04 00 02 */	lbz r0, 2(r4)
/* 80333850  28 00 00 FF */	cmplwi r0, 0xff
/* 80333854  41 82 00 10 */	beq lbl_80333864
/* 80333858  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8033385C  7C 63 00 AE */	lbzx r3, r3, r0
/* 80333860  4E 80 00 20 */	blr 
lbl_80333864:
/* 80333864  38 60 00 00 */	li r3, 0
/* 80333868  4E 80 00 20 */	blr 
