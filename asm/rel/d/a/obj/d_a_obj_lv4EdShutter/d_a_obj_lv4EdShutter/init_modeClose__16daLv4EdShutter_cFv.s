lbl_80C5E464:
/* 80C5E464  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80C5E468  7C 08 02 A6 */	mflr r0
/* 80C5E46C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80C5E470  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80C5E474  7C 7F 1B 78 */	mr r31, r3
/* 80C5E478  3C 60 80 C6 */	lis r3, l_HIO@ha
/* 80C5E47C  38 63 EA 64 */	addi r3, r3, l_HIO@l
/* 80C5E480  C0 03 00 04 */	lfs f0, 4(r3)
/* 80C5E484  D0 1F 05 D8 */	stfs f0, 0x5d8(r31)
/* 80C5E488  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 80C5E48C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80C5E490  C0 1F 04 D4 */	lfs f0, 0x4d4(r31)
/* 80C5E494  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80C5E498  C0 1F 04 D8 */	lfs f0, 0x4d8(r31)
/* 80C5E49C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80C5E4A0  C0 1F 04 AC */	lfs f0, 0x4ac(r31)
/* 80C5E4A4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80C5E4A8  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 80C5E4AC  7C 03 07 74 */	extsb r3, r0
/* 80C5E4B0  4B 3C EB BC */	b dComIfGp_getReverb__Fi
/* 80C5E4B4  7C 67 1B 78 */	mr r7, r3
/* 80C5E4B8  3C 60 00 08 */	lis r3, 0x0008 /* 0x000801B6@ha */
/* 80C5E4BC  38 03 01 B6 */	addi r0, r3, 0x01B6 /* 0x000801B6@l */
/* 80C5E4C0  90 01 00 08 */	stw r0, 8(r1)
/* 80C5E4C4  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha
/* 80C5E4C8  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l
/* 80C5E4CC  80 63 00 00 */	lwz r3, 0(r3)
/* 80C5E4D0  38 81 00 08 */	addi r4, r1, 8
/* 80C5E4D4  38 A1 00 0C */	addi r5, r1, 0xc
/* 80C5E4D8  38 C0 00 00 */	li r6, 0
/* 80C5E4DC  3D 00 80 C6 */	lis r8, lit_3787@ha
/* 80C5E4E0  C0 28 E8 E8 */	lfs f1, lit_3787@l(r8)
/* 80C5E4E4  FC 40 08 90 */	fmr f2, f1
/* 80C5E4E8  3D 00 80 C6 */	lis r8, lit_3788@ha
/* 80C5E4EC  C0 68 E8 EC */	lfs f3, lit_3788@l(r8)
/* 80C5E4F0  FC 80 18 90 */	fmr f4, f3
/* 80C5E4F4  39 00 00 00 */	li r8, 0
/* 80C5E4F8  4B 64 D4 8C */	b seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80C5E4FC  38 00 00 02 */	li r0, 2
/* 80C5E500  98 1F 05 C4 */	stb r0, 0x5c4(r31)
/* 80C5E504  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80C5E508  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80C5E50C  7C 08 03 A6 */	mtlr r0
/* 80C5E510  38 21 00 20 */	addi r1, r1, 0x20
/* 80C5E514  4E 80 00 20 */	blr 
