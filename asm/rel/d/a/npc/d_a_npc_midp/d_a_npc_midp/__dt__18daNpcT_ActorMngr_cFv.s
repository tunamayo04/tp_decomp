lbl_80A7315C:
/* 80A7315C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A73160  7C 08 02 A6 */	mflr r0
/* 80A73164  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A73168  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A7316C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A73170  41 82 00 1C */	beq lbl_80A7318C
/* 80A73174  3C A0 80 A7 */	lis r5, __vt__18daNpcT_ActorMngr_c@ha
/* 80A73178  38 05 3C 48 */	addi r0, r5, __vt__18daNpcT_ActorMngr_c@l
/* 80A7317C  90 1F 00 04 */	stw r0, 4(r31)
/* 80A73180  7C 80 07 35 */	extsh. r0, r4
/* 80A73184  40 81 00 08 */	ble lbl_80A7318C
/* 80A73188  4B 85 BB B4 */	b __dl__FPv
lbl_80A7318C:
/* 80A7318C  7F E3 FB 78 */	mr r3, r31
/* 80A73190  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A73194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A73198  7C 08 03 A6 */	mtlr r0
/* 80A7319C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A731A0  4E 80 00 20 */	blr 
