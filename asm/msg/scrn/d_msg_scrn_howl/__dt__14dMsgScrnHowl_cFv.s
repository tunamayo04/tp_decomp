lbl_80241784:
/* 80241784  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80241788  7C 08 02 A6 */	mflr r0
/* 8024178C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80241790  39 61 00 20 */	addi r11, r1, 0x20
/* 80241794  48 12 0A 3D */	bl _savegpr_26
/* 80241798  7C 7E 1B 79 */	or. r30, r3, r3
/* 8024179C  7C 9F 23 78 */	mr r31, r4
/* 802417A0  41 82 02 B4 */	beq lbl_80241A54
/* 802417A4  3C 60 80 3C */	lis r3, __vt__14dMsgScrnHowl_c@ha
/* 802417A8  38 03 11 90 */	addi r0, r3, __vt__14dMsgScrnHowl_c@l
/* 802417AC  90 1E 00 00 */	stw r0, 0(r30)
/* 802417B0  80 7E 00 04 */	lwz r3, 4(r30)
/* 802417B4  28 03 00 00 */	cmplwi r3, 0
/* 802417B8  41 82 00 18 */	beq lbl_802417D0
/* 802417BC  38 80 00 01 */	li r4, 1
/* 802417C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802417C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802417C8  7D 89 03 A6 */	mtctr r12
/* 802417CC  4E 80 04 21 */	bctrl 
lbl_802417D0:
/* 802417D0  38 00 00 00 */	li r0, 0
/* 802417D4  90 1E 00 04 */	stw r0, 4(r30)
/* 802417D8  80 7E 00 08 */	lwz r3, 8(r30)
/* 802417DC  28 03 00 00 */	cmplwi r3, 0
/* 802417E0  41 82 00 18 */	beq lbl_802417F8
/* 802417E4  38 80 00 01 */	li r4, 1
/* 802417E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802417EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802417F0  7D 89 03 A6 */	mtctr r12
/* 802417F4  4E 80 04 21 */	bctrl 
lbl_802417F8:
/* 802417F8  3B A0 00 00 */	li r29, 0
/* 802417FC  93 BE 00 08 */	stw r29, 8(r30)
/* 80241800  3B 40 00 00 */	li r26, 0
lbl_80241804:
/* 80241804  7F 7E EA 14 */	add r27, r30, r29
/* 80241808  80 7B 00 F4 */	lwz r3, 0xf4(r27)
/* 8024180C  28 03 00 00 */	cmplwi r3, 0
/* 80241810  41 82 00 18 */	beq lbl_80241828
/* 80241814  38 80 00 01 */	li r4, 1
/* 80241818  81 83 00 00 */	lwz r12, 0(r3)
/* 8024181C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80241820  7D 89 03 A6 */	mtctr r12
/* 80241824  4E 80 04 21 */	bctrl 
lbl_80241828:
/* 80241828  38 00 00 00 */	li r0, 0
/* 8024182C  90 1B 00 F4 */	stw r0, 0xf4(r27)
/* 80241830  80 7B 00 FC */	lwz r3, 0xfc(r27)
/* 80241834  28 03 00 00 */	cmplwi r3, 0
/* 80241838  41 82 00 18 */	beq lbl_80241850
/* 8024183C  38 80 00 01 */	li r4, 1
/* 80241840  81 83 00 00 */	lwz r12, 0(r3)
/* 80241844  81 8C 00 08 */	lwz r12, 8(r12)
/* 80241848  7D 89 03 A6 */	mtctr r12
/* 8024184C  4E 80 04 21 */	bctrl 
lbl_80241850:
/* 80241850  3B 80 00 00 */	li r28, 0
/* 80241854  93 9B 00 FC */	stw r28, 0xfc(r27)
/* 80241858  3B 5A 00 01 */	addi r26, r26, 1
/* 8024185C  2C 1A 00 02 */	cmpwi r26, 2
/* 80241860  3B BD 00 04 */	addi r29, r29, 4
/* 80241864  41 80 FF A0 */	blt lbl_80241804
/* 80241868  3B 40 00 00 */	li r26, 0
/* 8024186C  3B A0 00 00 */	li r29, 0
lbl_80241870:
/* 80241870  3B 7D 00 C4 */	addi r27, r29, 0xc4
/* 80241874  7C 7E D8 2E */	lwzx r3, r30, r27
/* 80241878  28 03 00 00 */	cmplwi r3, 0
/* 8024187C  41 82 00 18 */	beq lbl_80241894
/* 80241880  38 80 00 01 */	li r4, 1
/* 80241884  81 83 00 00 */	lwz r12, 0(r3)
/* 80241888  81 8C 00 08 */	lwz r12, 8(r12)
/* 8024188C  7D 89 03 A6 */	mtctr r12
/* 80241890  4E 80 04 21 */	bctrl 
lbl_80241894:
/* 80241894  7F 9E D9 2E */	stwx r28, r30, r27
/* 80241898  3B 5A 00 01 */	addi r26, r26, 1
/* 8024189C  2C 1A 00 03 */	cmpwi r26, 3
/* 802418A0  3B BD 00 04 */	addi r29, r29, 4
/* 802418A4  41 80 FF CC */	blt lbl_80241870
/* 802418A8  3B 40 00 00 */	li r26, 0
/* 802418AC  3B A0 00 00 */	li r29, 0
/* 802418B0  3B 80 00 00 */	li r28, 0
lbl_802418B4:
/* 802418B4  3B 7D 00 D0 */	addi r27, r29, 0xd0
/* 802418B8  7C 7E D8 2E */	lwzx r3, r30, r27
/* 802418BC  28 03 00 00 */	cmplwi r3, 0
/* 802418C0  41 82 00 18 */	beq lbl_802418D8
/* 802418C4  38 80 00 01 */	li r4, 1
/* 802418C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802418CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802418D0  7D 89 03 A6 */	mtctr r12
/* 802418D4  4E 80 04 21 */	bctrl 
lbl_802418D8:
/* 802418D8  7F 9E D9 2E */	stwx r28, r30, r27
/* 802418DC  3B 5A 00 01 */	addi r26, r26, 1
/* 802418E0  2C 1A 00 07 */	cmpwi r26, 7
/* 802418E4  3B BD 00 04 */	addi r29, r29, 4
/* 802418E8  41 80 FF CC */	blt lbl_802418B4
/* 802418EC  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 802418F0  28 03 00 00 */	cmplwi r3, 0
/* 802418F4  41 82 00 18 */	beq lbl_8024190C
/* 802418F8  38 80 00 01 */	li r4, 1
/* 802418FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80241900  81 8C 00 08 */	lwz r12, 8(r12)
/* 80241904  7D 89 03 A6 */	mtctr r12
/* 80241908  4E 80 04 21 */	bctrl 
lbl_8024190C:
/* 8024190C  38 00 00 00 */	li r0, 0
/* 80241910  90 1E 00 F0 */	stw r0, 0xf0(r30)
/* 80241914  80 7E 00 EC */	lwz r3, 0xec(r30)
/* 80241918  28 03 00 00 */	cmplwi r3, 0
/* 8024191C  41 82 00 18 */	beq lbl_80241934
/* 80241920  38 80 00 01 */	li r4, 1
/* 80241924  81 83 00 00 */	lwz r12, 0(r3)
/* 80241928  81 8C 00 08 */	lwz r12, 8(r12)
/* 8024192C  7D 89 03 A6 */	mtctr r12
/* 80241930  4E 80 04 21 */	bctrl 
lbl_80241934:
/* 80241934  38 00 00 00 */	li r0, 0
/* 80241938  90 1E 00 EC */	stw r0, 0xec(r30)
/* 8024193C  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 80241940  28 03 00 00 */	cmplwi r3, 0
/* 80241944  41 82 00 18 */	beq lbl_8024195C
/* 80241948  38 80 00 01 */	li r4, 1
/* 8024194C  81 83 00 00 */	lwz r12, 0(r3)
/* 80241950  81 8C 00 08 */	lwz r12, 8(r12)
/* 80241954  7D 89 03 A6 */	mtctr r12
/* 80241958  4E 80 04 21 */	bctrl 
lbl_8024195C:
/* 8024195C  38 00 00 00 */	li r0, 0
/* 80241960  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 80241964  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 80241968  28 03 00 00 */	cmplwi r3, 0
/* 8024196C  41 82 00 18 */	beq lbl_80241984
/* 80241970  38 80 00 01 */	li r4, 1
/* 80241974  81 83 00 00 */	lwz r12, 0(r3)
/* 80241978  81 8C 00 08 */	lwz r12, 8(r12)
/* 8024197C  7D 89 03 A6 */	mtctr r12
/* 80241980  4E 80 04 21 */	bctrl 
lbl_80241984:
/* 80241984  38 00 00 00 */	li r0, 0
/* 80241988  90 1E 01 20 */	stw r0, 0x120(r30)
/* 8024198C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 80241990  28 03 00 00 */	cmplwi r3, 0
/* 80241994  41 82 00 18 */	beq lbl_802419AC
/* 80241998  38 80 00 01 */	li r4, 1
/* 8024199C  81 83 00 00 */	lwz r12, 0(r3)
/* 802419A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802419A4  7D 89 03 A6 */	mtctr r12
/* 802419A8  4E 80 04 21 */	bctrl 
lbl_802419AC:
/* 802419AC  3B 80 00 00 */	li r28, 0
/* 802419B0  93 9E 01 04 */	stw r28, 0x104(r30)
/* 802419B4  3B 40 00 00 */	li r26, 0
/* 802419B8  3B A0 00 00 */	li r29, 0
lbl_802419BC:
/* 802419BC  3B 7D 01 08 */	addi r27, r29, 0x108
/* 802419C0  7C 7E D8 2E */	lwzx r3, r30, r27
/* 802419C4  28 03 00 00 */	cmplwi r3, 0
/* 802419C8  41 82 00 18 */	beq lbl_802419E0
/* 802419CC  38 80 00 01 */	li r4, 1
/* 802419D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802419D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802419D8  7D 89 03 A6 */	mtctr r12
/* 802419DC  4E 80 04 21 */	bctrl 
lbl_802419E0:
/* 802419E0  7F 9E D9 2E */	stwx r28, r30, r27
/* 802419E4  3B 5A 00 01 */	addi r26, r26, 1
/* 802419E8  2C 1A 00 05 */	cmpwi r26, 5
/* 802419EC  3B BD 00 04 */	addi r29, r29, 4
/* 802419F0  41 80 FF CC */	blt lbl_802419BC
/* 802419F4  80 7E 01 24 */	lwz r3, 0x124(r30)
/* 802419F8  28 03 00 00 */	cmplwi r3, 0
/* 802419FC  41 82 00 18 */	beq lbl_80241A14
/* 80241A00  38 80 00 01 */	li r4, 1
/* 80241A04  81 83 00 00 */	lwz r12, 0(r3)
/* 80241A08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80241A0C  7D 89 03 A6 */	mtctr r12
/* 80241A10  4E 80 04 21 */	bctrl 
lbl_80241A14:
/* 80241A14  38 00 00 00 */	li r0, 0
/* 80241A18  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80241A1C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80241A20  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80241A24  80 63 5C 80 */	lwz r3, 0x5c80(r3)
/* 80241A28  81 83 00 00 */	lwz r12, 0(r3)
/* 80241A2C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80241A30  7D 89 03 A6 */	mtctr r12
/* 80241A34  4E 80 04 21 */	bctrl 
/* 80241A38  7F C3 F3 78 */	mr r3, r30
/* 80241A3C  38 80 00 00 */	li r4, 0
/* 80241A40  4B FF A6 E5 */	bl __dt__14dMsgScrnBase_cFv
/* 80241A44  7F E0 07 35 */	extsh. r0, r31
/* 80241A48  40 81 00 0C */	ble lbl_80241A54
/* 80241A4C  7F C3 F3 78 */	mr r3, r30
/* 80241A50  48 08 D2 ED */	bl __dl__FPv
lbl_80241A54:
/* 80241A54  7F C3 F3 78 */	mr r3, r30
/* 80241A58  39 61 00 20 */	addi r11, r1, 0x20
/* 80241A5C  48 12 07 C1 */	bl _restgpr_26
/* 80241A60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80241A64  7C 08 03 A6 */	mtlr r0
/* 80241A68  38 21 00 20 */	addi r1, r1, 0x20
/* 80241A6C  4E 80 00 20 */	blr 
