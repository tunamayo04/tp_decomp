lbl_8033B124:
/* 8033B124  7C 08 02 A6 */	mflr r0
/* 8033B128  38 C4 FF E0 */	addi r6, r4, -32
/* 8033B12C  90 01 00 04 */	stw r0, 4(r1)
/* 8033B130  1C 03 00 0C */	mulli r0, r3, 0xc
/* 8033B134  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 8033B138  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8033B13C  80 8D 90 C0 */	lwz r4, HeapArray(r13)
/* 8033B140  80 66 00 04 */	lwz r3, 4(r6)
/* 8033B144  7F E4 02 14 */	add r31, r4, r0
/* 8033B148  28 03 00 00 */	cmplwi r3, 0
/* 8033B14C  80 BF 00 08 */	lwz r5, 8(r31)
/* 8033B150  7C C4 33 78 */	mr r4, r6
/* 8033B154  41 82 00 0C */	beq lbl_8033B160
/* 8033B158  80 04 00 00 */	lwz r0, 0(r4)
/* 8033B15C  90 03 00 00 */	stw r0, 0(r3)
lbl_8033B160:
/* 8033B160  80 64 00 00 */	lwz r3, 0(r4)
/* 8033B164  28 03 00 00 */	cmplwi r3, 0
/* 8033B168  40 82 00 0C */	bne lbl_8033B174
/* 8033B16C  80 A4 00 04 */	lwz r5, 4(r4)
/* 8033B170  48 00 00 0C */	b lbl_8033B17C
lbl_8033B174:
/* 8033B174  80 04 00 04 */	lwz r0, 4(r4)
/* 8033B178  90 03 00 04 */	stw r0, 4(r3)
lbl_8033B17C:
/* 8033B17C  90 BF 00 08 */	stw r5, 8(r31)
/* 8033B180  80 7F 00 04 */	lwz r3, 4(r31)
/* 8033B184  4B FF FE F5 */	bl DLInsert
/* 8033B188  90 7F 00 04 */	stw r3, 4(r31)
/* 8033B18C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8033B190  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8033B194  38 21 00 18 */	addi r1, r1, 0x18
/* 8033B198  7C 08 03 A6 */	mtlr r0
/* 8033B19C  4E 80 00 20 */	blr 
