lbl_80AD787C:
/* 80AD787C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AD7880  7C 08 02 A6 */	mflr r0
/* 80AD7884  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AD7888  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AD788C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AD7890  41 82 00 1C */	beq lbl_80AD78AC
/* 80AD7894  3C A0 80 AD */	lis r5, __vt__22daNpcT_MotionSeqMngr_c@ha
/* 80AD7898  38 05 7F F8 */	addi r0, r5, __vt__22daNpcT_MotionSeqMngr_c@l
/* 80AD789C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80AD78A0  7C 80 07 35 */	extsh. r0, r4
/* 80AD78A4  40 81 00 08 */	ble lbl_80AD78AC
/* 80AD78A8  4B 7F 74 94 */	b __dl__FPv
lbl_80AD78AC:
/* 80AD78AC  7F E3 FB 78 */	mr r3, r31
/* 80AD78B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AD78B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AD78B8  7C 08 03 A6 */	mtlr r0
/* 80AD78BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80AD78C0  4E 80 00 20 */	blr 
