lbl_80368D9C:
/* 80368D9C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80368DA0  7C 08 02 A6 */	mflr r0
/* 80368DA4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80368DA8  38 00 00 00 */	li r0, 0
/* 80368DAC  BE 81 00 10 */	stmw r20, 0x10(r1)
/* 80368DB0  7C 7D 1B 79 */	or. r29, r3, r3
/* 80368DB4  7D 38 4B 78 */	mr r24, r9
/* 80368DB8  7D 15 43 78 */	mr r21, r8
/* 80368DBC  7C 96 23 78 */	mr r22, r4
/* 80368DC0  7C BE 2B 78 */	mr r30, r5
/* 80368DC4  7C DC 33 78 */	mr r28, r6
/* 80368DC8  7C F4 3B 78 */	mr r20, r7
/* 80368DCC  3B 20 00 01 */	li r25, 1
/* 80368DD0  3B E0 00 00 */	li r31, 0
/* 80368DD4  3A E0 00 00 */	li r23, 0
/* 80368DD8  3B 60 00 00 */	li r27, 0
/* 80368DDC  3B 40 00 00 */	li r26, 0
/* 80368DE0  90 09 00 00 */	stw r0, 0(r9)
/* 80368DE4  90 08 00 00 */	stw r0, 0(r8)
/* 80368DE8  41 80 00 1C */	blt lbl_80368E04
/* 80368DEC  2C 1D 00 01 */	cmpwi r29, 1
/* 80368DF0  41 82 00 14 */	beq lbl_80368E04
/* 80368DF4  2C 1D 00 24 */	cmpwi r29, 0x24
/* 80368DF8  41 81 00 0C */	bgt lbl_80368E04
/* 80368DFC  2C 16 00 01 */	cmpwi r22, 1
/* 80368E00  40 80 00 0C */	bge lbl_80368E0C
lbl_80368E04:
/* 80368E04  3B 20 00 40 */	li r25, 0x40
/* 80368E08  48 00 00 24 */	b lbl_80368E2C
lbl_80368E0C:
/* 80368E0C  7F CC F3 78 */	mr r12, r30
/* 80368E10  7F 83 E3 78 */	mr r3, r28
/* 80368E14  38 80 00 00 */	li r4, 0
/* 80368E18  38 A0 00 00 */	li r5, 0
/* 80368E1C  7D 89 03 A6 */	mtctr r12
/* 80368E20  3B E0 00 01 */	li r31, 1
/* 80368E24  4E 80 04 21 */	bctrl 
/* 80368E28  7C 64 1B 78 */	mr r4, r3
lbl_80368E2C:
/* 80368E2C  2C 1D 00 00 */	cmpwi r29, 0
/* 80368E30  41 82 02 7C */	beq lbl_803690AC
/* 80368E34  38 00 FF FF */	li r0, -1
/* 80368E38  7F 40 EB 96 */	divwu r26, r0, r29
/* 80368E3C  48 00 02 70 */	b lbl_803690AC
lbl_80368E40:
/* 80368E40  28 19 00 10 */	cmplwi r25, 0x10
/* 80368E44  41 81 02 68 */	bgt lbl_803690AC
/* 80368E48  3C 60 80 3D */	lis r3, lit_431@ha
/* 80368E4C  57 20 10 3A */	slwi r0, r25, 2
/* 80368E50  38 63 31 48 */	addi r3, r3, lit_431@l
/* 80368E54  7C 03 00 2E */	lwzx r0, r3, r0
/* 80368E58  7C 09 03 A6 */	mtctr r0
/* 80368E5C  4E 80 04 20 */	bctr 
/* 80368E60  3C 60 80 3D */	lis r3, __ctype_map@ha
/* 80368E64  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80368E68  38 63 2C 18 */	addi r3, r3, __ctype_map@l
/* 80368E6C  7C 03 00 AE */	lbzx r0, r3, r0
/* 80368E70  54 00 07 7D */	rlwinm. r0, r0, 0, 0x1d, 0x1e
/* 80368E74  41 82 00 28 */	beq lbl_80368E9C
/* 80368E78  7F CC F3 78 */	mr r12, r30
/* 80368E7C  7F 83 E3 78 */	mr r3, r28
/* 80368E80  38 80 00 00 */	li r4, 0
/* 80368E84  38 A0 00 00 */	li r5, 0
/* 80368E88  7D 89 03 A6 */	mtctr r12
/* 80368E8C  4E 80 04 21 */	bctrl 
/* 80368E90  7C 64 1B 78 */	mr r4, r3
/* 80368E94  3A F7 00 01 */	addi r23, r23, 1
/* 80368E98  48 00 02 14 */	b lbl_803690AC
lbl_80368E9C:
/* 80368E9C  2C 04 00 2B */	cmpwi r4, 0x2b
/* 80368EA0  40 82 00 28 */	bne lbl_80368EC8
/* 80368EA4  7F CC F3 78 */	mr r12, r30
/* 80368EA8  7F 83 E3 78 */	mr r3, r28
/* 80368EAC  38 80 00 00 */	li r4, 0
/* 80368EB0  38 A0 00 00 */	li r5, 0
/* 80368EB4  7D 89 03 A6 */	mtctr r12
/* 80368EB8  3B FF 00 01 */	addi r31, r31, 1
/* 80368EBC  4E 80 04 21 */	bctrl 
/* 80368EC0  7C 64 1B 78 */	mr r4, r3
/* 80368EC4  48 00 00 34 */	b lbl_80368EF8
lbl_80368EC8:
/* 80368EC8  2C 04 00 2D */	cmpwi r4, 0x2d
/* 80368ECC  40 82 00 2C */	bne lbl_80368EF8
/* 80368ED0  7F CC F3 78 */	mr r12, r30
/* 80368ED4  7F 83 E3 78 */	mr r3, r28
/* 80368ED8  38 80 00 00 */	li r4, 0
/* 80368EDC  38 A0 00 00 */	li r5, 0
/* 80368EE0  7D 89 03 A6 */	mtctr r12
/* 80368EE4  3B FF 00 01 */	addi r31, r31, 1
/* 80368EE8  4E 80 04 21 */	bctrl 
/* 80368EEC  38 00 00 01 */	li r0, 1
/* 80368EF0  7C 64 1B 78 */	mr r4, r3
/* 80368EF4  90 15 00 00 */	stw r0, 0(r21)
lbl_80368EF8:
/* 80368EF8  3B 20 00 02 */	li r25, 2
/* 80368EFC  48 00 01 B0 */	b lbl_803690AC
/* 80368F00  2C 1D 00 00 */	cmpwi r29, 0
/* 80368F04  41 82 00 0C */	beq lbl_80368F10
/* 80368F08  2C 1D 00 10 */	cmpwi r29, 0x10
/* 80368F0C  40 82 00 34 */	bne lbl_80368F40
lbl_80368F10:
/* 80368F10  2C 04 00 30 */	cmpwi r4, 0x30
/* 80368F14  40 82 00 2C */	bne lbl_80368F40
/* 80368F18  7F CC F3 78 */	mr r12, r30
/* 80368F1C  7F 83 E3 78 */	mr r3, r28
/* 80368F20  3B 20 00 04 */	li r25, 4
/* 80368F24  38 80 00 00 */	li r4, 0
/* 80368F28  38 A0 00 00 */	li r5, 0
/* 80368F2C  7D 89 03 A6 */	mtctr r12
/* 80368F30  3B FF 00 01 */	addi r31, r31, 1
/* 80368F34  4E 80 04 21 */	bctrl 
/* 80368F38  7C 64 1B 78 */	mr r4, r3
/* 80368F3C  48 00 01 70 */	b lbl_803690AC
lbl_80368F40:
/* 80368F40  3B 20 00 08 */	li r25, 8
/* 80368F44  48 00 01 68 */	b lbl_803690AC
/* 80368F48  2C 04 00 58 */	cmpwi r4, 0x58
/* 80368F4C  41 82 00 0C */	beq lbl_80368F58
/* 80368F50  2C 04 00 78 */	cmpwi r4, 0x78
/* 80368F54  40 82 00 30 */	bne lbl_80368F84
lbl_80368F58:
/* 80368F58  7F CC F3 78 */	mr r12, r30
/* 80368F5C  7F 83 E3 78 */	mr r3, r28
/* 80368F60  3B A0 00 10 */	li r29, 0x10
/* 80368F64  3B 20 00 08 */	li r25, 8
/* 80368F68  38 80 00 00 */	li r4, 0
/* 80368F6C  38 A0 00 00 */	li r5, 0
/* 80368F70  7D 89 03 A6 */	mtctr r12
/* 80368F74  3B FF 00 01 */	addi r31, r31, 1
/* 80368F78  4E 80 04 21 */	bctrl 
/* 80368F7C  7C 64 1B 78 */	mr r4, r3
/* 80368F80  48 00 01 2C */	b lbl_803690AC
lbl_80368F84:
/* 80368F84  2C 1D 00 00 */	cmpwi r29, 0
/* 80368F88  40 82 00 08 */	bne lbl_80368F90
/* 80368F8C  3B A0 00 08 */	li r29, 8
lbl_80368F90:
/* 80368F90  3B 20 00 10 */	li r25, 0x10
/* 80368F94  48 00 01 18 */	b lbl_803690AC
/* 80368F98  2C 1D 00 00 */	cmpwi r29, 0
/* 80368F9C  40 82 00 08 */	bne lbl_80368FA4
/* 80368FA0  3B A0 00 0A */	li r29, 0xa
lbl_80368FA4:
/* 80368FA4  28 1A 00 00 */	cmplwi r26, 0
/* 80368FA8  40 82 00 0C */	bne lbl_80368FB4
/* 80368FAC  38 00 FF FF */	li r0, -1
/* 80368FB0  7F 40 EB 96 */	divwu r26, r0, r29
lbl_80368FB4:
/* 80368FB4  3C 60 80 3D */	lis r3, __ctype_map@ha
/* 80368FB8  54 85 06 3E */	clrlwi r5, r4, 0x18
/* 80368FBC  38 63 2C 18 */	addi r3, r3, __ctype_map@l
/* 80368FC0  7C 63 28 AE */	lbzx r3, r3, r5
/* 80368FC4  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 80368FC8  41 82 00 2C */	beq lbl_80368FF4
/* 80368FCC  38 84 FF D0 */	addi r4, r4, -48
/* 80368FD0  7C 04 E8 00 */	cmpw r4, r29
/* 80368FD4  41 80 00 88 */	blt lbl_8036905C
/* 80368FD8  2C 19 00 10 */	cmpwi r25, 0x10
/* 80368FDC  38 00 00 40 */	li r0, 0x40
/* 80368FE0  40 82 00 08 */	bne lbl_80368FE8
/* 80368FE4  38 00 00 20 */	li r0, 0x20
lbl_80368FE8:
/* 80368FE8  7C 19 03 78 */	mr r25, r0
/* 80368FEC  38 84 00 30 */	addi r4, r4, 0x30
/* 80368FF0  48 00 00 BC */	b lbl_803690AC
lbl_80368FF4:
/* 80368FF4  54 60 06 33 */	rlwinm. r0, r3, 0, 0x18, 0x19
/* 80368FF8  41 82 00 2C */	beq lbl_80369024
/* 80368FFC  2C 04 FF FF */	cmpwi r4, -1
/* 80369000  40 82 00 0C */	bne lbl_8036900C
/* 80369004  38 60 FF FF */	li r3, -1
/* 80369008  48 00 00 10 */	b lbl_80369018
lbl_8036900C:
/* 8036900C  3C 60 80 3D */	lis r3, __upper_map@ha
/* 80369010  38 63 2E 18 */	addi r3, r3, __upper_map@l
/* 80369014  7C 63 28 AE */	lbzx r3, r3, r5
lbl_80369018:
/* 80369018  38 03 FF C9 */	addi r0, r3, -55
/* 8036901C  7C 00 E8 00 */	cmpw r0, r29
/* 80369020  41 80 00 1C */	blt lbl_8036903C
lbl_80369024:
/* 80369024  2C 19 00 10 */	cmpwi r25, 0x10
/* 80369028  40 82 00 0C */	bne lbl_80369034
/* 8036902C  3B 20 00 20 */	li r25, 0x20
/* 80369030  48 00 00 7C */	b lbl_803690AC
lbl_80369034:
/* 80369034  3B 20 00 40 */	li r25, 0x40
/* 80369038  48 00 00 74 */	b lbl_803690AC
lbl_8036903C:
/* 8036903C  2C 04 FF FF */	cmpwi r4, -1
/* 80369040  40 82 00 0C */	bne lbl_8036904C
/* 80369044  38 60 FF FF */	li r3, -1
/* 80369048  48 00 00 10 */	b lbl_80369058
lbl_8036904C:
/* 8036904C  3C 60 80 3D */	lis r3, __upper_map@ha
/* 80369050  38 63 2E 18 */	addi r3, r3, __upper_map@l
/* 80369054  7C 63 28 AE */	lbzx r3, r3, r5
lbl_80369058:
/* 80369058  38 83 FF C9 */	addi r4, r3, -55
lbl_8036905C:
/* 8036905C  7C 1B D0 40 */	cmplw r27, r26
/* 80369060  40 81 00 0C */	ble lbl_8036906C
/* 80369064  38 00 00 01 */	li r0, 1
/* 80369068  90 18 00 00 */	stw r0, 0(r24)
lbl_8036906C:
/* 8036906C  7F 7B E9 D6 */	mullw r27, r27, r29
/* 80369070  20 1B FF FF */	subfic r0, r27, -1
/* 80369074  7C 04 00 40 */	cmplw r4, r0
/* 80369078  40 81 00 0C */	ble lbl_80369084
/* 8036907C  38 00 00 01 */	li r0, 1
/* 80369080  90 18 00 00 */	stw r0, 0(r24)
lbl_80369084:
/* 80369084  7F CC F3 78 */	mr r12, r30
/* 80369088  7F 83 E3 78 */	mr r3, r28
/* 8036908C  7F 7B 22 14 */	add r27, r27, r4
/* 80369090  3B 20 00 10 */	li r25, 0x10
/* 80369094  38 80 00 00 */	li r4, 0
/* 80369098  38 A0 00 00 */	li r5, 0
/* 8036909C  7D 89 03 A6 */	mtctr r12
/* 803690A0  3B FF 00 01 */	addi r31, r31, 1
/* 803690A4  4E 80 04 21 */	bctrl 
/* 803690A8  7C 64 1B 78 */	mr r4, r3
lbl_803690AC:
/* 803690AC  7C 1F B0 00 */	cmpw r31, r22
/* 803690B0  41 81 00 14 */	bgt lbl_803690C4
/* 803690B4  2C 04 FF FF */	cmpwi r4, -1
/* 803690B8  41 82 00 0C */	beq lbl_803690C4
/* 803690BC  57 20 06 75 */	rlwinm. r0, r25, 0, 0x19, 0x1a
/* 803690C0  41 82 FD 80 */	beq lbl_80368E40
lbl_803690C4:
/* 803690C4  73 20 00 34 */	andi. r0, r25, 0x34
/* 803690C8  40 82 00 14 */	bne lbl_803690DC
/* 803690CC  38 00 00 00 */	li r0, 0
/* 803690D0  3B 60 00 00 */	li r27, 0
/* 803690D4  90 14 00 00 */	stw r0, 0(r20)
/* 803690D8  48 00 00 10 */	b lbl_803690E8
lbl_803690DC:
/* 803690DC  7C 7F BA 14 */	add r3, r31, r23
/* 803690E0  38 03 FF FF */	addi r0, r3, -1
/* 803690E4  90 14 00 00 */	stw r0, 0(r20)
lbl_803690E8:
/* 803690E8  7F CC F3 78 */	mr r12, r30
/* 803690EC  7F 83 E3 78 */	mr r3, r28
/* 803690F0  38 A0 00 01 */	li r5, 1
/* 803690F4  7D 89 03 A6 */	mtctr r12
/* 803690F8  4E 80 04 21 */	bctrl 
/* 803690FC  7F 63 DB 78 */	mr r3, r27
/* 80369100  BA 81 00 10 */	lmw r20, 0x10(r1)
/* 80369104  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80369108  7C 08 03 A6 */	mtlr r0
/* 8036910C  38 21 00 40 */	addi r1, r1, 0x40
/* 80369110  4E 80 00 20 */	blr 
