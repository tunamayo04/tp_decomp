lbl_804754D0:
/* 804754D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804754D4  7C 08 02 A6 */	mflr r0
/* 804754D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804754DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804754E0  7C 7F 1B 78 */	mr r31, r3
/* 804754E4  38 7F 05 74 */	addi r3, r31, 0x574
/* 804754E8  4B C0 1E BC */	b ClrMoveBGOnly__9dBgS_AcchFv
/* 804754EC  80 1F 05 A0 */	lwz r0, 0x5a0(r31)
/* 804754F0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 804754F4  90 1F 05 A0 */	stw r0, 0x5a0(r31)
/* 804754F8  80 1F 07 C8 */	lwz r0, 0x7c8(r31)
/* 804754FC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80475500  90 1F 07 C8 */	stw r0, 0x7c8(r31)
/* 80475504  80 1F 07 E0 */	lwz r0, 0x7e0(r31)
/* 80475508  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8047550C  90 1F 07 E0 */	stw r0, 0x7e0(r31)
/* 80475510  80 1F 07 F4 */	lwz r0, 0x7f4(r31)
/* 80475514  60 00 00 10 */	ori r0, r0, 0x10
/* 80475518  90 1F 07 F4 */	stw r0, 0x7f4(r31)
/* 8047551C  80 1F 05 5C */	lwz r0, 0x55c(r31)
/* 80475520  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80475524  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80475528  38 00 00 00 */	li r0, 0
/* 8047552C  98 1F 0D A8 */	stb r0, 0xda8(r31)
/* 80475530  3C 60 80 48 */	lis r3, lit_3899@ha
/* 80475534  C0 03 A3 54 */	lfs f0, lit_3899@l(r3)
/* 80475538  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 8047553C  D0 1F 04 F8 */	stfs f0, 0x4f8(r31)
/* 80475540  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 80475544  D0 1F 05 00 */	stfs f0, 0x500(r31)
/* 80475548  38 7F 07 8C */	addi r3, r31, 0x78c
/* 8047554C  4B DE E4 10 */	b ClrCcMove__9cCcD_SttsFv
/* 80475550  7F E3 FB 78 */	mr r3, r31
/* 80475554  4B FF A1 51 */	bl data__12daObjCarry_cFv
/* 80475558  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8047555C  D0 1F 05 30 */	stfs f0, 0x530(r31)
/* 80475560  3C 60 80 48 */	lis r3, lit_6043@ha
/* 80475564  C0 03 A4 34 */	lfs f0, lit_6043@l(r3)
/* 80475568  D0 1F 05 34 */	stfs f0, 0x534(r31)
/* 8047556C  7F E3 FB 78 */	mr r3, r31
/* 80475570  4B FF A1 35 */	bl data__12daObjCarry_cFv
/* 80475574  88 03 00 36 */	lbz r0, 0x36(r3)
/* 80475578  98 1F 07 A0 */	stb r0, 0x7a0(r31)
/* 8047557C  38 00 00 10 */	li r0, 0x10
/* 80475580  98 1F 0C F1 */	stb r0, 0xcf1(r31)
/* 80475584  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80475588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8047558C  7C 08 03 A6 */	mtlr r0
/* 80475590  38 21 00 10 */	addi r1, r1, 0x10
/* 80475594  4E 80 00 20 */	blr 
