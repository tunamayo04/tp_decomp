lbl_80479664:
/* 80479664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80479668  7C 08 02 A6 */	mflr r0
/* 8047966C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80479670  3C 80 80 48 */	lis r4, cNullVec__6Z2Calc@ha
/* 80479674  38 C4 A6 50 */	addi r6, r4, cNullVec__6Z2Calc@l
/* 80479678  3C 80 80 48 */	lis r4, struct_8047B1E0+0x2@ha
/* 8047967C  38 A4 B1 E2 */	addi r5, r4, struct_8047B1E0+0x2@l
/* 80479680  88 05 00 00 */	lbz r0, 0(r5)
/* 80479684  7C 00 07 75 */	extsb. r0, r0
/* 80479688  40 82 01 60 */	bne lbl_804797E8
/* 8047968C  80 86 09 70 */	lwz r4, 0x970(r6)
/* 80479690  80 06 09 74 */	lwz r0, 0x974(r6)
/* 80479694  90 86 0A 18 */	stw r4, 0xa18(r6)
/* 80479698  90 06 0A 1C */	stw r0, 0xa1c(r6)
/* 8047969C  80 06 09 78 */	lwz r0, 0x978(r6)
/* 804796A0  90 06 0A 20 */	stw r0, 0xa20(r6)
/* 804796A4  38 86 0A 18 */	addi r4, r6, 0xa18
/* 804796A8  80 E6 09 7C */	lwz r7, 0x97c(r6)
/* 804796AC  80 06 09 80 */	lwz r0, 0x980(r6)
/* 804796B0  90 E4 00 0C */	stw r7, 0xc(r4)
/* 804796B4  90 04 00 10 */	stw r0, 0x10(r4)
/* 804796B8  80 06 09 84 */	lwz r0, 0x984(r6)
/* 804796BC  90 04 00 14 */	stw r0, 0x14(r4)
/* 804796C0  80 E6 09 88 */	lwz r7, 0x988(r6)
/* 804796C4  80 06 09 8C */	lwz r0, 0x98c(r6)
/* 804796C8  90 E4 00 18 */	stw r7, 0x18(r4)
/* 804796CC  90 04 00 1C */	stw r0, 0x1c(r4)
/* 804796D0  80 06 09 90 */	lwz r0, 0x990(r6)
/* 804796D4  90 04 00 20 */	stw r0, 0x20(r4)
/* 804796D8  80 E6 09 94 */	lwz r7, 0x994(r6)
/* 804796DC  80 06 09 98 */	lwz r0, 0x998(r6)
/* 804796E0  90 E4 00 24 */	stw r7, 0x24(r4)
/* 804796E4  90 04 00 28 */	stw r0, 0x28(r4)
/* 804796E8  80 06 09 9C */	lwz r0, 0x99c(r6)
/* 804796EC  90 04 00 2C */	stw r0, 0x2c(r4)
/* 804796F0  80 E6 09 A0 */	lwz r7, 0x9a0(r6)
/* 804796F4  80 06 09 A4 */	lwz r0, 0x9a4(r6)
/* 804796F8  90 E4 00 30 */	stw r7, 0x30(r4)
/* 804796FC  90 04 00 34 */	stw r0, 0x34(r4)
/* 80479700  80 06 09 A8 */	lwz r0, 0x9a8(r6)
/* 80479704  90 04 00 38 */	stw r0, 0x38(r4)
/* 80479708  80 E6 09 AC */	lwz r7, 0x9ac(r6)
/* 8047970C  80 06 09 B0 */	lwz r0, 0x9b0(r6)
/* 80479710  90 E4 00 3C */	stw r7, 0x3c(r4)
/* 80479714  90 04 00 40 */	stw r0, 0x40(r4)
/* 80479718  80 06 09 B4 */	lwz r0, 0x9b4(r6)
/* 8047971C  90 04 00 44 */	stw r0, 0x44(r4)
/* 80479720  80 E6 09 B8 */	lwz r7, 0x9b8(r6)
/* 80479724  80 06 09 BC */	lwz r0, 0x9bc(r6)
/* 80479728  90 E4 00 48 */	stw r7, 0x48(r4)
/* 8047972C  90 04 00 4C */	stw r0, 0x4c(r4)
/* 80479730  80 06 09 C0 */	lwz r0, 0x9c0(r6)
/* 80479734  90 04 00 50 */	stw r0, 0x50(r4)
/* 80479738  80 E6 09 C4 */	lwz r7, 0x9c4(r6)
/* 8047973C  80 06 09 C8 */	lwz r0, 0x9c8(r6)
/* 80479740  90 E4 00 54 */	stw r7, 0x54(r4)
/* 80479744  90 04 00 58 */	stw r0, 0x58(r4)
/* 80479748  80 06 09 CC */	lwz r0, 0x9cc(r6)
/* 8047974C  90 04 00 5C */	stw r0, 0x5c(r4)
/* 80479750  80 E6 09 D0 */	lwz r7, 0x9d0(r6)
/* 80479754  80 06 09 D4 */	lwz r0, 0x9d4(r6)
/* 80479758  90 E4 00 60 */	stw r7, 0x60(r4)
/* 8047975C  90 04 00 64 */	stw r0, 0x64(r4)
/* 80479760  80 06 09 D8 */	lwz r0, 0x9d8(r6)
/* 80479764  90 04 00 68 */	stw r0, 0x68(r4)
/* 80479768  80 E6 09 DC */	lwz r7, 0x9dc(r6)
/* 8047976C  80 06 09 E0 */	lwz r0, 0x9e0(r6)
/* 80479770  90 E4 00 6C */	stw r7, 0x6c(r4)
/* 80479774  90 04 00 70 */	stw r0, 0x70(r4)
/* 80479778  80 06 09 E4 */	lwz r0, 0x9e4(r6)
/* 8047977C  90 04 00 74 */	stw r0, 0x74(r4)
/* 80479780  80 E6 09 E8 */	lwz r7, 0x9e8(r6)
/* 80479784  80 06 09 EC */	lwz r0, 0x9ec(r6)
/* 80479788  90 E4 00 78 */	stw r7, 0x78(r4)
/* 8047978C  90 04 00 7C */	stw r0, 0x7c(r4)
/* 80479790  80 06 09 F0 */	lwz r0, 0x9f0(r6)
/* 80479794  90 04 00 80 */	stw r0, 0x80(r4)
/* 80479798  80 E6 09 F4 */	lwz r7, 0x9f4(r6)
/* 8047979C  80 06 09 F8 */	lwz r0, 0x9f8(r6)
/* 804797A0  90 E4 00 84 */	stw r7, 0x84(r4)
/* 804797A4  90 04 00 88 */	stw r0, 0x88(r4)
/* 804797A8  80 06 09 FC */	lwz r0, 0x9fc(r6)
/* 804797AC  90 04 00 8C */	stw r0, 0x8c(r4)
/* 804797B0  80 E6 0A 00 */	lwz r7, 0xa00(r6)
/* 804797B4  80 06 0A 04 */	lwz r0, 0xa04(r6)
/* 804797B8  90 E4 00 90 */	stw r7, 0x90(r4)
/* 804797BC  90 04 00 94 */	stw r0, 0x94(r4)
/* 804797C0  80 06 0A 08 */	lwz r0, 0xa08(r6)
/* 804797C4  90 04 00 98 */	stw r0, 0x98(r4)
/* 804797C8  80 E6 0A 0C */	lwz r7, 0xa0c(r6)
/* 804797CC  80 06 0A 10 */	lwz r0, 0xa10(r6)
/* 804797D0  90 E4 00 9C */	stw r7, 0x9c(r4)
/* 804797D4  90 04 00 A0 */	stw r0, 0xa0(r4)
/* 804797D8  80 06 0A 14 */	lwz r0, 0xa14(r6)
/* 804797DC  90 04 00 A4 */	stw r0, 0xa4(r4)
/* 804797E0  38 00 00 01 */	li r0, 1
/* 804797E4  98 05 00 00 */	stb r0, 0(r5)
lbl_804797E8:
/* 804797E8  88 03 0C F0 */	lbz r0, 0xcf0(r3)
/* 804797EC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804797F0  39 86 0A 18 */	addi r12, r6, 0xa18
/* 804797F4  7D 8C 02 14 */	add r12, r12, r0
/* 804797F8  4B EE 88 8C */	b __ptmf_scall
/* 804797FC  60 00 00 00 */	nop 
/* 80479800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80479804  7C 08 03 A6 */	mtlr r0
/* 80479808  38 21 00 10 */	addi r1, r1, 0x10
/* 8047980C  4E 80 00 20 */	blr 
