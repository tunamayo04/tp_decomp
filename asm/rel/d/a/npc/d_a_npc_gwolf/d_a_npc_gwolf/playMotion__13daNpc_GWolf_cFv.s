lbl_809F520C:
/* 809F520C  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 809F5210  7C 08 02 A6 */	mflr r0
/* 809F5214  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 809F5218  93 E1 00 EC */	stw r31, 0xec(r1)
/* 809F521C  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 809F5220  7C 7E 1B 78 */	mr r30, r3
/* 809F5224  3C 60 80 A0 */	lis r3, m__19daNpc_GWolf_Param_c@ha
/* 809F5228  3B E3 84 F4 */	addi r31, r3, m__19daNpc_GWolf_Param_c@l
/* 809F522C  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 809F5230  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 809F5234  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 809F5238  90 01 00 BC */	stw r0, 0xbc(r1)
/* 809F523C  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 809F5240  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 809F5244  38 7F 00 00 */	addi r3, r31, 0
/* 809F5248  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 809F524C  D0 01 00 BC */	stfs f0, 0xbc(r1)
/* 809F5250  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 809F5254  90 01 00 2C */	stw r0, 0x2c(r1)
/* 809F5258  38 01 00 B8 */	addi r0, r1, 0xb8
/* 809F525C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 809F5260  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 809F5264  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 809F5268  90 61 00 AC */	stw r3, 0xac(r1)
/* 809F526C  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 809F5270  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 809F5274  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 809F5278  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 809F527C  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 809F5280  90 01 00 28 */	stw r0, 0x28(r1)
/* 809F5284  38 01 00 AC */	addi r0, r1, 0xac
/* 809F5288  90 01 00 28 */	stw r0, 0x28(r1)
/* 809F528C  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 809F5290  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 809F5294  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 809F5298  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 809F529C  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 809F52A0  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 809F52A4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 809F52A8  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 809F52AC  90 61 00 94 */	stw r3, 0x94(r1)
/* 809F52B0  90 01 00 98 */	stw r0, 0x98(r1)
/* 809F52B4  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 809F52B8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 809F52BC  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 809F52C0  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 809F52C4  90 61 00 38 */	stw r3, 0x38(r1)
/* 809F52C8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 809F52CC  38 01 00 A0 */	addi r0, r1, 0xa0
/* 809F52D0  90 01 00 38 */	stw r0, 0x38(r1)
/* 809F52D4  38 01 00 94 */	addi r0, r1, 0x94
/* 809F52D8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 809F52DC  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 809F52E0  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 809F52E4  90 61 00 88 */	stw r3, 0x88(r1)
/* 809F52E8  90 01 00 8C */	stw r0, 0x8c(r1)
/* 809F52EC  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 809F52F0  90 01 00 90 */	stw r0, 0x90(r1)
/* 809F52F4  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 809F52F8  80 1F 01 38 */	lwz r0, 0x138(r31)
/* 809F52FC  90 61 00 7C */	stw r3, 0x7c(r1)
/* 809F5300  90 01 00 80 */	stw r0, 0x80(r1)
/* 809F5304  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 809F5308  90 01 00 84 */	stw r0, 0x84(r1)
/* 809F530C  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 809F5310  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 809F5314  80 1F 01 44 */	lwz r0, 0x144(r31)
/* 809F5318  90 61 00 30 */	stw r3, 0x30(r1)
/* 809F531C  90 01 00 34 */	stw r0, 0x34(r1)
/* 809F5320  38 01 00 88 */	addi r0, r1, 0x88
/* 809F5324  90 01 00 30 */	stw r0, 0x30(r1)
/* 809F5328  38 01 00 7C */	addi r0, r1, 0x7c
/* 809F532C  90 01 00 34 */	stw r0, 0x34(r1)
/* 809F5330  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 809F5334  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 809F5338  90 61 00 70 */	stw r3, 0x70(r1)
/* 809F533C  90 01 00 74 */	stw r0, 0x74(r1)
/* 809F5340  80 1F 01 50 */	lwz r0, 0x150(r31)
/* 809F5344  90 01 00 78 */	stw r0, 0x78(r1)
/* 809F5348  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 809F534C  80 1F 01 54 */	lwz r0, 0x154(r31)
/* 809F5350  90 01 00 24 */	stw r0, 0x24(r1)
/* 809F5354  38 01 00 70 */	addi r0, r1, 0x70
/* 809F5358  90 01 00 24 */	stw r0, 0x24(r1)
/* 809F535C  80 7F 01 58 */	lwz r3, 0x158(r31)
/* 809F5360  80 1F 01 5C */	lwz r0, 0x15c(r31)
/* 809F5364  90 61 00 64 */	stw r3, 0x64(r1)
/* 809F5368  90 01 00 68 */	stw r0, 0x68(r1)
/* 809F536C  80 1F 01 60 */	lwz r0, 0x160(r31)
/* 809F5370  90 01 00 6C */	stw r0, 0x6c(r1)
/* 809F5374  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 809F5378  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 809F537C  90 01 00 20 */	stw r0, 0x20(r1)
/* 809F5380  38 01 00 64 */	addi r0, r1, 0x64
/* 809F5384  90 01 00 20 */	stw r0, 0x20(r1)
/* 809F5388  80 7F 01 68 */	lwz r3, 0x168(r31)
/* 809F538C  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 809F5390  90 61 00 58 */	stw r3, 0x58(r1)
/* 809F5394  90 01 00 5C */	stw r0, 0x5c(r1)
/* 809F5398  80 1F 01 70 */	lwz r0, 0x170(r31)
/* 809F539C  90 01 00 60 */	stw r0, 0x60(r1)
/* 809F53A0  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 809F53A4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 809F53A8  38 01 00 58 */	addi r0, r1, 0x58
/* 809F53AC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 809F53B0  80 7F 01 78 */	lwz r3, 0x178(r31)
/* 809F53B4  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 809F53B8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 809F53BC  90 01 00 50 */	stw r0, 0x50(r1)
/* 809F53C0  80 1F 01 80 */	lwz r0, 0x180(r31)
/* 809F53C4  90 01 00 54 */	stw r0, 0x54(r1)
/* 809F53C8  80 1F 01 84 */	lwz r0, 0x184(r31)
/* 809F53CC  90 01 00 18 */	stw r0, 0x18(r1)
/* 809F53D0  38 01 00 4C */	addi r0, r1, 0x4c
/* 809F53D4  90 01 00 18 */	stw r0, 0x18(r1)
/* 809F53D8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 809F53DC  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 809F53E0  90 61 00 40 */	stw r3, 0x40(r1)
/* 809F53E4  90 01 00 44 */	stw r0, 0x44(r1)
/* 809F53E8  80 1F 01 90 */	lwz r0, 0x190(r31)
/* 809F53EC  90 01 00 48 */	stw r0, 0x48(r1)
/* 809F53F0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 809F53F4  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 809F53F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809F53FC  38 01 00 40 */	addi r0, r1, 0x40
/* 809F5400  90 01 00 14 */	stw r0, 0x14(r1)
/* 809F5404  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 809F5408  38 9F 01 94 */	addi r4, r31, 0x194
/* 809F540C  38 00 00 04 */	li r0, 4
/* 809F5410  7C 09 03 A6 */	mtctr r0
lbl_809F5414:
/* 809F5414  80 64 00 04 */	lwz r3, 4(r4)
/* 809F5418  84 04 00 08 */	lwzu r0, 8(r4)
/* 809F541C  90 65 00 04 */	stw r3, 4(r5)
/* 809F5420  94 05 00 08 */	stwu r0, 8(r5)
/* 809F5424  42 00 FF F0 */	bdnz lbl_809F5414
/* 809F5428  80 04 00 04 */	lwz r0, 4(r4)
/* 809F542C  90 05 00 04 */	stw r0, 4(r5)
/* 809F5430  38 01 00 2C */	addi r0, r1, 0x2c
/* 809F5434  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 809F5438  38 01 00 28 */	addi r0, r1, 0x28
/* 809F543C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 809F5440  38 01 00 38 */	addi r0, r1, 0x38
/* 809F5444  90 01 00 CC */	stw r0, 0xcc(r1)
/* 809F5448  38 01 00 30 */	addi r0, r1, 0x30
/* 809F544C  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 809F5450  38 01 00 24 */	addi r0, r1, 0x24
/* 809F5454  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 809F5458  38 01 00 20 */	addi r0, r1, 0x20
/* 809F545C  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 809F5460  38 01 00 1C */	addi r0, r1, 0x1c
/* 809F5464  90 01 00 DC */	stw r0, 0xdc(r1)
/* 809F5468  38 01 00 18 */	addi r0, r1, 0x18
/* 809F546C  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 809F5470  38 01 00 14 */	addi r0, r1, 0x14
/* 809F5474  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 809F5478  A8 7E 09 E0 */	lha r3, 0x9e0(r30)
/* 809F547C  7C 60 07 35 */	extsh. r0, r3
/* 809F5480  41 80 00 18 */	blt lbl_809F5498
/* 809F5484  2C 03 00 09 */	cmpwi r3, 9
/* 809F5488  40 80 00 10 */	bge lbl_809F5498
/* 809F548C  7F C3 F3 78 */	mr r3, r30
/* 809F5490  38 81 00 C4 */	addi r4, r1, 0xc4
/* 809F5494  4B 75 DD D0 */	b playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData
lbl_809F5498:
/* 809F5498  88 1E 09 F2 */	lbz r0, 0x9f2(r30)
/* 809F549C  28 00 00 01 */	cmplwi r0, 1
/* 809F54A0  41 82 01 18 */	beq lbl_809F55B8
/* 809F54A4  80 1E 0E 18 */	lwz r0, 0xe18(r30)
/* 809F54A8  2C 00 00 07 */	cmpwi r0, 7
/* 809F54AC  41 82 00 C0 */	beq lbl_809F556C
/* 809F54B0  40 80 00 10 */	bge lbl_809F54C0
/* 809F54B4  2C 00 00 02 */	cmpwi r0, 2
/* 809F54B8  41 82 00 14 */	beq lbl_809F54CC
/* 809F54BC  48 00 00 FC */	b lbl_809F55B8
lbl_809F54C0:
/* 809F54C0  2C 00 00 09 */	cmpwi r0, 9
/* 809F54C4  41 82 00 58 */	beq lbl_809F551C
/* 809F54C8  48 00 00 F0 */	b lbl_809F55B8
lbl_809F54CC:
/* 809F54CC  80 7E 05 68 */	lwz r3, 0x568(r30)
/* 809F54D0  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 809F54D4  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 809F54D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F54DC  4C 41 13 82 */	cror 2, 1, 2
/* 809F54E0  40 82 00 D8 */	bne lbl_809F55B8
/* 809F54E4  C0 1F 01 BC */	lfs f0, 0x1bc(r31)
/* 809F54E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F54EC  40 80 00 CC */	bge lbl_809F55B8
/* 809F54F0  3C 60 00 06 */	lis r3, 0x0006 /* 0x000600F0@ha */
/* 809F54F4  38 03 00 F0 */	addi r0, r3, 0x00F0 /* 0x000600F0@l */
/* 809F54F8  90 01 00 10 */	stw r0, 0x10(r1)
/* 809F54FC  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 809F5500  38 81 00 10 */	addi r4, r1, 0x10
/* 809F5504  38 A0 FF FF */	li r5, -1
/* 809F5508  81 9E 0B 48 */	lwz r12, 0xb48(r30)
/* 809F550C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 809F5510  7D 89 03 A6 */	mtctr r12
/* 809F5514  4E 80 04 21 */	bctrl 
/* 809F5518  48 00 00 A0 */	b lbl_809F55B8
lbl_809F551C:
/* 809F551C  80 7E 05 68 */	lwz r3, 0x568(r30)
/* 809F5520  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 809F5524  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 809F5528  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F552C  4C 41 13 82 */	cror 2, 1, 2
/* 809F5530  40 82 00 88 */	bne lbl_809F55B8
/* 809F5534  C0 1F 01 BC */	lfs f0, 0x1bc(r31)
/* 809F5538  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F553C  40 80 00 7C */	bge lbl_809F55B8
/* 809F5540  3C 60 00 06 */	lis r3, 0x0006 /* 0x000600F1@ha */
/* 809F5544  38 03 00 F1 */	addi r0, r3, 0x00F1 /* 0x000600F1@l */
/* 809F5548  90 01 00 0C */	stw r0, 0xc(r1)
/* 809F554C  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 809F5550  38 81 00 0C */	addi r4, r1, 0xc
/* 809F5554  38 A0 FF FF */	li r5, -1
/* 809F5558  81 9E 0B 48 */	lwz r12, 0xb48(r30)
/* 809F555C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 809F5560  7D 89 03 A6 */	mtctr r12
/* 809F5564  4E 80 04 21 */	bctrl 
/* 809F5568  48 00 00 50 */	b lbl_809F55B8
lbl_809F556C:
/* 809F556C  80 7E 05 68 */	lwz r3, 0x568(r30)
/* 809F5570  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 809F5574  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 809F5578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F557C  4C 41 13 82 */	cror 2, 1, 2
/* 809F5580  40 82 00 38 */	bne lbl_809F55B8
/* 809F5584  C0 1F 01 BC */	lfs f0, 0x1bc(r31)
/* 809F5588  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 809F558C  40 80 00 2C */	bge lbl_809F55B8
/* 809F5590  3C 60 00 06 */	lis r3, 0x0006 /* 0x000600F2@ha */
/* 809F5594  38 03 00 F2 */	addi r0, r3, 0x00F2 /* 0x000600F2@l */
/* 809F5598  90 01 00 08 */	stw r0, 8(r1)
/* 809F559C  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 809F55A0  38 81 00 08 */	addi r4, r1, 8
/* 809F55A4  38 A0 FF FF */	li r5, -1
/* 809F55A8  81 9E 0B 48 */	lwz r12, 0xb48(r30)
/* 809F55AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 809F55B0  7D 89 03 A6 */	mtctr r12
/* 809F55B4  4E 80 04 21 */	bctrl 
lbl_809F55B8:
/* 809F55B8  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 809F55BC  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 809F55C0  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 809F55C4  7C 08 03 A6 */	mtlr r0
/* 809F55C8  38 21 00 F0 */	addi r1, r1, 0xf0
/* 809F55CC  4E 80 00 20 */	blr 
