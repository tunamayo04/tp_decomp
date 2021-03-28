#
# Generate By: dol2asm
# Module: 601
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_rfHole",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_rfHole",
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
	{'addr':0x80CB8D80,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8DAC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8DD8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8DF8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8E14,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8E6C,'size':80,'pad':0,'label':"__ct__14daRfHole_HIO_cFv",'name':"__ct__14daRfHole_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8EBC,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8F04,'size':136,'pad':0,'label':"setBaseMtx__10daRfHole_cFv",'name':"setBaseMtx__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8F8C,'size':108,'pad':0,'label':"CreateHeap__10daRfHole_cFv",'name':"CreateHeap__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB8FF8,'size':336,'pad':0,'label':"create__10daRfHole_cFv",'name':"create__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9148,'size':76,'pad':0,'label':"rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9194,'size':632,'pad':0,'label':"playerAreaCheck__10daRfHole_cFv",'name':"playerAreaCheck__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB940C,'size':88,'pad':0,'label':"Execute__10daRfHole_cFPPA3_A4_f",'name':"Execute__10daRfHole_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9464,'size':188,'pad':0,'label':"holeProc__10daRfHole_cFv",'name':"holeProc__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9520,'size':12,'pad':0,'label':"init_modeWait__10daRfHole_cFv",'name':"init_modeWait__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB952C,'size':44,'pad':0,'label':"modeWait__10daRfHole_cFv",'name':"modeWait__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9558,'size':340,'pad':0,'label':"init_modeBreak__10daRfHole_cFv",'name':"init_modeBreak__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB96AC,'size':32,'pad':0,'label':"modeBreak__10daRfHole_cFv",'name':"modeBreak__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB96CC,'size':80,'pad':0,'label':"init_modeBreakEff__10daRfHole_cFv",'name':"init_modeBreakEff__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB971C,'size':32,'pad':0,'label':"modeBreakEff__10daRfHole_cFv",'name':"modeBreakEff__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB973C,'size':12,'pad':0,'label':"init_modeEnd__10daRfHole_cFv",'name':"init_modeEnd__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9748,'size':32,'pad':0,'label':"modeEnd__10daRfHole_cFv",'name':"modeEnd__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9768,'size':272,'pad':0,'label':"setBreakEffect__10daRfHole_cFv",'name':"setBreakEffect__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9878,'size':164,'pad':0,'label':"Draw__10daRfHole_cFv",'name':"Draw__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB991C,'size':48,'pad':0,'label':"Delete__10daRfHole_cFv",'name':"Delete__10daRfHole_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB994C,'size':44,'pad':0,'label':"daRfHole_Draw__FP10daRfHole_c",'name':"daRfHole_Draw__FP10daRfHole_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9978,'size':32,'pad':0,'label':"daRfHole_Execute__FP10daRfHole_c",'name':"daRfHole_Execute__FP10daRfHole_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9998,'size':32,'pad':0,'label':"daRfHole_Delete__FP10daRfHole_c",'name':"daRfHole_Delete__FP10daRfHole_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB99B8,'size':32,'pad':0,'label':"daRfHole_Create__FP10fopAc_ac_c",'name':"daRfHole_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB99D8,'size':92,'pad':0,'label':"__dt__14daRfHole_HIO_cFv",'name':"__dt__14daRfHole_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9A34,'size':60,'pad':0,'label':"__sinit_d_a_obj_rfHole_cpp",'name':"__sinit_d_a_obj_rfHole_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9A70,'size':8,'pad':0,'label':"data_80CB9A70",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9A78,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9A7C,'size':8,'pad':0,'label':"pad_80CB9A7C",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9A84,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CB9A88,'size':4,'pad':0,'label':"lit_3650",'name':"@3650",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CB9A8C,'size':4,'pad':4,'label':"lit_3651",'name':"@3651",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9A94,'size':8,'pad':0,'label':"lit_3817",'name':"@3817",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9A9C,'size':8,'pad':0,'label':"lit_3818",'name':"@3818",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9AA4,'size':8,'pad':0,'label':"lit_3819",'name':"@3819",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9AAC,'size':4,'pad':0,'label':"lit_3820",'name':"@3820",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CB9AB0,'size':4,'pad':0,'label':"lit_3821",'name':"@3821",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CB9AB4,'size':10,'pad':2,'label':"particle_id",'name':"particle_id$3917",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9AC0,'size':9,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CB9ACC,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9AD8,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CB9AEC,'size':12,'pad':0,'label':"lit_3835",'name':"@3835",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9AF8,'size':12,'pad':0,'label':"lit_3836",'name':"@3836",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9B04,'size':12,'pad':0,'label':"lit_3837",'name':"@3837",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9B10,'size':12,'pad':0,'label':"lit_3838",'name':"@3838",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9B1C,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$3834",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9B4C,'size':32,'pad':0,'label':"l_daRfHole_Method",'name':"l_daRfHole_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9B6C,'size':48,'pad':0,'label':"g_profile_Obj_RfHole",'name':"g_profile_Obj_RfHole",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9B9C,'size':40,'pad':0,'label':"__vt__10daRfHole_c",'name':"__vt__10daRfHole_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9BC4,'size':12,'pad':0,'label':"__vt__14daRfHole_HIO_c",'name':"__vt__14daRfHole_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9BD0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CB9BE0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9BE8,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9BF4,'size':24,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CB9C0C,'size':4,'pad':0,'label':"data_80CB9C0C",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daRfHole_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daRfHole_cFv":7,
	"CreateHeap__10daRfHole_cFv":8,
	"create__10daRfHole_cFv":9,
	"rideCallBack__10daRfHole_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":10,
	"playerAreaCheck__10daRfHole_cFv":11,
	"Execute__10daRfHole_cFPPA3_A4_f":12,
	"holeProc__10daRfHole_cFv":13,
	"init_modeWait__10daRfHole_cFv":14,
	"modeWait__10daRfHole_cFv":15,
	"init_modeBreak__10daRfHole_cFv":16,
	"modeBreak__10daRfHole_cFv":17,
	"init_modeBreakEff__10daRfHole_cFv":18,
	"modeBreakEff__10daRfHole_cFv":19,
	"init_modeEnd__10daRfHole_cFv":20,
	"modeEnd__10daRfHole_cFv":21,
	"setBreakEffect__10daRfHole_cFv":22,
	"Draw__10daRfHole_cFv":23,
	"Delete__10daRfHole_cFv":24,
	"daRfHole_Draw__FP10daRfHole_c":25,
	"daRfHole_Execute__FP10daRfHole_c":26,
	"daRfHole_Delete__FP10daRfHole_c":27,
	"daRfHole_Create__FP10fopAc_ac_c":28,
	"__dt__14daRfHole_HIO_cFv":29,
	"__sinit_d_a_obj_rfHole_cpp":30,
	"data_80CB9A70":31,
	"__destroy_global_chain_reference":32,
	"pad_80CB9A7C":33,
	"lit_3649":34,
	"lit_3650":35,
	"lit_3651":36,
	"lit_3817":37,
	"lit_3818":38,
	"lit_3819":39,
	"lit_3820":40,
	"lit_3821":41,
	"particle_id":42,
	"stringBase0":43,
	"cNullVec__6Z2Calc":44,
	"lit_1787":45,
	"lit_3835":46,
	"lit_3836":47,
	"lit_3837":48,
	"lit_3838":49,
	"mode_proc":50,
	"l_daRfHole_Method":51,
	"g_profile_Obj_RfHole":52,
	"__vt__10daRfHole_c":53,
	"__vt__14daRfHole_HIO_c":54,
	"__vt__14mDoHIO_entry_c":55,
	"__global_destructor_chain":56,
	"lit_3643":57,
	"l_HIO":58,
	"data_80CB9C0C":59,
}

