#
# Generate By: dol2asm
# Module: 665
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_togeTrap",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_togeTrap",
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
	{'addr':0x80D17A80,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17AAC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17AD8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17AF8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17B14,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17B6C,'size':100,'pad':0,'label':"__ct__16daTogeTrap_HIO_cFv",'name':"__ct__16daTogeTrap_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17BD0,'size':92,'pad':0,'label':"__dt__18fOpAcm_HIO_entry_cFv",'name':"__dt__18fOpAcm_HIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17C2C,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17C74,'size':232,'pad':0,'label':"setBaseMtx__12daTogeTrap_cFv",'name':"setBaseMtx__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17D5C,'size':184,'pad':0,'label':"CreateHeap__12daTogeTrap_cFv",'name':"CreateHeap__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17E14,'size':500,'pad':0,'label':"create__12daTogeTrap_cFv",'name':"create__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18008,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D180D4,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18158,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D181A0,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D181E8,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18244,'size':24,'pad':0,'label':"rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1825C,'size':108,'pad':0,'label':"Execute__12daTogeTrap_cFPPA3_A4_f",'name':"Execute__12daTogeTrap_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D182C8,'size':788,'pad':0,'label':"moveMain__12daTogeTrap_cFv",'name':"moveMain__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D185DC,'size':212,'pad':0,'label':"playerAreaCheck__12daTogeTrap_cFv",'name':"playerAreaCheck__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D186B0,'size':12,'pad':0,'label':"init_modeWait__12daTogeTrap_cFv",'name':"init_modeWait__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D186BC,'size':4,'pad':0,'label':"modeWait__12daTogeTrap_cFv",'name':"modeWait__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D186C0,'size':196,'pad':0,'label':"init_modeMoveUp__12daTogeTrap_cFv",'name':"init_modeMoveUp__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18784,'size':316,'pad':0,'label':"modeMoveUp__12daTogeTrap_cFv",'name':"modeMoveUp__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D188C0,'size':28,'pad':0,'label':"init_modeMoveDown__12daTogeTrap_cFv",'name':"init_modeMoveDown__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D188DC,'size':184,'pad':0,'label':"modeMoveDown__12daTogeTrap_cFv",'name':"modeMoveDown__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18994,'size':200,'pad':0,'label':"init_modeBreak__12daTogeTrap_cFv",'name':"init_modeBreak__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18A5C,'size':400,'pad':0,'label':"modeBreak__12daTogeTrap_cFv",'name':"modeBreak__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18BEC,'size':184,'pad':0,'label':"Draw__12daTogeTrap_cFv",'name':"Draw__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18CA4,'size':48,'pad':0,'label':"Delete__12daTogeTrap_cFv",'name':"Delete__12daTogeTrap_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18CD4,'size':44,'pad':0,'label':"daTogeTrap_Draw__FP12daTogeTrap_c",'name':"daTogeTrap_Draw__FP12daTogeTrap_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18D00,'size':32,'pad':0,'label':"daTogeTrap_Execute__FP12daTogeTrap_c",'name':"daTogeTrap_Execute__FP12daTogeTrap_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18D20,'size':32,'pad':0,'label':"daTogeTrap_Delete__FP12daTogeTrap_c",'name':"daTogeTrap_Delete__FP12daTogeTrap_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18D40,'size':32,'pad':0,'label':"daTogeTrap_Create__FP10fopAc_ac_c",'name':"daTogeTrap_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18D60,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18DA8,'size':108,'pad':0,'label':"__dt__16daTogeTrap_HIO_cFv",'name':"__dt__16daTogeTrap_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18E14,'size':112,'pad':0,'label':"__sinit_d_a_obj_togeTrap_cpp",'name':"__sinit_d_a_obj_togeTrap_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D18E84,'size':8,'pad':0,'label':"data_80D18E84",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18E8C,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18E90,'size':8,'pad':0,'label':"pad_80D18E90",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18E98,'size':4,'pad':0,'label':"lit_3655",'name':"@3655",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18E9C,'size':4,'pad':0,'label':"lit_3656",'name':"@3656",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EA0,'size':4,'pad':0,'label':"lit_3657",'name':"@3657",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EA4,'size':4,'pad':0,'label':"lit_3658",'name':"@3658",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EA8,'size':4,'pad':0,'label':"lit_3659",'name':"@3659",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EAC,'size':48,'pad':0,'label':"mCcDObjInfo__12daTogeTrap_c",'name':"mCcDObjInfo__12daTogeTrap_c",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18EDC,'size':4,'pad':0,'label':"lit_3780",'name':"@3780",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EE0,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EE4,'size':4,'pad':0,'label':"lit_3941",'name':"@3941",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EE8,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EEC,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EF0,'size':8,'pad':0,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18EF8,'size':4,'pad':0,'label':"lit_3975",'name':"@3975",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18EFC,'size':4,'pad':0,'label':"lit_4006",'name':"@4006",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18F00,'size':4,'pad':0,'label':"lit_4007",'name':"@4007",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18F04,'size':4,'pad':0,'label':"lit_4036",'name':"@4036",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18F08,'size':7,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D18F10,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18F1C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D18F30,'size':68,'pad':0,'label':"mCcDCyl__12daTogeTrap_c",'name':"mCcDCyl__12daTogeTrap_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18F74,'size':12,'pad':0,'label':"lit_3883",'name':"@3883",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18F80,'size':12,'pad':0,'label':"lit_3884",'name':"@3884",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18F8C,'size':12,'pad':0,'label':"lit_3885",'name':"@3885",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18F98,'size':12,'pad':0,'label':"lit_3886",'name':"@3886",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18FA4,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$3882",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D18FD4,'size':32,'pad':0,'label':"l_daTogeTrap_Method",'name':"l_daTogeTrap_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D18FF4,'size':48,'pad':0,'label':"g_profile_Obj_TogeTrap",'name':"g_profile_Obj_TogeTrap",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19024,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19030,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1903C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19048,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19054,'size':40,'pad':0,'label':"__vt__12daTogeTrap_c",'name':"__vt__12daTogeTrap_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1907C,'size':12,'pad':0,'label':"__vt__16daTogeTrap_HIO_c",'name':"__vt__16daTogeTrap_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19088,'size':12,'pad':0,'label':"__vt__18fOpAcm_HIO_entry_c",'name':"__vt__18fOpAcm_HIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D19094,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D190A0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D190A8,'size':12,'pad':0,'label':"lit_3647",'name':"@3647",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D190B4,'size':32,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D190D4,'size':4,'pad':0,'label':"data_80D190D4",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__16daTogeTrap_HIO_cFv":5,
	"__dt__18fOpAcm_HIO_entry_cFv":6,
	"__dt__14mDoHIO_entry_cFv":7,
	"setBaseMtx__12daTogeTrap_cFv":8,
	"CreateHeap__12daTogeTrap_cFv":9,
	"create__12daTogeTrap_cFv":10,
	"__dt__8dCcD_CylFv":11,
	"__ct__8dCcD_CylFv":12,
	"__dt__8cM3dGCylFv":13,
	"__dt__8cM3dGAabFv":14,
	"__dt__10dCcD_GSttsFv":15,
	"rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":16,
	"Execute__12daTogeTrap_cFPPA3_A4_f":17,
	"moveMain__12daTogeTrap_cFv":18,
	"playerAreaCheck__12daTogeTrap_cFv":19,
	"init_modeWait__12daTogeTrap_cFv":20,
	"modeWait__12daTogeTrap_cFv":21,
	"init_modeMoveUp__12daTogeTrap_cFv":22,
	"modeMoveUp__12daTogeTrap_cFv":23,
	"init_modeMoveDown__12daTogeTrap_cFv":24,
	"modeMoveDown__12daTogeTrap_cFv":25,
	"init_modeBreak__12daTogeTrap_cFv":26,
	"modeBreak__12daTogeTrap_cFv":27,
	"Draw__12daTogeTrap_cFv":28,
	"Delete__12daTogeTrap_cFv":29,
	"daTogeTrap_Draw__FP12daTogeTrap_c":30,
	"daTogeTrap_Execute__FP12daTogeTrap_c":31,
	"daTogeTrap_Delete__FP12daTogeTrap_c":32,
	"daTogeTrap_Create__FP10fopAc_ac_c":33,
	"__dt__10cCcD_GSttsFv":34,
	"__dt__16daTogeTrap_HIO_cFv":35,
	"__sinit_d_a_obj_togeTrap_cpp":36,
	"data_80D18E84":37,
	"__destroy_global_chain_reference":38,
	"pad_80D18E90":39,
	"lit_3655":40,
	"lit_3656":41,
	"lit_3657":42,
	"lit_3658":43,
	"lit_3659":44,
	"mCcDObjInfo__12daTogeTrap_c":45,
	"lit_3780":46,
	"lit_3940":47,
	"lit_3941":48,
	"lit_3942":49,
	"lit_3943":50,
	"lit_3945":51,
	"lit_3975":52,
	"lit_4006":53,
	"lit_4007":54,
	"lit_4036":55,
	"stringBase0":56,
	"cNullVec__6Z2Calc":57,
	"lit_1787":58,
	"mCcDCyl__12daTogeTrap_c":59,
	"lit_3883":60,
	"lit_3884":61,
	"lit_3885":62,
	"lit_3886":63,
	"mode_proc":64,
	"l_daTogeTrap_Method":65,
	"g_profile_Obj_TogeTrap":66,
	"__vt__10cCcD_GStts":67,
	"__vt__10dCcD_GStts":68,
	"__vt__8cM3dGAab":69,
	"__vt__8cM3dGCyl":70,
	"__vt__12daTogeTrap_c":71,
	"__vt__16daTogeTrap_HIO_c":72,
	"__vt__18fOpAcm_HIO_entry_c":73,
	"__vt__14mDoHIO_entry_c":74,
	"__global_destructor_chain":75,
	"lit_3647":76,
	"l_HIO":77,
	"data_80D190D4":78,
}

