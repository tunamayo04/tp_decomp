lbl_80477A14:
/* 80477A14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80477A18  7C 08 02 A6 */	mflr r0
/* 80477A1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80477A20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80477A24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80477A28  7C 7E 1B 78 */	mr r30, r3
/* 80477A2C  4B FF 7C 79 */	bl data__12daObjCarry_cFv
/* 80477A30  83 E3 00 64 */	lwz r31, 0x64(r3)
/* 80477A34  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80477A38  7C 03 07 74 */	extsb r3, r0
/* 80477A3C  4B BB 56 30 */	b dComIfGp_getReverb__Fi
/* 80477A40  7C 67 1B 78 */	mr r7, r3
/* 80477A44  93 E1 00 08 */	stw r31, 8(r1)
/* 80477A48  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha
/* 80477A4C  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l
/* 80477A50  80 63 00 00 */	lwz r3, 0(r3)
/* 80477A54  38 81 00 08 */	addi r4, r1, 8
/* 80477A58  38 BE 05 38 */	addi r5, r30, 0x538
/* 80477A5C  38 C0 00 00 */	li r6, 0
/* 80477A60  3D 00 80 48 */	lis r8, lit_4685@ha
/* 80477A64  C0 28 A3 CC */	lfs f1, lit_4685@l(r8)
/* 80477A68  FC 40 08 90 */	fmr f2, f1
/* 80477A6C  3D 00 80 48 */	lis r8, lit_5550@ha
/* 80477A70  C0 68 A4 0C */	lfs f3, lit_5550@l(r8)
/* 80477A74  FC 80 18 90 */	fmr f4, f3
/* 80477A78  39 00 00 00 */	li r8, 0
/* 80477A7C  4B E3 3F 08 */	b seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80477A80  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80477A84  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80477A88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80477A8C  7C 08 03 A6 */	mtlr r0
/* 80477A90  38 21 00 20 */	addi r1, r1, 0x20
/* 80477A94  4E 80 00 20 */	blr 
