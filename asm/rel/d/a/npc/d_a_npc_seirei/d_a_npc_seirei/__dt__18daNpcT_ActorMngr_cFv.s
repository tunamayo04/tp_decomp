lbl_80AD7834:
/* 80AD7834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AD7838  7C 08 02 A6 */	mflr r0
/* 80AD783C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AD7840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AD7844  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AD7848  41 82 00 1C */	beq lbl_80AD7864
/* 80AD784C  3C A0 80 AE */	lis r5, __vt__18daNpcT_ActorMngr_c@ha
/* 80AD7850  38 05 80 04 */	addi r0, r5, __vt__18daNpcT_ActorMngr_c@l
/* 80AD7854  90 1F 00 04 */	stw r0, 4(r31)
/* 80AD7858  7C 80 07 35 */	extsh. r0, r4
/* 80AD785C  40 81 00 08 */	ble lbl_80AD7864
/* 80AD7860  4B 7F 74 DC */	b __dl__FPv
lbl_80AD7864:
/* 80AD7864  7F E3 FB 78 */	mr r3, r31
/* 80AD7868  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AD786C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AD7870  7C 08 03 A6 */	mtlr r0
/* 80AD7874  38 21 00 10 */	addi r1, r1, 0x10
/* 80AD7878  4E 80 00 20 */	blr 
