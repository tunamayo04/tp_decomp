lbl_801073D0:
/* 801073D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801073D4  7C 08 02 A6 */	mflr r0
/* 801073D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801073DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801073E0  7C 7F 1B 78 */	mr r31, r3
/* 801073E4  38 80 00 AB */	li r4, 0xab
/* 801073E8  4B FF F2 69 */	bl commonProcBoardInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 801073EC  7F E3 FB 78 */	mr r3, r31
/* 801073F0  4B FC 77 05 */	bl setSubjectMode__9daAlink_cFv
/* 801073F4  7F E3 FB 78 */	mr r3, r31
/* 801073F8  38 80 00 00 */	li r4, 0
/* 801073FC  4B FF F1 39 */	bl setCommonBoardAnime__9daAlink_cFi
/* 80107400  38 60 00 01 */	li r3, 1
/* 80107404  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80107408  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010740C  7C 08 03 A6 */	mtlr r0
/* 80107410  38 21 00 10 */	addi r1, r1, 0x10
/* 80107414  4E 80 00 20 */	blr 
