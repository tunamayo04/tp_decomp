lbl_80C24130:
/* 80C24130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C24134  7C 08 02 A6 */	mflr r0
/* 80C24138  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C2413C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C24140  93 C1 00 08 */	stw r30, 8(r1)
/* 80C24144  7C 7E 1B 79 */	or. r30, r3, r3
/* 80C24148  7C 9F 23 78 */	mr r31, r4
/* 80C2414C  41 82 00 38 */	beq lbl_80C24184
/* 80C24150  3C 60 80 C2 */	lis r3, __vt__12dBgS_AcchCir@ha
/* 80C24154  38 03 45 D4 */	addi r0, r3, __vt__12dBgS_AcchCir@l
/* 80C24158  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80C2415C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80C24160  38 80 FF FF */	li r4, -1
/* 80C24164  4B 64 AD B4 */	b __dt__8cM3dGCirFv
/* 80C24168  7F C3 F3 78 */	mr r3, r30
/* 80C2416C  38 80 00 00 */	li r4, 0
/* 80C24170  4B 64 3F 40 */	b __dt__13cBgS_PolyInfoFv
/* 80C24174  7F E0 07 35 */	extsh. r0, r31
/* 80C24178  40 81 00 0C */	ble lbl_80C24184
/* 80C2417C  7F C3 F3 78 */	mr r3, r30
/* 80C24180  4B 6A AB BC */	b __dl__FPv
lbl_80C24184:
/* 80C24184  7F C3 F3 78 */	mr r3, r30
/* 80C24188  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C2418C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C24190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C24194  7C 08 03 A6 */	mtlr r0
/* 80C24198  38 21 00 10 */	addi r1, r1, 0x10
/* 80C2419C  4E 80 00 20 */	blr 
