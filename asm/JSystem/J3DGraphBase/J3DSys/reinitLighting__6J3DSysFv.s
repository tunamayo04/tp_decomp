lbl_803107E8:
/* 803107E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803107EC  7C 08 02 A6 */	mflr r0
/* 803107F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803107F4  38 60 00 04 */	li r3, 4
/* 803107F8  38 80 00 00 */	li r4, 0
/* 803107FC  38 A0 00 00 */	li r5, 0
/* 80310800  38 C0 00 01 */	li r6, 1
/* 80310804  38 E0 00 00 */	li r7, 0
/* 80310808  39 00 00 00 */	li r8, 0
/* 8031080C  39 20 00 02 */	li r9, 2
/* 80310810  48 04 D3 5D */	bl GXSetChanCtrl
/* 80310814  38 60 00 05 */	li r3, 5
/* 80310818  38 80 00 00 */	li r4, 0
/* 8031081C  38 A0 00 00 */	li r5, 0
/* 80310820  38 C0 00 01 */	li r6, 1
/* 80310824  38 E0 00 00 */	li r7, 0
/* 80310828  39 00 00 00 */	li r8, 0
/* 8031082C  39 20 00 02 */	li r9, 2
/* 80310830  48 04 D3 3D */	bl GXSetChanCtrl
/* 80310834  80 0D 83 D0 */	lwz r0, ColorBlack(r13)
/* 80310838  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031083C  38 60 00 04 */	li r3, 4
/* 80310840  38 81 00 14 */	addi r4, r1, 0x14
/* 80310844  48 04 D1 1D */	bl GXSetChanAmbColor
/* 80310848  80 0D 83 D0 */	lwz r0, ColorBlack(r13)
/* 8031084C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80310850  38 60 00 05 */	li r3, 5
/* 80310854  38 81 00 10 */	addi r4, r1, 0x10
/* 80310858  48 04 D1 09 */	bl GXSetChanAmbColor
/* 8031085C  80 0D 83 D4 */	lwz r0, ColorWhite(r13)
/* 80310860  90 01 00 0C */	stw r0, 0xc(r1)
/* 80310864  38 60 00 04 */	li r3, 4
/* 80310868  38 81 00 0C */	addi r4, r1, 0xc
/* 8031086C  48 04 D1 DD */	bl GXSetChanMatColor
/* 80310870  80 0D 83 D4 */	lwz r0, ColorWhite(r13)
/* 80310874  90 01 00 08 */	stw r0, 8(r1)
/* 80310878  38 60 00 05 */	li r3, 5
/* 8031087C  38 81 00 08 */	addi r4, r1, 8
/* 80310880  48 04 D1 C9 */	bl GXSetChanMatColor
/* 80310884  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80310888  7C 08 03 A6 */	mtlr r0
/* 8031088C  38 21 00 20 */	addi r1, r1, 0x20
/* 80310890  4E 80 00 20 */	blr 
