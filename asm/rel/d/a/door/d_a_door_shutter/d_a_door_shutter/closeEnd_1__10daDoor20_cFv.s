lbl_804627EC:
/* 804627EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804627F0  7C 08 02 A6 */	mflr r0
/* 804627F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 804627F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804627FC  7C 7F 1B 78 */	mr r31, r3
/* 80462800  88 03 04 E2 */	lbz r0, 0x4e2(r3)
/* 80462804  7C 03 07 74 */	extsb r3, r0
/* 80462808  4B BC A8 64 */	b dComIfGp_getReverb__Fi
/* 8046280C  7C 67 1B 78 */	mr r7, r3
/* 80462810  3C 60 00 08 */	lis r3, 0x0008 /* 0x000800B5@ha */
/* 80462814  38 03 00 B5 */	addi r0, r3, 0x00B5 /* 0x000800B5@l */
/* 80462818  90 01 00 08 */	stw r0, 8(r1)
/* 8046281C  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha
/* 80462820  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l
/* 80462824  80 63 00 00 */	lwz r3, 0(r3)
/* 80462828  38 81 00 08 */	addi r4, r1, 8
/* 8046282C  38 BF 04 D0 */	addi r5, r31, 0x4d0
/* 80462830  38 C0 00 00 */	li r6, 0
/* 80462834  3D 00 80 46 */	lis r8, lit_4124@ha
/* 80462838  C0 28 68 24 */	lfs f1, lit_4124@l(r8)
/* 8046283C  FC 40 08 90 */	fmr f2, f1
/* 80462840  3D 00 80 46 */	lis r8, lit_4609@ha
/* 80462844  C0 68 68 70 */	lfs f3, lit_4609@l(r8)
/* 80462848  FC 80 18 90 */	fmr f4, f3
/* 8046284C  39 00 00 00 */	li r8, 0
/* 80462850  4B E4 91 34 */	b seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80462854  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80462858  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046285C  7C 08 03 A6 */	mtlr r0
/* 80462860  38 21 00 20 */	addi r1, r1, 0x20
/* 80462864  4E 80 00 20 */	blr 
