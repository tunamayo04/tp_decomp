lbl_80D12B20:
/* 80D12B20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D12B24  7C 08 02 A6 */	mflr r0
/* 80D12B28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D12B2C  3C 60 80 D1 */	lis r3, data_80D12F90@ha
/* 80D12B30  38 63 2F 90 */	addi r3, r3, data_80D12F90@l
/* 80D12B34  4B 55 06 18 */	b ModuleConstructorsX
/* 80D12B38  4B 55 05 50 */	b ModuleProlog
/* 80D12B3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D12B40  7C 08 03 A6 */	mtlr r0
/* 80D12B44  38 21 00 10 */	addi r1, r1, 0x10
/* 80D12B48  4E 80 00 20 */	blr 
