lbl_80085E6C:
/* 80085E6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80085E70  7C 08 02 A6 */	mflr r0
/* 80085E74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80085E78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80085E7C  7C 7F 1B 78 */	mr r31, r3
/* 80085E80  38 7F 02 44 */	addi r3, r31, 0x244
/* 80085E84  48 1E 91 FD */	bl SetCps__8cM3dGCpsFRC8cM3dGCps
/* 80085E88  88 1F 02 02 */	lbz r0, 0x202(r31)
/* 80085E8C  60 00 00 01 */	ori r0, r0, 1
/* 80085E90  98 1F 02 02 */	stb r0, 0x202(r31)
/* 80085E94  38 00 00 00 */	li r0, 0
/* 80085E98  98 1F 02 03 */	stb r0, 0x203(r31)
/* 80085E9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80085EA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80085EA4  7C 08 03 A6 */	mtlr r0
/* 80085EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80085EAC  4E 80 00 20 */	blr 
