lbl_8063F180:
/* 8063F180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8063F184  7C 08 02 A6 */	mflr r0
/* 8063F188  90 01 00 14 */	stw r0, 0x14(r1)
/* 8063F18C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8063F190  93 C1 00 08 */	stw r30, 8(r1)
/* 8063F194  7C 7E 1B 78 */	mr r30, r3
/* 8063F198  7C 9F 23 78 */	mr r31, r4
/* 8063F19C  80 04 00 00 */	lwz r0, 0(r4)
/* 8063F1A0  90 03 00 00 */	stw r0, 0(r3)
/* 8063F1A4  80 04 00 04 */	lwz r0, 4(r4)
/* 8063F1A8  90 03 00 04 */	stw r0, 4(r3)
/* 8063F1AC  80 04 00 08 */	lwz r0, 8(r4)
/* 8063F1B0  90 03 00 08 */	stw r0, 8(r3)
/* 8063F1B4  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8063F1B8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8063F1BC  88 04 00 14 */	lbz r0, 0x14(r4)
/* 8063F1C0  98 03 00 14 */	stb r0, 0x14(r3)
/* 8063F1C4  38 7E 00 15 */	addi r3, r30, 0x15
/* 8063F1C8  38 9F 00 15 */	addi r4, r31, 0x15
/* 8063F1CC  38 A0 00 03 */	li r5, 3
/* 8063F1D0  4B D2 2A 6C */	b __copy
/* 8063F1D4  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8063F1D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8063F1DC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8063F1E0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8063F1E4  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8063F1E8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8063F1EC  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8063F1F0  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8063F1F4  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 8063F1F8  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8063F1FC  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8063F200  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8063F204  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 8063F208  90 1E 00 34 */	stw r0, 0x34(r30)
/* 8063F20C  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8063F210  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8063F214  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8063F218  90 1E 00 44 */	stw r0, 0x44(r30)
/* 8063F21C  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8063F220  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8063F224  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8063F228  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8063F22C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8063F230  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8063F234  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 8063F238  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8063F23C  80 1F 00 5C */	lwz r0, 0x5c(r31)
/* 8063F240  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 8063F244  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 8063F248  90 1E 00 60 */	stw r0, 0x60(r30)
/* 8063F24C  80 1F 00 64 */	lwz r0, 0x64(r31)
/* 8063F250  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8063F254  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 8063F258  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8063F25C  88 1F 00 6C */	lbz r0, 0x6c(r31)
/* 8063F260  98 1E 00 6C */	stb r0, 0x6c(r30)
/* 8063F264  88 1F 00 74 */	lbz r0, 0x74(r31)
/* 8063F268  98 1E 00 74 */	stb r0, 0x74(r30)
/* 8063F26C  88 1F 00 75 */	lbz r0, 0x75(r31)
/* 8063F270  98 1E 00 75 */	stb r0, 0x75(r30)
/* 8063F274  88 1F 00 76 */	lbz r0, 0x76(r31)
/* 8063F278  98 1E 00 76 */	stb r0, 0x76(r30)
/* 8063F27C  88 1F 00 77 */	lbz r0, 0x77(r31)
/* 8063F280  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8063F284  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 8063F288  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 8063F28C  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 8063F290  D0 1E 00 7C */	stfs f0, 0x7c(r30)
/* 8063F294  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 8063F298  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 8063F29C  C0 1F 00 84 */	lfs f0, 0x84(r31)
/* 8063F2A0  D0 1E 00 84 */	stfs f0, 0x84(r30)
/* 8063F2A4  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8063F2A8  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 8063F2AC  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 8063F2B0  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 8063F2B4  C0 1F 00 90 */	lfs f0, 0x90(r31)
/* 8063F2B8  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 8063F2BC  C0 1F 00 94 */	lfs f0, 0x94(r31)
/* 8063F2C0  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 8063F2C4  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8063F2C8  D0 1E 00 98 */	stfs f0, 0x98(r30)
/* 8063F2CC  80 1F 00 9C */	lwz r0, 0x9c(r31)
/* 8063F2D0  90 1E 00 9C */	stw r0, 0x9c(r30)
/* 8063F2D4  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 8063F2D8  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 8063F2DC  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 8063F2E0  90 1E 00 A4 */	stw r0, 0xa4(r30)
/* 8063F2E4  80 1F 00 A8 */	lwz r0, 0xa8(r31)
/* 8063F2E8  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 8063F2EC  80 1F 00 AC */	lwz r0, 0xac(r31)
/* 8063F2F0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 8063F2F4  88 1F 00 B0 */	lbz r0, 0xb0(r31)
/* 8063F2F8  98 1E 00 B0 */	stb r0, 0xb0(r30)
/* 8063F2FC  88 1F 00 B8 */	lbz r0, 0xb8(r31)
/* 8063F300  98 1E 00 B8 */	stb r0, 0xb8(r30)
/* 8063F304  88 1F 00 B9 */	lbz r0, 0xb9(r31)
/* 8063F308  98 1E 00 B9 */	stb r0, 0xb9(r30)
/* 8063F30C  88 1F 00 BA */	lbz r0, 0xba(r31)
/* 8063F310  98 1E 00 BA */	stb r0, 0xba(r30)
/* 8063F314  88 1F 00 BB */	lbz r0, 0xbb(r31)
/* 8063F318  98 1E 00 BB */	stb r0, 0xbb(r30)
/* 8063F31C  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 8063F320  D0 1E 00 BC */	stfs f0, 0xbc(r30)
/* 8063F324  C0 1F 00 C0 */	lfs f0, 0xc0(r31)
/* 8063F328  D0 1E 00 C0 */	stfs f0, 0xc0(r30)
/* 8063F32C  C0 1F 00 C4 */	lfs f0, 0xc4(r31)
/* 8063F330  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 8063F334  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 8063F338  D0 1E 00 C8 */	stfs f0, 0xc8(r30)
/* 8063F33C  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 8063F340  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 8063F344  C0 1F 00 D0 */	lfs f0, 0xd0(r31)
/* 8063F348  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 8063F34C  C0 1F 00 D4 */	lfs f0, 0xd4(r31)
/* 8063F350  D0 1E 00 D4 */	stfs f0, 0xd4(r30)
/* 8063F354  C0 1F 00 D8 */	lfs f0, 0xd8(r31)
/* 8063F358  D0 1E 00 D8 */	stfs f0, 0xd8(r30)
/* 8063F35C  C0 1F 00 DC */	lfs f0, 0xdc(r31)
/* 8063F360  D0 1E 00 DC */	stfs f0, 0xdc(r30)
/* 8063F364  80 1F 00 E0 */	lwz r0, 0xe0(r31)
/* 8063F368  90 1E 00 E0 */	stw r0, 0xe0(r30)
/* 8063F36C  A8 1F 00 E4 */	lha r0, 0xe4(r31)
/* 8063F370  B0 1E 00 E4 */	sth r0, 0xe4(r30)
/* 8063F374  A8 1F 00 E6 */	lha r0, 0xe6(r31)
/* 8063F378  B0 1E 00 E6 */	sth r0, 0xe6(r30)
/* 8063F37C  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 8063F380  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 8063F384  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 8063F388  90 1E 00 EC */	stw r0, 0xec(r30)
/* 8063F38C  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 8063F390  90 1E 00 F0 */	stw r0, 0xf0(r30)
/* 8063F394  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 8063F398  90 1E 00 F4 */	stw r0, 0xf4(r30)
/* 8063F39C  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 8063F3A0  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 8063F3A4  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 8063F3A8  98 1E 00 FC */	stb r0, 0xfc(r30)
/* 8063F3AC  7F C3 F3 78 */	mr r3, r30
/* 8063F3B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8063F3B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8063F3B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8063F3BC  7C 08 03 A6 */	mtlr r0
/* 8063F3C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8063F3C4  4E 80 00 20 */	blr 
