#
# Generate By: dol2asm
# Module: 548
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv6SzGate",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_lv6SzGate",
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
	{'addr':0x80C75780,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C757AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C757D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C757F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75814,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7586C,'size':76,'pad':0,'label':"__ct__17daLv6SzGate_HIO_cFv",'name':"__ct__17daLv6SzGate_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C758B8,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75900,'size':340,'pad':0,'label':"setBaseMtx__13daLv6SzGate_cFv",'name':"setBaseMtx__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75A54,'size':440,'pad':0,'label':"CreateHeap__13daLv6SzGate_cFv",'name':"CreateHeap__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75C0C,'size':452,'pad':0,'label':"create__13daLv6SzGate_cFv",'name':"create__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75DD0,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75E18,'size':96,'pad':0,'label':"Execute__13daLv6SzGate_cFPPA3_A4_f",'name':"Execute__13daLv6SzGate_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75E78,'size':236,'pad':0,'label':"moveGate__13daLv6SzGate_cFv",'name':"moveGate__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75F64,'size':12,'pad':0,'label':"init_modeWait__13daLv6SzGate_cFv",'name':"init_modeWait__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75F70,'size':80,'pad':0,'label':"modeWait__13daLv6SzGate_cFv",'name':"modeWait__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75FC0,'size':24,'pad':0,'label':"init_modeOpenWait0__13daLv6SzGate_cFv",'name':"init_modeOpenWait0__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C75FD8,'size':56,'pad':0,'label':"modeOpenWait0__13daLv6SzGate_cFv",'name':"modeOpenWait0__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76010,'size':132,'pad':0,'label':"init_modeOpenWait__13daLv6SzGate_cFv",'name':"init_modeOpenWait__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76094,'size':92,'pad':0,'label':"modeOpenWait__13daLv6SzGate_cFv",'name':"modeOpenWait__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C760F0,'size':12,'pad':0,'label':"init_modeOpen__13daLv6SzGate_cFv",'name':"init_modeOpen__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C760FC,'size':336,'pad':0,'label':"modeOpen__13daLv6SzGate_cFv",'name':"modeOpen__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7624C,'size':220,'pad':0,'label':"modeClose__13daLv6SzGate_cFv",'name':"modeClose__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76328,'size':28,'pad':0,'label':"init_modeEnd__13daLv6SzGate_cFv",'name':"init_modeEnd__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76344,'size':56,'pad':0,'label':"modeEnd__13daLv6SzGate_cFv",'name':"modeEnd__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7637C,'size':276,'pad':0,'label':"Draw__13daLv6SzGate_cFv",'name':"Draw__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76490,'size':104,'pad':0,'label':"Delete__13daLv6SzGate_cFv",'name':"Delete__13daLv6SzGate_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C764F8,'size':44,'pad':0,'label':"daLv6SzGate_Draw__FP13daLv6SzGate_c",'name':"daLv6SzGate_Draw__FP13daLv6SzGate_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76524,'size':32,'pad':0,'label':"daLv6SzGate_Execute__FP13daLv6SzGate_c",'name':"daLv6SzGate_Execute__FP13daLv6SzGate_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76544,'size':32,'pad':0,'label':"daLv6SzGate_Delete__FP13daLv6SzGate_c",'name':"daLv6SzGate_Delete__FP13daLv6SzGate_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76564,'size':32,'pad':0,'label':"daLv6SzGate_Create__FP10fopAc_ac_c",'name':"daLv6SzGate_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76584,'size':92,'pad':0,'label':"__dt__17daLv6SzGate_HIO_cFv",'name':"__dt__17daLv6SzGate_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C765E0,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv6SzGate_cpp",'name':"__sinit_d_a_obj_lv6SzGate_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7661C,'size':8,'pad':0,'label':"data_80C7661C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C76624,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C76628,'size':8,'pad':0,'label':"pad_80C76628",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C76630,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76634,'size':4,'pad':0,'label':"lit_3628",'name':"@3628",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76638,'size':4,'pad':0,'label':"lit_3629",'name':"@3629",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C7663C,'size':4,'pad':0,'label':"lit_3630",'name':"@3630",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76640,'size':4,'pad':0,'label':"lit_3665",'name':"@3665",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76644,'size':4,'pad':0,'label':"lit_3666",'name':"@3666",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C76648,'size':4,'pad':0,'label':"lit_3697",'name':"@3697",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C7664C,'size':4,'pad':0,'label':"lit_3843",'name':"@3843",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76650,'size':4,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76654,'size':4,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76658,'size':4,'pad':0,'label':"lit_3901",'name':"@3901",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C7665C,'size':9,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C76668,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C76674,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C76688,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C766A0,'size':12,'pad':0,'label':"lit_3799",'name':"@3799",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766AC,'size':12,'pad':0,'label':"lit_3800",'name':"@3800",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766B8,'size':12,'pad':0,'label':"lit_3801",'name':"@3801",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766C4,'size':12,'pad':0,'label':"lit_3802",'name':"@3802",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766D0,'size':12,'pad':0,'label':"lit_3803",'name':"@3803",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766DC,'size':12,'pad':0,'label':"lit_3804",'name':"@3804",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C766E8,'size':72,'pad':0,'label':"mode_proc",'name':"mode_proc$3798",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C76730,'size':32,'pad':0,'label':"l_daLv6SzGate_Method",'name':"l_daLv6SzGate_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C76750,'size':48,'pad':0,'label':"g_profile_Obj_Lv6SzGate",'name':"g_profile_Obj_Lv6SzGate",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C76780,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C7678C,'size':40,'pad':0,'label':"__vt__13daLv6SzGate_c",'name':"__vt__13daLv6SzGate_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C767B4,'size':12,'pad':0,'label':"__vt__17daLv6SzGate_HIO_c",'name':"__vt__17daLv6SzGate_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C767C0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C767D0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C767D8,'size':12,'pad':0,'label':"lit_3621",'name':"@3621",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C767E4,'size':24,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C767FC,'size':4,'pad':0,'label':"data_80C767FC",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__17daLv6SzGate_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__13daLv6SzGate_cFv":7,
	"CreateHeap__13daLv6SzGate_cFv":8,
	"create__13daLv6SzGate_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"Execute__13daLv6SzGate_cFPPA3_A4_f":11,
	"moveGate__13daLv6SzGate_cFv":12,
	"init_modeWait__13daLv6SzGate_cFv":13,
	"modeWait__13daLv6SzGate_cFv":14,
	"init_modeOpenWait0__13daLv6SzGate_cFv":15,
	"modeOpenWait0__13daLv6SzGate_cFv":16,
	"init_modeOpenWait__13daLv6SzGate_cFv":17,
	"modeOpenWait__13daLv6SzGate_cFv":18,
	"init_modeOpen__13daLv6SzGate_cFv":19,
	"modeOpen__13daLv6SzGate_cFv":20,
	"modeClose__13daLv6SzGate_cFv":21,
	"init_modeEnd__13daLv6SzGate_cFv":22,
	"modeEnd__13daLv6SzGate_cFv":23,
	"Draw__13daLv6SzGate_cFv":24,
	"Delete__13daLv6SzGate_cFv":25,
	"daLv6SzGate_Draw__FP13daLv6SzGate_c":26,
	"daLv6SzGate_Execute__FP13daLv6SzGate_c":27,
	"daLv6SzGate_Delete__FP13daLv6SzGate_c":28,
	"daLv6SzGate_Create__FP10fopAc_ac_c":29,
	"__dt__17daLv6SzGate_HIO_cFv":30,
	"__sinit_d_a_obj_lv6SzGate_cpp":31,
	"data_80C7661C":32,
	"__destroy_global_chain_reference":33,
	"pad_80C76628":34,
	"lit_3627":35,
	"lit_3628":36,
	"lit_3629":37,
	"lit_3630":38,
	"lit_3665":39,
	"lit_3666":40,
	"lit_3697":41,
	"lit_3843":42,
	"lit_3879":43,
	"lit_3880":44,
	"lit_3901":45,
	"stringBase0":46,
	"cNullVec__6Z2Calc":47,
	"lit_1787":48,
	"l_cull_box":49,
	"lit_3799":50,
	"lit_3800":51,
	"lit_3801":52,
	"lit_3802":53,
	"lit_3803":54,
	"lit_3804":55,
	"mode_proc":56,
	"l_daLv6SzGate_Method":57,
	"g_profile_Obj_Lv6SzGate":58,
	"__vt__12J3DFrameCtrl":59,
	"__vt__13daLv6SzGate_c":60,
	"__vt__17daLv6SzGate_HIO_c":61,
	"__vt__14mDoHIO_entry_c":62,
	"__global_destructor_chain":63,
	"lit_3621":64,
	"l_HIO":65,
	"data_80C767FC":66,
}

