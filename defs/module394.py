#
# Generate By: dol2asm
# Module: 394
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_Turara",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_Turara",
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
	{'addr':0x80B9CAA0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CACC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CAF8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CB18,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CB34,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CB8C,'size':108,'pad':0,'label':"__ct__14daTurara_HIO_cFv",'name':"__ct__14daTurara_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CBF8,'size':92,'pad':0,'label':"__dt__18fOpAcm_HIO_entry_cFv",'name':"__dt__18fOpAcm_HIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CC54,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CC9C,'size':216,'pad':0,'label':"setBaseMtx__10daTurara_cFv",'name':"setBaseMtx__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CD74,'size':356,'pad':0,'label':"CreateHeap__10daTurara_cFv",'name':"CreateHeap__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9CED8,'size':964,'pad':0,'label':"create__10daTurara_cFv",'name':"create__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D29C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D30C,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D37C,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D3C4,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D40C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D468,'size':100,'pad':0,'label':"setFallStat__10daTurara_cFv",'name':"setFallStat__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D4CC,'size':124,'pad':0,'label':"Execute__10daTurara_cFPPA3_A4_f",'name':"Execute__10daTurara_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D548,'size':484,'pad':0,'label':"move__10daTurara_cFv",'name':"move__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D72C,'size':12,'pad':0,'label':"init_modeWait__10daTurara_cFv",'name':"init_modeWait__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D738,'size':608,'pad':0,'label':"modeWait__10daTurara_cFv",'name':"modeWait__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D998,'size':36,'pad':0,'label':"eventStart__10daTurara_cFv",'name':"eventStart__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9D9BC,'size':68,'pad':0,'label':"init_modeDropInit__10daTurara_cFv",'name':"init_modeDropInit__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DA00,'size':68,'pad':0,'label':"modeDropInit__10daTurara_cFv",'name':"modeDropInit__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DA44,'size':256,'pad':0,'label':"init_modeDrop__10daTurara_cFv",'name':"init_modeDrop__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DB44,'size':76,'pad':0,'label':"modeDrop__10daTurara_cFv",'name':"modeDrop__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DB90,'size':64,'pad':0,'label':"bgCheck__10daTurara_cFv",'name':"bgCheck__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DBD0,'size':632,'pad':0,'label':"init_modeDropEnd__10daTurara_cFv",'name':"init_modeDropEnd__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9DE48,'size':560,'pad':0,'label':"modeDropEnd__10daTurara_cFv",'name':"modeDropEnd__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E078,'size':704,'pad':0,'label':"init_modeDropEnd2__10daTurara_cFv",'name':"init_modeDropEnd2__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E338,'size':80,'pad':0,'label':"modeDropEnd2__10daTurara_cFv",'name':"modeDropEnd2__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E388,'size':240,'pad':0,'label':"Draw__10daTurara_cFv",'name':"Draw__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E478,'size':104,'pad':0,'label':"Delete__10daTurara_cFv",'name':"Delete__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E4E0,'size':44,'pad':0,'label':"daTurara_Draw__FP10daTurara_c",'name':"daTurara_Draw__FP10daTurara_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E50C,'size':32,'pad':0,'label':"daTurara_Execute__FP10daTurara_c",'name':"daTurara_Execute__FP10daTurara_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E52C,'size':32,'pad':0,'label':"daTurara_Delete__FP10daTurara_c",'name':"daTurara_Delete__FP10daTurara_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E54C,'size':32,'pad':0,'label':"daTurara_Create__FP10fopAc_ac_c",'name':"daTurara_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E56C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E5B4,'size':108,'pad':0,'label':"__dt__14daTurara_HIO_cFv",'name':"__dt__14daTurara_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E620,'size':112,'pad':0,'label':"__sinit_d_a_obj_Turara_cpp",'name':"__sinit_d_a_obj_Turara_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E690,'size':8,'pad':0,'label':"func_80B9E690",'name':"@1448@eventStart__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E698,'size':8,'pad':0,'label':"func_80B9E698",'name':"@1448@__dt__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E6A0,'size':8,'pad':0,'label':"func_80B9E6A0",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E6A8,'size':8,'pad':0,'label':"func_80B9E6A8",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E6B0,'size':72,'pad':0,'label':"__dt__17dEvLib_callback_cFv",'name':"__dt__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E6F8,'size':8,'pad':0,'label':"eventStart__17dEvLib_callback_cFv",'name':"eventStart__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B9E700,'size':8,'pad':0,'label':"eventRun__17dEvLib_callback_cFv",'name':"eventRun__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B9E708,'size':8,'pad':0,'label':"eventEnd__17dEvLib_callback_cFv",'name':"eventEnd__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B9E710,'size':464,'pad':0,'label':"__dt__10daTurara_cFv",'name':"__dt__10daTurara_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B9E8E0,'size':8,'pad':0,'label':"data_80B9E8E0",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9E8E8,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9E8EC,'size':8,'pad':0,'label':"pad_80B9E8EC",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9E8F4,'size':4,'pad':0,'label':"lit_3661",'name':"@3661",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E8F8,'size':4,'pad':0,'label':"lit_3662",'name':"@3662",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E8FC,'size':4,'pad':0,'label':"lit_3663",'name':"@3663",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E900,'size':4,'pad':0,'label':"lit_3664",'name':"@3664",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E904,'size':4,'pad':0,'label':"lit_3665",'name':"@3665",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E908,'size':48,'pad':0,'label':"mCcDObjInfo__10daTurara_c",'name':"mCcDObjInfo__10daTurara_c",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9E938,'size':8,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9E940,'size':4,'pad':0,'label':"lit_3823",'name':"@3823",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E944,'size':4,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E948,'size':4,'pad':0,'label':"lit_3825",'name':"@3825",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9E94C,'size':4,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E950,'size':4,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E954,'size':4,'pad':0,'label':"lit_3951",'name':"@3951",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E958,'size':4,'pad':0,'label':"lit_3952",'name':"@3952",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E95C,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E960,'size':4,'pad':0,'label':"lit_4027",'name':"@4027",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E964,'size':4,'pad':0,'label':"lit_4028",'name':"@4028",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E968,'size':4,'pad':0,'label':"lit_4263",'name':"@4263",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E96C,'size':4,'pad':0,'label':"lit_4264",'name':"@4264",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E970,'size':9,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80B9E97C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9E988,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B9E99C,'size':68,'pad':0,'label':"mCcDCyl__10daTurara_c",'name':"mCcDCyl__10daTurara_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9E9E0,'size':12,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9E9EC,'size':12,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9E9F8,'size':12,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EA04,'size':12,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EA10,'size':12,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EA1C,'size':60,'pad':0,'label':"mode_proc",'name':"mode_proc$3923",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9EA58,'size':32,'pad':0,'label':"l_daTurara_Method",'name':"l_daTurara_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EA78,'size':48,'pad':0,'label':"g_profile_Obj_Turara",'name':"g_profile_Obj_Turara",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EAA8,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EAB4,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EAC0,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EACC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EAF0,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EAFC,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB08,'size':24,'pad':0,'label':"__vt__17dEvLib_callback_c",'name':"__vt__17dEvLib_callback_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB20,'size':72,'pad':0,'label':"__vt__10daTurara_c",'name':"__vt__10daTurara_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB68,'size':12,'pad':0,'label':"__vt__14daTurara_HIO_c",'name':"__vt__14daTurara_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB74,'size':12,'pad':0,'label':"__vt__18fOpAcm_HIO_entry_c",'name':"__vt__18fOpAcm_HIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB80,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B9EB90,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9EB98,'size':12,'pad':0,'label':"lit_3653",'name':"@3653",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9EBA4,'size':32,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B9EBC4,'size':4,'pad':0,'label':"data_80B9EBC4",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daTurara_HIO_cFv":5,
	"__dt__18fOpAcm_HIO_entry_cFv":6,
	"__dt__14mDoHIO_entry_cFv":7,
	"setBaseMtx__10daTurara_cFv":8,
	"CreateHeap__10daTurara_cFv":9,
	"create__10daTurara_cFv":10,
	"__dt__12dBgS_ObjAcchFv":11,
	"__dt__12dBgS_AcchCirFv":12,
	"__dt__8cM3dGCylFv":13,
	"__dt__8cM3dGAabFv":14,
	"__dt__10dCcD_GSttsFv":15,
	"setFallStat__10daTurara_cFv":16,
	"Execute__10daTurara_cFPPA3_A4_f":17,
	"move__10daTurara_cFv":18,
	"init_modeWait__10daTurara_cFv":19,
	"modeWait__10daTurara_cFv":20,
	"eventStart__10daTurara_cFv":21,
	"init_modeDropInit__10daTurara_cFv":22,
	"modeDropInit__10daTurara_cFv":23,
	"init_modeDrop__10daTurara_cFv":24,
	"modeDrop__10daTurara_cFv":25,
	"bgCheck__10daTurara_cFv":26,
	"init_modeDropEnd__10daTurara_cFv":27,
	"modeDropEnd__10daTurara_cFv":28,
	"init_modeDropEnd2__10daTurara_cFv":29,
	"modeDropEnd2__10daTurara_cFv":30,
	"Draw__10daTurara_cFv":31,
	"Delete__10daTurara_cFv":32,
	"daTurara_Draw__FP10daTurara_c":33,
	"daTurara_Execute__FP10daTurara_c":34,
	"daTurara_Delete__FP10daTurara_c":35,
	"daTurara_Create__FP10fopAc_ac_c":36,
	"__dt__10cCcD_GSttsFv":37,
	"__dt__14daTurara_HIO_cFv":38,
	"__sinit_d_a_obj_Turara_cpp":39,
	"func_80B9E690":40,
	"func_80B9E698":41,
	"func_80B9E6A0":42,
	"func_80B9E6A8":43,
	"__dt__17dEvLib_callback_cFv":44,
	"eventStart__17dEvLib_callback_cFv":45,
	"eventRun__17dEvLib_callback_cFv":46,
	"eventEnd__17dEvLib_callback_cFv":47,
	"__dt__10daTurara_cFv":48,
	"data_80B9E8E0":49,
	"__destroy_global_chain_reference":50,
	"pad_80B9E8EC":51,
	"lit_3661":52,
	"lit_3662":53,
	"lit_3663":54,
	"lit_3664":55,
	"lit_3665":56,
	"mCcDObjInfo__10daTurara_c":57,
	"l_bmdIdx":58,
	"lit_3823":59,
	"lit_3824":60,
	"lit_3825":61,
	"lit_3949":62,
	"lit_3950":63,
	"lit_3951":64,
	"lit_3952":65,
	"lit_3953":66,
	"lit_4027":67,
	"lit_4028":68,
	"lit_4263":69,
	"lit_4264":70,
	"stringBase0":71,
	"cNullVec__6Z2Calc":72,
	"lit_1787":73,
	"mCcDCyl__10daTurara_c":74,
	"lit_3924":75,
	"lit_3925":76,
	"lit_3926":77,
	"lit_3927":78,
	"lit_3928":79,
	"mode_proc":80,
	"l_daTurara_Method":81,
	"g_profile_Obj_Turara":82,
	"__vt__10cCcD_GStts":83,
	"__vt__10dCcD_GStts":84,
	"__vt__12dBgS_AcchCir":85,
	"__vt__12dBgS_ObjAcch":86,
	"__vt__8cM3dGCyl":87,
	"__vt__8cM3dGAab":88,
	"__vt__17dEvLib_callback_c":89,
	"__vt__10daTurara_c":90,
	"__vt__14daTurara_HIO_c":91,
	"__vt__18fOpAcm_HIO_entry_c":92,
	"__vt__14mDoHIO_entry_c":93,
	"__global_destructor_chain":94,
	"lit_3653":95,
	"l_HIO":96,
	"data_80B9EBC4":97,
}

