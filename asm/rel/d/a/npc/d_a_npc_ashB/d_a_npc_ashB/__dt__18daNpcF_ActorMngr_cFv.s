lbl_80961894:
/* 80961894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80961898  7C 08 02 A6 */	mflr r0
/* 8096189C  90 01 00 14 */	stw r0, 0x14(r1)
/* 809618A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809618A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 809618A8  41 82 00 1C */	beq lbl_809618C4
/* 809618AC  3C A0 80 96 */	lis r5, __vt__18daNpcF_ActorMngr_c@ha
/* 809618B0  38 05 27 78 */	addi r0, r5, __vt__18daNpcF_ActorMngr_c@l
/* 809618B4  90 1F 00 04 */	stw r0, 4(r31)
/* 809618B8  7C 80 07 35 */	extsh. r0, r4
/* 809618BC  40 81 00 08 */	ble lbl_809618C4
/* 809618C0  4B 96 D4 7C */	b __dl__FPv
lbl_809618C4:
/* 809618C4  7F E3 FB 78 */	mr r3, r31
/* 809618C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809618CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809618D0  7C 08 03 A6 */	mtlr r0
/* 809618D4  38 21 00 10 */	addi r1, r1, 0x10
/* 809618D8  4E 80 00 20 */	blr 
