lbl_8072900C:
/* 8072900C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80729010  7C 08 02 A6 */	mflr r0
/* 80729014  90 01 00 14 */	stw r0, 0x14(r1)
/* 80729018  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8072901C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80729020  41 82 00 1C */	beq lbl_8072903C
/* 80729024  3C A0 80 73 */	lis r5, __vt__12daE_MS_HIO_c@ha
/* 80729028  38 05 97 AC */	addi r0, r5, __vt__12daE_MS_HIO_c@l
/* 8072902C  90 1F 00 00 */	stw r0, 0(r31)
/* 80729030  7C 80 07 35 */	extsh. r0, r4
/* 80729034  40 81 00 08 */	ble lbl_8072903C
/* 80729038  4B BA 5D 04 */	b __dl__FPv
lbl_8072903C:
/* 8072903C  7F E3 FB 78 */	mr r3, r31
/* 80729040  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80729044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80729048  7C 08 03 A6 */	mtlr r0
/* 8072904C  38 21 00 10 */	addi r1, r1, 0x10
/* 80729050  4E 80 00 20 */	blr 
