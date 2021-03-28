#
# Generate By: dol2asm
# Module: 500
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_ki",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_ki",
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
	{'addr':0x80C43E00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43E2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43E58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43E78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43E94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43EEC,'size':32,'pad':0,'label':"__ct__14daObj_Ki_HIO_cFv",'name':"__ct__14daObj_Ki_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C43F0C,'size':260,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44010,'size':112,'pad':0,'label':"daObj_Ki_Draw__FP12obj_ki_class",'name':"daObj_Ki_Draw__FP12obj_ki_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44080,'size':12,'pad':0,'label':"action__FP12obj_ki_class",'name':"action__FP12obj_ki_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4408C,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C440C8,'size':792,'pad':0,'label':"daObj_Ki_Execute__FP12obj_ki_class",'name':"daObj_Ki_Execute__FP12obj_ki_class",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C443E0,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4441C,'size':8,'pad':0,'label':"daObj_Ki_IsDelete__FP12obj_ki_class",'name':"daObj_Ki_IsDelete__FP12obj_ki_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C44424,'size':104,'pad':0,'label':"daObj_Ki_Delete__FP12obj_ki_class",'name':"daObj_Ki_Delete__FP12obj_ki_class",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4448C,'size':480,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4466C,'size':908,'pad':0,'label':"daObj_Ki_Create__FP10fopAc_ac_c",'name':"daObj_Ki_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C449F8,'size':96,'pad':0,'label':"__dt__7sq_cp_sFv",'name':"__dt__7sq_cp_sFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44A58,'size':72,'pad':0,'label':"__ct__7sq_cp_sFv",'name':"__ct__7sq_cp_sFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44AA0,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C44AA4,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C44AA8,'size':72,'pad':0,'label':"__dt__14daObj_Ki_HIO_cFv",'name':"__dt__14daObj_Ki_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44AF0,'size':60,'pad':0,'label':"__sinit_d_a_obj_ki_cpp",'name':"__sinit_d_a_obj_ki_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C44B2C,'size':8,'pad':0,'label':"data_80C44B2C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44B34,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44B38,'size':8,'pad':0,'label':"pad_80C44B38",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44B40,'size':4,'pad':0,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B44,'size':4,'pad':0,'label':"lit_3791",'name':"@3791",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B48,'size':8,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44B50,'size':4,'pad':0,'label':"lit_3873",'name':"@3873",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B54,'size':4,'pad':0,'label':"lit_3976",'name':"@3976",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B58,'size':4,'pad':0,'label':"lit_3977",'name':"@3977",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B5C,'size':4,'pad':0,'label':"lit_3978",'name':"@3978",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44B60,'size':4,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B64,'size':4,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B68,'size':4,'pad':0,'label':"lit_3981",'name':"@3981",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B6C,'size':4,'pad':0,'label':"lit_3982",'name':"@3982",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B70,'size':4,'pad':0,'label':"lit_3983",'name':"@3983",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B74,'size':4,'pad':0,'label':"lit_3984",'name':"@3984",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B78,'size':4,'pad':0,'label':"lit_3985",'name':"@3985",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B7C,'size':4,'pad':0,'label':"lit_3986",'name':"@3986",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C44B80,'size':8,'pad':0,'label':"lit_3988",'name':"@3988",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44B88,'size':7,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C44B90,'size':8,'pad':0,'label':"ki_bmd",'name':"ki_bmd",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44B98,'size':8,'pad':0,'label':"ki_dzb",'name':"ki_dzb$3829",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44BA0,'size':32,'pad':0,'label':"l_daObj_Ki_Method",'name':"l_daObj_Ki_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44BC0,'size':48,'pad':0,'label':"g_profile_OBJ_KI",'name':"g_profile_OBJ_KI",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44BF0,'size':12,'pad':0,'label':"__vt__14daObj_Ki_HIO_c",'name':"__vt__14daObj_Ki_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C44C00,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44C08,'size':4,'pad':0,'label':"data_80C44C08",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44C0C,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C44C18,'size':8,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_Ki_HIO_cFv":5,
	"nodeCallBack__FP8J3DJointi":6,
	"daObj_Ki_Draw__FP12obj_ki_class":7,
	"action__FP12obj_ki_class":8,
	"__dt__4cXyzFv":9,
	"daObj_Ki_Execute__FP12obj_ki_class":10,
	"__dt__5csXyzFv":11,
	"daObj_Ki_IsDelete__FP12obj_ki_class":12,
	"daObj_Ki_Delete__FP12obj_ki_class":13,
	"useHeapInit__FP10fopAc_ac_c":14,
	"daObj_Ki_Create__FP10fopAc_ac_c":15,
	"__dt__7sq_cp_sFv":16,
	"__ct__7sq_cp_sFv":17,
	"__ct__4cXyzFv":18,
	"__ct__5csXyzFv":19,
	"__dt__14daObj_Ki_HIO_cFv":20,
	"__sinit_d_a_obj_ki_cpp":21,
	"data_80C44B2C":22,
	"__destroy_global_chain_reference":23,
	"pad_80C44B38":24,
	"lit_3790":25,
	"lit_3791":26,
	"lit_3793":27,
	"lit_3873":28,
	"lit_3976":29,
	"lit_3977":30,
	"lit_3978":31,
	"lit_3979":32,
	"lit_3980":33,
	"lit_3981":34,
	"lit_3982":35,
	"lit_3983":36,
	"lit_3984":37,
	"lit_3985":38,
	"lit_3986":39,
	"lit_3988":40,
	"stringBase0":41,
	"ki_bmd":42,
	"ki_dzb":43,
	"l_daObj_Ki_Method":44,
	"g_profile_OBJ_KI":45,
	"__vt__14daObj_Ki_HIO_c":46,
	"__global_destructor_chain":47,
	"data_80C44C08":48,
	"lit_3643":49,
	"l_HIO":50,
}

