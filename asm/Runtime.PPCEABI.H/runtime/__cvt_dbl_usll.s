lbl_80362770:
/* 80362770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362774  D8 21 00 08 */	stfd f1, 8(r1)
/* 80362778  80 61 00 08 */	lwz r3, 8(r1)
/* 8036277C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80362780  54 65 65 7E */	rlwinm r5, r3, 0xc, 0x15, 0x1f
/* 80362784  28 05 03 FF */	cmplwi r5, 0x3ff
/* 80362788  40 80 00 10 */	bge lbl_80362798
/* 8036278C  38 60 00 00 */	li r3, 0
/* 80362790  38 80 00 00 */	li r4, 0
/* 80362794  48 00 00 A0 */	b lbl_80362834
lbl_80362798:
/* 80362798  7C 66 1B 78 */	mr r6, r3
/* 8036279C  54 63 03 3E */	clrlwi r3, r3, 0xc
/* 803627A0  64 63 00 10 */	oris r3, r3, 0x10
/* 803627A4  38 A5 FB CD */	addi r5, r5, -1075
/* 803627A8  2C 05 00 00 */	cmpwi r5, 0
/* 803627AC  40 80 00 2C */	bge lbl_803627D8
/* 803627B0  7C A5 00 D0 */	neg r5, r5
/* 803627B4  21 05 00 20 */	subfic r8, r5, 0x20
/* 803627B8  31 25 FF E0 */	addic r9, r5, -32
/* 803627BC  7C 84 2C 30 */	srw r4, r4, r5
/* 803627C0  7C 6A 40 30 */	slw r10, r3, r8
/* 803627C4  7C 84 53 78 */	or r4, r4, r10
/* 803627C8  7C 6A 4C 30 */	srw r10, r3, r9
/* 803627CC  7C 84 53 78 */	or r4, r4, r10
/* 803627D0  7C 63 2C 30 */	srw r3, r3, r5
/* 803627D4  48 00 00 50 */	b lbl_80362824
lbl_803627D8:
/* 803627D8  2C 05 00 0A */	cmpwi r5, 0xa
/* 803627DC  40 A1 00 28 */	ble+ lbl_80362804
/* 803627E0  54 C6 00 01 */	rlwinm. r6, r6, 0, 0, 0
/* 803627E4  41 82 00 10 */	beq lbl_803627F4
/* 803627E8  3C 60 80 00 */	lis r3, 0x8000
/* 803627EC  38 80 00 00 */	li r4, 0
/* 803627F0  48 00 00 44 */	b lbl_80362834
lbl_803627F4:
/* 803627F4  3C 60 7F FF */	lis r3, 0x7FFF /* 0x7FFFFFFF@h */
/* 803627F8  60 63 FF FF */	ori r3, r3, 0xFFFF /* 0x7FFFFFFF@l */
/* 803627FC  38 80 FF FF */	li r4, -1
/* 80362800  48 00 00 34 */	b lbl_80362834
lbl_80362804:
/* 80362804  21 05 00 20 */	subfic r8, r5, 0x20
/* 80362808  31 25 FF E0 */	addic r9, r5, -32
/* 8036280C  7C 63 28 30 */	slw r3, r3, r5
/* 80362810  7C 8A 44 30 */	srw r10, r4, r8
/* 80362814  7C 63 53 78 */	or r3, r3, r10
/* 80362818  7C 8A 48 30 */	slw r10, r4, r9
/* 8036281C  7C 63 53 78 */	or r3, r3, r10
/* 80362820  7C 84 28 30 */	slw r4, r4, r5
lbl_80362824:
/* 80362824  54 C6 00 01 */	rlwinm. r6, r6, 0, 0, 0
/* 80362828  41 82 00 0C */	beq lbl_80362834
/* 8036282C  20 84 00 00 */	subfic r4, r4, 0
/* 80362830  7C 63 01 90 */	subfze r3, r3
lbl_80362834:
/* 80362834  38 21 00 10 */	addi r1, r1, 0x10
/* 80362838  4E 80 00 20 */	blr 
