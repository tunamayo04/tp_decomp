lbl_8002D598:
/* 8002D598  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002D59C  7C 08 02 A6 */	mflr r0
/* 8002D5A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002D5A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002D5A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8002D5AC  7C 7E 1B 78 */	mr r30, r3
/* 8002D5B0  7C 9F 23 78 */	mr r31, r4
/* 8002D5B4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8002D5B8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8002D5BC  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 8002D5C0  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8002D5C4  7D 89 03 A6 */	mtctr r12
/* 8002D5C8  4E 80 04 21 */	bctrl 
/* 8002D5CC  88 03 00 09 */	lbz r0, 9(r3)
/* 8002D5D0  54 00 FE FE */	rlwinm r0, r0, 0x1f, 0x1b, 0x1f
/* 8002D5D4  7C 1E 00 00 */	cmpw r30, r0
/* 8002D5D8  40 82 00 1C */	bne lbl_8002D5F4
/* 8002D5DC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8002D5E0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8002D5E4  38 63 09 58 */	addi r3, r3, 0x958
/* 8002D5E8  7F E4 FB 78 */	mr r4, r31
/* 8002D5EC  48 00 71 FD */	bl isTbox__12dSv_memBit_cCFi
/* 8002D5F0  48 00 00 20 */	b lbl_8002D610
lbl_8002D5F4:
/* 8002D5F4  57 C4 28 34 */	slwi r4, r30, 5
/* 8002D5F8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8002D5FC  38 03 61 C0 */	addi r0, r3, g_dComIfG_gameInfo@l
/* 8002D600  7C 60 22 14 */	add r3, r0, r4
/* 8002D604  38 63 01 F0 */	addi r3, r3, 0x1f0
/* 8002D608  7F E4 FB 78 */	mr r4, r31
/* 8002D60C  48 00 71 DD */	bl isTbox__12dSv_memBit_cCFi
lbl_8002D610:
/* 8002D610  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002D614  83 C1 00 08 */	lwz r30, 8(r1)
/* 8002D618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002D61C  7C 08 03 A6 */	mtlr r0
/* 8002D620  38 21 00 10 */	addi r1, r1, 0x10
/* 8002D624  4E 80 00 20 */	blr 
