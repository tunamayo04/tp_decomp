lbl_80AE64D0:
/* 80AE64D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AE64D4  7C 08 02 A6 */	mflr r0
/* 80AE64D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AE64DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AE64E0  3C 60 80 AE */	lis r3, cNullVec__6Z2Calc@ha
/* 80AE64E4  3B E3 6D 18 */	addi r31, r3, cNullVec__6Z2Calc@l
/* 80AE64E8  3C 60 80 3A */	lis r3, __ptmf_null@ha
/* 80AE64EC  38 83 21 80 */	addi r4, r3, __ptmf_null@l
/* 80AE64F0  80 64 00 00 */	lwz r3, 0(r4)
/* 80AE64F4  80 04 00 04 */	lwz r0, 4(r4)
/* 80AE64F8  90 7F 03 9C */	stw r3, 0x39c(r31)
/* 80AE64FC  90 1F 03 A0 */	stw r0, 0x3a0(r31)
/* 80AE6500  80 04 00 08 */	lwz r0, 8(r4)
/* 80AE6504  90 1F 03 A4 */	stw r0, 0x3a4(r31)
/* 80AE6508  38 9F 03 9C */	addi r4, r31, 0x39c
/* 80AE650C  80 7F 03 90 */	lwz r3, 0x390(r31)
/* 80AE6510  80 1F 03 94 */	lwz r0, 0x394(r31)
/* 80AE6514  90 64 00 0C */	stw r3, 0xc(r4)
/* 80AE6518  90 04 00 10 */	stw r0, 0x10(r4)
/* 80AE651C  80 1F 03 98 */	lwz r0, 0x398(r31)
/* 80AE6520  90 04 00 14 */	stw r0, 0x14(r4)
/* 80AE6524  3C 60 80 AE */	lis r3, __vt__17daNpc_Sha_Param_c@ha
/* 80AE6528  38 03 78 24 */	addi r0, r3, __vt__17daNpc_Sha_Param_c@l
/* 80AE652C  3C 60 80 AE */	lis r3, l_HIO@ha
/* 80AE6530  94 03 78 44 */	stwu r0, l_HIO@l(r3)
/* 80AE6534  3C 80 80 AE */	lis r4, __dt__17daNpc_Sha_Param_cFv@ha
/* 80AE6538  38 84 6B 5C */	addi r4, r4, __dt__17daNpc_Sha_Param_cFv@l
/* 80AE653C  3C A0 80 AE */	lis r5, lit_3813@ha
/* 80AE6540  38 A5 78 38 */	addi r5, r5, lit_3813@l
/* 80AE6544  4B FF C8 15 */	bl __register_global_object
/* 80AE6548  80 7F 04 DC */	lwz r3, 0x4dc(r31)
/* 80AE654C  80 1F 04 E0 */	lwz r0, 0x4e0(r31)
/* 80AE6550  90 7F 07 1C */	stw r3, 0x71c(r31)
/* 80AE6554  90 1F 07 20 */	stw r0, 0x720(r31)
/* 80AE6558  80 1F 04 E4 */	lwz r0, 0x4e4(r31)
/* 80AE655C  90 1F 07 24 */	stw r0, 0x724(r31)
/* 80AE6560  38 7F 07 1C */	addi r3, r31, 0x71c
/* 80AE6564  80 9F 04 E8 */	lwz r4, 0x4e8(r31)
/* 80AE6568  80 1F 04 EC */	lwz r0, 0x4ec(r31)
/* 80AE656C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80AE6570  90 03 00 10 */	stw r0, 0x10(r3)
/* 80AE6574  80 1F 04 F0 */	lwz r0, 0x4f0(r31)
/* 80AE6578  90 03 00 14 */	stw r0, 0x14(r3)
/* 80AE657C  80 9F 04 F4 */	lwz r4, 0x4f4(r31)
/* 80AE6580  80 1F 04 F8 */	lwz r0, 0x4f8(r31)
/* 80AE6584  90 83 00 18 */	stw r4, 0x18(r3)
/* 80AE6588  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80AE658C  80 1F 04 FC */	lwz r0, 0x4fc(r31)
/* 80AE6590  90 03 00 20 */	stw r0, 0x20(r3)
/* 80AE6594  80 9F 05 00 */	lwz r4, 0x500(r31)
/* 80AE6598  80 1F 05 04 */	lwz r0, 0x504(r31)
/* 80AE659C  90 83 00 24 */	stw r4, 0x24(r3)
/* 80AE65A0  90 03 00 28 */	stw r0, 0x28(r3)
/* 80AE65A4  80 1F 05 08 */	lwz r0, 0x508(r31)
/* 80AE65A8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80AE65AC  80 9F 05 0C */	lwz r4, 0x50c(r31)
/* 80AE65B0  80 1F 05 10 */	lwz r0, 0x510(r31)
/* 80AE65B4  90 83 00 30 */	stw r4, 0x30(r3)
/* 80AE65B8  90 03 00 34 */	stw r0, 0x34(r3)
/* 80AE65BC  80 1F 05 14 */	lwz r0, 0x514(r31)
/* 80AE65C0  90 03 00 38 */	stw r0, 0x38(r3)
/* 80AE65C4  80 9F 05 18 */	lwz r4, 0x518(r31)
/* 80AE65C8  80 1F 05 1C */	lwz r0, 0x51c(r31)
/* 80AE65CC  90 83 00 3C */	stw r4, 0x3c(r3)
/* 80AE65D0  90 03 00 40 */	stw r0, 0x40(r3)
/* 80AE65D4  80 1F 05 20 */	lwz r0, 0x520(r31)
/* 80AE65D8  90 03 00 44 */	stw r0, 0x44(r3)
/* 80AE65DC  80 9F 05 24 */	lwz r4, 0x524(r31)
/* 80AE65E0  80 1F 05 28 */	lwz r0, 0x528(r31)
/* 80AE65E4  90 83 00 48 */	stw r4, 0x48(r3)
/* 80AE65E8  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80AE65EC  80 1F 05 2C */	lwz r0, 0x52c(r31)
/* 80AE65F0  90 03 00 50 */	stw r0, 0x50(r3)
/* 80AE65F4  80 9F 05 30 */	lwz r4, 0x530(r31)
/* 80AE65F8  80 1F 05 34 */	lwz r0, 0x534(r31)
/* 80AE65FC  90 83 00 54 */	stw r4, 0x54(r3)
/* 80AE6600  90 03 00 58 */	stw r0, 0x58(r3)
/* 80AE6604  80 1F 05 38 */	lwz r0, 0x538(r31)
/* 80AE6608  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80AE660C  80 9F 05 3C */	lwz r4, 0x53c(r31)
/* 80AE6610  80 1F 05 40 */	lwz r0, 0x540(r31)
/* 80AE6614  90 83 00 60 */	stw r4, 0x60(r3)
/* 80AE6618  90 03 00 64 */	stw r0, 0x64(r3)
/* 80AE661C  80 1F 05 44 */	lwz r0, 0x544(r31)
/* 80AE6620  90 03 00 68 */	stw r0, 0x68(r3)
/* 80AE6624  80 9F 05 48 */	lwz r4, 0x548(r31)
/* 80AE6628  80 1F 05 4C */	lwz r0, 0x54c(r31)
/* 80AE662C  90 83 00 6C */	stw r4, 0x6c(r3)
/* 80AE6630  90 03 00 70 */	stw r0, 0x70(r3)
/* 80AE6634  80 1F 05 50 */	lwz r0, 0x550(r31)
/* 80AE6638  90 03 00 74 */	stw r0, 0x74(r3)
/* 80AE663C  80 9F 05 54 */	lwz r4, 0x554(r31)
/* 80AE6640  80 1F 05 58 */	lwz r0, 0x558(r31)
/* 80AE6644  90 83 00 78 */	stw r4, 0x78(r3)
/* 80AE6648  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80AE664C  80 1F 05 5C */	lwz r0, 0x55c(r31)
/* 80AE6650  90 03 00 80 */	stw r0, 0x80(r3)
/* 80AE6654  80 9F 05 60 */	lwz r4, 0x560(r31)
/* 80AE6658  80 1F 05 64 */	lwz r0, 0x564(r31)
/* 80AE665C  90 83 00 84 */	stw r4, 0x84(r3)
/* 80AE6660  90 03 00 88 */	stw r0, 0x88(r3)
/* 80AE6664  80 1F 05 68 */	lwz r0, 0x568(r31)
/* 80AE6668  90 03 00 8C */	stw r0, 0x8c(r3)
/* 80AE666C  80 9F 05 6C */	lwz r4, 0x56c(r31)
/* 80AE6670  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 80AE6674  90 83 00 90 */	stw r4, 0x90(r3)
/* 80AE6678  90 03 00 94 */	stw r0, 0x94(r3)
/* 80AE667C  80 1F 05 74 */	lwz r0, 0x574(r31)
/* 80AE6680  90 03 00 98 */	stw r0, 0x98(r3)
/* 80AE6684  80 9F 05 78 */	lwz r4, 0x578(r31)
/* 80AE6688  80 1F 05 7C */	lwz r0, 0x57c(r31)
/* 80AE668C  90 83 00 9C */	stw r4, 0x9c(r3)
/* 80AE6690  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80AE6694  80 1F 05 80 */	lwz r0, 0x580(r31)
/* 80AE6698  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 80AE669C  80 9F 05 84 */	lwz r4, 0x584(r31)
/* 80AE66A0  80 1F 05 88 */	lwz r0, 0x588(r31)
/* 80AE66A4  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 80AE66A8  90 03 00 AC */	stw r0, 0xac(r3)
/* 80AE66AC  80 1F 05 8C */	lwz r0, 0x58c(r31)
/* 80AE66B0  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 80AE66B4  80 9F 05 90 */	lwz r4, 0x590(r31)
/* 80AE66B8  80 1F 05 94 */	lwz r0, 0x594(r31)
/* 80AE66BC  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 80AE66C0  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 80AE66C4  80 1F 05 98 */	lwz r0, 0x598(r31)
/* 80AE66C8  90 03 00 BC */	stw r0, 0xbc(r3)
/* 80AE66CC  80 9F 05 9C */	lwz r4, 0x59c(r31)
/* 80AE66D0  80 1F 05 A0 */	lwz r0, 0x5a0(r31)
/* 80AE66D4  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 80AE66D8  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 80AE66DC  80 1F 05 A4 */	lwz r0, 0x5a4(r31)
/* 80AE66E0  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 80AE66E4  80 9F 05 A8 */	lwz r4, 0x5a8(r31)
/* 80AE66E8  80 1F 05 AC */	lwz r0, 0x5ac(r31)
/* 80AE66EC  90 83 00 CC */	stw r4, 0xcc(r3)
/* 80AE66F0  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 80AE66F4  80 1F 05 B0 */	lwz r0, 0x5b0(r31)
/* 80AE66F8  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 80AE66FC  80 9F 05 B4 */	lwz r4, 0x5b4(r31)
/* 80AE6700  80 1F 05 B8 */	lwz r0, 0x5b8(r31)
/* 80AE6704  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 80AE6708  90 03 00 DC */	stw r0, 0xdc(r3)
/* 80AE670C  80 1F 05 BC */	lwz r0, 0x5bc(r31)
/* 80AE6710  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 80AE6714  80 9F 05 C0 */	lwz r4, 0x5c0(r31)
/* 80AE6718  80 1F 05 C4 */	lwz r0, 0x5c4(r31)
/* 80AE671C  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 80AE6720  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 80AE6724  80 1F 05 C8 */	lwz r0, 0x5c8(r31)
/* 80AE6728  90 03 00 EC */	stw r0, 0xec(r3)
/* 80AE672C  80 9F 05 CC */	lwz r4, 0x5cc(r31)
/* 80AE6730  80 1F 05 D0 */	lwz r0, 0x5d0(r31)
/* 80AE6734  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 80AE6738  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 80AE673C  80 1F 05 D4 */	lwz r0, 0x5d4(r31)
/* 80AE6740  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 80AE6744  80 9F 05 D8 */	lwz r4, 0x5d8(r31)
/* 80AE6748  80 1F 05 DC */	lwz r0, 0x5dc(r31)
/* 80AE674C  90 83 00 FC */	stw r4, 0xfc(r3)
/* 80AE6750  90 03 01 00 */	stw r0, 0x100(r3)
/* 80AE6754  80 1F 05 E0 */	lwz r0, 0x5e0(r31)
/* 80AE6758  90 03 01 04 */	stw r0, 0x104(r3)
/* 80AE675C  80 9F 05 E4 */	lwz r4, 0x5e4(r31)
/* 80AE6760  80 1F 05 E8 */	lwz r0, 0x5e8(r31)
/* 80AE6764  90 83 01 08 */	stw r4, 0x108(r3)
/* 80AE6768  90 03 01 0C */	stw r0, 0x10c(r3)
/* 80AE676C  80 1F 05 EC */	lwz r0, 0x5ec(r31)
/* 80AE6770  90 03 01 10 */	stw r0, 0x110(r3)
/* 80AE6774  80 9F 05 F0 */	lwz r4, 0x5f0(r31)
/* 80AE6778  80 1F 05 F4 */	lwz r0, 0x5f4(r31)
/* 80AE677C  90 83 01 14 */	stw r4, 0x114(r3)
/* 80AE6780  90 03 01 18 */	stw r0, 0x118(r3)
/* 80AE6784  80 1F 05 F8 */	lwz r0, 0x5f8(r31)
/* 80AE6788  90 03 01 1C */	stw r0, 0x11c(r3)
/* 80AE678C  80 9F 05 FC */	lwz r4, 0x5fc(r31)
/* 80AE6790  80 1F 06 00 */	lwz r0, 0x600(r31)
/* 80AE6794  90 83 01 20 */	stw r4, 0x120(r3)
/* 80AE6798  90 03 01 24 */	stw r0, 0x124(r3)
/* 80AE679C  80 1F 06 04 */	lwz r0, 0x604(r31)
/* 80AE67A0  90 03 01 28 */	stw r0, 0x128(r3)
/* 80AE67A4  80 9F 06 08 */	lwz r4, 0x608(r31)
/* 80AE67A8  80 1F 06 0C */	lwz r0, 0x60c(r31)
/* 80AE67AC  90 83 01 2C */	stw r4, 0x12c(r3)
/* 80AE67B0  90 03 01 30 */	stw r0, 0x130(r3)
/* 80AE67B4  80 1F 06 10 */	lwz r0, 0x610(r31)
/* 80AE67B8  90 03 01 34 */	stw r0, 0x134(r3)
/* 80AE67BC  80 9F 06 14 */	lwz r4, 0x614(r31)
/* 80AE67C0  80 1F 06 18 */	lwz r0, 0x618(r31)
/* 80AE67C4  90 83 01 38 */	stw r4, 0x138(r3)
/* 80AE67C8  90 03 01 3C */	stw r0, 0x13c(r3)
/* 80AE67CC  80 1F 06 1C */	lwz r0, 0x61c(r31)
/* 80AE67D0  90 03 01 40 */	stw r0, 0x140(r3)
/* 80AE67D4  80 9F 06 20 */	lwz r4, 0x620(r31)
/* 80AE67D8  80 1F 06 24 */	lwz r0, 0x624(r31)
/* 80AE67DC  90 83 01 44 */	stw r4, 0x144(r3)
/* 80AE67E0  90 03 01 48 */	stw r0, 0x148(r3)
/* 80AE67E4  80 1F 06 28 */	lwz r0, 0x628(r31)
/* 80AE67E8  90 03 01 4C */	stw r0, 0x14c(r3)
/* 80AE67EC  80 9F 06 2C */	lwz r4, 0x62c(r31)
/* 80AE67F0  80 1F 06 30 */	lwz r0, 0x630(r31)
/* 80AE67F4  90 83 01 50 */	stw r4, 0x150(r3)
/* 80AE67F8  90 03 01 54 */	stw r0, 0x154(r3)
/* 80AE67FC  80 1F 06 34 */	lwz r0, 0x634(r31)
/* 80AE6800  90 03 01 58 */	stw r0, 0x158(r3)
/* 80AE6804  80 9F 06 38 */	lwz r4, 0x638(r31)
/* 80AE6808  80 1F 06 3C */	lwz r0, 0x63c(r31)
/* 80AE680C  90 83 01 5C */	stw r4, 0x15c(r3)
/* 80AE6810  90 03 01 60 */	stw r0, 0x160(r3)
/* 80AE6814  80 1F 06 40 */	lwz r0, 0x640(r31)
/* 80AE6818  90 03 01 64 */	stw r0, 0x164(r3)
/* 80AE681C  80 9F 06 44 */	lwz r4, 0x644(r31)
/* 80AE6820  80 1F 06 48 */	lwz r0, 0x648(r31)
/* 80AE6824  90 83 01 68 */	stw r4, 0x168(r3)
/* 80AE6828  90 03 01 6C */	stw r0, 0x16c(r3)
/* 80AE682C  80 1F 06 4C */	lwz r0, 0x64c(r31)
/* 80AE6830  90 03 01 70 */	stw r0, 0x170(r3)
/* 80AE6834  80 9F 06 50 */	lwz r4, 0x650(r31)
/* 80AE6838  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80AE683C  90 83 01 74 */	stw r4, 0x174(r3)
/* 80AE6840  90 03 01 78 */	stw r0, 0x178(r3)
/* 80AE6844  80 1F 06 58 */	lwz r0, 0x658(r31)
/* 80AE6848  90 03 01 7C */	stw r0, 0x17c(r3)
/* 80AE684C  80 9F 06 5C */	lwz r4, 0x65c(r31)
/* 80AE6850  80 1F 06 60 */	lwz r0, 0x660(r31)
/* 80AE6854  90 83 01 80 */	stw r4, 0x180(r3)
/* 80AE6858  90 03 01 84 */	stw r0, 0x184(r3)
/* 80AE685C  80 1F 06 64 */	lwz r0, 0x664(r31)
/* 80AE6860  90 03 01 88 */	stw r0, 0x188(r3)
/* 80AE6864  80 9F 06 68 */	lwz r4, 0x668(r31)
/* 80AE6868  80 1F 06 6C */	lwz r0, 0x66c(r31)
/* 80AE686C  90 83 01 8C */	stw r4, 0x18c(r3)
/* 80AE6870  90 03 01 90 */	stw r0, 0x190(r3)
/* 80AE6874  80 1F 06 70 */	lwz r0, 0x670(r31)
/* 80AE6878  90 03 01 94 */	stw r0, 0x194(r3)
/* 80AE687C  80 9F 06 74 */	lwz r4, 0x674(r31)
/* 80AE6880  80 1F 06 78 */	lwz r0, 0x678(r31)
/* 80AE6884  90 83 01 98 */	stw r4, 0x198(r3)
/* 80AE6888  90 03 01 9C */	stw r0, 0x19c(r3)
/* 80AE688C  80 1F 06 7C */	lwz r0, 0x67c(r31)
/* 80AE6890  90 03 01 A0 */	stw r0, 0x1a0(r3)
/* 80AE6894  80 9F 06 80 */	lwz r4, 0x680(r31)
/* 80AE6898  80 1F 06 84 */	lwz r0, 0x684(r31)
/* 80AE689C  90 83 01 A4 */	stw r4, 0x1a4(r3)
/* 80AE68A0  90 03 01 A8 */	stw r0, 0x1a8(r3)
/* 80AE68A4  80 1F 06 88 */	lwz r0, 0x688(r31)
/* 80AE68A8  90 03 01 AC */	stw r0, 0x1ac(r3)
/* 80AE68AC  80 9F 06 8C */	lwz r4, 0x68c(r31)
/* 80AE68B0  80 1F 06 90 */	lwz r0, 0x690(r31)
/* 80AE68B4  90 83 01 B0 */	stw r4, 0x1b0(r3)
/* 80AE68B8  90 03 01 B4 */	stw r0, 0x1b4(r3)
/* 80AE68BC  80 1F 06 94 */	lwz r0, 0x694(r31)
/* 80AE68C0  90 03 01 B8 */	stw r0, 0x1b8(r3)
/* 80AE68C4  80 9F 06 98 */	lwz r4, 0x698(r31)
/* 80AE68C8  80 1F 06 9C */	lwz r0, 0x69c(r31)
/* 80AE68CC  90 83 01 BC */	stw r4, 0x1bc(r3)
/* 80AE68D0  90 03 01 C0 */	stw r0, 0x1c0(r3)
/* 80AE68D4  80 1F 06 A0 */	lwz r0, 0x6a0(r31)
/* 80AE68D8  90 03 01 C4 */	stw r0, 0x1c4(r3)
/* 80AE68DC  80 9F 06 A4 */	lwz r4, 0x6a4(r31)
/* 80AE68E0  80 1F 06 A8 */	lwz r0, 0x6a8(r31)
/* 80AE68E4  90 83 01 C8 */	stw r4, 0x1c8(r3)
/* 80AE68E8  90 03 01 CC */	stw r0, 0x1cc(r3)
/* 80AE68EC  80 1F 06 AC */	lwz r0, 0x6ac(r31)
/* 80AE68F0  90 03 01 D0 */	stw r0, 0x1d0(r3)
/* 80AE68F4  80 9F 06 B0 */	lwz r4, 0x6b0(r31)
/* 80AE68F8  80 1F 06 B4 */	lwz r0, 0x6b4(r31)
/* 80AE68FC  90 83 01 D4 */	stw r4, 0x1d4(r3)
/* 80AE6900  90 03 01 D8 */	stw r0, 0x1d8(r3)
/* 80AE6904  80 1F 06 B8 */	lwz r0, 0x6b8(r31)
/* 80AE6908  90 03 01 DC */	stw r0, 0x1dc(r3)
/* 80AE690C  80 9F 06 BC */	lwz r4, 0x6bc(r31)
/* 80AE6910  80 1F 06 C0 */	lwz r0, 0x6c0(r31)
/* 80AE6914  90 83 01 E0 */	stw r4, 0x1e0(r3)
/* 80AE6918  90 03 01 E4 */	stw r0, 0x1e4(r3)
/* 80AE691C  80 1F 06 C4 */	lwz r0, 0x6c4(r31)
/* 80AE6920  90 03 01 E8 */	stw r0, 0x1e8(r3)
/* 80AE6924  80 9F 06 C8 */	lwz r4, 0x6c8(r31)
/* 80AE6928  80 1F 06 CC */	lwz r0, 0x6cc(r31)
/* 80AE692C  90 83 01 EC */	stw r4, 0x1ec(r3)
/* 80AE6930  90 03 01 F0 */	stw r0, 0x1f0(r3)
/* 80AE6934  80 1F 06 D0 */	lwz r0, 0x6d0(r31)
/* 80AE6938  90 03 01 F4 */	stw r0, 0x1f4(r3)
/* 80AE693C  80 9F 06 D4 */	lwz r4, 0x6d4(r31)
/* 80AE6940  80 1F 06 D8 */	lwz r0, 0x6d8(r31)
/* 80AE6944  90 83 01 F8 */	stw r4, 0x1f8(r3)
/* 80AE6948  90 03 01 FC */	stw r0, 0x1fc(r3)
/* 80AE694C  80 1F 06 DC */	lwz r0, 0x6dc(r31)
/* 80AE6950  90 03 02 00 */	stw r0, 0x200(r3)
/* 80AE6954  80 9F 06 E0 */	lwz r4, 0x6e0(r31)
/* 80AE6958  80 1F 06 E4 */	lwz r0, 0x6e4(r31)
/* 80AE695C  90 83 02 04 */	stw r4, 0x204(r3)
/* 80AE6960  90 03 02 08 */	stw r0, 0x208(r3)
/* 80AE6964  80 1F 06 E8 */	lwz r0, 0x6e8(r31)
/* 80AE6968  90 03 02 0C */	stw r0, 0x20c(r3)
/* 80AE696C  80 9F 06 EC */	lwz r4, 0x6ec(r31)
/* 80AE6970  80 1F 06 F0 */	lwz r0, 0x6f0(r31)
/* 80AE6974  90 83 02 10 */	stw r4, 0x210(r3)
/* 80AE6978  90 03 02 14 */	stw r0, 0x214(r3)
/* 80AE697C  80 1F 06 F4 */	lwz r0, 0x6f4(r31)
/* 80AE6980  90 03 02 18 */	stw r0, 0x218(r3)
/* 80AE6984  80 9F 06 F8 */	lwz r4, 0x6f8(r31)
/* 80AE6988  80 1F 06 FC */	lwz r0, 0x6fc(r31)
/* 80AE698C  90 83 02 1C */	stw r4, 0x21c(r3)
/* 80AE6990  90 03 02 20 */	stw r0, 0x220(r3)
/* 80AE6994  80 1F 07 00 */	lwz r0, 0x700(r31)
/* 80AE6998  90 03 02 24 */	stw r0, 0x224(r3)
/* 80AE699C  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 80AE69A0  80 1F 07 08 */	lwz r0, 0x708(r31)
/* 80AE69A4  90 83 02 28 */	stw r4, 0x228(r3)
/* 80AE69A8  90 03 02 2C */	stw r0, 0x22c(r3)
/* 80AE69AC  80 1F 07 0C */	lwz r0, 0x70c(r31)
/* 80AE69B0  90 03 02 30 */	stw r0, 0x230(r3)
/* 80AE69B4  80 9F 07 10 */	lwz r4, 0x710(r31)
/* 80AE69B8  80 1F 07 14 */	lwz r0, 0x714(r31)
/* 80AE69BC  90 83 02 34 */	stw r4, 0x234(r3)
/* 80AE69C0  90 03 02 38 */	stw r0, 0x238(r3)
/* 80AE69C4  80 1F 07 18 */	lwz r0, 0x718(r31)
/* 80AE69C8  90 03 02 3C */	stw r0, 0x23c(r3)
/* 80AE69CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AE69D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AE69D4  7C 08 03 A6 */	mtlr r0
/* 80AE69D8  38 21 00 10 */	addi r1, r1, 0x10
/* 80AE69DC  4E 80 00 20 */	blr 
