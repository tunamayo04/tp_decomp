lbl_804801FC:
/* 804801FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80480200  7C 08 02 A6 */	mflr r0
/* 80480204  90 01 00 24 */	stw r0, 0x24(r1)
/* 80480208  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8048020C  7C 7F 1B 78 */	mr r31, r3
/* 80480210  80 03 08 AC */	lwz r0, 0x8ac(r3)
/* 80480214  1C 80 00 A0 */	mulli r4, r0, 0xa0
/* 80480218  3C 60 80 48 */	lis r3, M_attr__Q212daObjMovebox5Act_c@ha
/* 8048021C  38 03 11 68 */	addi r0, r3, M_attr__Q212daObjMovebox5Act_c@l
/* 80480220  7C 60 22 14 */	add r3, r0, r4
/* 80480224  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80480228  D0 01 00 08 */	stfs f0, 8(r1)
/* 8048022C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80480230  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80480234  38 61 00 08 */	addi r3, r1, 8
/* 80480238  7C 64 1B 78 */	mr r4, r3
/* 8048023C  3C A0 80 48 */	lis r5, lit_4890@ha
/* 80480240  C0 25 16 94 */	lfs f1, lit_4890@l(r5)
/* 80480244  4B EC 6E 94 */	b PSVECScale
/* 80480248  38 60 03 01 */	li r3, 0x301
/* 8048024C  38 80 00 03 */	li r4, 3
/* 80480250  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80480254  38 C0 FF FF */	li r6, -1
/* 80480258  38 E0 00 00 */	li r7, 0
/* 8048025C  39 01 00 08 */	addi r8, r1, 8
/* 80480260  39 20 FF FF */	li r9, -1
/* 80480264  4B B9 9B 34 */	b fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc
/* 80480268  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8048026C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80480270  7C 08 03 A6 */	mtlr r0
/* 80480274  38 21 00 20 */	addi r1, r1, 0x20
/* 80480278  4E 80 00 20 */	blr 
