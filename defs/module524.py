#
# Generate By: dol2asm
# Module: 524
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv4CandleTag",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_lv4CandleTag",
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
	{'addr':0x80C5D360,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D38C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D3B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D3D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D3F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D44C,'size':36,'pad':0,'label':"__ct__20dalv4CandleTag_HIO_cFv",'name':"__ct__20dalv4CandleTag_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D470,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D4B8,'size':56,'pad':0,'label':"setBaseMtx__16dalv4CandleTag_cFv",'name':"setBaseMtx__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D4F0,'size':228,'pad':0,'label':"create__16dalv4CandleTag_cFv",'name':"create__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D5D4,'size':68,'pad':0,'label':"Execute__16dalv4CandleTag_cFv",'name':"Execute__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D618,'size':188,'pad':0,'label':"procMain__16dalv4CandleTag_cFv",'name':"procMain__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D6D4,'size':12,'pad':0,'label':"init_modeWatch__16dalv4CandleTag_cFv",'name':"init_modeWatch__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D6E0,'size':172,'pad':0,'label':"modeWatch__16dalv4CandleTag_cFv",'name':"modeWatch__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D78C,'size':136,'pad':0,'label':"init_modeNG__16dalv4CandleTag_cFv",'name':"init_modeNG__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D814,'size':140,'pad':0,'label':"modeNG__16dalv4CandleTag_cFv",'name':"modeNG__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D8A0,'size':12,'pad':0,'label':"init_modeNGWait__16dalv4CandleTag_cFv",'name':"init_modeNGWait__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D8AC,'size':80,'pad':0,'label':"modeNGWait__16dalv4CandleTag_cFv",'name':"modeNGWait__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D8FC,'size':12,'pad':0,'label':"init_modeEnd__16dalv4CandleTag_cFv",'name':"init_modeEnd__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D908,'size':4,'pad':0,'label':"modeEnd__16dalv4CandleTag_cFv",'name':"modeEnd__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D90C,'size':36,'pad':0,'label':"eventStart__16dalv4CandleTag_cFv",'name':"eventStart__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D930,'size':8,'pad':0,'label':"Draw__16dalv4CandleTag_cFv",'name':"Draw__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D938,'size':8,'pad':0,'label':"Delete__16dalv4CandleTag_cFv",'name':"Delete__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D940,'size':32,'pad':0,'label':"dalv4CandleTag_Draw__FP16dalv4CandleTag_c",'name':"dalv4CandleTag_Draw__FP16dalv4CandleTag_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D960,'size':32,'pad':0,'label':"dalv4CandleTag_Execute__FP16dalv4CandleTag_c",'name':"dalv4CandleTag_Execute__FP16dalv4CandleTag_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D980,'size':32,'pad':0,'label':"dalv4CandleTag_Delete__FP16dalv4CandleTag_c",'name':"dalv4CandleTag_Delete__FP16dalv4CandleTag_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D9A0,'size':32,'pad':0,'label':"dalv4CandleTag_Create__FP10fopAc_ac_c",'name':"dalv4CandleTag_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D9C0,'size':92,'pad':0,'label':"__dt__20dalv4CandleTag_HIO_cFv",'name':"__dt__20dalv4CandleTag_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DA1C,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv4CandleTag_cpp",'name':"__sinit_d_a_obj_lv4CandleTag_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DA58,'size':8,'pad':0,'label':"func_80C5DA58",'name':"@1392@eventStart__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DA60,'size':8,'pad':0,'label':"func_80C5DA60",'name':"@1392@__dt__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DA68,'size':72,'pad':0,'label':"__dt__17dEvLib_callback_cFv",'name':"__dt__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DAB0,'size':8,'pad':0,'label':"eventRun__17dEvLib_callback_cFv",'name':"eventRun__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5DAB8,'size':8,'pad':0,'label':"eventEnd__17dEvLib_callback_cFv",'name':"eventEnd__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5DAC0,'size':8,'pad':0,'label':"eventStart__17dEvLib_callback_cFv",'name':"eventStart__17dEvLib_callback_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5DAC8,'size':128,'pad':0,'label':"__dt__16dalv4CandleTag_cFv",'name':"__dt__16dalv4CandleTag_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5DB48,'size':8,'pad':0,'label':"data_80C5DB48",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DB50,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DB54,'size':8,'pad':0,'label':"pad_80C5DB54",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DB5C,'size':4,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C5DB60,'size':4,'pad':0,'label':"lit_3728",'name':"@3728",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C5DB64,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5DB70,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C5DB84,'size':12,'pad':0,'label':"lit_3686",'name':"@3686",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DB90,'size':12,'pad':0,'label':"lit_3687",'name':"@3687",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DB9C,'size':12,'pad':0,'label':"lit_3688",'name':"@3688",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DBA8,'size':12,'pad':0,'label':"lit_3689",'name':"@3689",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DBB4,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$3685",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5DBE4,'size':32,'pad':0,'label':"l_dalv4CandleTag_Method",'name':"l_dalv4CandleTag_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC04,'size':48,'pad':0,'label':"g_profile_Tag_Lv4Candle",'name':"g_profile_Tag_Lv4Candle",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC34,'size':40,'pad':0,'label':"__vt__16dalv4CandleTag_c",'name':"__vt__16dalv4CandleTag_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC5C,'size':24,'pad':0,'label':"__vt__17dEvLib_callback_c",'name':"__vt__17dEvLib_callback_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC74,'size':12,'pad':0,'label':"__vt__20dalv4CandleTag_HIO_c",'name':"__vt__20dalv4CandleTag_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC80,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5DC90,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5DC98,'size':12,'pad':0,'label':"lit_3624",'name':"@3624",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5DCA4,'size':8,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5DCAC,'size':4,'pad':0,'label':"data_80C5DCAC",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__20dalv4CandleTag_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__16dalv4CandleTag_cFv":7,
	"create__16dalv4CandleTag_cFv":8,
	"Execute__16dalv4CandleTag_cFv":9,
	"procMain__16dalv4CandleTag_cFv":10,
	"init_modeWatch__16dalv4CandleTag_cFv":11,
	"modeWatch__16dalv4CandleTag_cFv":12,
	"init_modeNG__16dalv4CandleTag_cFv":13,
	"modeNG__16dalv4CandleTag_cFv":14,
	"init_modeNGWait__16dalv4CandleTag_cFv":15,
	"modeNGWait__16dalv4CandleTag_cFv":16,
	"init_modeEnd__16dalv4CandleTag_cFv":17,
	"modeEnd__16dalv4CandleTag_cFv":18,
	"eventStart__16dalv4CandleTag_cFv":19,
	"Draw__16dalv4CandleTag_cFv":20,
	"Delete__16dalv4CandleTag_cFv":21,
	"dalv4CandleTag_Draw__FP16dalv4CandleTag_c":22,
	"dalv4CandleTag_Execute__FP16dalv4CandleTag_c":23,
	"dalv4CandleTag_Delete__FP16dalv4CandleTag_c":24,
	"dalv4CandleTag_Create__FP10fopAc_ac_c":25,
	"__dt__20dalv4CandleTag_HIO_cFv":26,
	"__sinit_d_a_obj_lv4CandleTag_cpp":27,
	"func_80C5DA58":28,
	"func_80C5DA60":29,
	"__dt__17dEvLib_callback_cFv":30,
	"eventRun__17dEvLib_callback_cFv":31,
	"eventEnd__17dEvLib_callback_cFv":32,
	"eventStart__17dEvLib_callback_cFv":33,
	"__dt__16dalv4CandleTag_cFv":34,
	"data_80C5DB48":35,
	"__destroy_global_chain_reference":36,
	"pad_80C5DB54":37,
	"lit_3727":38,
	"lit_3728":39,
	"cNullVec__6Z2Calc":40,
	"lit_1787":41,
	"lit_3686":42,
	"lit_3687":43,
	"lit_3688":44,
	"lit_3689":45,
	"mode_proc":46,
	"l_dalv4CandleTag_Method":47,
	"g_profile_Tag_Lv4Candle":48,
	"__vt__16dalv4CandleTag_c":49,
	"__vt__17dEvLib_callback_c":50,
	"__vt__20dalv4CandleTag_HIO_c":51,
	"__vt__14mDoHIO_entry_c":52,
	"__global_destructor_chain":53,
	"lit_3624":54,
	"l_HIO":55,
	"data_80C5DCAC":56,
}

