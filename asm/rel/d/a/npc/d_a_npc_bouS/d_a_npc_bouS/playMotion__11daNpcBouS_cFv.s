lbl_80976EEC:
/* 80976EEC  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 80976EF0  7C 08 02 A6 */	mflr r0
/* 80976EF4  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 80976EF8  3C 80 80 98 */	lis r4, m__17daNpcBouS_Param_c@ha
/* 80976EFC  38 84 84 10 */	addi r4, r4, m__17daNpcBouS_Param_c@l
/* 80976F00  80 A4 01 38 */	lwz r5, 0x138(r4)
/* 80976F04  80 04 01 3C */	lwz r0, 0x13c(r4)
/* 80976F08  90 A1 01 4C */	stw r5, 0x14c(r1)
/* 80976F0C  90 01 01 50 */	stw r0, 0x150(r1)
/* 80976F10  80 04 01 40 */	lwz r0, 0x140(r4)
/* 80976F14  90 01 01 54 */	stw r0, 0x154(r1)
/* 80976F18  38 A4 00 00 */	addi r5, r4, 0
/* 80976F1C  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 80976F20  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 80976F24  80 04 01 44 */	lwz r0, 0x144(r4)
/* 80976F28  90 01 00 20 */	stw r0, 0x20(r1)
/* 80976F2C  38 01 01 4C */	addi r0, r1, 0x14c
/* 80976F30  90 01 00 20 */	stw r0, 0x20(r1)
/* 80976F34  80 A4 01 48 */	lwz r5, 0x148(r4)
/* 80976F38  80 04 01 4C */	lwz r0, 0x14c(r4)
/* 80976F3C  90 A1 01 40 */	stw r5, 0x140(r1)
/* 80976F40  90 01 01 44 */	stw r0, 0x144(r1)
/* 80976F44  80 04 01 50 */	lwz r0, 0x150(r4)
/* 80976F48  90 01 01 48 */	stw r0, 0x148(r1)
/* 80976F4C  D0 01 01 44 */	stfs f0, 0x144(r1)
/* 80976F50  80 04 01 54 */	lwz r0, 0x154(r4)
/* 80976F54  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80976F58  38 01 01 40 */	addi r0, r1, 0x140
/* 80976F5C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80976F60  80 A4 01 58 */	lwz r5, 0x158(r4)
/* 80976F64  80 04 01 5C */	lwz r0, 0x15c(r4)
/* 80976F68  90 A1 01 34 */	stw r5, 0x134(r1)
/* 80976F6C  90 01 01 38 */	stw r0, 0x138(r1)
/* 80976F70  80 04 01 60 */	lwz r0, 0x160(r4)
/* 80976F74  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80976F78  D0 01 01 38 */	stfs f0, 0x138(r1)
/* 80976F7C  80 04 01 64 */	lwz r0, 0x164(r4)
/* 80976F80  90 01 00 18 */	stw r0, 0x18(r1)
/* 80976F84  38 01 01 34 */	addi r0, r1, 0x134
/* 80976F88  90 01 00 18 */	stw r0, 0x18(r1)
/* 80976F8C  80 A4 01 68 */	lwz r5, 0x168(r4)
/* 80976F90  80 04 01 6C */	lwz r0, 0x16c(r4)
/* 80976F94  90 A1 01 28 */	stw r5, 0x128(r1)
/* 80976F98  90 01 01 2C */	stw r0, 0x12c(r1)
/* 80976F9C  80 04 01 70 */	lwz r0, 0x170(r4)
/* 80976FA0  90 01 01 30 */	stw r0, 0x130(r1)
/* 80976FA4  D0 01 01 2C */	stfs f0, 0x12c(r1)
/* 80976FA8  80 A4 01 74 */	lwz r5, 0x174(r4)
/* 80976FAC  80 04 01 78 */	lwz r0, 0x178(r4)
/* 80976FB0  90 A1 01 1C */	stw r5, 0x11c(r1)
/* 80976FB4  90 01 01 20 */	stw r0, 0x120(r1)
/* 80976FB8  80 04 01 7C */	lwz r0, 0x17c(r4)
/* 80976FBC  90 01 01 24 */	stw r0, 0x124(r1)
/* 80976FC0  D0 01 01 20 */	stfs f0, 0x120(r1)
/* 80976FC4  80 A4 01 80 */	lwz r5, 0x180(r4)
/* 80976FC8  80 04 01 84 */	lwz r0, 0x184(r4)
/* 80976FCC  90 A1 00 54 */	stw r5, 0x54(r1)
/* 80976FD0  90 01 00 58 */	stw r0, 0x58(r1)
/* 80976FD4  38 01 01 28 */	addi r0, r1, 0x128
/* 80976FD8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80976FDC  38 01 01 1C */	addi r0, r1, 0x11c
/* 80976FE0  90 01 00 58 */	stw r0, 0x58(r1)
/* 80976FE4  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80976FE8  80 04 01 8C */	lwz r0, 0x18c(r4)
/* 80976FEC  90 A1 01 10 */	stw r5, 0x110(r1)
/* 80976FF0  90 01 01 14 */	stw r0, 0x114(r1)
/* 80976FF4  80 04 01 90 */	lwz r0, 0x190(r4)
/* 80976FF8  90 01 01 18 */	stw r0, 0x118(r1)
/* 80976FFC  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 80977000  80 A4 01 94 */	lwz r5, 0x194(r4)
/* 80977004  80 04 01 98 */	lwz r0, 0x198(r4)
/* 80977008  90 A1 01 04 */	stw r5, 0x104(r1)
/* 8097700C  90 01 01 08 */	stw r0, 0x108(r1)
/* 80977010  80 04 01 9C */	lwz r0, 0x19c(r4)
/* 80977014  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80977018  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 8097701C  80 A4 01 A0 */	lwz r5, 0x1a0(r4)
/* 80977020  80 04 01 A4 */	lwz r0, 0x1a4(r4)
/* 80977024  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 80977028  90 01 00 50 */	stw r0, 0x50(r1)
/* 8097702C  38 01 01 10 */	addi r0, r1, 0x110
/* 80977030  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80977034  38 01 01 04 */	addi r0, r1, 0x104
/* 80977038  90 01 00 50 */	stw r0, 0x50(r1)
/* 8097703C  80 A4 01 A8 */	lwz r5, 0x1a8(r4)
/* 80977040  80 04 01 AC */	lwz r0, 0x1ac(r4)
/* 80977044  90 A1 00 F8 */	stw r5, 0xf8(r1)
/* 80977048  90 01 00 FC */	stw r0, 0xfc(r1)
/* 8097704C  80 04 01 B0 */	lwz r0, 0x1b0(r4)
/* 80977050  90 01 01 00 */	stw r0, 0x100(r1)
/* 80977054  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80977058  80 A4 01 B4 */	lwz r5, 0x1b4(r4)
/* 8097705C  80 04 01 B8 */	lwz r0, 0x1b8(r4)
/* 80977060  90 A1 00 EC */	stw r5, 0xec(r1)
/* 80977064  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80977068  80 04 01 BC */	lwz r0, 0x1bc(r4)
/* 8097706C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80977070  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 80977074  80 A4 01 C0 */	lwz r5, 0x1c0(r4)
/* 80977078  80 04 01 C4 */	lwz r0, 0x1c4(r4)
/* 8097707C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80977080  90 01 00 48 */	stw r0, 0x48(r1)
/* 80977084  38 01 00 F8 */	addi r0, r1, 0xf8
/* 80977088  90 01 00 44 */	stw r0, 0x44(r1)
/* 8097708C  38 01 00 EC */	addi r0, r1, 0xec
/* 80977090  90 01 00 48 */	stw r0, 0x48(r1)
/* 80977094  80 A4 01 C8 */	lwz r5, 0x1c8(r4)
/* 80977098  80 04 01 CC */	lwz r0, 0x1cc(r4)
/* 8097709C  90 A1 00 E0 */	stw r5, 0xe0(r1)
/* 809770A0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 809770A4  80 04 01 D0 */	lwz r0, 0x1d0(r4)
/* 809770A8  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 809770AC  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 809770B0  80 A4 01 D4 */	lwz r5, 0x1d4(r4)
/* 809770B4  80 04 01 D8 */	lwz r0, 0x1d8(r4)
/* 809770B8  90 A1 00 D4 */	stw r5, 0xd4(r1)
/* 809770BC  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 809770C0  80 04 01 DC */	lwz r0, 0x1dc(r4)
/* 809770C4  90 01 00 DC */	stw r0, 0xdc(r1)
/* 809770C8  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 809770CC  80 A4 01 E0 */	lwz r5, 0x1e0(r4)
/* 809770D0  80 04 01 E4 */	lwz r0, 0x1e4(r4)
/* 809770D4  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 809770D8  90 01 00 40 */	stw r0, 0x40(r1)
/* 809770DC  38 01 00 E0 */	addi r0, r1, 0xe0
/* 809770E0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 809770E4  38 01 00 D4 */	addi r0, r1, 0xd4
/* 809770E8  90 01 00 40 */	stw r0, 0x40(r1)
/* 809770EC  80 A4 01 E8 */	lwz r5, 0x1e8(r4)
/* 809770F0  80 04 01 EC */	lwz r0, 0x1ec(r4)
/* 809770F4  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 809770F8  90 01 00 CC */	stw r0, 0xcc(r1)
/* 809770FC  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 80977100  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80977104  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80977108  80 A4 01 F4 */	lwz r5, 0x1f4(r4)
/* 8097710C  80 04 01 F8 */	lwz r0, 0x1f8(r4)
/* 80977110  90 A1 00 BC */	stw r5, 0xbc(r1)
/* 80977114  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80977118  80 04 01 FC */	lwz r0, 0x1fc(r4)
/* 8097711C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80977120  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 80977124  80 A4 02 00 */	lwz r5, 0x200(r4)
/* 80977128  80 04 02 04 */	lwz r0, 0x204(r4)
/* 8097712C  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80977130  90 01 00 38 */	stw r0, 0x38(r1)
/* 80977134  38 01 00 C8 */	addi r0, r1, 0xc8
/* 80977138  90 01 00 34 */	stw r0, 0x34(r1)
/* 8097713C  38 01 00 BC */	addi r0, r1, 0xbc
/* 80977140  90 01 00 38 */	stw r0, 0x38(r1)
/* 80977144  80 A4 02 08 */	lwz r5, 0x208(r4)
/* 80977148  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 8097714C  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 80977150  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80977154  80 04 02 10 */	lwz r0, 0x210(r4)
/* 80977158  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8097715C  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80977160  80 A4 02 14 */	lwz r5, 0x214(r4)
/* 80977164  80 04 02 18 */	lwz r0, 0x218(r4)
/* 80977168  90 A1 00 A4 */	stw r5, 0xa4(r1)
/* 8097716C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80977170  80 04 02 1C */	lwz r0, 0x21c(r4)
/* 80977174  90 01 00 AC */	stw r0, 0xac(r1)
/* 80977178  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 8097717C  80 A4 02 20 */	lwz r5, 0x220(r4)
/* 80977180  80 04 02 24 */	lwz r0, 0x224(r4)
/* 80977184  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80977188  90 01 00 30 */	stw r0, 0x30(r1)
/* 8097718C  38 01 00 B0 */	addi r0, r1, 0xb0
/* 80977190  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80977194  38 01 00 A4 */	addi r0, r1, 0xa4
/* 80977198  90 01 00 30 */	stw r0, 0x30(r1)
/* 8097719C  80 A4 02 28 */	lwz r5, 0x228(r4)
/* 809771A0  80 04 02 2C */	lwz r0, 0x22c(r4)
/* 809771A4  90 A1 00 98 */	stw r5, 0x98(r1)
/* 809771A8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 809771AC  80 04 02 30 */	lwz r0, 0x230(r4)
/* 809771B0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 809771B4  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 809771B8  80 04 02 34 */	lwz r0, 0x234(r4)
/* 809771BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809771C0  38 01 00 98 */	addi r0, r1, 0x98
/* 809771C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 809771C8  80 A4 02 38 */	lwz r5, 0x238(r4)
/* 809771CC  80 04 02 3C */	lwz r0, 0x23c(r4)
/* 809771D0  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 809771D4  90 01 00 90 */	stw r0, 0x90(r1)
/* 809771D8  80 04 02 40 */	lwz r0, 0x240(r4)
/* 809771DC  90 01 00 94 */	stw r0, 0x94(r1)
/* 809771E0  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 809771E4  80 A4 02 44 */	lwz r5, 0x244(r4)
/* 809771E8  80 04 02 48 */	lwz r0, 0x248(r4)
/* 809771EC  90 A1 00 80 */	stw r5, 0x80(r1)
/* 809771F0  90 01 00 84 */	stw r0, 0x84(r1)
/* 809771F4  80 04 02 4C */	lwz r0, 0x24c(r4)
/* 809771F8  90 01 00 88 */	stw r0, 0x88(r1)
/* 809771FC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80977200  80 A4 02 50 */	lwz r5, 0x250(r4)
/* 80977204  80 04 02 54 */	lwz r0, 0x254(r4)
/* 80977208  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8097720C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80977210  38 01 00 8C */	addi r0, r1, 0x8c
/* 80977214  90 01 00 24 */	stw r0, 0x24(r1)
/* 80977218  38 01 00 80 */	addi r0, r1, 0x80
/* 8097721C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80977220  80 A4 02 58 */	lwz r5, 0x258(r4)
/* 80977224  80 04 02 5C */	lwz r0, 0x25c(r4)
/* 80977228  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8097722C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80977230  80 04 02 60 */	lwz r0, 0x260(r4)
/* 80977234  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80977238  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8097723C  80 04 02 64 */	lwz r0, 0x264(r4)
/* 80977240  90 01 00 10 */	stw r0, 0x10(r1)
/* 80977244  38 01 00 74 */	addi r0, r1, 0x74
/* 80977248  90 01 00 10 */	stw r0, 0x10(r1)
/* 8097724C  80 A4 02 68 */	lwz r5, 0x268(r4)
/* 80977250  80 04 02 6C */	lwz r0, 0x26c(r4)
/* 80977254  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80977258  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8097725C  80 04 02 70 */	lwz r0, 0x270(r4)
/* 80977260  90 01 00 70 */	stw r0, 0x70(r1)
/* 80977264  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80977268  80 04 02 74 */	lwz r0, 0x274(r4)
/* 8097726C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80977270  38 01 00 68 */	addi r0, r1, 0x68
/* 80977274  90 01 00 0C */	stw r0, 0xc(r1)
/* 80977278  80 A4 02 78 */	lwz r5, 0x278(r4)
/* 8097727C  80 04 02 7C */	lwz r0, 0x27c(r4)
/* 80977280  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80977284  90 01 00 60 */	stw r0, 0x60(r1)
/* 80977288  80 04 02 80 */	lwz r0, 0x280(r4)
/* 8097728C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80977290  80 04 02 84 */	lwz r0, 0x284(r4)
/* 80977294  90 01 00 08 */	stw r0, 8(r1)
/* 80977298  38 01 00 5C */	addi r0, r1, 0x5c
/* 8097729C  90 01 00 08 */	stw r0, 8(r1)
/* 809772A0  38 C1 01 54 */	addi r6, r1, 0x154
/* 809772A4  38 A4 02 84 */	addi r5, r4, 0x284
/* 809772A8  38 00 00 0A */	li r0, 0xa
/* 809772AC  7C 09 03 A6 */	mtctr r0
lbl_809772B0:
/* 809772B0  80 85 00 04 */	lwz r4, 4(r5)
/* 809772B4  84 05 00 08 */	lwzu r0, 8(r5)
/* 809772B8  90 86 00 04 */	stw r4, 4(r6)
/* 809772BC  94 06 00 08 */	stwu r0, 8(r6)
/* 809772C0  42 00 FF F0 */	bdnz lbl_809772B0
/* 809772C4  38 01 00 20 */	addi r0, r1, 0x20
/* 809772C8  90 01 01 58 */	stw r0, 0x158(r1)
/* 809772CC  38 01 00 1C */	addi r0, r1, 0x1c
/* 809772D0  90 01 01 70 */	stw r0, 0x170(r1)
/* 809772D4  38 01 00 18 */	addi r0, r1, 0x18
/* 809772D8  90 01 01 74 */	stw r0, 0x174(r1)
/* 809772DC  38 01 00 54 */	addi r0, r1, 0x54
/* 809772E0  90 01 01 7C */	stw r0, 0x17c(r1)
/* 809772E4  38 01 00 4C */	addi r0, r1, 0x4c
/* 809772E8  90 01 01 80 */	stw r0, 0x180(r1)
/* 809772EC  38 01 00 44 */	addi r0, r1, 0x44
/* 809772F0  90 01 01 84 */	stw r0, 0x184(r1)
/* 809772F4  38 01 00 3C */	addi r0, r1, 0x3c
/* 809772F8  90 01 01 88 */	stw r0, 0x188(r1)
/* 809772FC  38 01 00 34 */	addi r0, r1, 0x34
/* 80977300  90 01 01 8C */	stw r0, 0x18c(r1)
/* 80977304  38 01 00 2C */	addi r0, r1, 0x2c
/* 80977308  90 01 01 90 */	stw r0, 0x190(r1)
/* 8097730C  38 01 00 14 */	addi r0, r1, 0x14
/* 80977310  90 01 01 94 */	stw r0, 0x194(r1)
/* 80977314  38 01 00 24 */	addi r0, r1, 0x24
/* 80977318  90 01 01 98 */	stw r0, 0x198(r1)
/* 8097731C  38 01 00 10 */	addi r0, r1, 0x10
/* 80977320  90 01 01 9C */	stw r0, 0x19c(r1)
/* 80977324  38 01 00 0C */	addi r0, r1, 0xc
/* 80977328  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 8097732C  38 01 00 08 */	addi r0, r1, 8
/* 80977330  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 80977334  A8 83 09 E0 */	lha r4, 0x9e0(r3)
/* 80977338  7C 80 07 35 */	extsh. r0, r4
/* 8097733C  41 80 00 1C */	blt lbl_80977358
/* 80977340  2C 04 00 14 */	cmpwi r4, 0x14
/* 80977344  40 80 00 14 */	bge lbl_80977358
/* 80977348  A8 03 09 DA */	lha r0, 0x9da(r3)
/* 8097734C  B0 03 0D FA */	sth r0, 0xdfa(r3)
/* 80977350  38 81 01 58 */	addi r4, r1, 0x158
/* 80977354  4B 7D BF 10 */	b playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData
lbl_80977358:
/* 80977358  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 8097735C  7C 08 03 A6 */	mtlr r0
/* 80977360  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 80977364  4E 80 00 20 */	blr 
