#
# Generate By: dol2asm
# Module: 605
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_rotBridge",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_rotBridge",
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
	{'addr':0x80CBE8A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE8CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE8F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE918,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE934,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE98C,'size':80,'pad':0,'label':"__ct__17daRotBridge_HIO_cFv",'name':"__ct__17daRotBridge_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBE9DC,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBEA24,'size':276,'pad':0,'label':"setBaseMtx__13daRotBridge_cFv",'name':"setBaseMtx__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBEB38,'size':388,'pad':0,'label':"CreateHeap__13daRotBridge_cFv",'name':"CreateHeap__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBECBC,'size':536,'pad':0,'label':"create__13daRotBridge_cFv",'name':"create__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBEED4,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBEF1C,'size':24,'pad':0,'label':"rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBEF34,'size':284,'pad':0,'label':"Execute__13daRotBridge_cFPPA3_A4_f",'name':"Execute__13daRotBridge_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF050,'size':412,'pad':0,'label':"playerAreaCheck__13daRotBridge_cFv",'name':"playerAreaCheck__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF1EC,'size':536,'pad':0,'label':"moveBridge__13daRotBridge_cFv",'name':"moveBridge__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF404,'size':184,'pad':0,'label':"Draw__13daRotBridge_cFv",'name':"Draw__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF4BC,'size':116,'pad':0,'label':"Delete__13daRotBridge_cFv",'name':"Delete__13daRotBridge_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF530,'size':44,'pad':0,'label':"daRotBridge_Draw__FP13daRotBridge_c",'name':"daRotBridge_Draw__FP13daRotBridge_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF55C,'size':32,'pad':0,'label':"daRotBridge_Execute__FP13daRotBridge_c",'name':"daRotBridge_Execute__FP13daRotBridge_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF57C,'size':32,'pad':0,'label':"daRotBridge_Delete__FP13daRotBridge_c",'name':"daRotBridge_Delete__FP13daRotBridge_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF59C,'size':32,'pad':0,'label':"daRotBridge_Create__FP10fopAc_ac_c",'name':"daRotBridge_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF5BC,'size':92,'pad':0,'label':"__dt__17daRotBridge_HIO_cFv",'name':"__dt__17daRotBridge_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF618,'size':60,'pad':0,'label':"__sinit_d_a_obj_rotBridge_cpp",'name':"__sinit_d_a_obj_rotBridge_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF654,'size':8,'pad':0,'label':"data_80CBF654",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF65C,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF660,'size':8,'pad':0,'label':"pad_80CBF660",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF668,'size':4,'pad':0,'label':"lit_3626",'name':"@3626",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CBF66C,'size':12,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF678,'size':12,'pad':0,'label':"l_dzbIdx",'name':"l_dzbIdx",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF684,'size':12,'pad':0,'label':"l_bckIdx",'name':"l_bckIdx",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF690,'size':4,'pad':4,'label':"lit_3694",'name':"@3694",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CBF698,'size':8,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF6A0,'size':4,'pad':0,'label':"lit_3833",'name':"@3833",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CBF6A4,'size':4,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF6A8,'size':8,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF6B0,'size':8,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF6B8,'size':8,'pad':0,'label':"lit_3881",'name':"@3881",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF6C0,'size':4,'pad':0,'label':"lit_3939",'name':"@3939",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CBF6C4,'size':20,'pad':0,'label':"struct_80CBF6C4",'name':None,'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80CBF6D8,'size':12,'pad':0,'label':"l_resNameIdx",'name':"l_resNameIdx",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF6E4,'size':32,'pad':0,'label':"l_daRotBridge_Method",'name':"l_daRotBridge_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF704,'size':48,'pad':0,'label':"g_profile_Obj_RotBridge",'name':"g_profile_Obj_RotBridge",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF734,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF740,'size':40,'pad':0,'label':"__vt__13daRotBridge_c",'name':"__vt__13daRotBridge_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF768,'size':12,'pad':0,'label':"__vt__17daRotBridge_HIO_c",'name':"__vt__17daRotBridge_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF774,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBF780,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF788,'size':12,'pad':0,'label':"lit_3620",'name':"@3620",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBF794,'size':24,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__17daRotBridge_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__13daRotBridge_cFv":7,
	"CreateHeap__13daRotBridge_cFv":8,
	"create__13daRotBridge_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":11,
	"Execute__13daRotBridge_cFPPA3_A4_f":12,
	"playerAreaCheck__13daRotBridge_cFv":13,
	"moveBridge__13daRotBridge_cFv":14,
	"Draw__13daRotBridge_cFv":15,
	"Delete__13daRotBridge_cFv":16,
	"daRotBridge_Draw__FP13daRotBridge_c":17,
	"daRotBridge_Execute__FP13daRotBridge_c":18,
	"daRotBridge_Delete__FP13daRotBridge_c":19,
	"daRotBridge_Create__FP10fopAc_ac_c":20,
	"__dt__17daRotBridge_HIO_cFv":21,
	"__sinit_d_a_obj_rotBridge_cpp":22,
	"data_80CBF654":23,
	"__destroy_global_chain_reference":24,
	"pad_80CBF660":25,
	"lit_3626":26,
	"l_bmdIdx":27,
	"l_dzbIdx":28,
	"l_bckIdx":29,
	"lit_3694":30,
	"lit_3776":31,
	"lit_3833":32,
	"lit_3878":33,
	"lit_3879":34,
	"lit_3880":35,
	"lit_3881":36,
	"lit_3939":37,
	"struct_80CBF6C4":38,
	"l_resNameIdx":39,
	"l_daRotBridge_Method":40,
	"g_profile_Obj_RotBridge":41,
	"__vt__12J3DFrameCtrl":42,
	"__vt__13daRotBridge_c":43,
	"__vt__17daRotBridge_HIO_c":44,
	"__vt__14mDoHIO_entry_c":45,
	"__global_destructor_chain":46,
	"lit_3620":47,
	"l_HIO":48,
}

