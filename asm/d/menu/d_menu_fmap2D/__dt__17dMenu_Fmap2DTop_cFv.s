lbl_801D6700:
/* 801D6700  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D6704  7C 08 02 A6 */	mflr r0
/* 801D6708  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D670C  39 61 00 20 */	addi r11, r1, 0x20
/* 801D6710  48 18 BA C5 */	bl _savegpr_27
/* 801D6714  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D6718  7C 9E 23 78 */	mr r30, r4
/* 801D671C  41 82 03 0C */	beq lbl_801D6A28
/* 801D6720  3C 80 80 3C */	lis r4, __vt__17dMenu_Fmap2DTop_c@ha
/* 801D6724  38 04 D7 50 */	addi r0, r4, __vt__17dMenu_Fmap2DTop_c@l
/* 801D6728  90 1F 00 00 */	stw r0, 0(r31)
/* 801D672C  48 00 0F 95 */	bl deleteExplain__17dMenu_Fmap2DTop_cFv
/* 801D6730  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D6734  28 03 00 00 */	cmplwi r3, 0
/* 801D6738  41 82 00 18 */	beq lbl_801D6750
/* 801D673C  38 80 00 01 */	li r4, 1
/* 801D6740  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6744  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6748  7D 89 03 A6 */	mtctr r12
/* 801D674C  4E 80 04 21 */	bctrl 
lbl_801D6750:
/* 801D6750  38 00 00 00 */	li r0, 0
/* 801D6754  90 1F 00 08 */	stw r0, 8(r31)
/* 801D6758  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801D675C  28 03 00 00 */	cmplwi r3, 0
/* 801D6760  41 82 00 18 */	beq lbl_801D6778
/* 801D6764  38 80 00 01 */	li r4, 1
/* 801D6768  81 83 00 00 */	lwz r12, 0(r3)
/* 801D676C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6770  7D 89 03 A6 */	mtctr r12
/* 801D6774  4E 80 04 21 */	bctrl 
lbl_801D6778:
/* 801D6778  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801D677C  28 03 00 00 */	cmplwi r3, 0
/* 801D6780  41 82 00 18 */	beq lbl_801D6798
/* 801D6784  38 80 00 01 */	li r4, 1
/* 801D6788  81 83 00 00 */	lwz r12, 0(r3)
/* 801D678C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6790  7D 89 03 A6 */	mtctr r12
/* 801D6794  4E 80 04 21 */	bctrl 
lbl_801D6798:
/* 801D6798  38 00 00 00 */	li r0, 0
/* 801D679C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801D67A0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801D67A4  28 03 00 00 */	cmplwi r3, 0
/* 801D67A8  41 82 00 18 */	beq lbl_801D67C0
/* 801D67AC  38 80 00 01 */	li r4, 1
/* 801D67B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D67B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D67B8  7D 89 03 A6 */	mtctr r12
/* 801D67BC  4E 80 04 21 */	bctrl 
lbl_801D67C0:
/* 801D67C0  38 00 00 00 */	li r0, 0
/* 801D67C4  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801D67C8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 801D67CC  28 03 00 00 */	cmplwi r3, 0
/* 801D67D0  41 82 00 18 */	beq lbl_801D67E8
/* 801D67D4  38 80 00 01 */	li r4, 1
/* 801D67D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D67DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D67E0  7D 89 03 A6 */	mtctr r12
/* 801D67E4  4E 80 04 21 */	bctrl 
lbl_801D67E8:
/* 801D67E8  38 00 00 00 */	li r0, 0
/* 801D67EC  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801D67F0  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801D67F4  28 03 00 00 */	cmplwi r3, 0
/* 801D67F8  41 82 00 18 */	beq lbl_801D6810
/* 801D67FC  38 80 00 01 */	li r4, 1
/* 801D6800  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6804  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6808  7D 89 03 A6 */	mtctr r12
/* 801D680C  4E 80 04 21 */	bctrl 
lbl_801D6810:
/* 801D6810  38 00 00 00 */	li r0, 0
/* 801D6814  90 1F 00 24 */	stw r0, 0x24(r31)
/* 801D6818  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 801D681C  28 03 00 00 */	cmplwi r3, 0
/* 801D6820  41 82 00 18 */	beq lbl_801D6838
/* 801D6824  38 80 00 01 */	li r4, 1
/* 801D6828  81 83 00 00 */	lwz r12, 0(r3)
/* 801D682C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6830  7D 89 03 A6 */	mtctr r12
/* 801D6834  4E 80 04 21 */	bctrl 
lbl_801D6838:
/* 801D6838  38 00 00 00 */	li r0, 0
/* 801D683C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801D6840  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 801D6844  28 03 00 00 */	cmplwi r3, 0
/* 801D6848  41 82 00 18 */	beq lbl_801D6860
/* 801D684C  38 80 00 01 */	li r4, 1
/* 801D6850  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6854  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6858  7D 89 03 A6 */	mtctr r12
/* 801D685C  4E 80 04 21 */	bctrl 
lbl_801D6860:
/* 801D6860  38 00 00 00 */	li r0, 0
/* 801D6864  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801D6868  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 801D686C  28 03 00 00 */	cmplwi r3, 0
/* 801D6870  41 82 00 24 */	beq lbl_801D6894
/* 801D6874  41 82 00 18 */	beq lbl_801D688C
/* 801D6878  38 80 00 01 */	li r4, 1
/* 801D687C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6880  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6884  7D 89 03 A6 */	mtctr r12
/* 801D6888  4E 80 04 21 */	bctrl 
lbl_801D688C:
/* 801D688C  38 00 00 00 */	li r0, 0
/* 801D6890  90 1F 00 34 */	stw r0, 0x34(r31)
lbl_801D6894:
/* 801D6894  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 801D6898  28 03 00 00 */	cmplwi r3, 0
/* 801D689C  41 82 00 24 */	beq lbl_801D68C0
/* 801D68A0  41 82 00 18 */	beq lbl_801D68B8
/* 801D68A4  38 80 00 01 */	li r4, 1
/* 801D68A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D68AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D68B0  7D 89 03 A6 */	mtctr r12
/* 801D68B4  4E 80 04 21 */	bctrl 
lbl_801D68B8:
/* 801D68B8  38 00 00 00 */	li r0, 0
/* 801D68BC  90 1F 00 30 */	stw r0, 0x30(r31)
lbl_801D68C0:
/* 801D68C0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801D68C4  28 03 00 00 */	cmplwi r3, 0
/* 801D68C8  41 82 00 18 */	beq lbl_801D68E0
/* 801D68CC  38 80 00 01 */	li r4, 1
/* 801D68D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D68D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D68D8  7D 89 03 A6 */	mtctr r12
/* 801D68DC  4E 80 04 21 */	bctrl 
lbl_801D68E0:
/* 801D68E0  38 00 00 00 */	li r0, 0
/* 801D68E4  90 1F 00 50 */	stw r0, 0x50(r31)
/* 801D68E8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 801D68EC  28 03 00 00 */	cmplwi r3, 0
/* 801D68F0  41 82 00 18 */	beq lbl_801D6908
/* 801D68F4  38 80 00 01 */	li r4, 1
/* 801D68F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D68FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6900  7D 89 03 A6 */	mtctr r12
/* 801D6904  4E 80 04 21 */	bctrl 
lbl_801D6908:
/* 801D6908  38 00 00 00 */	li r0, 0
/* 801D690C  90 1F 00 54 */	stw r0, 0x54(r31)
/* 801D6910  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 801D6914  28 03 00 00 */	cmplwi r3, 0
/* 801D6918  41 82 00 24 */	beq lbl_801D693C
/* 801D691C  41 82 00 18 */	beq lbl_801D6934
/* 801D6920  38 80 00 01 */	li r4, 1
/* 801D6924  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6928  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D692C  7D 89 03 A6 */	mtctr r12
/* 801D6930  4E 80 04 21 */	bctrl 
lbl_801D6934:
/* 801D6934  38 00 00 00 */	li r0, 0
/* 801D6938  90 1F 00 58 */	stw r0, 0x58(r31)
lbl_801D693C:
/* 801D693C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 801D6940  28 03 00 00 */	cmplwi r3, 0
/* 801D6944  41 82 00 24 */	beq lbl_801D6968
/* 801D6948  41 82 00 18 */	beq lbl_801D6960
/* 801D694C  38 80 00 01 */	li r4, 1
/* 801D6950  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6954  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6958  7D 89 03 A6 */	mtctr r12
/* 801D695C  4E 80 04 21 */	bctrl 
lbl_801D6960:
/* 801D6960  38 00 00 00 */	li r0, 0
/* 801D6964  90 1F 00 5C */	stw r0, 0x5c(r31)
lbl_801D6968:
/* 801D6968  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 801D696C  28 03 00 00 */	cmplwi r3, 0
/* 801D6970  41 82 00 18 */	beq lbl_801D6988
/* 801D6974  38 80 00 01 */	li r4, 1
/* 801D6978  81 83 00 00 */	lwz r12, 0(r3)
/* 801D697C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6980  7D 89 03 A6 */	mtctr r12
/* 801D6984  4E 80 04 21 */	bctrl 
lbl_801D6988:
/* 801D6988  3B A0 00 00 */	li r29, 0
/* 801D698C  93 BF 00 60 */	stw r29, 0x60(r31)
/* 801D6990  3B 60 00 00 */	li r27, 0
lbl_801D6994:
/* 801D6994  7F 9F EA 14 */	add r28, r31, r29
/* 801D6998  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 801D699C  28 03 00 00 */	cmplwi r3, 0
/* 801D69A0  41 82 00 1C */	beq lbl_801D69BC
/* 801D69A4  41 82 00 18 */	beq lbl_801D69BC
/* 801D69A8  38 80 00 01 */	li r4, 1
/* 801D69AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D69B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D69B4  7D 89 03 A6 */	mtctr r12
/* 801D69B8  4E 80 04 21 */	bctrl 
lbl_801D69BC:
/* 801D69BC  80 7C 00 40 */	lwz r3, 0x40(r28)
/* 801D69C0  28 03 00 00 */	cmplwi r3, 0
/* 801D69C4  41 82 00 1C */	beq lbl_801D69E0
/* 801D69C8  41 82 00 18 */	beq lbl_801D69E0
/* 801D69CC  38 80 00 01 */	li r4, 1
/* 801D69D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D69D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D69D8  7D 89 03 A6 */	mtctr r12
/* 801D69DC  4E 80 04 21 */	bctrl 
lbl_801D69E0:
/* 801D69E0  3B 7B 00 01 */	addi r27, r27, 1
/* 801D69E4  2C 1B 00 02 */	cmpwi r27, 2
/* 801D69E8  3B BD 00 04 */	addi r29, r29, 4
/* 801D69EC  41 80 FF A8 */	blt lbl_801D6994
/* 801D69F0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801D69F4  28 03 00 00 */	cmplwi r3, 0
/* 801D69F8  41 82 00 18 */	beq lbl_801D6A10
/* 801D69FC  38 80 00 01 */	li r4, 1
/* 801D6A00  81 83 00 00 */	lwz r12, 0(r3)
/* 801D6A04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D6A08  7D 89 03 A6 */	mtctr r12
/* 801D6A0C  4E 80 04 21 */	bctrl 
lbl_801D6A10:
/* 801D6A10  38 00 00 00 */	li r0, 0
/* 801D6A14  90 1F 00 10 */	stw r0, 0x10(r31)
/* 801D6A18  7F C0 07 35 */	extsh. r0, r30
/* 801D6A1C  40 81 00 0C */	ble lbl_801D6A28
/* 801D6A20  7F E3 FB 78 */	mr r3, r31
/* 801D6A24  48 0F 83 19 */	bl __dl__FPv
lbl_801D6A28:
/* 801D6A28  7F E3 FB 78 */	mr r3, r31
/* 801D6A2C  39 61 00 20 */	addi r11, r1, 0x20
/* 801D6A30  48 18 B7 F1 */	bl _restgpr_27
/* 801D6A34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D6A38  7C 08 03 A6 */	mtlr r0
/* 801D6A3C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D6A40  4E 80 00 20 */	blr 
