lbl_80305688:
/* 80305688  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8030568C  7C 08 02 A6 */	mflr r0
/* 80305690  90 01 00 84 */	stw r0, 0x84(r1)
/* 80305694  39 61 00 80 */	addi r11, r1, 0x80
/* 80305698  48 05 CB 41 */	bl _savegpr_28
/* 8030569C  3C 60 80 3A */	lis r3, lit_2555@ha
/* 803056A0  39 03 1D 50 */	addi r8, r3, lit_2555@l
/* 803056A4  38 E1 00 24 */	addi r7, r1, 0x24
/* 803056A8  38 C8 FF FC */	addi r6, r8, -4
/* 803056AC  38 00 00 04 */	li r0, 4
/* 803056B0  7C 09 03 A6 */	mtctr r0
lbl_803056B4:
/* 803056B4  80 66 00 04 */	lwz r3, 4(r6)
/* 803056B8  84 06 00 08 */	lwzu r0, 8(r6)
/* 803056BC  90 67 00 04 */	stw r3, 4(r7)
/* 803056C0  94 07 00 08 */	stwu r0, 8(r7)
/* 803056C4  42 00 FF F0 */	bdnz lbl_803056B4
/* 803056C8  38 E1 00 04 */	addi r7, r1, 4
/* 803056CC  38 C8 00 1C */	addi r6, r8, 0x1c
/* 803056D0  38 00 00 04 */	li r0, 4
/* 803056D4  7C 09 03 A6 */	mtctr r0
lbl_803056D8:
/* 803056D8  80 66 00 04 */	lwz r3, 4(r6)
/* 803056DC  84 06 00 08 */	lwzu r0, 8(r6)
/* 803056E0  90 67 00 04 */	stw r3, 4(r7)
/* 803056E4  94 07 00 08 */	stwu r0, 8(r7)
/* 803056E8  42 00 FF F0 */	bdnz lbl_803056D8
/* 803056EC  38 E1 00 44 */	addi r7, r1, 0x44
/* 803056F0  38 C8 00 3C */	addi r6, r8, 0x3c
/* 803056F4  38 00 00 05 */	li r0, 5
/* 803056F8  7C 09 03 A6 */	mtctr r0
lbl_803056FC:
/* 803056FC  80 66 00 04 */	lwz r3, 4(r6)
/* 80305700  84 06 00 08 */	lwzu r0, 8(r6)
/* 80305704  90 67 00 04 */	stw r3, 4(r7)
/* 80305708  94 07 00 08 */	stwu r0, 8(r7)
/* 8030570C  42 00 FF F0 */	bdnz lbl_803056FC
/* 80305710  54 A6 10 3A */	slwi r6, r5, 2
/* 80305714  38 61 00 28 */	addi r3, r1, 0x28
/* 80305718  7C 03 30 AE */	lbzx r0, r3, r6
/* 8030571C  54 07 25 36 */	rlwinm r7, r0, 4, 0x14, 0x1b
/* 80305720  38 61 00 29 */	addi r3, r1, 0x29
/* 80305724  7C 03 30 AE */	lbzx r0, r3, r6
/* 80305728  7C E0 03 78 */	or r0, r7, r0
/* 8030572C  98 04 00 02 */	stb r0, 2(r4)
/* 80305730  38 61 00 2A */	addi r3, r1, 0x2a
/* 80305734  7C 03 30 AE */	lbzx r0, r3, r6
/* 80305738  54 07 25 36 */	rlwinm r7, r0, 4, 0x14, 0x1b
/* 8030573C  38 61 00 2B */	addi r3, r1, 0x2b
/* 80305740  7C 03 30 AE */	lbzx r0, r3, r6
/* 80305744  7C E0 03 78 */	or r0, r7, r0
/* 80305748  98 04 00 03 */	stb r0, 3(r4)
/* 8030574C  1C A5 00 05 */	mulli r5, r5, 5
/* 80305750  38 E1 00 4C */	addi r7, r1, 0x4c
/* 80305754  7C 67 28 AE */	lbzx r3, r7, r5
/* 80305758  39 01 00 4B */	addi r8, r1, 0x4b
/* 8030575C  7C 08 28 AE */	lbzx r0, r8, r5
/* 80305760  39 21 00 4A */	addi r9, r1, 0x4a
/* 80305764  7F 89 28 AE */	lbzx r28, r9, r5
/* 80305768  39 41 00 49 */	addi r10, r1, 0x49
/* 8030576C  7F AA 28 AE */	lbzx r29, r10, r5
/* 80305770  39 61 00 48 */	addi r11, r1, 0x48
/* 80305774  7F EB 28 AE */	lbzx r31, r11, r5
/* 80305778  89 84 00 01 */	lbz r12, 1(r4)
/* 8030577C  55 9E 07 B8 */	rlwinm r30, r12, 0, 0x1e, 0x1c
/* 80305780  57 EC 10 3A */	slwi r12, r31, 2
/* 80305784  7F CC 63 78 */	or r12, r30, r12
/* 80305788  99 84 00 01 */	stb r12, 1(r4)
/* 8030578C  28 1F 00 01 */	cmplwi r31, 1
/* 80305790  41 81 00 2C */	bgt lbl_803057BC
/* 80305794  89 84 00 01 */	lbz r12, 1(r4)
/* 80305798  55 9E 07 32 */	rlwinm r30, r12, 0, 0x1c, 0x19
/* 8030579C  57 8C 25 36 */	rlwinm r12, r28, 4, 0x14, 0x1b
/* 803057A0  7F CC 63 78 */	or r12, r30, r12
/* 803057A4  99 84 00 01 */	stb r12, 1(r4)
/* 803057A8  89 84 00 01 */	lbz r12, 1(r4)
/* 803057AC  55 8C 00 3A */	rlwinm r12, r12, 0, 0, 0x1d
/* 803057B0  7D 8C EB 78 */	or r12, r12, r29
/* 803057B4  99 84 00 01 */	stb r12, 1(r4)
/* 803057B8  48 00 00 20 */	b lbl_803057D8
lbl_803057BC:
/* 803057BC  89 84 00 01 */	lbz r12, 1(r4)
/* 803057C0  53 EC 1E B6 */	rlwimi r12, r31, 3, 0x1a, 0x1b
/* 803057C4  99 84 00 01 */	stb r12, 1(r4)
/* 803057C8  89 84 00 01 */	lbz r12, 1(r4)
/* 803057CC  55 8C 00 3A */	rlwinm r12, r12, 0, 0, 0x1d
/* 803057D0  61 8C 00 03 */	ori r12, r12, 3
/* 803057D4  99 84 00 01 */	stb r12, 1(r4)
lbl_803057D8:
/* 803057D8  89 84 00 01 */	lbz r12, 1(r4)
/* 803057DC  55 8C 07 76 */	rlwinm r12, r12, 0, 0x1d, 0x1b
/* 803057E0  54 00 1D 78 */	rlwinm r0, r0, 3, 0x15, 0x1c
/* 803057E4  7D 80 03 78 */	or r0, r12, r0
/* 803057E8  98 04 00 01 */	stb r0, 1(r4)
/* 803057EC  89 84 00 01 */	lbz r12, 1(r4)
/* 803057F0  54 60 34 B2 */	rlwinm r0, r3, 6, 0x12, 0x19
/* 803057F4  51 80 06 BE */	rlwimi r0, r12, 0, 0x1a, 0x1f
/* 803057F8  98 04 00 01 */	stb r0, 1(r4)
/* 803057FC  38 61 00 0B */	addi r3, r1, 0xb
/* 80305800  7C 03 30 AE */	lbzx r0, r3, r6
/* 80305804  38 61 00 0A */	addi r3, r1, 0xa
/* 80305808  7F C3 30 AE */	lbzx r30, r3, r6
/* 8030580C  38 61 00 09 */	addi r3, r1, 9
/* 80305810  7F E3 30 AE */	lbzx r31, r3, r6
/* 80305814  89 84 00 06 */	lbz r12, 6(r4)
/* 80305818  38 61 00 08 */	addi r3, r1, 8
/* 8030581C  7C 63 30 AE */	lbzx r3, r3, r6
/* 80305820  54 63 2C F4 */	rlwinm r3, r3, 5, 0x13, 0x1a
/* 80305824  51 83 06 FE */	rlwimi r3, r12, 0, 0x1b, 0x1f
/* 80305828  98 64 00 06 */	stb r3, 6(r4)
/* 8030582C  88 64 00 06 */	lbz r3, 6(r4)
/* 80305830  54 66 07 B4 */	rlwinm r6, r3, 0, 0x1e, 0x1a
/* 80305834  57 E3 10 3A */	slwi r3, r31, 2
/* 80305838  7C C3 1B 78 */	or r3, r6, r3
/* 8030583C  98 64 00 06 */	stb r3, 6(r4)
/* 80305840  88 64 00 06 */	lbz r3, 6(r4)
/* 80305844  54 66 00 3A */	rlwinm r6, r3, 0, 0, 0x1d
/* 80305848  7F C3 0E 70 */	srawi r3, r30, 1
/* 8030584C  7C C3 1B 78 */	or r3, r6, r3
/* 80305850  98 64 00 06 */	stb r3, 6(r4)
/* 80305854  88 C4 00 07 */	lbz r6, 7(r4)
/* 80305858  57 C3 38 30 */	slwi r3, r30, 7
/* 8030585C  50 C3 06 7E */	rlwimi r3, r6, 0, 0x19, 0x1f
/* 80305860  98 64 00 07 */	stb r3, 7(r4)
/* 80305864  88 64 00 07 */	lbz r3, 7(r4)
/* 80305868  54 63 07 30 */	rlwinm r3, r3, 0, 0x1c, 0x18
/* 8030586C  54 00 20 36 */	slwi r0, r0, 4
/* 80305870  7C 60 03 78 */	or r0, r3, r0
/* 80305874  98 04 00 07 */	stb r0, 7(r4)
/* 80305878  7C 07 28 AE */	lbzx r0, r7, r5
/* 8030587C  7D 88 28 AE */	lbzx r12, r8, r5
/* 80305880  7D 09 28 AE */	lbzx r8, r9, r5
/* 80305884  7C EA 28 AE */	lbzx r7, r10, r5
/* 80305888  7C CB 28 AE */	lbzx r6, r11, r5
/* 8030588C  88 64 00 05 */	lbz r3, 5(r4)
/* 80305890  54 65 07 B8 */	rlwinm r5, r3, 0, 0x1e, 0x1c
/* 80305894  54 C3 10 3A */	slwi r3, r6, 2
/* 80305898  7C A3 1B 78 */	or r3, r5, r3
/* 8030589C  98 64 00 05 */	stb r3, 5(r4)
/* 803058A0  28 06 00 01 */	cmplwi r6, 1
/* 803058A4  41 81 00 2C */	bgt lbl_803058D0
/* 803058A8  88 64 00 05 */	lbz r3, 5(r4)
/* 803058AC  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 803058B0  7C 63 3B 78 */	or r3, r3, r7
/* 803058B4  98 64 00 05 */	stb r3, 5(r4)
/* 803058B8  88 64 00 05 */	lbz r3, 5(r4)
/* 803058BC  54 65 07 32 */	rlwinm r5, r3, 0, 0x1c, 0x19
/* 803058C0  55 03 25 36 */	rlwinm r3, r8, 4, 0x14, 0x1b
/* 803058C4  7C A3 1B 78 */	or r3, r5, r3
/* 803058C8  98 64 00 05 */	stb r3, 5(r4)
/* 803058CC  48 00 00 20 */	b lbl_803058EC
lbl_803058D0:
/* 803058D0  88 64 00 05 */	lbz r3, 5(r4)
/* 803058D4  50 C3 1E B6 */	rlwimi r3, r6, 3, 0x1a, 0x1b
/* 803058D8  98 64 00 05 */	stb r3, 5(r4)
/* 803058DC  88 64 00 05 */	lbz r3, 5(r4)
/* 803058E0  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 803058E4  60 63 00 03 */	ori r3, r3, 3
/* 803058E8  98 64 00 05 */	stb r3, 5(r4)
lbl_803058EC:
/* 803058EC  88 64 00 05 */	lbz r3, 5(r4)
/* 803058F0  54 65 07 76 */	rlwinm r5, r3, 0, 0x1d, 0x1b
/* 803058F4  55 83 1D 78 */	rlwinm r3, r12, 3, 0x15, 0x1c
/* 803058F8  7C A3 1B 78 */	or r3, r5, r3
/* 803058FC  98 64 00 05 */	stb r3, 5(r4)
/* 80305900  88 64 00 05 */	lbz r3, 5(r4)
/* 80305904  54 00 34 B2 */	rlwinm r0, r0, 6, 0x12, 0x19
/* 80305908  50 60 06 BE */	rlwimi r0, r3, 0, 0x1a, 0x1f
/* 8030590C  98 04 00 05 */	stb r0, 5(r4)
/* 80305910  39 61 00 80 */	addi r11, r1, 0x80
/* 80305914  48 05 C9 11 */	bl _restgpr_28
/* 80305918  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8030591C  7C 08 03 A6 */	mtlr r0
/* 80305920  38 21 00 80 */	addi r1, r1, 0x80
/* 80305924  4E 80 00 20 */	blr 
