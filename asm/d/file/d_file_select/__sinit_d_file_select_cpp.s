lbl_80191428:
/* 80191428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019142C  7C 08 02 A6 */	mflr r0
/* 80191430  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191434  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191438  3C 60 80 3C */	lis r3, cNullVec__6Z2Calc@ha
/* 8019143C  3B E3 A8 48 */	addi r31, r3, cNullVec__6Z2Calc@l
/* 80191440  3C 60 80 43 */	lis r3, g_fsHIO@ha
/* 80191444  38 63 C9 EC */	addi r3, r3, g_fsHIO@l
/* 80191448  4B FF 21 B1 */	bl __ct__9dFs_HIO_cFv
/* 8019144C  3C 80 80 19 */	lis r4, __dt__9dFs_HIO_cFv@ha
/* 80191450  38 84 13 E0 */	addi r4, r4, __dt__9dFs_HIO_cFv@l
/* 80191454  3C A0 80 43 */	lis r5, lit_3807@ha
/* 80191458  38 A5 C9 E0 */	addi r5, r5, lit_3807@l
/* 8019145C  48 1D 07 C9 */	bl __register_global_object
/* 80191460  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 80191464  80 1F 00 74 */	lwz r0, 0x74(r31)
/* 80191468  90 7F 02 A4 */	stw r3, 0x2a4(r31)
/* 8019146C  90 1F 02 A8 */	stw r0, 0x2a8(r31)
/* 80191470  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 80191474  90 1F 02 AC */	stw r0, 0x2ac(r31)
/* 80191478  38 7F 02 A4 */	addi r3, r31, 0x2a4
/* 8019147C  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 80191480  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 80191484  90 83 00 0C */	stw r4, 0xc(r3)
/* 80191488  90 03 00 10 */	stw r0, 0x10(r3)
/* 8019148C  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 80191490  90 03 00 14 */	stw r0, 0x14(r3)
/* 80191494  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 80191498  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 8019149C  90 83 00 18 */	stw r4, 0x18(r3)
/* 801914A0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801914A4  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 801914A8  90 03 00 20 */	stw r0, 0x20(r3)
/* 801914AC  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 801914B0  80 1F 00 98 */	lwz r0, 0x98(r31)
/* 801914B4  90 83 00 24 */	stw r4, 0x24(r3)
/* 801914B8  90 03 00 28 */	stw r0, 0x28(r3)
/* 801914BC  80 1F 00 9C */	lwz r0, 0x9c(r31)
/* 801914C0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801914C4  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 801914C8  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 801914CC  90 83 00 30 */	stw r4, 0x30(r3)
/* 801914D0  90 03 00 34 */	stw r0, 0x34(r3)
/* 801914D4  80 1F 00 A8 */	lwz r0, 0xa8(r31)
/* 801914D8  90 03 00 38 */	stw r0, 0x38(r3)
/* 801914DC  80 9F 00 AC */	lwz r4, 0xac(r31)
/* 801914E0  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 801914E4  90 83 00 3C */	stw r4, 0x3c(r3)
/* 801914E8  90 03 00 40 */	stw r0, 0x40(r3)
/* 801914EC  80 1F 00 B4 */	lwz r0, 0xb4(r31)
/* 801914F0  90 03 00 44 */	stw r0, 0x44(r3)
/* 801914F4  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 801914F8  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 801914FC  90 83 00 48 */	stw r4, 0x48(r3)
/* 80191500  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80191504  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 80191508  90 03 00 50 */	stw r0, 0x50(r3)
/* 8019150C  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 80191510  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80191514  90 83 00 54 */	stw r4, 0x54(r3)
/* 80191518  90 03 00 58 */	stw r0, 0x58(r3)
/* 8019151C  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 80191520  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80191524  80 9F 00 D0 */	lwz r4, 0xd0(r31)
/* 80191528  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 8019152C  90 83 00 60 */	stw r4, 0x60(r3)
/* 80191530  90 03 00 64 */	stw r0, 0x64(r3)
/* 80191534  80 1F 00 D8 */	lwz r0, 0xd8(r31)
/* 80191538  90 03 00 68 */	stw r0, 0x68(r3)
/* 8019153C  80 9F 00 DC */	lwz r4, 0xdc(r31)
/* 80191540  80 1F 00 E0 */	lwz r0, 0xe0(r31)
/* 80191544  90 83 00 6C */	stw r4, 0x6c(r3)
/* 80191548  90 03 00 70 */	stw r0, 0x70(r3)
/* 8019154C  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 80191550  90 03 00 74 */	stw r0, 0x74(r3)
/* 80191554  80 9F 00 E8 */	lwz r4, 0xe8(r31)
/* 80191558  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 8019155C  90 83 00 78 */	stw r4, 0x78(r3)
/* 80191560  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80191564  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 80191568  90 03 00 80 */	stw r0, 0x80(r3)
/* 8019156C  80 9F 00 F4 */	lwz r4, 0xf4(r31)
/* 80191570  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 80191574  90 83 00 84 */	stw r4, 0x84(r3)
/* 80191578  90 03 00 88 */	stw r0, 0x88(r3)
/* 8019157C  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80191580  90 03 00 8C */	stw r0, 0x8c(r3)
/* 80191584  80 9F 01 00 */	lwz r4, 0x100(r31)
/* 80191588  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8019158C  90 83 00 90 */	stw r4, 0x90(r3)
/* 80191590  90 03 00 94 */	stw r0, 0x94(r3)
/* 80191594  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 80191598  90 03 00 98 */	stw r0, 0x98(r3)
/* 8019159C  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 801915A0  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 801915A4  90 83 00 9C */	stw r4, 0x9c(r3)
/* 801915A8  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 801915AC  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 801915B0  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 801915B4  80 9F 01 18 */	lwz r4, 0x118(r31)
/* 801915B8  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 801915BC  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 801915C0  90 03 00 AC */	stw r0, 0xac(r3)
/* 801915C4  80 1F 01 20 */	lwz r0, 0x120(r31)
/* 801915C8  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 801915CC  80 9F 01 24 */	lwz r4, 0x124(r31)
/* 801915D0  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 801915D4  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 801915D8  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 801915DC  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 801915E0  90 03 00 BC */	stw r0, 0xbc(r3)
/* 801915E4  80 9F 01 30 */	lwz r4, 0x130(r31)
/* 801915E8  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 801915EC  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 801915F0  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 801915F4  80 1F 01 38 */	lwz r0, 0x138(r31)
/* 801915F8  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 801915FC  80 9F 01 3C */	lwz r4, 0x13c(r31)
/* 80191600  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 80191604  90 83 00 CC */	stw r4, 0xcc(r3)
/* 80191608  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 8019160C  80 1F 01 44 */	lwz r0, 0x144(r31)
/* 80191610  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 80191614  80 9F 01 48 */	lwz r4, 0x148(r31)
/* 80191618  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 8019161C  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 80191620  90 03 00 DC */	stw r0, 0xdc(r3)
/* 80191624  80 1F 01 50 */	lwz r0, 0x150(r31)
/* 80191628  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8019162C  80 9F 01 54 */	lwz r4, 0x154(r31)
/* 80191630  80 1F 01 58 */	lwz r0, 0x158(r31)
/* 80191634  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 80191638  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8019163C  80 1F 01 5C */	lwz r0, 0x15c(r31)
/* 80191640  90 03 00 EC */	stw r0, 0xec(r3)
/* 80191644  80 9F 01 60 */	lwz r4, 0x160(r31)
/* 80191648  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 8019164C  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 80191650  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 80191654  80 1F 01 68 */	lwz r0, 0x168(r31)
/* 80191658  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 8019165C  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 80191660  80 1F 01 70 */	lwz r0, 0x170(r31)
/* 80191664  90 83 00 FC */	stw r4, 0xfc(r3)
/* 80191668  90 03 01 00 */	stw r0, 0x100(r3)
/* 8019166C  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 80191670  90 03 01 04 */	stw r0, 0x104(r3)
/* 80191674  80 9F 01 78 */	lwz r4, 0x178(r31)
/* 80191678  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 8019167C  90 83 01 08 */	stw r4, 0x108(r3)
/* 80191680  90 03 01 0C */	stw r0, 0x10c(r3)
/* 80191684  80 1F 01 80 */	lwz r0, 0x180(r31)
/* 80191688  90 03 01 10 */	stw r0, 0x110(r3)
/* 8019168C  80 9F 01 84 */	lwz r4, 0x184(r31)
/* 80191690  80 1F 01 88 */	lwz r0, 0x188(r31)
/* 80191694  90 83 01 14 */	stw r4, 0x114(r3)
/* 80191698  90 03 01 18 */	stw r0, 0x118(r3)
/* 8019169C  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 801916A0  90 03 01 1C */	stw r0, 0x11c(r3)
/* 801916A4  80 9F 01 90 */	lwz r4, 0x190(r31)
/* 801916A8  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 801916AC  90 83 01 20 */	stw r4, 0x120(r3)
/* 801916B0  90 03 01 24 */	stw r0, 0x124(r3)
/* 801916B4  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801916B8  90 03 01 28 */	stw r0, 0x128(r3)
/* 801916BC  80 9F 01 9C */	lwz r4, 0x19c(r31)
/* 801916C0  80 1F 01 A0 */	lwz r0, 0x1a0(r31)
/* 801916C4  90 83 01 2C */	stw r4, 0x12c(r3)
/* 801916C8  90 03 01 30 */	stw r0, 0x130(r3)
/* 801916CC  80 1F 01 A4 */	lwz r0, 0x1a4(r31)
/* 801916D0  90 03 01 34 */	stw r0, 0x134(r3)
/* 801916D4  80 9F 01 A8 */	lwz r4, 0x1a8(r31)
/* 801916D8  80 1F 01 AC */	lwz r0, 0x1ac(r31)
/* 801916DC  90 83 01 38 */	stw r4, 0x138(r3)
/* 801916E0  90 03 01 3C */	stw r0, 0x13c(r3)
/* 801916E4  80 1F 01 B0 */	lwz r0, 0x1b0(r31)
/* 801916E8  90 03 01 40 */	stw r0, 0x140(r3)
/* 801916EC  80 9F 01 B4 */	lwz r4, 0x1b4(r31)
/* 801916F0  80 1F 01 B8 */	lwz r0, 0x1b8(r31)
/* 801916F4  90 83 01 44 */	stw r4, 0x144(r3)
/* 801916F8  90 03 01 48 */	stw r0, 0x148(r3)
/* 801916FC  80 1F 01 BC */	lwz r0, 0x1bc(r31)
/* 80191700  90 03 01 4C */	stw r0, 0x14c(r3)
/* 80191704  80 9F 01 C0 */	lwz r4, 0x1c0(r31)
/* 80191708  80 1F 01 C4 */	lwz r0, 0x1c4(r31)
/* 8019170C  90 83 01 50 */	stw r4, 0x150(r3)
/* 80191710  90 03 01 54 */	stw r0, 0x154(r3)
/* 80191714  80 1F 01 C8 */	lwz r0, 0x1c8(r31)
/* 80191718  90 03 01 58 */	stw r0, 0x158(r3)
/* 8019171C  80 9F 01 CC */	lwz r4, 0x1cc(r31)
/* 80191720  80 1F 01 D0 */	lwz r0, 0x1d0(r31)
/* 80191724  90 83 01 5C */	stw r4, 0x15c(r3)
/* 80191728  90 03 01 60 */	stw r0, 0x160(r3)
/* 8019172C  80 1F 01 D4 */	lwz r0, 0x1d4(r31)
/* 80191730  90 03 01 64 */	stw r0, 0x164(r3)
/* 80191734  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 80191738  80 1F 01 DC */	lwz r0, 0x1dc(r31)
/* 8019173C  90 83 01 68 */	stw r4, 0x168(r3)
/* 80191740  90 03 01 6C */	stw r0, 0x16c(r3)
/* 80191744  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80191748  90 03 01 70 */	stw r0, 0x170(r3)
/* 8019174C  80 9F 01 E4 */	lwz r4, 0x1e4(r31)
/* 80191750  80 1F 01 E8 */	lwz r0, 0x1e8(r31)
/* 80191754  90 83 01 74 */	stw r4, 0x174(r3)
/* 80191758  90 03 01 78 */	stw r0, 0x178(r3)
/* 8019175C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 80191760  90 03 01 7C */	stw r0, 0x17c(r3)
/* 80191764  80 9F 01 F0 */	lwz r4, 0x1f0(r31)
/* 80191768  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 8019176C  90 83 01 80 */	stw r4, 0x180(r3)
/* 80191770  90 03 01 84 */	stw r0, 0x184(r3)
/* 80191774  80 1F 01 F8 */	lwz r0, 0x1f8(r31)
/* 80191778  90 03 01 88 */	stw r0, 0x188(r3)
/* 8019177C  80 9F 01 FC */	lwz r4, 0x1fc(r31)
/* 80191780  80 1F 02 00 */	lwz r0, 0x200(r31)
/* 80191784  90 83 01 8C */	stw r4, 0x18c(r3)
/* 80191788  90 03 01 90 */	stw r0, 0x190(r3)
/* 8019178C  80 1F 02 04 */	lwz r0, 0x204(r31)
/* 80191790  90 03 01 94 */	stw r0, 0x194(r3)
/* 80191794  80 9F 02 08 */	lwz r4, 0x208(r31)
/* 80191798  80 1F 02 0C */	lwz r0, 0x20c(r31)
/* 8019179C  90 83 01 98 */	stw r4, 0x198(r3)
/* 801917A0  90 03 01 9C */	stw r0, 0x19c(r3)
/* 801917A4  80 1F 02 10 */	lwz r0, 0x210(r31)
/* 801917A8  90 03 01 A0 */	stw r0, 0x1a0(r3)
/* 801917AC  80 9F 02 14 */	lwz r4, 0x214(r31)
/* 801917B0  80 1F 02 18 */	lwz r0, 0x218(r31)
/* 801917B4  90 83 01 A4 */	stw r4, 0x1a4(r3)
/* 801917B8  90 03 01 A8 */	stw r0, 0x1a8(r3)
/* 801917BC  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801917C0  90 03 01 AC */	stw r0, 0x1ac(r3)
/* 801917C4  80 9F 02 20 */	lwz r4, 0x220(r31)
/* 801917C8  80 1F 02 24 */	lwz r0, 0x224(r31)
/* 801917CC  90 83 01 B0 */	stw r4, 0x1b0(r3)
/* 801917D0  90 03 01 B4 */	stw r0, 0x1b4(r3)
/* 801917D4  80 1F 02 28 */	lwz r0, 0x228(r31)
/* 801917D8  90 03 01 B8 */	stw r0, 0x1b8(r3)
/* 801917DC  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 801917E0  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 801917E4  90 83 01 BC */	stw r4, 0x1bc(r3)
/* 801917E8  90 03 01 C0 */	stw r0, 0x1c0(r3)
/* 801917EC  80 1F 02 34 */	lwz r0, 0x234(r31)
/* 801917F0  90 03 01 C4 */	stw r0, 0x1c4(r3)
/* 801917F4  80 9F 02 38 */	lwz r4, 0x238(r31)
/* 801917F8  80 1F 02 3C */	lwz r0, 0x23c(r31)
/* 801917FC  90 83 01 C8 */	stw r4, 0x1c8(r3)
/* 80191800  90 03 01 CC */	stw r0, 0x1cc(r3)
/* 80191804  80 1F 02 40 */	lwz r0, 0x240(r31)
/* 80191808  90 03 01 D0 */	stw r0, 0x1d0(r3)
/* 8019180C  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80191810  80 1F 02 48 */	lwz r0, 0x248(r31)
/* 80191814  90 83 01 D4 */	stw r4, 0x1d4(r3)
/* 80191818  90 03 01 D8 */	stw r0, 0x1d8(r3)
/* 8019181C  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 80191820  90 03 01 DC */	stw r0, 0x1dc(r3)
/* 80191824  80 9F 02 50 */	lwz r4, 0x250(r31)
/* 80191828  80 1F 02 54 */	lwz r0, 0x254(r31)
/* 8019182C  90 83 01 E0 */	stw r4, 0x1e0(r3)
/* 80191830  90 03 01 E4 */	stw r0, 0x1e4(r3)
/* 80191834  80 1F 02 58 */	lwz r0, 0x258(r31)
/* 80191838  90 03 01 E8 */	stw r0, 0x1e8(r3)
/* 8019183C  80 9F 02 5C */	lwz r4, 0x25c(r31)
/* 80191840  80 1F 02 60 */	lwz r0, 0x260(r31)
/* 80191844  90 83 01 EC */	stw r4, 0x1ec(r3)
/* 80191848  90 03 01 F0 */	stw r0, 0x1f0(r3)
/* 8019184C  80 1F 02 64 */	lwz r0, 0x264(r31)
/* 80191850  90 03 01 F4 */	stw r0, 0x1f4(r3)
/* 80191854  80 9F 02 68 */	lwz r4, 0x268(r31)
/* 80191858  80 1F 02 6C */	lwz r0, 0x26c(r31)
/* 8019185C  90 83 01 F8 */	stw r4, 0x1f8(r3)
/* 80191860  90 03 01 FC */	stw r0, 0x1fc(r3)
/* 80191864  80 1F 02 70 */	lwz r0, 0x270(r31)
/* 80191868  90 03 02 00 */	stw r0, 0x200(r3)
/* 8019186C  80 9F 02 74 */	lwz r4, 0x274(r31)
/* 80191870  80 1F 02 78 */	lwz r0, 0x278(r31)
/* 80191874  90 83 02 04 */	stw r4, 0x204(r3)
/* 80191878  90 03 02 08 */	stw r0, 0x208(r3)
/* 8019187C  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 80191880  90 03 02 0C */	stw r0, 0x20c(r3)
/* 80191884  80 9F 02 80 */	lwz r4, 0x280(r31)
/* 80191888  80 1F 02 84 */	lwz r0, 0x284(r31)
/* 8019188C  90 83 02 10 */	stw r4, 0x210(r3)
/* 80191890  90 03 02 14 */	stw r0, 0x214(r3)
/* 80191894  80 1F 02 88 */	lwz r0, 0x288(r31)
/* 80191898  90 03 02 18 */	stw r0, 0x218(r3)
/* 8019189C  80 9F 02 8C */	lwz r4, 0x28c(r31)
/* 801918A0  80 1F 02 90 */	lwz r0, 0x290(r31)
/* 801918A4  90 83 02 1C */	stw r4, 0x21c(r3)
/* 801918A8  90 03 02 20 */	stw r0, 0x220(r3)
/* 801918AC  80 1F 02 94 */	lwz r0, 0x294(r31)
/* 801918B0  90 03 02 24 */	stw r0, 0x224(r3)
/* 801918B4  80 9F 02 98 */	lwz r4, 0x298(r31)
/* 801918B8  80 1F 02 9C */	lwz r0, 0x29c(r31)
/* 801918BC  90 83 02 28 */	stw r4, 0x228(r3)
/* 801918C0  90 03 02 2C */	stw r0, 0x22c(r3)
/* 801918C4  80 1F 02 A0 */	lwz r0, 0x2a0(r31)
/* 801918C8  90 03 02 30 */	stw r0, 0x230(r3)
/* 801918CC  80 7F 07 A0 */	lwz r3, 0x7a0(r31)
/* 801918D0  80 1F 07 A4 */	lwz r0, 0x7a4(r31)
/* 801918D4  90 7F 08 E4 */	stw r3, 0x8e4(r31)
/* 801918D8  90 1F 08 E8 */	stw r0, 0x8e8(r31)
/* 801918DC  80 1F 07 A8 */	lwz r0, 0x7a8(r31)
/* 801918E0  90 1F 08 EC */	stw r0, 0x8ec(r31)
/* 801918E4  38 7F 08 E4 */	addi r3, r31, 0x8e4
/* 801918E8  80 9F 07 AC */	lwz r4, 0x7ac(r31)
/* 801918EC  80 1F 07 B0 */	lwz r0, 0x7b0(r31)
/* 801918F0  90 83 00 0C */	stw r4, 0xc(r3)
/* 801918F4  90 03 00 10 */	stw r0, 0x10(r3)
/* 801918F8  80 1F 07 B4 */	lwz r0, 0x7b4(r31)
/* 801918FC  90 03 00 14 */	stw r0, 0x14(r3)
/* 80191900  80 9F 07 B8 */	lwz r4, 0x7b8(r31)
/* 80191904  80 1F 07 BC */	lwz r0, 0x7bc(r31)
/* 80191908  90 83 00 18 */	stw r4, 0x18(r3)
/* 8019190C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80191910  80 1F 07 C0 */	lwz r0, 0x7c0(r31)
/* 80191914  90 03 00 20 */	stw r0, 0x20(r3)
/* 80191918  80 9F 07 C4 */	lwz r4, 0x7c4(r31)
/* 8019191C  80 1F 07 C8 */	lwz r0, 0x7c8(r31)
/* 80191920  90 83 00 24 */	stw r4, 0x24(r3)
/* 80191924  90 03 00 28 */	stw r0, 0x28(r3)
/* 80191928  80 1F 07 CC */	lwz r0, 0x7cc(r31)
/* 8019192C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80191930  80 9F 07 D0 */	lwz r4, 0x7d0(r31)
/* 80191934  80 1F 07 D4 */	lwz r0, 0x7d4(r31)
/* 80191938  90 83 00 30 */	stw r4, 0x30(r3)
/* 8019193C  90 03 00 34 */	stw r0, 0x34(r3)
/* 80191940  80 1F 07 D8 */	lwz r0, 0x7d8(r31)
/* 80191944  90 03 00 38 */	stw r0, 0x38(r3)
/* 80191948  80 9F 07 DC */	lwz r4, 0x7dc(r31)
/* 8019194C  80 1F 07 E0 */	lwz r0, 0x7e0(r31)
/* 80191950  90 83 00 3C */	stw r4, 0x3c(r3)
/* 80191954  90 03 00 40 */	stw r0, 0x40(r3)
/* 80191958  80 1F 07 E4 */	lwz r0, 0x7e4(r31)
/* 8019195C  90 03 00 44 */	stw r0, 0x44(r3)
/* 80191960  80 9F 07 E8 */	lwz r4, 0x7e8(r31)
/* 80191964  80 1F 07 EC */	lwz r0, 0x7ec(r31)
/* 80191968  90 83 00 48 */	stw r4, 0x48(r3)
/* 8019196C  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80191970  80 1F 07 F0 */	lwz r0, 0x7f0(r31)
/* 80191974  90 03 00 50 */	stw r0, 0x50(r3)
/* 80191978  80 9F 07 F4 */	lwz r4, 0x7f4(r31)
/* 8019197C  80 1F 07 F8 */	lwz r0, 0x7f8(r31)
/* 80191980  90 83 00 54 */	stw r4, 0x54(r3)
/* 80191984  90 03 00 58 */	stw r0, 0x58(r3)
/* 80191988  80 1F 07 FC */	lwz r0, 0x7fc(r31)
/* 8019198C  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80191990  80 9F 08 00 */	lwz r4, 0x800(r31)
/* 80191994  80 1F 08 04 */	lwz r0, 0x804(r31)
/* 80191998  90 83 00 60 */	stw r4, 0x60(r3)
/* 8019199C  90 03 00 64 */	stw r0, 0x64(r3)
/* 801919A0  80 1F 08 08 */	lwz r0, 0x808(r31)
/* 801919A4  90 03 00 68 */	stw r0, 0x68(r3)
/* 801919A8  80 9F 08 0C */	lwz r4, 0x80c(r31)
/* 801919AC  80 1F 08 10 */	lwz r0, 0x810(r31)
/* 801919B0  90 83 00 6C */	stw r4, 0x6c(r3)
/* 801919B4  90 03 00 70 */	stw r0, 0x70(r3)
/* 801919B8  80 1F 08 14 */	lwz r0, 0x814(r31)
/* 801919BC  90 03 00 74 */	stw r0, 0x74(r3)
/* 801919C0  80 9F 08 18 */	lwz r4, 0x818(r31)
/* 801919C4  80 1F 08 1C */	lwz r0, 0x81c(r31)
/* 801919C8  90 83 00 78 */	stw r4, 0x78(r3)
/* 801919CC  90 03 00 7C */	stw r0, 0x7c(r3)
/* 801919D0  80 1F 08 20 */	lwz r0, 0x820(r31)
/* 801919D4  90 03 00 80 */	stw r0, 0x80(r3)
/* 801919D8  80 9F 08 24 */	lwz r4, 0x824(r31)
/* 801919DC  80 1F 08 28 */	lwz r0, 0x828(r31)
/* 801919E0  90 83 00 84 */	stw r4, 0x84(r3)
/* 801919E4  90 03 00 88 */	stw r0, 0x88(r3)
/* 801919E8  80 1F 08 2C */	lwz r0, 0x82c(r31)
/* 801919EC  90 03 00 8C */	stw r0, 0x8c(r3)
/* 801919F0  80 9F 08 30 */	lwz r4, 0x830(r31)
/* 801919F4  80 1F 08 34 */	lwz r0, 0x834(r31)
/* 801919F8  90 83 00 90 */	stw r4, 0x90(r3)
/* 801919FC  90 03 00 94 */	stw r0, 0x94(r3)
/* 80191A00  80 1F 08 38 */	lwz r0, 0x838(r31)
/* 80191A04  90 03 00 98 */	stw r0, 0x98(r3)
/* 80191A08  80 9F 08 3C */	lwz r4, 0x83c(r31)
/* 80191A0C  80 1F 08 40 */	lwz r0, 0x840(r31)
/* 80191A10  90 83 00 9C */	stw r4, 0x9c(r3)
/* 80191A14  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80191A18  80 1F 08 44 */	lwz r0, 0x844(r31)
/* 80191A1C  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 80191A20  80 9F 08 48 */	lwz r4, 0x848(r31)
/* 80191A24  80 1F 08 4C */	lwz r0, 0x84c(r31)
/* 80191A28  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 80191A2C  90 03 00 AC */	stw r0, 0xac(r3)
/* 80191A30  80 1F 08 50 */	lwz r0, 0x850(r31)
/* 80191A34  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 80191A38  80 9F 08 54 */	lwz r4, 0x854(r31)
/* 80191A3C  80 1F 08 58 */	lwz r0, 0x858(r31)
/* 80191A40  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 80191A44  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 80191A48  80 1F 08 5C */	lwz r0, 0x85c(r31)
/* 80191A4C  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80191A50  80 9F 08 60 */	lwz r4, 0x860(r31)
/* 80191A54  80 1F 08 64 */	lwz r0, 0x864(r31)
/* 80191A58  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 80191A5C  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 80191A60  80 1F 08 68 */	lwz r0, 0x868(r31)
/* 80191A64  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 80191A68  80 9F 08 6C */	lwz r4, 0x86c(r31)
/* 80191A6C  80 1F 08 70 */	lwz r0, 0x870(r31)
/* 80191A70  90 83 00 CC */	stw r4, 0xcc(r3)
/* 80191A74  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 80191A78  80 1F 08 74 */	lwz r0, 0x874(r31)
/* 80191A7C  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 80191A80  80 9F 08 78 */	lwz r4, 0x878(r31)
/* 80191A84  80 1F 08 7C */	lwz r0, 0x87c(r31)
/* 80191A88  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 80191A8C  90 03 00 DC */	stw r0, 0xdc(r3)
/* 80191A90  80 1F 08 80 */	lwz r0, 0x880(r31)
/* 80191A94  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 80191A98  80 9F 08 84 */	lwz r4, 0x884(r31)
/* 80191A9C  80 1F 08 88 */	lwz r0, 0x888(r31)
/* 80191AA0  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 80191AA4  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 80191AA8  80 1F 08 8C */	lwz r0, 0x88c(r31)
/* 80191AAC  90 03 00 EC */	stw r0, 0xec(r3)
/* 80191AB0  80 9F 08 90 */	lwz r4, 0x890(r31)
/* 80191AB4  80 1F 08 94 */	lwz r0, 0x894(r31)
/* 80191AB8  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 80191ABC  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 80191AC0  80 1F 08 98 */	lwz r0, 0x898(r31)
/* 80191AC4  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 80191AC8  80 9F 08 9C */	lwz r4, 0x89c(r31)
/* 80191ACC  80 1F 08 A0 */	lwz r0, 0x8a0(r31)
/* 80191AD0  90 83 00 FC */	stw r4, 0xfc(r3)
/* 80191AD4  90 03 01 00 */	stw r0, 0x100(r3)
/* 80191AD8  80 1F 08 A4 */	lwz r0, 0x8a4(r31)
/* 80191ADC  90 03 01 04 */	stw r0, 0x104(r3)
/* 80191AE0  80 9F 08 A8 */	lwz r4, 0x8a8(r31)
/* 80191AE4  80 1F 08 AC */	lwz r0, 0x8ac(r31)
/* 80191AE8  90 83 01 08 */	stw r4, 0x108(r3)
/* 80191AEC  90 03 01 0C */	stw r0, 0x10c(r3)
/* 80191AF0  80 1F 08 B0 */	lwz r0, 0x8b0(r31)
/* 80191AF4  90 03 01 10 */	stw r0, 0x110(r3)
/* 80191AF8  80 9F 08 B4 */	lwz r4, 0x8b4(r31)
/* 80191AFC  80 1F 08 B8 */	lwz r0, 0x8b8(r31)
/* 80191B00  90 83 01 14 */	stw r4, 0x114(r3)
/* 80191B04  90 03 01 18 */	stw r0, 0x118(r3)
/* 80191B08  80 1F 08 BC */	lwz r0, 0x8bc(r31)
/* 80191B0C  90 03 01 1C */	stw r0, 0x11c(r3)
/* 80191B10  80 9F 08 C0 */	lwz r4, 0x8c0(r31)
/* 80191B14  80 1F 08 C4 */	lwz r0, 0x8c4(r31)
/* 80191B18  90 83 01 20 */	stw r4, 0x120(r3)
/* 80191B1C  90 03 01 24 */	stw r0, 0x124(r3)
/* 80191B20  80 1F 08 C8 */	lwz r0, 0x8c8(r31)
/* 80191B24  90 03 01 28 */	stw r0, 0x128(r3)
/* 80191B28  80 9F 08 CC */	lwz r4, 0x8cc(r31)
/* 80191B2C  80 1F 08 D0 */	lwz r0, 0x8d0(r31)
/* 80191B30  90 83 01 2C */	stw r4, 0x12c(r3)
/* 80191B34  90 03 01 30 */	stw r0, 0x130(r3)
/* 80191B38  80 1F 08 D4 */	lwz r0, 0x8d4(r31)
/* 80191B3C  90 03 01 34 */	stw r0, 0x134(r3)
/* 80191B40  80 9F 08 D8 */	lwz r4, 0x8d8(r31)
/* 80191B44  80 1F 08 DC */	lwz r0, 0x8dc(r31)
/* 80191B48  90 83 01 38 */	stw r4, 0x138(r3)
/* 80191B4C  90 03 01 3C */	stw r0, 0x13c(r3)
/* 80191B50  80 1F 08 E0 */	lwz r0, 0x8e0(r31)
/* 80191B54  90 03 01 40 */	stw r0, 0x140(r3)
/* 80191B58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191B60  7C 08 03 A6 */	mtlr r0
/* 80191B64  38 21 00 10 */	addi r1, r1, 0x10
/* 80191B68  4E 80 00 20 */	blr 
