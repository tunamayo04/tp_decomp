lbl_800F2EE0:
/* 800F2EE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800F2EE4  7C 08 02 A6 */	mflr r0
/* 800F2EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800F2EEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800F2EF0  7C 7F 1B 78 */	mr r31, r3
/* 800F2EF4  38 80 00 4F */	li r4, 0x4f
/* 800F2EF8  4B FC F0 75 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800F2EFC  7F E3 FB 78 */	mr r3, r31
/* 800F2F00  4B FF 9C 59 */	bl initForceRideHorse__9daAlink_cFv
/* 800F2F04  7F E3 FB 78 */	mr r3, r31
/* 800F2F08  38 80 00 01 */	li r4, 1
/* 800F2F0C  38 A0 00 00 */	li r5, 0
/* 800F2F10  4B FC E3 CD */	bl deleteEquipItem__9daAlink_cFii
/* 800F2F14  7F E3 FB 78 */	mr r3, r31
/* 800F2F18  38 80 00 60 */	li r4, 0x60
/* 800F2F1C  C0 22 92 BC */	lfs f1, lit_6041(r2)
/* 800F2F20  4B FB A0 91 */	bl setSingleAnimeBaseMorf__9daAlink_cFQ29daAlink_c11daAlink_ANMf
/* 800F2F24  7F E3 FB 78 */	mr r3, r31
/* 800F2F28  4B FF A5 B5 */	bl setSyncHorsePos__9daAlink_cFv
/* 800F2F2C  38 00 00 00 */	li r0, 0
/* 800F2F30  98 1F 2F AB */	stb r0, 0x2fab(r31)
/* 800F2F34  B0 1F 30 10 */	sth r0, 0x3010(r31)
/* 800F2F38  B0 1F 30 12 */	sth r0, 0x3012(r31)
/* 800F2F3C  C0 22 93 18 */	lfs f1, lit_7308(r2)
/* 800F2F40  48 17 4A 15 */	bl cM_rndF__Ff
/* 800F2F44  C0 02 93 B8 */	lfs f0, lit_10041(r2)
/* 800F2F48  EC 00 08 28 */	fsubs f0, f0, f1
/* 800F2F4C  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 800F2F50  38 60 00 00 */	li r3, 0
/* 800F2F54  B0 7F 30 0C */	sth r3, 0x300c(r31)
/* 800F2F58  38 00 00 1E */	li r0, 0x1e
/* 800F2F5C  B0 1F 30 0E */	sth r0, 0x300e(r31)
/* 800F2F60  B0 7F 30 04 */	sth r3, 0x3004(r31)
/* 800F2F64  B0 7F 30 02 */	sth r3, 0x3002(r31)
/* 800F2F68  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 800F2F6C  38 63 03 D0 */	addi r3, r3, 0x3d0
/* 800F2F70  38 80 00 02 */	li r4, 2
/* 800F2F74  48 1B EE 81 */	bl changeSubBgmStatus__8Z2SeqMgrFl
/* 800F2F78  38 00 00 00 */	li r0, 0
/* 800F2F7C  90 1F 32 CC */	stw r0, 0x32cc(r31)
/* 800F2F80  38 60 00 01 */	li r3, 1
/* 800F2F84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800F2F88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800F2F8C  7C 08 03 A6 */	mtlr r0
/* 800F2F90  38 21 00 10 */	addi r1, r1, 0x10
/* 800F2F94  4E 80 00 20 */	blr 
