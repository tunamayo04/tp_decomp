lbl_8094AC44:
/* 8094AC44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8094AC48  7C 08 02 A6 */	mflr r0
/* 8094AC4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094AC50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8094AC54  93 C1 00 08 */	stw r30, 8(r1)
/* 8094AC58  3C 60 80 95 */	lis r3, cNullVec__6Z2Calc@ha
/* 8094AC5C  3B E3 B3 60 */	addi r31, r3, cNullVec__6Z2Calc@l
/* 8094AC60  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8094AC64  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8094AC68  90 7F 01 28 */	stw r3, 0x128(r31)
/* 8094AC6C  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 8094AC70  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8094AC74  90 1F 01 30 */	stw r0, 0x130(r31)
/* 8094AC78  38 7F 01 28 */	addi r3, r31, 0x128
/* 8094AC7C  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8094AC80  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8094AC84  90 83 00 0C */	stw r4, 0xc(r3)
/* 8094AC88  90 03 00 10 */	stw r0, 0x10(r3)
/* 8094AC8C  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 8094AC90  90 03 00 14 */	stw r0, 0x14(r3)
/* 8094AC94  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8094AC98  80 1F 00 3C */	lwz r0, 0x3c(r31)
/* 8094AC9C  90 83 00 18 */	stw r4, 0x18(r3)
/* 8094ACA0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8094ACA4  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8094ACA8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8094ACAC  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 8094ACB0  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8094ACB4  90 83 00 24 */	stw r4, 0x24(r3)
/* 8094ACB8  90 03 00 28 */	stw r0, 0x28(r3)
/* 8094ACBC  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8094ACC0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8094ACC4  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 8094ACC8  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 8094ACCC  90 83 00 30 */	stw r4, 0x30(r3)
/* 8094ACD0  90 03 00 34 */	stw r0, 0x34(r3)
/* 8094ACD4  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 8094ACD8  90 03 00 38 */	stw r0, 0x38(r3)
/* 8094ACDC  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8094ACE0  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 8094ACE4  90 83 00 3C */	stw r4, 0x3c(r3)
/* 8094ACE8  90 03 00 40 */	stw r0, 0x40(r3)
/* 8094ACEC  80 1F 00 64 */	lwz r0, 0x64(r31)
/* 8094ACF0  90 03 00 44 */	stw r0, 0x44(r3)
/* 8094ACF4  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8094ACF8  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 8094ACFC  90 83 00 48 */	stw r4, 0x48(r3)
/* 8094AD00  90 03 00 4C */	stw r0, 0x4c(r3)
/* 8094AD04  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 8094AD08  90 03 00 50 */	stw r0, 0x50(r3)
/* 8094AD0C  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 8094AD10  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 8094AD14  90 83 00 54 */	stw r4, 0x54(r3)
/* 8094AD18  90 03 00 58 */	stw r0, 0x58(r3)
/* 8094AD1C  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 8094AD20  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8094AD24  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 8094AD28  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 8094AD2C  90 83 00 60 */	stw r4, 0x60(r3)
/* 8094AD30  90 03 00 64 */	stw r0, 0x64(r3)
/* 8094AD34  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 8094AD38  90 03 00 68 */	stw r0, 0x68(r3)
/* 8094AD3C  80 9F 00 8C */	lwz r4, 0x8c(r31)
/* 8094AD40  80 1F 00 90 */	lwz r0, 0x90(r31)
/* 8094AD44  90 83 00 6C */	stw r4, 0x6c(r3)
/* 8094AD48  90 03 00 70 */	stw r0, 0x70(r3)
/* 8094AD4C  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8094AD50  90 03 00 74 */	stw r0, 0x74(r3)
/* 8094AD54  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 8094AD58  80 1F 00 9C */	lwz r0, 0x9c(r31)
/* 8094AD5C  90 83 00 78 */	stw r4, 0x78(r3)
/* 8094AD60  90 03 00 7C */	stw r0, 0x7c(r3)
/* 8094AD64  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 8094AD68  90 03 00 80 */	stw r0, 0x80(r3)
/* 8094AD6C  80 9F 00 A4 */	lwz r4, 0xa4(r31)
/* 8094AD70  80 1F 00 A8 */	lwz r0, 0xa8(r31)
/* 8094AD74  90 83 00 84 */	stw r4, 0x84(r3)
/* 8094AD78  90 03 00 88 */	stw r0, 0x88(r3)
/* 8094AD7C  80 1F 00 AC */	lwz r0, 0xac(r31)
/* 8094AD80  90 03 00 8C */	stw r0, 0x8c(r3)
/* 8094AD84  80 9F 00 B0 */	lwz r4, 0xb0(r31)
/* 8094AD88  80 1F 00 B4 */	lwz r0, 0xb4(r31)
/* 8094AD8C  90 83 00 90 */	stw r4, 0x90(r3)
/* 8094AD90  90 03 00 94 */	stw r0, 0x94(r3)
/* 8094AD94  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 8094AD98  90 03 00 98 */	stw r0, 0x98(r3)
/* 8094AD9C  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 8094ADA0  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 8094ADA4  90 83 00 9C */	stw r4, 0x9c(r3)
/* 8094ADA8  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 8094ADAC  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 8094ADB0  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8094ADB4  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 8094ADB8  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 8094ADBC  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 8094ADC0  90 03 00 AC */	stw r0, 0xac(r3)
/* 8094ADC4  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 8094ADC8  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 8094ADCC  80 9F 00 D4 */	lwz r4, 0xd4(r31)
/* 8094ADD0  80 1F 00 D8 */	lwz r0, 0xd8(r31)
/* 8094ADD4  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 8094ADD8  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 8094ADDC  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 8094ADE0  90 03 00 BC */	stw r0, 0xbc(r3)
/* 8094ADE4  80 9F 00 E0 */	lwz r4, 0xe0(r31)
/* 8094ADE8  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 8094ADEC  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 8094ADF0  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 8094ADF4  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 8094ADF8  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 8094ADFC  80 9F 00 EC */	lwz r4, 0xec(r31)
/* 8094AE00  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 8094AE04  90 83 00 CC */	stw r4, 0xcc(r3)
/* 8094AE08  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 8094AE0C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 8094AE10  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8094AE14  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 8094AE18  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 8094AE1C  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 8094AE20  90 03 00 DC */	stw r0, 0xdc(r3)
/* 8094AE24  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 8094AE28  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8094AE2C  80 9F 01 04 */	lwz r4, 0x104(r31)
/* 8094AE30  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8094AE34  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 8094AE38  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8094AE3C  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8094AE40  90 03 00 EC */	stw r0, 0xec(r3)
/* 8094AE44  80 9F 01 10 */	lwz r4, 0x110(r31)
/* 8094AE48  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 8094AE4C  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 8094AE50  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8094AE54  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 8094AE58  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 8094AE5C  80 9F 01 1C */	lwz r4, 0x11c(r31)
/* 8094AE60  80 1F 01 20 */	lwz r0, 0x120(r31)
/* 8094AE64  90 83 00 FC */	stw r4, 0xfc(r3)
/* 8094AE68  90 03 01 00 */	stw r0, 0x100(r3)
/* 8094AE6C  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 8094AE70  90 03 01 04 */	stw r0, 0x104(r3)
/* 8094AE74  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 8094AE78  80 1F 02 34 */	lwz r0, 0x234(r31)
/* 8094AE7C  90 7F 03 38 */	stw r3, 0x338(r31)
/* 8094AE80  90 1F 03 3C */	stw r0, 0x33c(r31)
/* 8094AE84  80 1F 02 38 */	lwz r0, 0x238(r31)
/* 8094AE88  90 1F 03 40 */	stw r0, 0x340(r31)
/* 8094AE8C  38 7F 03 38 */	addi r3, r31, 0x338
/* 8094AE90  80 9F 02 3C */	lwz r4, 0x23c(r31)
/* 8094AE94  80 1F 02 40 */	lwz r0, 0x240(r31)
/* 8094AE98  90 83 00 0C */	stw r4, 0xc(r3)
/* 8094AE9C  90 03 00 10 */	stw r0, 0x10(r3)
/* 8094AEA0  80 1F 02 44 */	lwz r0, 0x244(r31)
/* 8094AEA4  90 03 00 14 */	stw r0, 0x14(r3)
/* 8094AEA8  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 8094AEAC  80 1F 02 4C */	lwz r0, 0x24c(r31)
/* 8094AEB0  90 83 00 18 */	stw r4, 0x18(r3)
/* 8094AEB4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8094AEB8  80 1F 02 50 */	lwz r0, 0x250(r31)
/* 8094AEBC  90 03 00 20 */	stw r0, 0x20(r3)
/* 8094AEC0  80 9F 02 54 */	lwz r4, 0x254(r31)
/* 8094AEC4  80 1F 02 58 */	lwz r0, 0x258(r31)
/* 8094AEC8  90 83 00 24 */	stw r4, 0x24(r3)
/* 8094AECC  90 03 00 28 */	stw r0, 0x28(r3)
/* 8094AED0  80 1F 02 5C */	lwz r0, 0x25c(r31)
/* 8094AED4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8094AED8  80 9F 02 60 */	lwz r4, 0x260(r31)
/* 8094AEDC  80 1F 02 64 */	lwz r0, 0x264(r31)
/* 8094AEE0  90 83 00 30 */	stw r4, 0x30(r3)
/* 8094AEE4  90 03 00 34 */	stw r0, 0x34(r3)
/* 8094AEE8  80 1F 02 68 */	lwz r0, 0x268(r31)
/* 8094AEEC  90 03 00 38 */	stw r0, 0x38(r3)
/* 8094AEF0  80 9F 02 6C */	lwz r4, 0x26c(r31)
/* 8094AEF4  80 1F 02 70 */	lwz r0, 0x270(r31)
/* 8094AEF8  90 83 00 3C */	stw r4, 0x3c(r3)
/* 8094AEFC  90 03 00 40 */	stw r0, 0x40(r3)
/* 8094AF00  80 1F 02 74 */	lwz r0, 0x274(r31)
/* 8094AF04  90 03 00 44 */	stw r0, 0x44(r3)
/* 8094AF08  80 9F 02 78 */	lwz r4, 0x278(r31)
/* 8094AF0C  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 8094AF10  90 83 00 48 */	stw r4, 0x48(r3)
/* 8094AF14  90 03 00 4C */	stw r0, 0x4c(r3)
/* 8094AF18  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8094AF1C  90 03 00 50 */	stw r0, 0x50(r3)
/* 8094AF20  80 9F 02 84 */	lwz r4, 0x284(r31)
/* 8094AF24  80 1F 02 88 */	lwz r0, 0x288(r31)
/* 8094AF28  90 83 00 54 */	stw r4, 0x54(r3)
/* 8094AF2C  90 03 00 58 */	stw r0, 0x58(r3)
/* 8094AF30  80 1F 02 8C */	lwz r0, 0x28c(r31)
/* 8094AF34  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8094AF38  80 9F 02 90 */	lwz r4, 0x290(r31)
/* 8094AF3C  80 1F 02 94 */	lwz r0, 0x294(r31)
/* 8094AF40  90 83 00 60 */	stw r4, 0x60(r3)
/* 8094AF44  90 03 00 64 */	stw r0, 0x64(r3)
/* 8094AF48  80 1F 02 98 */	lwz r0, 0x298(r31)
/* 8094AF4C  90 03 00 68 */	stw r0, 0x68(r3)
/* 8094AF50  80 9F 02 9C */	lwz r4, 0x29c(r31)
/* 8094AF54  80 1F 02 A0 */	lwz r0, 0x2a0(r31)
/* 8094AF58  90 83 00 6C */	stw r4, 0x6c(r3)
/* 8094AF5C  90 03 00 70 */	stw r0, 0x70(r3)
/* 8094AF60  80 1F 02 A4 */	lwz r0, 0x2a4(r31)
/* 8094AF64  90 03 00 74 */	stw r0, 0x74(r3)
/* 8094AF68  80 9F 02 A8 */	lwz r4, 0x2a8(r31)
/* 8094AF6C  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 8094AF70  90 83 00 78 */	stw r4, 0x78(r3)
/* 8094AF74  90 03 00 7C */	stw r0, 0x7c(r3)
/* 8094AF78  80 1F 02 B0 */	lwz r0, 0x2b0(r31)
/* 8094AF7C  90 03 00 80 */	stw r0, 0x80(r3)
/* 8094AF80  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 8094AF84  80 1F 02 B8 */	lwz r0, 0x2b8(r31)
/* 8094AF88  90 83 00 84 */	stw r4, 0x84(r3)
/* 8094AF8C  90 03 00 88 */	stw r0, 0x88(r3)
/* 8094AF90  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 8094AF94  90 03 00 8C */	stw r0, 0x8c(r3)
/* 8094AF98  80 9F 02 C0 */	lwz r4, 0x2c0(r31)
/* 8094AF9C  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 8094AFA0  90 83 00 90 */	stw r4, 0x90(r3)
/* 8094AFA4  90 03 00 94 */	stw r0, 0x94(r3)
/* 8094AFA8  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8094AFAC  90 03 00 98 */	stw r0, 0x98(r3)
/* 8094AFB0  80 9F 02 CC */	lwz r4, 0x2cc(r31)
/* 8094AFB4  80 1F 02 D0 */	lwz r0, 0x2d0(r31)
/* 8094AFB8  90 83 00 9C */	stw r4, 0x9c(r3)
/* 8094AFBC  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 8094AFC0  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 8094AFC4  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8094AFC8  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 8094AFCC  80 1F 02 DC */	lwz r0, 0x2dc(r31)
/* 8094AFD0  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 8094AFD4  90 03 00 AC */	stw r0, 0xac(r3)
/* 8094AFD8  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 8094AFDC  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 8094AFE0  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 8094AFE4  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 8094AFE8  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 8094AFEC  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 8094AFF0  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 8094AFF4  90 03 00 BC */	stw r0, 0xbc(r3)
/* 8094AFF8  80 9F 02 F0 */	lwz r4, 0x2f0(r31)
/* 8094AFFC  80 1F 02 F4 */	lwz r0, 0x2f4(r31)
/* 8094B000  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 8094B004  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 8094B008  80 1F 02 F8 */	lwz r0, 0x2f8(r31)
/* 8094B00C  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 8094B010  80 9F 02 FC */	lwz r4, 0x2fc(r31)
/* 8094B014  80 1F 03 00 */	lwz r0, 0x300(r31)
/* 8094B018  90 83 00 CC */	stw r4, 0xcc(r3)
/* 8094B01C  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 8094B020  80 1F 03 04 */	lwz r0, 0x304(r31)
/* 8094B024  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8094B028  80 9F 03 08 */	lwz r4, 0x308(r31)
/* 8094B02C  80 1F 03 0C */	lwz r0, 0x30c(r31)
/* 8094B030  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 8094B034  90 03 00 DC */	stw r0, 0xdc(r3)
/* 8094B038  80 1F 03 10 */	lwz r0, 0x310(r31)
/* 8094B03C  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8094B040  80 9F 03 14 */	lwz r4, 0x314(r31)
/* 8094B044  80 1F 03 18 */	lwz r0, 0x318(r31)
/* 8094B048  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 8094B04C  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8094B050  80 1F 03 1C */	lwz r0, 0x31c(r31)
/* 8094B054  90 03 00 EC */	stw r0, 0xec(r3)
/* 8094B058  80 9F 03 20 */	lwz r4, 0x320(r31)
/* 8094B05C  80 1F 03 24 */	lwz r0, 0x324(r31)
/* 8094B060  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 8094B064  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8094B068  80 1F 03 28 */	lwz r0, 0x328(r31)
/* 8094B06C  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 8094B070  80 9F 03 2C */	lwz r4, 0x32c(r31)
/* 8094B074  80 1F 03 30 */	lwz r0, 0x330(r31)
/* 8094B078  90 83 00 FC */	stw r4, 0xfc(r3)
/* 8094B07C  90 03 01 00 */	stw r0, 0x100(r3)
/* 8094B080  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 8094B084  90 03 01 04 */	stw r0, 0x104(r3)
/* 8094B088  3C 60 80 95 */	lis r3, l_HOSTIO@ha
/* 8094B08C  38 83 BA 3C */	addi r4, r3, l_HOSTIO@l
/* 8094B090  7C 9E 23 78 */	mr r30, r4
/* 8094B094  3C 60 80 95 */	lis r3, __vt__14mDoHIO_entry_c@ha
/* 8094B098  38 03 B9 D8 */	addi r0, r3, __vt__14mDoHIO_entry_c@l
/* 8094B09C  90 04 00 00 */	stw r0, 0(r4)
/* 8094B0A0  3C 60 80 95 */	lis r3, __vt__12daMyna_HIO_c@ha
/* 8094B0A4  38 03 B9 CC */	addi r0, r3, __vt__12daMyna_HIO_c@l
/* 8094B0A8  90 04 00 00 */	stw r0, 0(r4)
/* 8094B0AC  38 64 00 04 */	addi r3, r4, 4
/* 8094B0B0  3C 80 80 95 */	lis r4, data_8094B7E0@ha
/* 8094B0B4  38 84 B7 E0 */	addi r4, r4, data_8094B7E0@l
/* 8094B0B8  38 A0 00 30 */	li r5, 0x30
/* 8094B0BC  4B 6B 84 84 */	b memcpy
/* 8094B0C0  7F C3 F3 78 */	mr r3, r30
/* 8094B0C4  3C 80 80 95 */	lis r4, __dt__12daMyna_HIO_cFv@ha
/* 8094B0C8  38 84 A9 60 */	addi r4, r4, __dt__12daMyna_HIO_cFv@l
/* 8094B0CC  3C A0 80 95 */	lis r5, lit_3847@ha
/* 8094B0D0  38 A5 BA 30 */	addi r5, r5, lit_3847@l
/* 8094B0D4  4B FF AB 25 */	bl __register_global_object
/* 8094B0D8  80 7F 04 B0 */	lwz r3, 0x4b0(r31)
/* 8094B0DC  80 1F 04 B4 */	lwz r0, 0x4b4(r31)
/* 8094B0E0  90 7F 05 04 */	stw r3, 0x504(r31)
/* 8094B0E4  90 1F 05 08 */	stw r0, 0x508(r31)
/* 8094B0E8  80 1F 04 B8 */	lwz r0, 0x4b8(r31)
/* 8094B0EC  90 1F 05 0C */	stw r0, 0x50c(r31)
/* 8094B0F0  38 9F 05 04 */	addi r4, r31, 0x504
/* 8094B0F4  80 7F 04 BC */	lwz r3, 0x4bc(r31)
/* 8094B0F8  80 1F 04 C0 */	lwz r0, 0x4c0(r31)
/* 8094B0FC  90 64 00 0C */	stw r3, 0xc(r4)
/* 8094B100  90 04 00 10 */	stw r0, 0x10(r4)
/* 8094B104  80 1F 04 C4 */	lwz r0, 0x4c4(r31)
/* 8094B108  90 04 00 14 */	stw r0, 0x14(r4)
/* 8094B10C  80 7F 04 C8 */	lwz r3, 0x4c8(r31)
/* 8094B110  80 1F 04 CC */	lwz r0, 0x4cc(r31)
/* 8094B114  90 64 00 18 */	stw r3, 0x18(r4)
/* 8094B118  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8094B11C  80 1F 04 D0 */	lwz r0, 0x4d0(r31)
/* 8094B120  90 04 00 20 */	stw r0, 0x20(r4)
/* 8094B124  80 7F 04 D4 */	lwz r3, 0x4d4(r31)
/* 8094B128  80 1F 04 D8 */	lwz r0, 0x4d8(r31)
/* 8094B12C  90 64 00 24 */	stw r3, 0x24(r4)
/* 8094B130  90 04 00 28 */	stw r0, 0x28(r4)
/* 8094B134  80 1F 04 DC */	lwz r0, 0x4dc(r31)
/* 8094B138  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8094B13C  80 7F 04 E0 */	lwz r3, 0x4e0(r31)
/* 8094B140  80 1F 04 E4 */	lwz r0, 0x4e4(r31)
/* 8094B144  90 64 00 30 */	stw r3, 0x30(r4)
/* 8094B148  90 04 00 34 */	stw r0, 0x34(r4)
/* 8094B14C  80 1F 04 E8 */	lwz r0, 0x4e8(r31)
/* 8094B150  90 04 00 38 */	stw r0, 0x38(r4)
/* 8094B154  80 7F 04 EC */	lwz r3, 0x4ec(r31)
/* 8094B158  80 1F 04 F0 */	lwz r0, 0x4f0(r31)
/* 8094B15C  90 64 00 3C */	stw r3, 0x3c(r4)
/* 8094B160  90 04 00 40 */	stw r0, 0x40(r4)
/* 8094B164  80 1F 04 F4 */	lwz r0, 0x4f4(r31)
/* 8094B168  90 04 00 44 */	stw r0, 0x44(r4)
/* 8094B16C  80 7F 04 F8 */	lwz r3, 0x4f8(r31)
/* 8094B170  80 1F 04 FC */	lwz r0, 0x4fc(r31)
/* 8094B174  90 64 00 48 */	stw r3, 0x48(r4)
/* 8094B178  90 04 00 4C */	stw r0, 0x4c(r4)
/* 8094B17C  80 1F 05 00 */	lwz r0, 0x500(r31)
/* 8094B180  90 04 00 50 */	stw r0, 0x50(r4)
/* 8094B184  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8094B188  83 C1 00 08 */	lwz r30, 8(r1)
/* 8094B18C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8094B190  7C 08 03 A6 */	mtlr r0
/* 8094B194  38 21 00 10 */	addi r1, r1, 0x10
/* 8094B198  4E 80 00 20 */	blr 
