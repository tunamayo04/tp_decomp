#
# Generate By: dol2asm
# Module: 419
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_cblock",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_cblock",
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
	{'addr':0x80BC5920,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC594C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5978,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5998,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC59B4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5A0C,'size':60,'pad':0,'label':"initBaseMtx__11daObjCBlk_cFv",'name':"initBaseMtx__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5A48,'size':116,'pad':0,'label':"setBaseMtx__11daObjCBlk_cFv",'name':"setBaseMtx__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5ABC,'size':512,'pad':0,'label':"Create__11daObjCBlk_cFv",'name':"Create__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5CBC,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5CF8,'size':352,'pad':0,'label':"CreateHeap__11daObjCBlk_cFv",'name':"CreateHeap__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5E58,'size':60,'pad':0,'label':"__dt__Q211daObjCBlk_c7chain_sFv",'name':"__dt__Q211daObjCBlk_c7chain_sFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC5E94,'size':4,'pad':0,'label':"__ct__Q211daObjCBlk_c7chain_sFv",'name':"__ct__Q211daObjCBlk_c7chain_sFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BC5E98,'size':392,'pad':0,'label':"create__11daObjCBlk_cFv",'name':"create__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6020,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BC6024,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC60A8,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6174,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC61BC,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6204,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6260,'size':16,'pad':0,'label':"Execute__11daObjCBlk_cFPPA3_A4_f",'name':"Execute__11daObjCBlk_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6270,'size':12,'pad':0,'label':"initWait__11daObjCBlk_cFv",'name':"initWait__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC627C,'size':408,'pad':0,'label':"modeWait__11daObjCBlk_cFv",'name':"modeWait__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6414,'size':28,'pad':0,'label':"initWalk__11daObjCBlk_cFv",'name':"initWalk__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6430,'size':412,'pad':0,'label':"modeWalk__11daObjCBlk_cFv",'name':"modeWalk__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC65CC,'size':124,'pad':0,'label':"getChainBasePos__11daObjCBlk_cFP4cXyz",'name':"getChainBasePos__11daObjCBlk_cFP4cXyz",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6648,'size':148,'pad':0,'label':"setPower__11daObjCBlk_cFf",'name':"setPower__11daObjCBlk_cFf",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC66DC,'size':396,'pad':0,'label':"checkWall__11daObjCBlk_cFv",'name':"checkWall__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6868,'size':8,'pad':0,'label':"Draw__11daObjCBlk_cFv",'name':"Draw__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BC6870,'size':52,'pad':0,'label':"Delete__11daObjCBlk_cFv",'name':"Delete__11daObjCBlk_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC68A4,'size':44,'pad':0,'label':"daObjCBlk_Draw__FP11daObjCBlk_c",'name':"daObjCBlk_Draw__FP11daObjCBlk_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC68D0,'size':32,'pad':0,'label':"daObjCBlk_Execute__FP11daObjCBlk_c",'name':"daObjCBlk_Execute__FP11daObjCBlk_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC68F0,'size':32,'pad':0,'label':"daObjCBlk_Delete__FP11daObjCBlk_c",'name':"daObjCBlk_Delete__FP11daObjCBlk_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6910,'size':32,'pad':0,'label':"daObjCBlk_Create__FP10fopAc_ac_c",'name':"daObjCBlk_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6930,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6978,'size':28,'pad':0,'label':"func_80BC6978",'name':"cLib_calcTimer<s>__FPs",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6994,'size':144,'pad':0,'label':"__sinit_d_a_obj_cblock_cpp",'name':"__sinit_d_a_obj_cblock_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BC6A24,'size':8,'pad':0,'label':"data_80BC6A24",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6A2C,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6A30,'size':8,'pad':0,'label':"pad_80BC6A30",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6A38,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6A50,'size':4,'pad':0,'label':"lit_3731",'name':"@3731",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6A54,'size':4,'pad':0,'label':"lit_3732",'name':"@3732",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A58,'size':4,'pad':0,'label':"lit_3977",'name':"@3977",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A5C,'size':4,'pad':0,'label':"lit_3978",'name':"@3978",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A60,'size':4,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A64,'size':4,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A68,'size':4,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A6C,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A70,'size':8,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6A78,'size':4,'pad':0,'label':"lit_4103",'name':"@4103",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A7C,'size':4,'pad':0,'label':"lit_4104",'name':"@4104",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A80,'size':4,'pad':0,'label':"lit_4105",'name':"@4105",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A84,'size':4,'pad':0,'label':"lit_4106",'name':"@4106",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A88,'size':4,'pad':4,'label':"lit_4107",'name':"@4107",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6A90,'size':8,'pad':0,'label':"lit_4310",'name':"@4310",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6A98,'size':8,'pad':0,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6AA0,'size':8,'pad':0,'label':"lit_4312",'name':"@4312",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6AA8,'size':4,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AAC,'size':4,'pad':0,'label':"lit_4314",'name':"@4314",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AB0,'size':4,'pad':0,'label':"lit_4389",'name':"@4389",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AB4,'size':4,'pad':0,'label':"lit_4390",'name':"@4390",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AB8,'size':4,'pad':0,'label':"lit_4391",'name':"@4391",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6ABC,'size':4,'pad':0,'label':"lit_4440",'name':"@4440",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AC0,'size':4,'pad':0,'label':"lit_4441",'name':"@4441",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AC4,'size':4,'pad':0,'label':"lit_4442",'name':"@4442",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AC8,'size':9,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BC6AD4,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6AE0,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BC6AF4,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6AF8,'size':48,'pad':0,'label':"l_side_co_offset",'name':"l_side_co_offset",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6B28,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6B6C,'size':12,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6B78,'size':12,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6B84,'size':24,'pad':0,'label':"data_80BC6B84",'name':"l_func$3920",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6B9C,'size':32,'pad':0,'label':"l_daObjCBlk_Method",'name':"l_daObjCBlk_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6BBC,'size':48,'pad':0,'label':"g_profile_Obj_ChainBlock",'name':"g_profile_Obj_ChainBlock",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6BEC,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6BF8,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6C04,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6C10,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6C1C,'size':40,'pad':0,'label':"__vt__11daObjCBlk_c",'name':"__vt__11daObjCBlk_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BC6C48,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C50,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C54,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C58,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C5C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C60,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C64,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C68,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C6C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C70,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C74,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C78,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C7C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C80,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C84,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C88,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C8C,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C90,'size':12,'pad':0,'label':"lit_3644",'name':"@3644",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6C9C,'size':12,'pad':0,'label':"l_chainOffset",'name':"l_chainOffset",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CA8,'size':12,'pad':0,'label':"lit_3645",'name':"@3645",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CB4,'size':12,'pad':4,'label':"l_smokeSetOffset",'name':"l_smokeSetOffset",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CC4,'size':4,'pad':0,'label':"data_80BC6CC4",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CC8,'size':4,'pad':0,'label':"data_80BC6CC8",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CCC,'size':4,'pad':0,'label':"data_80BC6CCC",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CD0,'size':4,'pad':0,'label':"data_80BC6CD0",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CD4,'size':4,'pad':0,'label':"data_80BC6CD4",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CD8,'size':4,'pad':0,'label':"data_80BC6CD8",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CDC,'size':4,'pad':0,'label':"data_80BC6CDC",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CE0,'size':4,'pad':0,'label':"data_80BC6CE0",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CE4,'size':4,'pad':0,'label':"data_80BC6CE4",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CE8,'size':4,'pad':0,'label':"data_80BC6CE8",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CEC,'size':4,'pad':0,'label':"data_80BC6CEC",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CF0,'size':4,'pad':0,'label':"data_80BC6CF0",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CF4,'size':4,'pad':0,'label':"data_80BC6CF4",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CF8,'size':4,'pad':0,'label':"data_80BC6CF8",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6CFC,'size':4,'pad':0,'label':"data_80BC6CFC",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D00,'size':4,'pad':0,'label':"data_80BC6D00",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D04,'size':4,'pad':0,'label':"data_80BC6D04",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D08,'size':4,'pad':0,'label':"data_80BC6D08",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D0C,'size':4,'pad':0,'label':"data_80BC6D0C",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D10,'size':4,'pad':0,'label':"data_80BC6D10",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D14,'size':4,'pad':0,'label':"data_80BC6D14",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D18,'size':4,'pad':0,'label':"data_80BC6D18",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D1C,'size':4,'pad':0,'label':"data_80BC6D1C",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D20,'size':4,'pad':0,'label':"data_80BC6D20",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BC6D24,'size':4,'pad':0,'label':"data_80BC6D24",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"initBaseMtx__11daObjCBlk_cFv":5,
	"setBaseMtx__11daObjCBlk_cFv":6,
	"Create__11daObjCBlk_cFv":7,
	"__dt__4cXyzFv":8,
	"CreateHeap__11daObjCBlk_cFv":9,
	"__dt__Q211daObjCBlk_c7chain_sFv":10,
	"__ct__Q211daObjCBlk_c7chain_sFv":11,
	"create__11daObjCBlk_cFv":12,
	"__ct__4cXyzFv":13,
	"__ct__8dCcD_CylFv":14,
	"__dt__8dCcD_CylFv":15,
	"__dt__8cM3dGCylFv":16,
	"__dt__8cM3dGAabFv":17,
	"__dt__10dCcD_GSttsFv":18,
	"Execute__11daObjCBlk_cFPPA3_A4_f":19,
	"initWait__11daObjCBlk_cFv":20,
	"modeWait__11daObjCBlk_cFv":21,
	"initWalk__11daObjCBlk_cFv":22,
	"modeWalk__11daObjCBlk_cFv":23,
	"getChainBasePos__11daObjCBlk_cFP4cXyz":24,
	"setPower__11daObjCBlk_cFf":25,
	"checkWall__11daObjCBlk_cFv":26,
	"Draw__11daObjCBlk_cFv":27,
	"Delete__11daObjCBlk_cFv":28,
	"daObjCBlk_Draw__FP11daObjCBlk_c":29,
	"daObjCBlk_Execute__FP11daObjCBlk_c":30,
	"daObjCBlk_Delete__FP11daObjCBlk_c":31,
	"daObjCBlk_Create__FP10fopAc_ac_c":32,
	"__dt__10cCcD_GSttsFv":33,
	"func_80BC6978":34,
	"__sinit_d_a_obj_cblock_cpp":35,
	"data_80BC6A24":36,
	"__destroy_global_chain_reference":37,
	"pad_80BC6A30":38,
	"l_cull_box":39,
	"lit_3731":40,
	"lit_3732":41,
	"lit_3977":42,
	"lit_3978":43,
	"lit_3979":44,
	"lit_3980":45,
	"lit_4012":46,
	"lit_4013":47,
	"lit_4015":48,
	"lit_4103":49,
	"lit_4104":50,
	"lit_4105":51,
	"lit_4106":52,
	"lit_4107":53,
	"lit_4310":54,
	"lit_4311":55,
	"lit_4312":56,
	"lit_4313":57,
	"lit_4314":58,
	"lit_4389":59,
	"lit_4390":60,
	"lit_4391":61,
	"lit_4440":62,
	"lit_4441":63,
	"lit_4442":64,
	"stringBase0":65,
	"cNullVec__6Z2Calc":66,
	"lit_1787":67,
	"l_arcName":68,
	"l_side_co_offset":69,
	"l_cyl_src":70,
	"lit_3921":71,
	"lit_3922":72,
	"data_80BC6B84":73,
	"l_daObjCBlk_Method":74,
	"g_profile_Obj_ChainBlock":75,
	"__vt__10cCcD_GStts":76,
	"__vt__10dCcD_GStts":77,
	"__vt__8cM3dGCyl":78,
	"__vt__8cM3dGAab":79,
	"__vt__11daObjCBlk_c":80,
	"__global_destructor_chain":81,
	"lit_1109":82,
	"lit_1107":83,
	"lit_1105":84,
	"lit_1104":85,
	"lit_1099":86,
	"lit_1097":87,
	"lit_1095":88,
	"lit_1094":89,
	"lit_1057":90,
	"lit_1055":91,
	"lit_1053":92,
	"lit_1052":93,
	"lit_1014":94,
	"lit_1012":95,
	"lit_1010":96,
	"lit_1009":97,
	"lit_3644":98,
	"l_chainOffset":99,
	"lit_3645":100,
	"l_smokeSetOffset":101,
	"data_80BC6CC4":102,
	"data_80BC6CC8":103,
	"data_80BC6CCC":104,
	"data_80BC6CD0":105,
	"data_80BC6CD4":106,
	"data_80BC6CD8":107,
	"data_80BC6CDC":108,
	"data_80BC6CE0":109,
	"data_80BC6CE4":110,
	"data_80BC6CE8":111,
	"data_80BC6CEC":112,
	"data_80BC6CF0":113,
	"data_80BC6CF4":114,
	"data_80BC6CF8":115,
	"data_80BC6CFC":116,
	"data_80BC6D00":117,
	"data_80BC6D04":118,
	"data_80BC6D08":119,
	"data_80BC6D0C":120,
	"data_80BC6D10":121,
	"data_80BC6D14":122,
	"data_80BC6D18":123,
	"data_80BC6D1C":124,
	"data_80BC6D20":125,
	"data_80BC6D24":126,
}

