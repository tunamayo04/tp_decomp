lbl_8059E0E0:
/* 8059E0E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059E0E4  7C 08 02 A6 */	mflr r0
/* 8059E0E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059E0EC  3C 60 80 5A */	lis r3, data_8059E7EC@ha
/* 8059E0F0  38 63 E7 EC */	addi r3, r3, data_8059E7EC@l
/* 8059E0F4  4B CC 50 58 */	b ModuleConstructorsX
/* 8059E0F8  4B CC 4F 90 */	b ModuleProlog
/* 8059E0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059E100  7C 08 03 A6 */	mtlr r0
/* 8059E104  38 21 00 10 */	addi r1, r1, 0x10
/* 8059E108  4E 80 00 20 */	blr 
