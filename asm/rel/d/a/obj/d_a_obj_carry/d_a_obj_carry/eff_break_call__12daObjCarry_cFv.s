lbl_80479128:
/* 80479128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8047912C  7C 08 02 A6 */	mflr r0
/* 80479130  90 01 00 14 */	stw r0, 0x14(r1)
/* 80479134  3C 80 80 48 */	lis r4, cNullVec__6Z2Calc@ha
/* 80479138  38 C4 A6 50 */	addi r6, r4, cNullVec__6Z2Calc@l
/* 8047913C  3C 80 80 48 */	lis r4, struct_8047B1DC+0x3@ha
/* 80479140  38 A4 B1 DF */	addi r5, r4, struct_8047B1DC+0x3@l
/* 80479144  88 05 00 00 */	lbz r0, 0(r5)
/* 80479148  7C 00 07 75 */	extsb. r0, r0
/* 8047914C  40 82 01 60 */	bne lbl_804792AC
/* 80479150  80 86 05 10 */	lwz r4, 0x510(r6)
/* 80479154  80 06 05 14 */	lwz r0, 0x514(r6)
/* 80479158  90 86 05 B8 */	stw r4, 0x5b8(r6)
/* 8047915C  90 06 05 BC */	stw r0, 0x5bc(r6)
/* 80479160  80 06 05 18 */	lwz r0, 0x518(r6)
/* 80479164  90 06 05 C0 */	stw r0, 0x5c0(r6)
/* 80479168  38 86 05 B8 */	addi r4, r6, 0x5b8
/* 8047916C  80 E6 05 1C */	lwz r7, 0x51c(r6)
/* 80479170  80 06 05 20 */	lwz r0, 0x520(r6)
/* 80479174  90 E4 00 0C */	stw r7, 0xc(r4)
/* 80479178  90 04 00 10 */	stw r0, 0x10(r4)
/* 8047917C  80 06 05 24 */	lwz r0, 0x524(r6)
/* 80479180  90 04 00 14 */	stw r0, 0x14(r4)
/* 80479184  80 E6 05 28 */	lwz r7, 0x528(r6)
/* 80479188  80 06 05 2C */	lwz r0, 0x52c(r6)
/* 8047918C  90 E4 00 18 */	stw r7, 0x18(r4)
/* 80479190  90 04 00 1C */	stw r0, 0x1c(r4)
/* 80479194  80 06 05 30 */	lwz r0, 0x530(r6)
/* 80479198  90 04 00 20 */	stw r0, 0x20(r4)
/* 8047919C  80 E6 05 34 */	lwz r7, 0x534(r6)
/* 804791A0  80 06 05 38 */	lwz r0, 0x538(r6)
/* 804791A4  90 E4 00 24 */	stw r7, 0x24(r4)
/* 804791A8  90 04 00 28 */	stw r0, 0x28(r4)
/* 804791AC  80 06 05 3C */	lwz r0, 0x53c(r6)
/* 804791B0  90 04 00 2C */	stw r0, 0x2c(r4)
/* 804791B4  80 E6 05 40 */	lwz r7, 0x540(r6)
/* 804791B8  80 06 05 44 */	lwz r0, 0x544(r6)
/* 804791BC  90 E4 00 30 */	stw r7, 0x30(r4)
/* 804791C0  90 04 00 34 */	stw r0, 0x34(r4)
/* 804791C4  80 06 05 48 */	lwz r0, 0x548(r6)
/* 804791C8  90 04 00 38 */	stw r0, 0x38(r4)
/* 804791CC  80 E6 05 4C */	lwz r7, 0x54c(r6)
/* 804791D0  80 06 05 50 */	lwz r0, 0x550(r6)
/* 804791D4  90 E4 00 3C */	stw r7, 0x3c(r4)
/* 804791D8  90 04 00 40 */	stw r0, 0x40(r4)
/* 804791DC  80 06 05 54 */	lwz r0, 0x554(r6)
/* 804791E0  90 04 00 44 */	stw r0, 0x44(r4)
/* 804791E4  80 E6 05 58 */	lwz r7, 0x558(r6)
/* 804791E8  80 06 05 5C */	lwz r0, 0x55c(r6)
/* 804791EC  90 E4 00 48 */	stw r7, 0x48(r4)
/* 804791F0  90 04 00 4C */	stw r0, 0x4c(r4)
/* 804791F4  80 06 05 60 */	lwz r0, 0x560(r6)
/* 804791F8  90 04 00 50 */	stw r0, 0x50(r4)
/* 804791FC  80 E6 05 64 */	lwz r7, 0x564(r6)
/* 80479200  80 06 05 68 */	lwz r0, 0x568(r6)
/* 80479204  90 E4 00 54 */	stw r7, 0x54(r4)
/* 80479208  90 04 00 58 */	stw r0, 0x58(r4)
/* 8047920C  80 06 05 6C */	lwz r0, 0x56c(r6)
/* 80479210  90 04 00 5C */	stw r0, 0x5c(r4)
/* 80479214  80 E6 05 70 */	lwz r7, 0x570(r6)
/* 80479218  80 06 05 74 */	lwz r0, 0x574(r6)
/* 8047921C  90 E4 00 60 */	stw r7, 0x60(r4)
/* 80479220  90 04 00 64 */	stw r0, 0x64(r4)
/* 80479224  80 06 05 78 */	lwz r0, 0x578(r6)
/* 80479228  90 04 00 68 */	stw r0, 0x68(r4)
/* 8047922C  80 E6 05 7C */	lwz r7, 0x57c(r6)
/* 80479230  80 06 05 80 */	lwz r0, 0x580(r6)
/* 80479234  90 E4 00 6C */	stw r7, 0x6c(r4)
/* 80479238  90 04 00 70 */	stw r0, 0x70(r4)
/* 8047923C  80 06 05 84 */	lwz r0, 0x584(r6)
/* 80479240  90 04 00 74 */	stw r0, 0x74(r4)
/* 80479244  80 E6 05 88 */	lwz r7, 0x588(r6)
/* 80479248  80 06 05 8C */	lwz r0, 0x58c(r6)
/* 8047924C  90 E4 00 78 */	stw r7, 0x78(r4)
/* 80479250  90 04 00 7C */	stw r0, 0x7c(r4)
/* 80479254  80 06 05 90 */	lwz r0, 0x590(r6)
/* 80479258  90 04 00 80 */	stw r0, 0x80(r4)
/* 8047925C  80 E6 05 94 */	lwz r7, 0x594(r6)
/* 80479260  80 06 05 98 */	lwz r0, 0x598(r6)
/* 80479264  90 E4 00 84 */	stw r7, 0x84(r4)
/* 80479268  90 04 00 88 */	stw r0, 0x88(r4)
/* 8047926C  80 06 05 9C */	lwz r0, 0x59c(r6)
/* 80479270  90 04 00 8C */	stw r0, 0x8c(r4)
/* 80479274  80 E6 05 A0 */	lwz r7, 0x5a0(r6)
/* 80479278  80 06 05 A4 */	lwz r0, 0x5a4(r6)
/* 8047927C  90 E4 00 90 */	stw r7, 0x90(r4)
/* 80479280  90 04 00 94 */	stw r0, 0x94(r4)
/* 80479284  80 06 05 A8 */	lwz r0, 0x5a8(r6)
/* 80479288  90 04 00 98 */	stw r0, 0x98(r4)
/* 8047928C  80 E6 05 AC */	lwz r7, 0x5ac(r6)
/* 80479290  80 06 05 B0 */	lwz r0, 0x5b0(r6)
/* 80479294  90 E4 00 9C */	stw r7, 0x9c(r4)
/* 80479298  90 04 00 A0 */	stw r0, 0xa0(r4)
/* 8047929C  80 06 05 B4 */	lwz r0, 0x5b4(r6)
/* 804792A0  90 04 00 A4 */	stw r0, 0xa4(r4)
/* 804792A4  38 00 00 01 */	li r0, 1
/* 804792A8  98 05 00 00 */	stb r0, 0(r5)
lbl_804792AC:
/* 804792AC  88 03 0C F0 */	lbz r0, 0xcf0(r3)
/* 804792B0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804792B4  39 86 05 B8 */	addi r12, r6, 0x5b8
/* 804792B8  7D 8C 02 14 */	add r12, r12, r0
/* 804792BC  4B EE 8D C8 */	b __ptmf_scall
/* 804792C0  60 00 00 00 */	nop 
/* 804792C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804792C8  7C 08 03 A6 */	mtlr r0
/* 804792CC  38 21 00 10 */	addi r1, r1, 0x10
/* 804792D0  4E 80 00 20 */	blr 
