lbl_8087383C:
/* 8087383C  39 00 00 00 */	li r8, 0
/* 80873840  39 20 00 00 */	li r9, 0
/* 80873844  3C 60 80 88 */	lis r3, __THPHuffmanSizeTab@ha
/* 80873848  38 C3 9B 64 */	addi r6, r3, __THPHuffmanSizeTab@l
/* 8087384C  80 66 00 00 */	lwz r3, 0(r6)
/* 80873850  88 E3 00 00 */	lbz r7, 0(r3)
/* 80873854  3C 60 80 88 */	lis r3, __THPHuffmanCodeTab@ha
/* 80873858  38 A3 9B 68 */	addi r5, r3, __THPHuffmanCodeTab@l
/* 8087385C  48 00 00 3C */	b lbl_80873898
lbl_80873860:
/* 80873860  54 E4 06 3E */	clrlwi r4, r7, 0x18
/* 80873864  48 00 00 18 */	b lbl_8087387C
lbl_80873868:
/* 80873868  80 65 00 00 */	lwz r3, 0(r5)
/* 8087386C  55 00 0B FC */	rlwinm r0, r8, 1, 0xf, 0x1e
/* 80873870  7D 23 03 2E */	sthx r9, r3, r0
/* 80873874  39 29 00 01 */	addi r9, r9, 1
/* 80873878  39 08 00 01 */	addi r8, r8, 1
lbl_8087387C:
/* 8087387C  80 66 00 00 */	lwz r3, 0(r6)
/* 80873880  55 00 04 3E */	clrlwi r0, r8, 0x10
/* 80873884  7C 03 00 AE */	lbzx r0, r3, r0
/* 80873888  7C 04 00 40 */	cmplw r4, r0
/* 8087388C  41 82 FF DC */	beq lbl_80873868
/* 80873890  55 29 0C 3C */	rlwinm r9, r9, 1, 0x10, 0x1e
/* 80873894  38 E7 00 01 */	addi r7, r7, 1
lbl_80873898:
/* 80873898  80 66 00 00 */	lwz r3, 0(r6)
/* 8087389C  55 00 04 3E */	clrlwi r0, r8, 0x10
/* 808738A0  7C 03 00 AE */	lbzx r0, r3, r0
/* 808738A4  28 00 00 00 */	cmplwi r0, 0
/* 808738A8  40 82 FF B8 */	bne lbl_80873860
/* 808738AC  4E 80 00 20 */	blr 
