lbl_80664768:
/* 80664768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8066476C  7C 08 02 A6 */	mflr r0
/* 80664770  90 01 00 14 */	stw r0, 0x14(r1)
/* 80664774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80664778  93 C1 00 08 */	stw r30, 8(r1)
/* 8066477C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80664780  7C 9F 23 78 */	mr r31, r4
/* 80664784  41 82 00 38 */	beq lbl_806647BC
/* 80664788  3C 60 80 66 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 8066478C  38 03 7A FC */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 80664790  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80664794  38 7E 00 14 */	addi r3, r30, 0x14
/* 80664798  38 80 FF FF */	li r4, -1
/* 8066479C  4B C0 A7 7C */	b __dt__8cM3dGCirFv
/* 806647A0  7F C3 F3 78 */	mr r3, r30
/* 806647A4  38 80 00 00 */	li r4, 0
/* 806647A8  4B C0 39 08 */	b __dt__13cBgS_PolyInfoFv
/* 806647AC  7F E0 07 35 */	extsh. r0, r31
/* 806647B0  40 81 00 0C */	ble lbl_806647BC
/* 806647B4  7F C3 F3 78 */	mr r3, r30
/* 806647B8  4B C6 A5 84 */	b __dl__FPv
lbl_806647BC:
/* 806647BC  7F C3 F3 78 */	mr r3, r30
/* 806647C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806647C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 806647C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806647CC  7C 08 03 A6 */	mtlr r0
/* 806647D0  38 21 00 10 */	addi r1, r1, 0x10
/* 806647D4  4E 80 00 20 */	blr 
