lbl_80952740:
/* 80952740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80952744  7C 08 02 A6 */	mflr r0
/* 80952748  90 01 00 14 */	stw r0, 0x14(r1)
/* 8095274C  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 80952750  2C 00 00 02 */	cmpwi r0, 2
/* 80952754  41 82 00 3C */	beq lbl_80952790
/* 80952758  40 80 00 14 */	bge lbl_8095276C
/* 8095275C  2C 00 00 00 */	cmpwi r0, 0
/* 80952760  41 82 00 1C */	beq lbl_8095277C
/* 80952764  40 80 00 24 */	bge lbl_80952788
/* 80952768  48 00 00 50 */	b lbl_809527B8
lbl_8095276C:
/* 8095276C  2C 00 00 04 */	cmpwi r0, 4
/* 80952770  41 82 00 40 */	beq lbl_809527B0
/* 80952774  40 80 00 44 */	bge lbl_809527B8
/* 80952778  48 00 00 2C */	b lbl_809527A4
lbl_8095277C:
/* 8095277C  38 60 00 A9 */	li r3, 0xa9
/* 80952780  4B 7F A3 2C */	b daNpcT_chkEvtBit__FUl
/* 80952784  48 00 00 38 */	b lbl_809527BC
lbl_80952788:
/* 80952788  38 60 00 00 */	li r3, 0
/* 8095278C  48 00 00 30 */	b lbl_809527BC
lbl_80952790:
/* 80952790  38 60 00 2D */	li r3, 0x2d
/* 80952794  4B 7F A3 18 */	b daNpcT_chkEvtBit__FUl
/* 80952798  7C 60 00 34 */	cntlzw r0, r3
/* 8095279C  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 809527A0  48 00 00 1C */	b lbl_809527BC
lbl_809527A4:
/* 809527A4  38 60 02 3D */	li r3, 0x23d
/* 809527A8  4B 7F A3 04 */	b daNpcT_chkEvtBit__FUl
/* 809527AC  48 00 00 10 */	b lbl_809527BC
lbl_809527B0:
/* 809527B0  38 60 00 00 */	li r3, 0
/* 809527B4  48 00 00 08 */	b lbl_809527BC
lbl_809527B8:
/* 809527B8  38 60 00 00 */	li r3, 0
lbl_809527BC:
/* 809527BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809527C0  7C 08 03 A6 */	mtlr r0
/* 809527C4  38 21 00 10 */	addi r1, r1, 0x10
/* 809527C8  4E 80 00 20 */	blr 
