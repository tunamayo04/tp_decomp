#
# Generate By: dol2asm
# Module: 682
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_wchain",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_wchain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80D2FE80,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2FEAC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2FED8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2FEF8,'size':164,'pad':0,'label':"createHeap__13daObjWchain_cFv",'name':"createHeap__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2FF9C,'size':32,'pad':0,'label':"daObjWchain_createHeap__FP10fopAc_ac_c",'name':"daObjWchain_createHeap__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2FFBC,'size':984,'pad':0,'label':"create__13daObjWchain_cFv",'name':"create__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D30394,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D303D0,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D303D4,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D303D8,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D30414,'size':32,'pad':0,'label':"daObjWchain_Create__FP10fopAc_ac_c",'name':"daObjWchain_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D30434,'size':216,'pad':0,'label':"__dt__13daObjWchain_cFv",'name':"__dt__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3050C,'size':40,'pad':0,'label':"daObjWchain_Delete__FP13daObjWchain_c",'name':"daObjWchain_Delete__FP13daObjWchain_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D30534,'size':176,'pad':0,'label':"setMatrix__13daObjWchain_cFv",'name':"setMatrix__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D305E4,'size':552,'pad':0,'label':"getChainAngleZ__13daObjWchain_cFP4cXyzi",'name':"getChainAngleZ__13daObjWchain_cFP4cXyzi",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3080C,'size':2208,'pad':0,'label':"setChainPos__13daObjWchain_cFv",'name':"setChainPos__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D310AC,'size':844,'pad':0,'label':"execute__13daObjWchain_cFv",'name':"execute__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D313F8,'size':32,'pad':0,'label':"daObjWchain_Execute__FP13daObjWchain_c",'name':"daObjWchain_Execute__FP13daObjWchain_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31418,'size':1016,'pad':0,'label':"draw__19daObjWchain_shape_cFv",'name':"draw__19daObjWchain_shape_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31810,'size':144,'pad':0,'label':"draw__13daObjWchain_cFv",'name':"draw__13daObjWchain_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D318A0,'size':32,'pad':0,'label':"daObjWchain_Draw__FP13daObjWchain_c",'name':"daObjWchain_Draw__FP13daObjWchain_c",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D318C0,'size':92,'pad':0,'label':"__dt__19daObjWchain_shape_cFv",'name':"__dt__19daObjWchain_shape_cFv",'lib':-1,'tu':3,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3191C,'size':4,'pad':0,'label':"data_80D3191C",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31920,'size':4,'pad':0,'label':"data_80D31920",'name':None,'lib':-1,'tu':2,'section':2,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31924,'size':7,'pad':1,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':3,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D3192C,'size':4,'pad':0,'label':"lit_3744",'name':"@3744",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31930,'size':4,'pad':0,'label':"lit_3745",'name':"@3745",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31934,'size':4,'pad':0,'label':"lit_3746",'name':"@3746",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31938,'size':4,'pad':0,'label':"lit_3747",'name':"@3747",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3193C,'size':4,'pad':0,'label':"lit_3748",'name':"@3748",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31940,'size':4,'pad':0,'label':"lit_3749",'name':"@3749",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31944,'size':4,'pad':0,'label':"lit_3750",'name':"@3750",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31948,'size':4,'pad':0,'label':"lit_3751",'name':"@3751",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3194C,'size':4,'pad':0,'label':"lit_3752",'name':"@3752",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31950,'size':4,'pad':0,'label':"lit_3753",'name':"@3753",'lib':-1,'tu':3,'section':3,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31954,'size':4,'pad':0,'label':"lit_3754",'name':"@3754",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31958,'size':4,'pad':0,'label':"lit_3755",'name':"@3755",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3195C,'size':4,'pad':0,'label':"lit_3756",'name':"@3756",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31960,'size':4,'pad':0,'label':"lit_3757",'name':"@3757",'lib':-1,'tu':3,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31964,'size':8,'pad':0,'label':"lit_3759",'name':"@3759",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D3196C,'size':12,'pad':0,'label':"eyeOffset",'name':"eyeOffset$3803",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31978,'size':4,'pad':0,'label':"lit_3819",'name':"@3819",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3197C,'size':8,'pad':0,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31984,'size':8,'pad':0,'label':"lit_3864",'name':"@3864",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D3198C,'size':8,'pad':0,'label':"lit_3865",'name':"@3865",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D31994,'size':4,'pad':0,'label':"lit_3866",'name':"@3866",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D31998,'size':4,'pad':0,'label':"lit_3867",'name':"@3867",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3199C,'size':12,'pad':0,'label':"currentOffset",'name':"currentOffset$3872",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D319A8,'size':12,'pad':0,'label':"chainOffset",'name':"chainOffset$3873",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D319B4,'size':4,'pad':0,'label':"lit_4154",'name':"@4154",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319B8,'size':4,'pad':0,'label':"lit_4155",'name':"@4155",'lib':-1,'tu':3,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319BC,'size':4,'pad':0,'label':"lit_4156",'name':"@4156",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319C0,'size':4,'pad':0,'label':"lit_4157",'name':"@4157",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319C4,'size':4,'pad':0,'label':"lit_4158",'name':"@4158",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319C8,'size':4,'pad':0,'label':"lit_4159",'name':"@4159",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319CC,'size':4,'pad':0,'label':"lit_4160",'name':"@4160",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319D0,'size':4,'pad':0,'label':"lit_4161",'name':"@4161",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319D4,'size':4,'pad':0,'label':"lit_4252",'name':"@4252",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319D8,'size':4,'pad':0,'label':"lit_4253",'name':"@4253",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319DC,'size':4,'pad':0,'label':"lit_4254",'name':"@4254",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319E0,'size':4,'pad':0,'label':"lit_4364",'name':"@4364",'lib':-1,'tu':3,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D319E4,'size':32,'pad':0,'label':"l_daObjWchain_Method",'name':"l_daObjWchain_Method",'lib':-1,'tu':3,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D31A04,'size':48,'pad':0,'label':"g_profile_Obj_Wchain",'name':"g_profile_Obj_Wchain",'lib':-1,'tu':3,'section':4,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D31A34,'size':20,'pad':0,'label':"__vt__19daObjWchain_shape_c",'name':"__vt__19daObjWchain_shape_c",'lib':-1,'tu':3,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"createHeap__13daObjWchain_cFv":3,
	"daObjWchain_createHeap__FP10fopAc_ac_c":4,
	"create__13daObjWchain_cFv":5,
	"__dt__5csXyzFv":6,
	"__ct__5csXyzFv":7,
	"__ct__4cXyzFv":8,
	"__dt__4cXyzFv":9,
	"daObjWchain_Create__FP10fopAc_ac_c":10,
	"__dt__13daObjWchain_cFv":11,
	"daObjWchain_Delete__FP13daObjWchain_c":12,
	"setMatrix__13daObjWchain_cFv":13,
	"getChainAngleZ__13daObjWchain_cFP4cXyzi":14,
	"setChainPos__13daObjWchain_cFv":15,
	"execute__13daObjWchain_cFv":16,
	"daObjWchain_Execute__FP13daObjWchain_c":17,
	"draw__19daObjWchain_shape_cFv":18,
	"draw__13daObjWchain_cFv":19,
	"daObjWchain_Draw__FP13daObjWchain_c":20,
	"__dt__19daObjWchain_shape_cFv":21,
	"data_80D3191C":22,
	"data_80D31920":23,
	"l_arcName":24,
	"lit_3744":25,
	"lit_3745":26,
	"lit_3746":27,
	"lit_3747":28,
	"lit_3748":29,
	"lit_3749":30,
	"lit_3750":31,
	"lit_3751":32,
	"lit_3752":33,
	"lit_3753":34,
	"lit_3754":35,
	"lit_3755":36,
	"lit_3756":37,
	"lit_3757":38,
	"lit_3759":39,
	"eyeOffset":40,
	"lit_3819":41,
	"lit_3863":42,
	"lit_3864":43,
	"lit_3865":44,
	"lit_3866":45,
	"lit_3867":46,
	"currentOffset":47,
	"chainOffset":48,
	"lit_4154":49,
	"lit_4155":50,
	"lit_4156":51,
	"lit_4157":52,
	"lit_4158":53,
	"lit_4159":54,
	"lit_4160":55,
	"lit_4161":56,
	"lit_4252":57,
	"lit_4253":58,
	"lit_4254":59,
	"lit_4364":60,
	"l_daObjWchain_Method":61,
	"g_profile_Obj_Wchain":62,
	"__vt__19daObjWchain_shape_c":63,
}

