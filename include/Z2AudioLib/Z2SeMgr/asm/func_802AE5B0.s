/* 802AE5B0 002AB4F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802AE5B4 002AB4F4  7C 08 02 A6 */	mflr r0
/* 802AE5B8 002AB4F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802AE5BC 002AB4FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802AE5C0 002AB500  7C 9F 23 78 */	mr r31, r4
/* 802AE5C4 002AB504  80 AD 86 04 */	lwz r5, lbl_80450B84-_SDA_BASE_(r13)
/* 802AE5C8 002AB508  38 80 00 00 */	li r4, 0
/* 802AE5CC 002AB50C  80 05 00 08 */	lwz r0, 8(r5)
/* 802AE5D0 002AB510  28 00 00 00 */	cmplwi r0, 0
/* 802AE5D4 002AB514  40 82 00 10 */	bne lbl_802AE5E4
/* 802AE5D8 002AB518  88 05 00 BA */	lbz r0, 0xba(r5)
/* 802AE5DC 002AB51C  28 00 00 00 */	cmplwi r0, 0
/* 802AE5E0 002AB520  41 82 00 08 */	beq lbl_802AE5E8
lbl_802AE5E4:
/* 802AE5E4 002AB524  38 80 00 01 */	li r4, 1
lbl_802AE5E8:
/* 802AE5E8 002AB528  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802AE5EC 002AB52C  41 82 00 F0 */	beq lbl_802AE6DC
/* 802AE5F0 002AB530  80 BF 00 00 */	lwz r5, 0(r31)
/* 802AE5F4 002AB534  3C 80 00 06 */	lis r4, 6
/* 802AE5F8 002AB538  7C 05 20 00 */	cmpw r5, r4
/* 802AE5FC 002AB53C  41 82 00 D0 */	beq lbl_802AE6CC
/* 802AE600 002AB540  40 80 00 68 */	bge lbl_802AE668
/* 802AE604 002AB544  2C 05 00 67 */	cmpwi r5, 0x67
/* 802AE608 002AB548  40 80 00 2C */	bge lbl_802AE634
/* 802AE60C 002AB54C  2C 05 00 5F */	cmpwi r5, 0x5f
/* 802AE610 002AB550  40 80 00 10 */	bge lbl_802AE620
/* 802AE614 002AB554  2C 05 00 21 */	cmpwi r5, 0x21
/* 802AE618 002AB558  41 82 00 B4 */	beq lbl_802AE6CC
/* 802AE61C 002AB55C  48 00 00 B8 */	b lbl_802AE6D4
lbl_802AE620:
/* 802AE620 002AB560  2C 05 00 65 */	cmpwi r5, 0x65
/* 802AE624 002AB564  40 80 00 A8 */	bge lbl_802AE6CC
/* 802AE628 002AB568  2C 05 00 61 */	cmpwi r5, 0x61
/* 802AE62C 002AB56C  40 80 00 A8 */	bge lbl_802AE6D4
/* 802AE630 002AB570  48 00 00 9C */	b lbl_802AE6CC
lbl_802AE634:
/* 802AE634 002AB574  3C 60 00 05 */	lis r3, 0x00050008@ha
/* 802AE638 002AB578  38 03 00 08 */	addi r0, r3, 0x00050008@l
/* 802AE63C 002AB57C  7C 05 00 00 */	cmpw r5, r0
/* 802AE640 002AB580  40 80 00 18 */	bge lbl_802AE658
/* 802AE644 002AB584  3C 60 00 02 */	lis r3, 0x00020084@ha
/* 802AE648 002AB588  38 03 00 84 */	addi r0, r3, 0x00020084@l
/* 802AE64C 002AB58C  7C 05 00 00 */	cmpw r5, r0
/* 802AE650 002AB590  41 82 00 7C */	beq lbl_802AE6CC
/* 802AE654 002AB594  48 00 00 80 */	b lbl_802AE6D4
lbl_802AE658:
/* 802AE658 002AB598  38 03 00 0A */	addi r0, r3, 0xa
/* 802AE65C 002AB59C  7C 05 00 00 */	cmpw r5, r0
/* 802AE660 002AB5A0  40 80 00 74 */	bge lbl_802AE6D4
/* 802AE664 002AB5A4  48 00 00 68 */	b lbl_802AE6CC
lbl_802AE668:
/* 802AE668 002AB5A8  3C 60 00 07 */	lis r3, 0x000702C6@ha
/* 802AE66C 002AB5AC  38 03 02 C6 */	addi r0, r3, 0x000702C6@l
/* 802AE670 002AB5B0  7C 05 00 00 */	cmpw r5, r0
/* 802AE674 002AB5B4  41 82 00 58 */	beq lbl_802AE6CC
/* 802AE678 002AB5B8  40 80 00 24 */	bge lbl_802AE69C
/* 802AE67C 002AB5BC  38 03 00 CB */	addi r0, r3, 0xcb
/* 802AE680 002AB5C0  7C 05 00 00 */	cmpw r5, r0
/* 802AE684 002AB5C4  41 82 00 48 */	beq lbl_802AE6CC
/* 802AE688 002AB5C8  40 80 00 4C */	bge lbl_802AE6D4
/* 802AE68C 002AB5CC  38 04 00 5C */	addi r0, r4, 0x5c
/* 802AE690 002AB5D0  7C 05 00 00 */	cmpw r5, r0
/* 802AE694 002AB5D4  41 82 00 38 */	beq lbl_802AE6CC
/* 802AE698 002AB5D8  48 00 00 3C */	b lbl_802AE6D4
lbl_802AE69C:
/* 802AE69C 002AB5DC  3C 60 00 08 */	lis r3, 0x000802AF@ha
/* 802AE6A0 002AB5E0  38 03 02 AF */	addi r0, r3, 0x000802AF@l
/* 802AE6A4 002AB5E4  7C 05 00 00 */	cmpw r5, r0
/* 802AE6A8 002AB5E8  41 82 00 24 */	beq lbl_802AE6CC
/* 802AE6AC 002AB5EC  40 80 00 28 */	bge lbl_802AE6D4
/* 802AE6B0 002AB5F0  38 03 00 23 */	addi r0, r3, 0x23
/* 802AE6B4 002AB5F4  7C 05 00 00 */	cmpw r5, r0
/* 802AE6B8 002AB5F8  40 80 00 1C */	bge lbl_802AE6D4
/* 802AE6BC 002AB5FC  38 03 00 1F */	addi r0, r3, 0x1f
/* 802AE6C0 002AB600  7C 05 00 00 */	cmpw r5, r0
/* 802AE6C4 002AB604  40 80 00 08 */	bge lbl_802AE6CC
/* 802AE6C8 002AB608  48 00 00 0C */	b lbl_802AE6D4
lbl_802AE6CC:
/* 802AE6CC 002AB60C  38 60 00 00 */	li r3, 0
/* 802AE6D0 002AB610  48 00 04 20 */	b lbl_802AEAF0
lbl_802AE6D4:
/* 802AE6D4 002AB614  38 60 00 01 */	li r3, 1
/* 802AE6D8 002AB618  48 00 04 18 */	b lbl_802AEAF0
lbl_802AE6DC:
/* 802AE6DC 002AB61C  80 1F 00 00 */	lwz r0, 0(r31)
/* 802AE6E0 002AB620  3C C0 00 07 */	lis r6, 0x00070128@ha
/* 802AE6E4 002AB624  38 86 01 28 */	addi r4, r6, 0x00070128@l
/* 802AE6E8 002AB628  7C 00 20 00 */	cmpw r0, r4
/* 802AE6EC 002AB62C  41 82 01 C8 */	beq lbl_802AE8B4
/* 802AE6F0 002AB630  40 80 00 E8 */	bge lbl_802AE7D8
/* 802AE6F4 002AB634  3C A0 00 06 */	lis r5, 0x0006000A@ha
/* 802AE6F8 002AB638  38 85 00 0A */	addi r4, r5, 0x0006000A@l
/* 802AE6FC 002AB63C  7C 00 20 00 */	cmpw r0, r4
/* 802AE700 002AB640  41 82 02 94 */	beq lbl_802AE994
/* 802AE704 002AB644  40 80 00 74 */	bge lbl_802AE778
/* 802AE708 002AB648  3C C0 00 04 */	lis r6, 0x00040022@ha
/* 802AE70C 002AB64C  38 86 00 22 */	addi r4, r6, 0x00040022@l
/* 802AE710 002AB650  7C 00 20 00 */	cmpw r0, r4
/* 802AE714 002AB654  41 82 03 D8 */	beq lbl_802AEAEC
/* 802AE718 002AB658  40 80 00 38 */	bge lbl_802AE750
/* 802AE71C 002AB65C  3C 80 00 02 */	lis r4, 0x0002002C@ha
/* 802AE720 002AB660  38 A4 00 2C */	addi r5, r4, 0x0002002C@l
/* 802AE724 002AB664  7C 00 28 00 */	cmpw r0, r5
/* 802AE728 002AB668  41 82 01 CC */	beq lbl_802AE8F4
/* 802AE72C 002AB66C  40 80 00 14 */	bge lbl_802AE740
/* 802AE730 002AB670  38 84 00 2B */	addi r4, r4, 0x2b
/* 802AE734 002AB674  7C 00 20 00 */	cmpw r0, r4
/* 802AE738 002AB678  40 80 01 FC */	bge lbl_802AE934
/* 802AE73C 002AB67C  48 00 03 B0 */	b lbl_802AEAEC
lbl_802AE740:
/* 802AE740 002AB680  38 86 00 21 */	addi r4, r6, 0x21
/* 802AE744 002AB684  7C 00 20 00 */	cmpw r0, r4
/* 802AE748 002AB688  40 80 02 0C */	bge lbl_802AE954
/* 802AE74C 002AB68C  48 00 03 A0 */	b lbl_802AEAEC
lbl_802AE750:
/* 802AE750 002AB690  7C 00 28 00 */	cmpw r0, r5
/* 802AE754 002AB694  40 80 00 14 */	bge lbl_802AE768
/* 802AE758 002AB698  38 86 00 24 */	addi r4, r6, 0x24
/* 802AE75C 002AB69C  7C 00 20 00 */	cmpw r0, r4
/* 802AE760 002AB6A0  40 80 03 8C */	bge lbl_802AEAEC
/* 802AE764 002AB6A4  48 00 01 B0 */	b lbl_802AE914
lbl_802AE768:
/* 802AE768 002AB6A8  38 65 00 02 */	addi r3, r5, 2
/* 802AE76C 002AB6AC  7C 00 18 00 */	cmpw r0, r3
/* 802AE770 002AB6B0  40 80 03 7C */	bge lbl_802AEAEC
/* 802AE774 002AB6B4  48 00 01 28 */	b lbl_802AE89C
lbl_802AE778:
/* 802AE778 002AB6B8  38 86 00 8C */	addi r4, r6, 0x8c
/* 802AE77C 002AB6BC  7C 00 20 00 */	cmpw r0, r4
/* 802AE780 002AB6C0  41 82 02 D0 */	beq lbl_802AEA50
/* 802AE784 002AB6C4  40 80 00 24 */	bge lbl_802AE7A8
/* 802AE788 002AB6C8  38 85 00 28 */	addi r4, r5, 0x28
/* 802AE78C 002AB6CC  7C 00 20 00 */	cmpw r0, r4
/* 802AE790 002AB6D0  41 82 02 38 */	beq lbl_802AE9C8
/* 802AE794 002AB6D4  41 80 03 58 */	blt lbl_802AEAEC
/* 802AE798 002AB6D8  38 86 00 8B */	addi r4, r6, 0x8b
/* 802AE79C 002AB6DC  7C 00 20 00 */	cmpw r0, r4
/* 802AE7A0 002AB6E0  40 80 02 90 */	bge lbl_802AEA30
/* 802AE7A4 002AB6E4  48 00 03 48 */	b lbl_802AEAEC
lbl_802AE7A8:
/* 802AE7A8 002AB6E8  38 86 00 AF */	addi r4, r6, 0xaf
/* 802AE7AC 002AB6EC  7C 00 20 00 */	cmpw r0, r4
/* 802AE7B0 002AB6F0  41 82 03 3C */	beq lbl_802AEAEC
/* 802AE7B4 002AB6F4  40 80 00 14 */	bge lbl_802AE7C8
/* 802AE7B8 002AB6F8  38 86 00 AE */	addi r4, r6, 0xae
/* 802AE7BC 002AB6FC  7C 00 20 00 */	cmpw r0, r4
/* 802AE7C0 002AB700  40 80 02 50 */	bge lbl_802AEA10
/* 802AE7C4 002AB704  48 00 03 28 */	b lbl_802AEAEC
lbl_802AE7C8:
/* 802AE7C8 002AB708  38 86 00 B1 */	addi r4, r6, 0xb1
/* 802AE7CC 002AB70C  7C 00 20 00 */	cmpw r0, r4
/* 802AE7D0 002AB710  40 80 03 1C */	bge lbl_802AEAEC
/* 802AE7D4 002AB714  48 00 02 7C */	b lbl_802AEA50
lbl_802AE7D8:
/* 802AE7D8 002AB718  38 86 03 20 */	addi r4, r6, 0x320
/* 802AE7DC 002AB71C  7C 00 20 00 */	cmpw r0, r4
/* 802AE7E0 002AB720  41 82 02 30 */	beq lbl_802AEA10
/* 802AE7E4 002AB724  40 80 00 54 */	bge lbl_802AE838
/* 802AE7E8 002AB728  38 86 01 CA */	addi r4, r6, 0x1ca
/* 802AE7EC 002AB72C  7C 00 20 00 */	cmpw r0, r4
/* 802AE7F0 002AB730  41 82 02 40 */	beq lbl_802AEA30
/* 802AE7F4 002AB734  40 80 00 24 */	bge lbl_802AE818
/* 802AE7F8 002AB738  38 86 01 C7 */	addi r4, r6, 0x1c7
/* 802AE7FC 002AB73C  7C 00 20 00 */	cmpw r0, r4
/* 802AE800 002AB740  41 82 02 70 */	beq lbl_802AEA70
/* 802AE804 002AB744  40 80 02 E8 */	bge lbl_802AEAEC
/* 802AE808 002AB748  38 86 01 2B */	addi r4, r6, 0x12b
/* 802AE80C 002AB74C  7C 00 20 00 */	cmpw r0, r4
/* 802AE810 002AB750  41 82 00 C4 */	beq lbl_802AE8D4
/* 802AE814 002AB754  48 00 02 D8 */	b lbl_802AEAEC
lbl_802AE818:
/* 802AE818 002AB758  38 86 01 D8 */	addi r4, r6, 0x1d8
/* 802AE81C 002AB75C  7C 00 20 00 */	cmpw r0, r4
/* 802AE820 002AB760  41 82 02 10 */	beq lbl_802AEA30
/* 802AE824 002AB764  40 80 02 C8 */	bge lbl_802AEAEC
/* 802AE828 002AB768  38 86 01 CD */	addi r4, r6, 0x1cd
/* 802AE82C 002AB76C  7C 00 20 00 */	cmpw r0, r4
/* 802AE830 002AB770  41 82 02 60 */	beq lbl_802AEA90
/* 802AE834 002AB774  48 00 02 B8 */	b lbl_802AEAEC
lbl_802AE838:
/* 802AE838 002AB778  38 86 04 4D */	addi r4, r6, 0x44d
/* 802AE83C 002AB77C  7C 00 20 00 */	cmpw r0, r4
/* 802AE840 002AB780  41 82 02 70 */	beq lbl_802AEAB0
/* 802AE844 002AB784  40 80 00 34 */	bge lbl_802AE878
/* 802AE848 002AB788  38 86 03 7A */	addi r4, r6, 0x37a
/* 802AE84C 002AB78C  7C 00 20 00 */	cmpw r0, r4
/* 802AE850 002AB790  41 82 00 64 */	beq lbl_802AE8B4
/* 802AE854 002AB794  40 80 00 14 */	bge lbl_802AE868
/* 802AE858 002AB798  38 86 03 79 */	addi r4, r6, 0x379
/* 802AE85C 002AB79C  7C 00 20 00 */	cmpw r0, r4
/* 802AE860 002AB7A0  40 80 00 74 */	bge lbl_802AE8D4
/* 802AE864 002AB7A4  48 00 02 88 */	b lbl_802AEAEC
lbl_802AE868:
/* 802AE868 002AB7A8  38 86 04 4C */	addi r4, r6, 0x44c
/* 802AE86C 002AB7AC  7C 00 20 00 */	cmpw r0, r4
/* 802AE870 002AB7B0  40 80 02 60 */	bge lbl_802AEAD0
/* 802AE874 002AB7B4  48 00 02 78 */	b lbl_802AEAEC
lbl_802AE878:
/* 802AE878 002AB7B8  3C 80 00 08 */	lis r4, 0x000800F6@ha
/* 802AE87C 002AB7BC  38 84 00 F6 */	addi r4, r4, 0x000800F6@l
/* 802AE880 002AB7C0  7C 00 20 00 */	cmpw r0, r4
/* 802AE884 002AB7C4  41 82 00 F0 */	beq lbl_802AE974
/* 802AE888 002AB7C8  40 80 02 64 */	bge lbl_802AEAEC
/* 802AE88C 002AB7CC  38 86 04 51 */	addi r4, r6, 0x451
/* 802AE890 002AB7D0  7C 00 20 00 */	cmpw r0, r4
/* 802AE894 002AB7D4  40 80 02 58 */	bge lbl_802AEAEC
/* 802AE898 002AB7D8  48 00 02 38 */	b lbl_802AEAD0
lbl_802AE89C:
/* 802AE89C 002AB7DC  80 6D 86 00 */	lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802AE8A0 002AB7E0  88 03 00 1D */	lbz r0, 0x1d(r3)
/* 802AE8A4 002AB7E4  28 00 00 00 */	cmplwi r0, 0
/* 802AE8A8 002AB7E8  40 82 02 44 */	bne lbl_802AEAEC
/* 802AE8AC 002AB7EC  38 60 00 01 */	li r3, 1
/* 802AE8B0 002AB7F0  48 00 02 40 */	b lbl_802AEAF0
lbl_802AE8B4:
/* 802AE8B4 002AB7F4  88 03 03 C0 */	lbz r0, 0x3c0(r3)
/* 802AE8B8 002AB7F8  28 00 00 00 */	cmplwi r0, 0
/* 802AE8BC 002AB7FC  41 82 00 0C */	beq lbl_802AE8C8
/* 802AE8C0 002AB800  38 60 00 01 */	li r3, 1
/* 802AE8C4 002AB804  48 00 02 2C */	b lbl_802AEAF0
lbl_802AE8C8:
/* 802AE8C8 002AB808  38 00 00 04 */	li r0, 4
/* 802AE8CC 002AB80C  98 03 03 C0 */	stb r0, 0x3c0(r3)
/* 802AE8D0 002AB810  48 00 02 1C */	b lbl_802AEAEC
lbl_802AE8D4:
/* 802AE8D4 002AB814  88 03 03 C1 */	lbz r0, 0x3c1(r3)
/* 802AE8D8 002AB818  28 00 00 00 */	cmplwi r0, 0
/* 802AE8DC 002AB81C  41 82 00 0C */	beq lbl_802AE8E8
/* 802AE8E0 002AB820  38 60 00 01 */	li r3, 1
/* 802AE8E4 002AB824  48 00 02 0C */	b lbl_802AEAF0
lbl_802AE8E8:
/* 802AE8E8 002AB828  38 00 00 04 */	li r0, 4
/* 802AE8EC 002AB82C  98 03 03 C1 */	stb r0, 0x3c1(r3)
/* 802AE8F0 002AB830  48 00 01 FC */	b lbl_802AEAEC
lbl_802AE8F4:
/* 802AE8F4 002AB834  88 03 03 C2 */	lbz r0, 0x3c2(r3)
/* 802AE8F8 002AB838  28 00 00 00 */	cmplwi r0, 0
/* 802AE8FC 002AB83C  41 82 00 0C */	beq lbl_802AE908
/* 802AE900 002AB840  38 60 00 01 */	li r3, 1
/* 802AE904 002AB844  48 00 01 EC */	b lbl_802AEAF0
lbl_802AE908:
/* 802AE908 002AB848  38 00 00 02 */	li r0, 2
/* 802AE90C 002AB84C  98 03 03 C2 */	stb r0, 0x3c2(r3)
/* 802AE910 002AB850  48 00 01 DC */	b lbl_802AEAEC
lbl_802AE914:
/* 802AE914 002AB854  88 03 03 C9 */	lbz r0, 0x3c9(r3)
/* 802AE918 002AB858  28 00 00 00 */	cmplwi r0, 0
/* 802AE91C 002AB85C  41 82 00 0C */	beq lbl_802AE928
/* 802AE920 002AB860  38 60 00 01 */	li r3, 1
/* 802AE924 002AB864  48 00 01 CC */	b lbl_802AEAF0
lbl_802AE928:
/* 802AE928 002AB868  38 00 00 01 */	li r0, 1
/* 802AE92C 002AB86C  98 03 03 C9 */	stb r0, 0x3c9(r3)
/* 802AE930 002AB870  48 00 01 BC */	b lbl_802AEAEC
lbl_802AE934:
/* 802AE934 002AB874  88 03 03 C3 */	lbz r0, 0x3c3(r3)
/* 802AE938 002AB878  28 00 00 00 */	cmplwi r0, 0
/* 802AE93C 002AB87C  41 82 00 0C */	beq lbl_802AE948
/* 802AE940 002AB880  38 60 00 01 */	li r3, 1
/* 802AE944 002AB884  48 00 01 AC */	b lbl_802AEAF0
lbl_802AE948:
/* 802AE948 002AB888  38 00 00 04 */	li r0, 4
/* 802AE94C 002AB88C  98 03 03 C3 */	stb r0, 0x3c3(r3)
/* 802AE950 002AB890  48 00 01 9C */	b lbl_802AEAEC
lbl_802AE954:
/* 802AE954 002AB894  88 03 03 C4 */	lbz r0, 0x3c4(r3)
/* 802AE958 002AB898  28 00 00 00 */	cmplwi r0, 0
/* 802AE95C 002AB89C  41 82 00 0C */	beq lbl_802AE968
/* 802AE960 002AB8A0  38 60 00 01 */	li r3, 1
/* 802AE964 002AB8A4  48 00 01 8C */	b lbl_802AEAF0
lbl_802AE968:
/* 802AE968 002AB8A8  38 00 00 02 */	li r0, 2
/* 802AE96C 002AB8AC  98 03 03 C4 */	stb r0, 0x3c4(r3)
/* 802AE970 002AB8B0  48 00 01 7C */	b lbl_802AEAEC
lbl_802AE974:
/* 802AE974 002AB8B4  88 03 03 C5 */	lbz r0, 0x3c5(r3)
/* 802AE978 002AB8B8  28 00 00 00 */	cmplwi r0, 0
/* 802AE97C 002AB8BC  41 82 00 0C */	beq lbl_802AE988
/* 802AE980 002AB8C0  38 60 00 01 */	li r3, 1
/* 802AE984 002AB8C4  48 00 01 6C */	b lbl_802AEAF0
lbl_802AE988:
/* 802AE988 002AB8C8  38 00 00 02 */	li r0, 2
/* 802AE98C 002AB8CC  98 03 03 C5 */	stb r0, 0x3c5(r3)
/* 802AE990 002AB8D0  48 00 01 5C */	b lbl_802AEAEC
lbl_802AE994:
/* 802AE994 002AB8D4  88 83 03 CA */	lbz r4, 0x3ca(r3)
/* 802AE998 002AB8D8  28 04 00 00 */	cmplwi r4, 0
/* 802AE99C 002AB8DC  41 82 00 0C */	beq lbl_802AE9A8
/* 802AE9A0 002AB8E0  38 60 00 01 */	li r3, 1
/* 802AE9A4 002AB8E4  48 00 01 4C */	b lbl_802AEAF0
lbl_802AE9A8:
/* 802AE9A8 002AB8E8  38 80 00 01 */	li r4, 1
/* 802AE9AC 002AB8EC  98 83 03 CA */	stb r4, 0x3ca(r3)
/* 802AE9B0 002AB8F0  90 01 00 10 */	stw r0, 0x10(r1)
/* 802AE9B4 002AB8F4  80 6D 85 E0 */	lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802AE9B8 002AB8F8  38 81 00 10 */	addi r4, r1, 0x10
/* 802AE9BC 002AB8FC  C0 22 BE A8 */	lfs f1, lbl_804558A8-_SDA2_BASE_(r2)
/* 802AE9C0 002AB900  4B FF C0 29 */	bl Z2SoundMgr_NS_multiVolumeSoundID
/* 802AE9C4 002AB904  48 00 01 28 */	b lbl_802AEAEC
lbl_802AE9C8:
/* 802AE9C8 002AB908  88 83 03 CB */	lbz r4, 0x3cb(r3)
/* 802AE9CC 002AB90C  28 04 00 00 */	cmplwi r4, 0
/* 802AE9D0 002AB910  41 82 00 0C */	beq lbl_802AE9DC
/* 802AE9D4 002AB914  38 60 00 01 */	li r3, 1
/* 802AE9D8 002AB918  48 00 01 18 */	b lbl_802AEAF0
lbl_802AE9DC:
/* 802AE9DC 002AB91C  38 80 00 01 */	li r4, 1
/* 802AE9E0 002AB920  98 83 03 CB */	stb r4, 0x3cb(r3)
/* 802AE9E4 002AB924  90 01 00 0C */	stw r0, 0xc(r1)
/* 802AE9E8 002AB928  80 6D 85 E0 */	lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802AE9EC 002AB92C  38 81 00 0C */	addi r4, r1, 0xc
/* 802AE9F0 002AB930  4B FF BD ED */	bl Z2SoundMgr_NS_stopSoundID
/* 802AE9F4 002AB934  80 1F 00 00 */	lwz r0, 0(r31)
/* 802AE9F8 002AB938  90 01 00 08 */	stw r0, 8(r1)
/* 802AE9FC 002AB93C  80 6D 85 E0 */	lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802AEA00 002AB940  38 81 00 08 */	addi r4, r1, 8
/* 802AEA04 002AB944  C0 22 BE A8 */	lfs f1, lbl_804558A8-_SDA2_BASE_(r2)
/* 802AEA08 002AB948  4B FF BF E1 */	bl Z2SoundMgr_NS_multiVolumeSoundID
/* 802AEA0C 002AB94C  48 00 00 E0 */	b lbl_802AEAEC
lbl_802AEA10:
/* 802AEA10 002AB950  88 03 03 C6 */	lbz r0, 0x3c6(r3)
/* 802AEA14 002AB954  28 00 00 00 */	cmplwi r0, 0
/* 802AEA18 002AB958  41 82 00 0C */	beq lbl_802AEA24
/* 802AEA1C 002AB95C  38 60 00 01 */	li r3, 1
/* 802AEA20 002AB960  48 00 00 D0 */	b lbl_802AEAF0
lbl_802AEA24:
/* 802AEA24 002AB964  38 00 00 03 */	li r0, 3
/* 802AEA28 002AB968  98 03 03 C6 */	stb r0, 0x3c6(r3)
/* 802AEA2C 002AB96C  48 00 00 C0 */	b lbl_802AEAEC
lbl_802AEA30:
/* 802AEA30 002AB970  88 03 03 C0 */	lbz r0, 0x3c0(r3)
/* 802AEA34 002AB974  28 00 00 00 */	cmplwi r0, 0
/* 802AEA38 002AB978  41 82 00 0C */	beq lbl_802AEA44
/* 802AEA3C 002AB97C  38 60 00 01 */	li r3, 1
/* 802AEA40 002AB980  48 00 00 B0 */	b lbl_802AEAF0
lbl_802AEA44:
/* 802AEA44 002AB984  38 00 00 03 */	li r0, 3
/* 802AEA48 002AB988  98 03 03 C0 */	stb r0, 0x3c0(r3)
/* 802AEA4C 002AB98C  48 00 00 A0 */	b lbl_802AEAEC
lbl_802AEA50:
/* 802AEA50 002AB990  88 03 03 C1 */	lbz r0, 0x3c1(r3)
/* 802AEA54 002AB994  28 00 00 00 */	cmplwi r0, 0
/* 802AEA58 002AB998  41 82 00 0C */	beq lbl_802AEA64
/* 802AEA5C 002AB99C  38 60 00 01 */	li r3, 1
/* 802AEA60 002AB9A0  48 00 00 90 */	b lbl_802AEAF0
lbl_802AEA64:
/* 802AEA64 002AB9A4  38 00 00 03 */	li r0, 3
/* 802AEA68 002AB9A8  98 03 03 C1 */	stb r0, 0x3c1(r3)
/* 802AEA6C 002AB9AC  48 00 00 80 */	b lbl_802AEAEC
lbl_802AEA70:
/* 802AEA70 002AB9B0  88 03 03 C2 */	lbz r0, 0x3c2(r3)
/* 802AEA74 002AB9B4  28 00 00 00 */	cmplwi r0, 0
/* 802AEA78 002AB9B8  41 82 00 0C */	beq lbl_802AEA84
/* 802AEA7C 002AB9BC  38 60 00 01 */	li r3, 1
/* 802AEA80 002AB9C0  48 00 00 70 */	b lbl_802AEAF0
lbl_802AEA84:
/* 802AEA84 002AB9C4  38 00 00 04 */	li r0, 4
/* 802AEA88 002AB9C8  98 03 03 C2 */	stb r0, 0x3c2(r3)
/* 802AEA8C 002AB9CC  48 00 00 60 */	b lbl_802AEAEC
lbl_802AEA90:
/* 802AEA90 002AB9D0  88 03 03 C3 */	lbz r0, 0x3c3(r3)
/* 802AEA94 002AB9D4  28 00 00 00 */	cmplwi r0, 0
/* 802AEA98 002AB9D8  41 82 00 0C */	beq lbl_802AEAA4
/* 802AEA9C 002AB9DC  38 60 00 01 */	li r3, 1
/* 802AEAA0 002AB9E0  48 00 00 50 */	b lbl_802AEAF0
lbl_802AEAA4:
/* 802AEAA4 002AB9E4  38 00 00 04 */	li r0, 4
/* 802AEAA8 002AB9E8  98 03 03 C3 */	stb r0, 0x3c3(r3)
/* 802AEAAC 002AB9EC  48 00 00 40 */	b lbl_802AEAEC
lbl_802AEAB0:
/* 802AEAB0 002AB9F0  88 03 03 C7 */	lbz r0, 0x3c7(r3)
/* 802AEAB4 002AB9F4  28 00 00 00 */	cmplwi r0, 0
/* 802AEAB8 002AB9F8  41 82 00 0C */	beq lbl_802AEAC4
/* 802AEABC 002AB9FC  38 60 00 01 */	li r3, 1
/* 802AEAC0 002ABA00  48 00 00 30 */	b lbl_802AEAF0
lbl_802AEAC4:
/* 802AEAC4 002ABA04  38 00 00 01 */	li r0, 1
/* 802AEAC8 002ABA08  98 03 03 C7 */	stb r0, 0x3c7(r3)
/* 802AEACC 002ABA0C  48 00 00 20 */	b lbl_802AEAEC
lbl_802AEAD0:
/* 802AEAD0 002ABA10  88 03 03 C8 */	lbz r0, 0x3c8(r3)
/* 802AEAD4 002ABA14  28 00 00 00 */	cmplwi r0, 0
/* 802AEAD8 002ABA18  41 82 00 0C */	beq lbl_802AEAE4
/* 802AEADC 002ABA1C  38 60 00 01 */	li r3, 1
/* 802AEAE0 002ABA20  48 00 00 10 */	b lbl_802AEAF0
lbl_802AEAE4:
/* 802AEAE4 002ABA24  38 00 00 01 */	li r0, 1
/* 802AEAE8 002ABA28  98 03 03 C8 */	stb r0, 0x3c8(r3)
lbl_802AEAEC:
/* 802AEAEC 002ABA2C  38 60 00 00 */	li r3, 0
lbl_802AEAF0:
/* 802AEAF0 002ABA30  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802AEAF4 002ABA34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802AEAF8 002ABA38  7C 08 03 A6 */	mtlr r0
/* 802AEAFC 002ABA3C  38 21 00 20 */	addi r1, r1, 0x20
/* 802AEB00 002ABA40  4E 80 00 20 */	blr 