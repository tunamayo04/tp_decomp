#
# Generate By: dol2asm
# Module: 634
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_stopper",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_stopper",
	"global_destructor_chain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".rodata",
	".data",
	".bss",
	".dtors",
]

# Symbols
SYMBOLS = [
	{'addr':0x80CECE20,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECE4C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECE78,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECE98,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECEB4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECF0C,'size':40,'pad':0,'label':"getStopModelData__Fv",'name':"getStopModelData__Fv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECF34,'size':180,'pad':0,'label':"initBaseMtx__14daObjStopper_cFv",'name':"initBaseMtx__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CECFE8,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED024,'size':148,'pad':0,'label':"setBaseMtx__14daObjStopper_cFv",'name':"setBaseMtx__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED0B8,'size':340,'pad':0,'label':"Create__14daObjStopper_cFv",'name':"Create__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED20C,'size':76,'pad':0,'label':"CreateHeap__14daObjStopper_cFv",'name':"CreateHeap__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED258,'size':488,'pad':0,'label':"create__14daObjStopper_cFv",'name':"create__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED440,'size':132,'pad':0,'label':"__dt__19dPa_followEcallBackFv",'name':"__dt__19dPa_followEcallBackFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED4C4,'size':4,'pad':0,'label':"cleanup__18dPa_levelEcallBackFv",'name':"cleanup__18dPa_levelEcallBackFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CED4C8,'size':40,'pad':0,'label':"__defctor__19dPa_followEcallBackFv",'name':"__defctor__19dPa_followEcallBackFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED4F0,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED538,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED580,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED5DC,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED64C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED6BC,'size':76,'pad':0,'label':"Execute__14daObjStopper_cFPPA3_A4_f",'name':"Execute__14daObjStopper_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED708,'size':284,'pad':0,'label':"action__14daObjStopper_cFv",'name':"action__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CED824,'size':512,'pad':0,'label':"actionWait__14daObjStopper_cFv",'name':"actionWait__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEDA24,'size':136,'pad':0,'label':"actionWaitOrderEvent__14daObjStopper_cFv",'name':"actionWaitOrderEvent__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEDAAC,'size':128,'pad':0,'label':"actionOrderEvent__14daObjStopper_cFv",'name':"actionOrderEvent__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEDB2C,'size':1308,'pad':0,'label':"actionEvent__14daObjStopper_cFv",'name':"actionEvent__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEE048,'size':4,'pad':0,'label':"actionDead__14daObjStopper_cFv",'name':"actionDead__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CEE04C,'size':16,'pad':0,'label':"actionWaitClose__14daObjStopper_cFv",'name':"actionWaitClose__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEE05C,'size':132,'pad':0,'label':"actionCloseInit__14daObjStopper_cFv",'name':"actionCloseInit__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEE0E0,'size':104,'pad':0,'label':"actionClose__14daObjStopper_cFv",'name':"actionClose__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEE148,'size':1160,'pad':0,'label':"hint_action1__14daObjStopper_cFv",'name':"hint_action1__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEE5D0,'size':1112,'pad':0,'label':"hint_action2__14daObjStopper_cFv",'name':"hint_action2__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEA28,'size':724,'pad':0,'label':"hint_action3__14daObjStopper_cFv",'name':"hint_action3__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEECFC,'size':100,'pad':0,'label':"Draw__14daObjStopper_cFv",'name':"Draw__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEED60,'size':144,'pad':0,'label':"Delete__14daObjStopper_cFv",'name':"Delete__14daObjStopper_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEDF0,'size':44,'pad':0,'label':"daObjStopper_Draw__FP14daObjStopper_c",'name':"daObjStopper_Draw__FP14daObjStopper_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEE1C,'size':32,'pad':0,'label':"daObjStopper_Execute__FP14daObjStopper_c",'name':"daObjStopper_Execute__FP14daObjStopper_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEE3C,'size':32,'pad':0,'label':"daObjStopper_Delete__FP14daObjStopper_c",'name':"daObjStopper_Delete__FP14daObjStopper_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEE5C,'size':32,'pad':0,'label':"daObjStopper_Create__FP10fopAc_ac_c",'name':"daObjStopper_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEE7C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEEC4,'size':116,'pad':0,'label':"__dt__18dPa_levelEcallBackFv",'name':"__dt__18dPa_levelEcallBackFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEF38,'size':4,'pad':0,'label':"execute__18JPAEmitterCallBackFP14JPABaseEmitter",'name':"execute__18JPAEmitterCallBackFP14JPABaseEmitter",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CEEF3C,'size':4,'pad':0,'label':"executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter",'name':"executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CEEF40,'size':4,'pad':0,'label':"draw__18JPAEmitterCallBackFP14JPABaseEmitter",'name':"draw__18JPAEmitterCallBackFP14JPABaseEmitter",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CEEF44,'size':4,'pad':0,'label':"drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter",'name':"drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CEEF48,'size':28,'pad':0,'label':"func_80CEEF48",'name':"cLib_calcTimer<Us>__FPUs",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEF64,'size':28,'pad':0,'label':"func_80CEEF64",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEF80,'size':8,'pad':0,'label':"func_80CEEF80",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEF88,'size':8,'pad':0,'label':"func_80CEEF88",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CEEF90,'size':4,'pad':0,'label':"data_80CEEF90",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEEF94,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEEF98,'size':8,'pad':0,'label':"pad_80CEEF98",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEEFA0,'size':4,'pad':0,'label':"lit_3635",'name':"@3635",'lib':-1,'tu':2,'section':2,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEEFA4,'size':4,'pad':0,'label':"lit_3636",'name':"@3636",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFA8,'size':4,'pad':0,'label':"lit_3692",'name':"@3692",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFAC,'size':4,'pad':0,'label':"lit_3693",'name':"@3693",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFB0,'size':4,'pad':0,'label':"lit_3694",'name':"@3694",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFB4,'size':4,'pad':0,'label':"lit_3876",'name':"@3876",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFB8,'size':4,'pad':0,'label':"lit_3877",'name':"@3877",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFBC,'size':4,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFC0,'size':4,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFC4,'size':4,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFC8,'size':4,'pad':0,'label':"lit_3881",'name':"@3881",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFCC,'size':4,'pad':0,'label':"lit_3882",'name':"@3882",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFD0,'size':4,'pad':0,'label':"lit_4025",'name':"@4025",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFD4,'size':4,'pad':0,'label':"lit_4053",'name':"@4053",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFD8,'size':4,'pad':4,'label':"lit_4166",'name':"@4166",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFE0,'size':8,'pad':0,'label':"lit_4168",'name':"@4168",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEEFE8,'size':4,'pad':0,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFEC,'size':4,'pad':0,'label':"lit_4312",'name':"@4312",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEEFF0,'size':14,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CEF000,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF00C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CEF020,'size':12,'pad':0,'label':"lit_3843",'name':"@3843",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF02C,'size':12,'pad':0,'label':"lit_3844",'name':"@3844",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF038,'size':12,'pad':0,'label':"lit_3845",'name':"@3845",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF044,'size':12,'pad':0,'label':"lit_3846",'name':"@3846",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF050,'size':12,'pad':0,'label':"lit_3847",'name':"@3847",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF05C,'size':12,'pad':0,'label':"lit_3848",'name':"@3848",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF068,'size':12,'pad':0,'label':"lit_3849",'name':"@3849",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF074,'size':12,'pad':0,'label':"lit_3850",'name':"@3850",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF080,'size':96,'pad':0,'label':"l_func",'name':"l_func$3842",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF0E0,'size':32,'pad':0,'label':"l_daObjStopper_Method",'name':"l_daObjStopper_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF100,'size':48,'pad':0,'label':"g_profile_Obj_Stopper",'name':"g_profile_Obj_Stopper",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF130,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF13C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF148,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF154,'size':36,'pad':0,'label':"__vt__18dPa_levelEcallBack",'name':"__vt__18dPa_levelEcallBack",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF178,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF184,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF190,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF1B4,'size':40,'pad':0,'label':"__vt__14daObjStopper_c",'name':"__vt__14daObjStopper_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CEF1E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1E8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1EC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1F0,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1F4,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1F8,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF1FC,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF200,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF204,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF208,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF20C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF210,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF214,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF218,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF21C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF220,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF224,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF228,'size':12,'pad':4,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF238,'size':12,'pad':0,'label':"l_offset",'name':"l_offset$3626",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF244,'size':4,'pad':0,'label':"data_80CEF244",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF248,'size':4,'pad':0,'label':"data_80CEF248",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF24C,'size':4,'pad':0,'label':"data_80CEF24C",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF250,'size':4,'pad':0,'label':"data_80CEF250",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF254,'size':4,'pad':0,'label':"data_80CEF254",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF258,'size':4,'pad':0,'label':"data_80CEF258",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF25C,'size':4,'pad':0,'label':"data_80CEF25C",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF260,'size':4,'pad':0,'label':"data_80CEF260",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF264,'size':4,'pad':0,'label':"data_80CEF264",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF268,'size':4,'pad':0,'label':"data_80CEF268",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF26C,'size':4,'pad':0,'label':"data_80CEF26C",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF270,'size':4,'pad':0,'label':"data_80CEF270",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF274,'size':4,'pad':0,'label':"data_80CEF274",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF278,'size':4,'pad':0,'label':"data_80CEF278",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF27C,'size':4,'pad':0,'label':"data_80CEF27C",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF280,'size':4,'pad':0,'label':"data_80CEF280",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF284,'size':4,'pad':0,'label':"data_80CEF284",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF288,'size':4,'pad':0,'label':"data_80CEF288",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF28C,'size':4,'pad':0,'label':"data_80CEF28C",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF290,'size':4,'pad':0,'label':"data_80CEF290",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF294,'size':4,'pad':0,'label':"data_80CEF294",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF298,'size':4,'pad':0,'label':"data_80CEF298",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF29C,'size':4,'pad':0,'label':"data_80CEF29C",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF2A0,'size':4,'pad':0,'label':"data_80CEF2A0",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF2A4,'size':4,'pad':0,'label':"data_80CEF2A4",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CEF2A8,'size':4,'pad':0,'label':"data_80CEF2A8",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"getStopModelData__Fv":5,
	"initBaseMtx__14daObjStopper_cFv":6,
	"__dt__4cXyzFv":7,
	"setBaseMtx__14daObjStopper_cFv":8,
	"Create__14daObjStopper_cFv":9,
	"CreateHeap__14daObjStopper_cFv":10,
	"create__14daObjStopper_cFv":11,
	"__dt__19dPa_followEcallBackFv":12,
	"cleanup__18dPa_levelEcallBackFv":13,
	"__defctor__19dPa_followEcallBackFv":14,
	"__dt__8cM3dGCylFv":15,
	"__dt__8cM3dGAabFv":16,
	"__dt__10dCcD_GSttsFv":17,
	"__dt__12dBgS_AcchCirFv":18,
	"__dt__12dBgS_ObjAcchFv":19,
	"Execute__14daObjStopper_cFPPA3_A4_f":20,
	"action__14daObjStopper_cFv":21,
	"actionWait__14daObjStopper_cFv":22,
	"actionWaitOrderEvent__14daObjStopper_cFv":23,
	"actionOrderEvent__14daObjStopper_cFv":24,
	"actionEvent__14daObjStopper_cFv":25,
	"actionDead__14daObjStopper_cFv":26,
	"actionWaitClose__14daObjStopper_cFv":27,
	"actionCloseInit__14daObjStopper_cFv":28,
	"actionClose__14daObjStopper_cFv":29,
	"hint_action1__14daObjStopper_cFv":30,
	"hint_action2__14daObjStopper_cFv":31,
	"hint_action3__14daObjStopper_cFv":32,
	"Draw__14daObjStopper_cFv":33,
	"Delete__14daObjStopper_cFv":34,
	"daObjStopper_Draw__FP14daObjStopper_c":35,
	"daObjStopper_Execute__FP14daObjStopper_c":36,
	"daObjStopper_Delete__FP14daObjStopper_c":37,
	"daObjStopper_Create__FP10fopAc_ac_c":38,
	"__dt__10cCcD_GSttsFv":39,
	"__dt__18dPa_levelEcallBackFv":40,
	"execute__18JPAEmitterCallBackFP14JPABaseEmitter":41,
	"executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter":42,
	"draw__18JPAEmitterCallBackFP14JPABaseEmitter":43,
	"drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter":44,
	"func_80CEEF48":45,
	"func_80CEEF64":46,
	"func_80CEEF80":47,
	"func_80CEEF88":48,
	"data_80CEEF90":49,
	"__destroy_global_chain_reference":50,
	"pad_80CEEF98":51,
	"lit_3635":52,
	"lit_3636":53,
	"lit_3692":54,
	"lit_3693":55,
	"lit_3694":56,
	"lit_3876":57,
	"lit_3877":58,
	"lit_3878":59,
	"lit_3879":60,
	"lit_3880":61,
	"lit_3881":62,
	"lit_3882":63,
	"lit_4025":64,
	"lit_4053":65,
	"lit_4166":66,
	"lit_4168":67,
	"lit_4311":68,
	"lit_4312":69,
	"stringBase0":70,
	"cNullVec__6Z2Calc":71,
	"lit_1787":72,
	"lit_3843":73,
	"lit_3844":74,
	"lit_3845":75,
	"lit_3846":76,
	"lit_3847":77,
	"lit_3848":78,
	"lit_3849":79,
	"lit_3850":80,
	"l_func":81,
	"l_daObjStopper_Method":82,
	"g_profile_Obj_Stopper":83,
	"__vt__12dBgS_AcchCir":84,
	"__vt__10cCcD_GStts":85,
	"__vt__10dCcD_GStts":86,
	"__vt__18dPa_levelEcallBack":87,
	"__vt__8cM3dGCyl":88,
	"__vt__8cM3dGAab":89,
	"__vt__12dBgS_ObjAcch":90,
	"__vt__14daObjStopper_c":91,
	"__global_destructor_chain":92,
	"lit_1109":93,
	"lit_1107":94,
	"lit_1105":95,
	"lit_1104":96,
	"lit_1099":97,
	"lit_1097":98,
	"lit_1095":99,
	"lit_1094":100,
	"lit_1057":101,
	"lit_1055":102,
	"lit_1053":103,
	"lit_1052":104,
	"lit_1014":105,
	"lit_1012":106,
	"lit_1010":107,
	"lit_1009":108,
	"lit_3627":109,
	"l_offset":110,
	"data_80CEF244":111,
	"data_80CEF248":112,
	"data_80CEF24C":113,
	"data_80CEF250":114,
	"data_80CEF254":115,
	"data_80CEF258":116,
	"data_80CEF25C":117,
	"data_80CEF260":118,
	"data_80CEF264":119,
	"data_80CEF268":120,
	"data_80CEF26C":121,
	"data_80CEF270":122,
	"data_80CEF274":123,
	"data_80CEF278":124,
	"data_80CEF27C":125,
	"data_80CEF280":126,
	"data_80CEF284":127,
	"data_80CEF288":128,
	"data_80CEF28C":129,
	"data_80CEF290":130,
	"data_80CEF294":131,
	"data_80CEF298":132,
	"data_80CEF29C":133,
	"data_80CEF2A0":134,
	"data_80CEF2A4":135,
	"data_80CEF2A8":136,
}

