lbl_80196608:
/* 80196608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019660C  7C 08 02 A6 */	mflr r0
/* 80196610  90 01 00 14 */	stw r0, 0x14(r1)
/* 80196614  81 81 00 18 */	lwz r12, 0x18(r1)
/* 80196618  81 61 00 1C */	lwz r11, 0x1c(r1)
/* 8019661C  38 00 FF FF */	li r0, -1
/* 80196620  B0 03 00 D6 */	sth r0, 0xd6(r3)
/* 80196624  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80196628  28 00 00 00 */	cmplwi r0, 0
/* 8019662C  40 82 00 1C */	bne lbl_80196648
/* 80196630  C0 04 05 38 */	lfs f0, 0x538(r4)
/* 80196634  D0 03 00 B0 */	stfs f0, 0xb0(r3)
/* 80196638  C0 04 05 3C */	lfs f0, 0x53c(r4)
/* 8019663C  D0 03 00 B4 */	stfs f0, 0xb4(r3)
/* 80196640  C0 04 05 40 */	lfs f0, 0x540(r4)
/* 80196644  D0 03 00 B8 */	stfs f0, 0xb8(r3)
lbl_80196648:
/* 80196648  90 83 00 18 */	stw r4, 0x18(r3)
/* 8019664C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80196650  90 C3 00 20 */	stw r6, 0x20(r3)
/* 80196654  90 E3 00 24 */	stw r7, 0x24(r3)
/* 80196658  91 03 00 28 */	stw r8, 0x28(r3)
/* 8019665C  91 23 00 2C */	stw r9, 0x2c(r3)
/* 80196660  91 43 00 30 */	stw r10, 0x30(r3)
/* 80196664  38 00 00 00 */	li r0, 0
/* 80196668  90 03 00 34 */	stw r0, 0x34(r3)
/* 8019666C  C0 0C 00 00 */	lfs f0, 0(r12)
/* 80196670  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 80196674  C0 0C 00 04 */	lfs f0, 4(r12)
/* 80196678  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8019667C  C0 0C 00 08 */	lfs f0, 8(r12)
/* 80196680  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80196684  C0 22 A0 B4 */	lfs f1, lit_3992(r2)
/* 80196688  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 8019668C  C0 0B 00 00 */	lfs f0, 0(r11)
/* 80196690  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80196694  C0 0B 00 04 */	lfs f0, 4(r11)
/* 80196698  D0 03 00 64 */	stfs f0, 0x64(r3)
/* 8019669C  C0 0B 00 08 */	lfs f0, 8(r11)
/* 801966A0  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 801966A4  D0 23 00 6C */	stfs f1, 0x6c(r3)
/* 801966A8  C0 0B 00 00 */	lfs f0, 0(r11)
/* 801966AC  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 801966B0  C0 0B 00 04 */	lfs f0, 4(r11)
/* 801966B4  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 801966B8  C0 0B 00 08 */	lfs f0, 8(r11)
/* 801966BC  D0 03 00 78 */	stfs f0, 0x78(r3)
/* 801966C0  48 00 00 15 */	bl _debugSetCamera__16ShopCam_action_cFv
/* 801966C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801966C8  7C 08 03 A6 */	mtlr r0
/* 801966CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801966D0  4E 80 00 20 */	blr 
