lbl_80CDEFEC:
/* 80CDEFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CDEFF0  7C 08 02 A6 */	mflr r0
/* 80CDEFF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CDEFF8  4B 58 40 94 */	b ModuleEpilog
/* 80CDEFFC  3C 60 80 CE */	lis r3, __destroy_global_chain_reference@ha
/* 80CDF000  38 63 F7 14 */	addi r3, r3, __destroy_global_chain_reference@l
/* 80CDF004  4B 58 41 8C */	b ModuleDestructorsX
/* 80CDF008  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CDF00C  7C 08 03 A6 */	mtlr r0
/* 80CDF010  38 21 00 10 */	addi r1, r1, 0x10
/* 80CDF014  4E 80 00 20 */	blr 
