lbl_805896F8:
/* 805896F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 805896FC  7C 08 02 A6 */	mflr r0
/* 80589700  90 01 00 24 */	stw r0, 0x24(r1)
/* 80589704  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80589708  7C 7F 1B 78 */	mr r31, r3
/* 8058970C  88 03 04 E2 */	lbz r0, 0x4e2(r3)
/* 80589710  7C 03 07 74 */	extsb r3, r0
/* 80589714  4B AA 39 58 */	b dComIfGp_getReverb__Fi
/* 80589718  7C 67 1B 78 */	mr r7, r3
/* 8058971C  3C 60 00 08 */	lis r3, 0x0008 /* 0x00080201@ha */
/* 80589720  38 03 02 01 */	addi r0, r3, 0x0201 /* 0x00080201@l */
/* 80589724  90 01 00 08 */	stw r0, 8(r1)
/* 80589728  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha
/* 8058972C  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l
/* 80589730  80 63 00 00 */	lwz r3, 0(r3)
/* 80589734  38 81 00 08 */	addi r4, r1, 8
/* 80589738  38 BF 05 38 */	addi r5, r31, 0x538
/* 8058973C  38 C0 00 00 */	li r6, 0
/* 80589740  3D 00 80 59 */	lis r8, lit_3881@ha
/* 80589744  C0 28 AB D4 */	lfs f1, lit_3881@l(r8)
/* 80589748  FC 40 08 90 */	fmr f2, f1
/* 8058974C  3D 00 80 59 */	lis r8, lit_3882@ha
/* 80589750  C0 68 AB D8 */	lfs f3, lit_3882@l(r8)
/* 80589754  FC 80 18 90 */	fmr f4, f3
/* 80589758  39 00 00 00 */	li r8, 0
/* 8058975C  4B D2 22 28 */	b seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80589760  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80589764  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80589768  7C 08 03 A6 */	mtlr r0
/* 8058976C  38 21 00 20 */	addi r1, r1, 0x20
/* 80589770  4E 80 00 20 */	blr 
