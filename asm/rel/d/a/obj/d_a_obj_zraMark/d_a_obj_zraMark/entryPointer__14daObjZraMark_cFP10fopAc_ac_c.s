lbl_80D43314:
/* 80D43314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D43318  7C 08 02 A6 */	mflr r0
/* 80D4331C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D43320  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D43324  7C 7F 1B 78 */	mr r31, r3
/* 80D43328  88 03 07 2C */	lbz r0, 0x72c(r3)
/* 80D4332C  28 00 00 02 */	cmplwi r0, 2
/* 80D43330  40 80 00 28 */	bge lbl_80D43358
/* 80D43334  54 03 1D 78 */	rlwinm r3, r0, 3, 0x15, 0x1c
/* 80D43338  38 63 07 1C */	addi r3, r3, 0x71c
/* 80D4333C  7C 7F 1A 14 */	add r3, r31, r3
/* 80D43340  4B 40 D3 7C */	b entry__18daNpcF_ActorMngr_cFP10fopAc_ac_c
/* 80D43344  88 7F 07 2C */	lbz r3, 0x72c(r31)
/* 80D43348  38 03 00 01 */	addi r0, r3, 1
/* 80D4334C  98 1F 07 2C */	stb r0, 0x72c(r31)
/* 80D43350  38 60 00 01 */	li r3, 1
/* 80D43354  48 00 00 08 */	b lbl_80D4335C
lbl_80D43358:
/* 80D43358  38 60 00 00 */	li r3, 0
lbl_80D4335C:
/* 80D4335C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D43360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D43364  7C 08 03 A6 */	mtlr r0
/* 80D43368  38 21 00 10 */	addi r1, r1, 0x10
/* 80D4336C  4E 80 00 20 */	blr 
