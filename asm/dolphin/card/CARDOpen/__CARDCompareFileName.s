lbl_80357C74:
/* 80357C74  38 A3 00 08 */	addi r5, r3, 8
/* 80357C78  38 E0 00 20 */	li r7, 0x20
/* 80357C7C  48 00 00 3C */	b lbl_80357CB8
lbl_80357C80:
/* 80357C80  88 05 00 00 */	lbz r0, 0(r5)
/* 80357C84  38 A5 00 01 */	addi r5, r5, 1
/* 80357C88  88 C4 00 00 */	lbz r6, 0(r4)
/* 80357C8C  38 84 00 01 */	addi r4, r4, 1
/* 80357C90  7C 03 07 74 */	extsb r3, r0
/* 80357C94  7C C0 07 74 */	extsb r0, r6
/* 80357C98  7C 03 00 00 */	cmpw r3, r0
/* 80357C9C  41 82 00 0C */	beq lbl_80357CA8
/* 80357CA0  38 60 00 00 */	li r3, 0
/* 80357CA4  4E 80 00 20 */	blr 
lbl_80357CA8:
/* 80357CA8  7C C0 07 75 */	extsb. r0, r6
/* 80357CAC  40 82 00 0C */	bne lbl_80357CB8
/* 80357CB0  38 60 00 01 */	li r3, 1
/* 80357CB4  4E 80 00 20 */	blr 
lbl_80357CB8:
/* 80357CB8  34 E7 FF FF */	addic. r7, r7, -1
/* 80357CBC  40 80 FF C4 */	bge lbl_80357C80
/* 80357CC0  88 04 00 00 */	lbz r0, 0(r4)
/* 80357CC4  7C 00 07 75 */	extsb. r0, r0
/* 80357CC8  40 82 00 0C */	bne lbl_80357CD4
/* 80357CCC  38 60 00 01 */	li r3, 1
/* 80357CD0  4E 80 00 20 */	blr 
lbl_80357CD4:
/* 80357CD4  38 60 00 00 */	li r3, 0
/* 80357CD8  4E 80 00 20 */	blr 
