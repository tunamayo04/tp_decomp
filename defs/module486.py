#
# Generate By: dol2asm
# Module: 486
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_ita",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_ita",
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
	{'addr':0x80C28280,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C282AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C282D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C282F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28314,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2836C,'size':64,'pad':0,'label':"__ct__15daObj_ITA_HIO_cFv",'name':"__ct__15daObj_ITA_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C283AC,'size':712,'pad':0,'label':"Search_Ymb__10daObjIta_cFv",'name':"Search_Ymb__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28674,'size':276,'pad':0,'label':"Check_RideOn__10daObjIta_cFv",'name':"Check_RideOn__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28788,'size':44,'pad':0,'label':"initBaseMtx__10daObjIta_cFv",'name':"initBaseMtx__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C287B4,'size':132,'pad':0,'label':"setBaseMtx__10daObjIta_cFv",'name':"setBaseMtx__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28838,'size':88,'pad':0,'label':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28890,'size':44,'pad':0,'label':"daObjIta_Draw__FP10daObjIta_c",'name':"daObjIta_Draw__FP10daObjIta_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C288BC,'size':32,'pad':0,'label':"daObjIta_Execute__FP10daObjIta_c",'name':"daObjIta_Execute__FP10daObjIta_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C288DC,'size':8,'pad':0,'label':"daObjIta_IsDelete__FP10daObjIta_c",'name':"daObjIta_IsDelete__FP10daObjIta_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C288E4,'size':36,'pad':0,'label':"daObjIta_Delete__FP10daObjIta_c",'name':"daObjIta_Delete__FP10daObjIta_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28908,'size':32,'pad':0,'label':"daObjIta_Create__FP10fopAc_ac_c",'name':"daObjIta_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28928,'size':536,'pad':0,'label':"create__10daObjIta_cFv",'name':"create__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28B40,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28BB0,'size':120,'pad':0,'label':"CreateHeap__10daObjIta_cFv",'name':"CreateHeap__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28C28,'size':72,'pad':0,'label':"Create__10daObjIta_cFv",'name':"Create__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C28C70,'size':1084,'pad':0,'label':"Execute__10daObjIta_cFPPA3_A4_f",'name':"Execute__10daObjIta_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C290AC,'size':164,'pad':0,'label':"Draw__10daObjIta_cFv",'name':"Draw__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C29150,'size':52,'pad':0,'label':"Delete__10daObjIta_cFv",'name':"Delete__10daObjIta_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C29184,'size':72,'pad':0,'label':"__dt__15daObj_ITA_HIO_cFv",'name':"__dt__15daObj_ITA_HIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C291CC,'size':12,'pad':0,'label':"func_80C291CC",'name':"sinShort__Q25JMath18TSinCosTable<13,f>CFs",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C291D8,'size':60,'pad':0,'label':"__sinit_d_a_obj_ita_cpp",'name':"__sinit_d_a_obj_ita_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C29214,'size':8,'pad':0,'label':"func_80C29214",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2921C,'size':8,'pad':0,'label':"func_80C2921C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C29224,'size':8,'pad':0,'label':"data_80C29224",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2922C,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C29230,'size':8,'pad':0,'label':"pad_80C29230",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C29238,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2923C,'size':4,'pad':0,'label':"lit_3650",'name':"@3650",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29240,'size':4,'pad':0,'label':"lit_3651",'name':"@3651",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29244,'size':4,'pad':0,'label':"lit_3652",'name':"@3652",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29248,'size':4,'pad':4,'label':"lit_3674",'name':"@3674",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C29250,'size':8,'pad':0,'label':"lit_3676",'name':"@3676",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C29258,'size':6,'pad':2,'label':"lit_3694",'name':"@3694",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C29260,'size':4,'pad':0,'label':"lit_3743",'name':"@3743",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29264,'size':4,'pad':0,'label':"lit_3744",'name':"@3744",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29268,'size':4,'pad':0,'label':"lit_3745",'name':"@3745",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2926C,'size':4,'pad':0,'label':"lit_3746",'name':"@3746",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29270,'size':4,'pad':0,'label':"lit_3747",'name':"@3747",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29274,'size':4,'pad':0,'label':"lit_3748",'name':"@3748",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29278,'size':4,'pad':0,'label':"lit_3749",'name':"@3749",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2927C,'size':4,'pad':0,'label':"lit_3750",'name':"@3750",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29280,'size':4,'pad':0,'label':"lit_3751",'name':"@3751",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29284,'size':4,'pad':0,'label':"lit_3752",'name':"@3752",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29288,'size':4,'pad':0,'label':"lit_3753",'name':"@3753",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2928C,'size':4,'pad':0,'label':"lit_3754",'name':"@3754",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29290,'size':4,'pad':0,'label':"lit_3755",'name':"@3755",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29294,'size':4,'pad':0,'label':"lit_3756",'name':"@3756",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C29298,'size':4,'pad':0,'label':"lit_3757",'name':"@3757",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2929C,'size':4,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292A0,'size':4,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292A4,'size':4,'pad':0,'label':"lit_3795",'name':"@3795",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292A8,'size':4,'pad':0,'label':"lit_3796",'name':"@3796",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292AC,'size':4,'pad':0,'label':"lit_3847",'name':"@3847",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292B0,'size':4,'pad':0,'label':"lit_3933",'name':"@3933",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292B4,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292B8,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292BC,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292C0,'size':4,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292C4,'size':4,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292C8,'size':4,'pad':0,'label':"lit_4016",'name':"@4016",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292CC,'size':4,'pad':0,'label':"lit_4017",'name':"@4017",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292D0,'size':4,'pad':0,'label':"lit_4018",'name':"@4018",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292D4,'size':4,'pad':0,'label':"lit_4019",'name':"@4019",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292D8,'size':4,'pad':0,'label':"lit_4020",'name':"@4020",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292DC,'size':4,'pad':0,'label':"lit_4021",'name':"@4021",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292E0,'size':4,'pad':0,'label':"lit_4022",'name':"@4022",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292E4,'size':4,'pad':0,'label':"lit_4023",'name':"@4023",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C292E8,'size':48,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C29318,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2931C,'size':32,'pad':0,'label':"l_daObjIta_Method",'name':"l_daObjIta_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2933C,'size':48,'pad':0,'label':"g_profile_Obj_ITA",'name':"g_profile_Obj_ITA",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2936C,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C29390,'size':40,'pad':0,'label':"__vt__10daObjIta_c",'name':"__vt__10daObjIta_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C293B8,'size':12,'pad':0,'label':"__vt__15daObj_ITA_HIO_c",'name':"__vt__15daObj_ITA_HIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C293C8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C293D0,'size':12,'pad':0,'label':"lit_3644",'name':"@3644",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C293DC,'size':24,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C293F4,'size':4,'pad':0,'label':"data_80C293F4",'name':"e_ymb__25@unnamed@d_a_obj_ita_cpp@",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C293F8,'size':4,'pad':0,'label':"data_80C293F8",'name':"e_ymb_Pos__25@unnamed@d_a_obj_ita_cpp@",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__15daObj_ITA_HIO_cFv":5,
	"Search_Ymb__10daObjIta_cFv":6,
	"Check_RideOn__10daObjIta_cFv":7,
	"initBaseMtx__10daObjIta_cFv":8,
	"setBaseMtx__10daObjIta_cFv":9,
	"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c":10,
	"daObjIta_Draw__FP10daObjIta_c":11,
	"daObjIta_Execute__FP10daObjIta_c":12,
	"daObjIta_IsDelete__FP10daObjIta_c":13,
	"daObjIta_Delete__FP10daObjIta_c":14,
	"daObjIta_Create__FP10fopAc_ac_c":15,
	"create__10daObjIta_cFv":16,
	"__dt__12dBgS_ObjAcchFv":17,
	"CreateHeap__10daObjIta_cFv":18,
	"Create__10daObjIta_cFv":19,
	"Execute__10daObjIta_cFPPA3_A4_f":20,
	"Draw__10daObjIta_cFv":21,
	"Delete__10daObjIta_cFv":22,
	"__dt__15daObj_ITA_HIO_cFv":23,
	"func_80C291CC":24,
	"__sinit_d_a_obj_ita_cpp":25,
	"func_80C29214":26,
	"func_80C2921C":27,
	"data_80C29224":28,
	"__destroy_global_chain_reference":29,
	"pad_80C29230":30,
	"lit_3649":31,
	"lit_3650":32,
	"lit_3651":33,
	"lit_3652":34,
	"lit_3674":35,
	"lit_3676":36,
	"lit_3694":37,
	"lit_3743":38,
	"lit_3744":39,
	"lit_3745":40,
	"lit_3746":41,
	"lit_3747":42,
	"lit_3748":43,
	"lit_3749":44,
	"lit_3750":45,
	"lit_3751":46,
	"lit_3752":47,
	"lit_3753":48,
	"lit_3754":49,
	"lit_3755":50,
	"lit_3756":51,
	"lit_3757":52,
	"lit_3793":53,
	"lit_3794":54,
	"lit_3795":55,
	"lit_3796":56,
	"lit_3847":57,
	"lit_3933":58,
	"lit_3934":59,
	"lit_3935":60,
	"lit_4013":61,
	"lit_4014":62,
	"lit_4015":63,
	"lit_4016":64,
	"lit_4017":65,
	"lit_4018":66,
	"lit_4019":67,
	"lit_4020":68,
	"lit_4021":69,
	"lit_4022":70,
	"lit_4023":71,
	"stringBase0":72,
	"l_arcName":73,
	"l_daObjIta_Method":74,
	"g_profile_Obj_ITA":75,
	"__vt__12dBgS_ObjAcch":76,
	"__vt__10daObjIta_c":77,
	"__vt__15daObj_ITA_HIO_c":78,
	"__global_destructor_chain":79,
	"lit_3644":80,
	"l_HIO":81,
	"data_80C293F4":82,
	"data_80C293F8":83,
}

