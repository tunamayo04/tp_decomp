lbl_800777B0:
/* 800777B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800777B4  7C 08 02 A6 */	mflr r0
/* 800777B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800777BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800777C0  7C 7F 1B 78 */	mr r31, r3
/* 800777C4  4B FF FD B9 */	bl __ct__11dBgS_GndChkFv
/* 800777C8  3C 60 80 3A */	lis r3, __vt__14dBgS_ObjGndChk@ha
/* 800777CC  38 63 38 2C */	addi r3, r3, __vt__14dBgS_ObjGndChk@l
/* 800777D0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 800777D4  38 03 00 0C */	addi r0, r3, 0xc
/* 800777D8  90 1F 00 20 */	stw r0, 0x20(r31)
/* 800777DC  38 03 00 18 */	addi r0, r3, 0x18
/* 800777E0  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 800777E4  38 03 00 24 */	addi r0, r3, 0x24
/* 800777E8  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 800777EC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 800777F0  48 00 16 79 */	bl SetObj__16dBgS_PolyPassChkFv
/* 800777F4  3C 60 80 3B */	lis r3, __vt__18dBgS_ObjGndChk_Spl@ha
/* 800777F8  38 63 B7 18 */	addi r3, r3, __vt__18dBgS_ObjGndChk_Spl@l
/* 800777FC  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80077800  38 03 00 0C */	addi r0, r3, 0xc
/* 80077804  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80077808  38 03 00 18 */	addi r0, r3, 0x18
/* 8007780C  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 80077810  38 03 00 24 */	addi r0, r3, 0x24
/* 80077814  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80077818  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8007781C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80077820  90 1F 00 50 */	stw r0, 0x50(r31)
/* 80077824  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 80077828  60 00 00 02 */	ori r0, r0, 2
/* 8007782C  90 1F 00 50 */	stw r0, 0x50(r31)
/* 80077830  7F E3 FB 78 */	mr r3, r31
/* 80077834  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80077838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007783C  7C 08 03 A6 */	mtlr r0
/* 80077840  38 21 00 10 */	addi r1, r1, 0x10
/* 80077844  4E 80 00 20 */	blr 
