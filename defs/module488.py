#
# Generate By: dol2asm
# Module: 488
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_kabuto",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_kabuto",
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
	{'addr':0x80C2AD80,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2ADAC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2ADD8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2ADF8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AE14,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AE6C,'size':56,'pad':0,'label':"__ct__14daObj_KabHIO_cFv",'name':"__ct__14daObj_KabHIO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AEA4,'size':108,'pad':0,'label':"InitCcSph__13daObjKABUTO_cFv",'name':"InitCcSph__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AF10,'size':88,'pad':0,'label':"SetCcSph__13daObjKABUTO_cFv",'name':"SetCcSph__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AF68,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2AF88,'size':856,'pad':0,'label':"CreateHeap__13daObjKABUTO_cFv",'name':"CreateHeap__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B2E0,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B328,'size':32,'pad':0,'label':"daObjKABUTO_Create__FP10fopAc_ac_c",'name':"daObjKABUTO_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B348,'size':36,'pad':0,'label':"daObjKABUTO_Delete__FP13daObjKABUTO_c",'name':"daObjKABUTO_Delete__FP13daObjKABUTO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B36C,'size':360,'pad':0,'label':"ShopWaitAction__13daObjKABUTO_cFv",'name':"ShopWaitAction__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B4D4,'size':324,'pad':0,'label':"WaitAction__13daObjKABUTO_cFv",'name':"WaitAction__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B618,'size':556,'pad':0,'label':"WallCheck__13daObjKABUTO_cFv",'name':"WallCheck__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B844,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B88C,'size':268,'pad':0,'label':"SpeedSet__13daObjKABUTO_cFv",'name':"SpeedSet__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2B998,'size':1104,'pad':0,'label':"WallWalk__13daObjKABUTO_cFv",'name':"WallWalk__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2BDE8,'size':512,'pad':0,'label':"WalkAction__13daObjKABUTO_cFv",'name':"WalkAction__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2BFE8,'size':2016,'pad':0,'label':"MoveAction__13daObjKABUTO_cFv",'name':"MoveAction__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2C7C8,'size':380,'pad':0,'label':"Z_BufferChk__13daObjKABUTO_cFv",'name':"Z_BufferChk__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2C944,'size':196,'pad':0,'label':"Action__13daObjKABUTO_cFv",'name':"Action__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2CA08,'size':188,'pad':0,'label':"ShopAction__13daObjKABUTO_cFv",'name':"ShopAction__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2CAC4,'size':24,'pad':0,'label':"Insect_Release__13daObjKABUTO_cFv",'name':"Insect_Release__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2CADC,'size':316,'pad':0,'label':"ParticleSet__13daObjKABUTO_cFv",'name':"ParticleSet__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2CC18,'size':1540,'pad':0,'label':"Execute__13daObjKABUTO_cFv",'name':"Execute__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D21C,'size':392,'pad':0,'label':"ObjHit__13daObjKABUTO_cFv",'name':"ObjHit__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D3A4,'size':104,'pad':0,'label':"Delete__13daObjKABUTO_cFv",'name':"Delete__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D40C,'size':104,'pad':0,'label':"setBaseMtx__13daObjKABUTO_cFv",'name':"setBaseMtx__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D474,'size':228,'pad':0,'label':"daObjKABUTO_Draw__FP13daObjKABUTO_c",'name':"daObjKABUTO_Draw__FP13daObjKABUTO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D558,'size':32,'pad':0,'label':"daObjKABUTO_Execute__FP13daObjKABUTO_c",'name':"daObjKABUTO_Execute__FP13daObjKABUTO_c",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D578,'size':428,'pad':0,'label':"CreateChk__13daObjKABUTO_cFv",'name':"CreateChk__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2D724,'size':2108,'pad':0,'label':"create__13daObjKABUTO_cFv",'name':"create__13daObjKABUTO_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2DF60,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2DFD0,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E018,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E060,'size':8,'pad':0,'label':"daObjKABUTO_IsDelete__FP13daObjKABUTO_c",'name':"daObjKABUTO_IsDelete__FP13daObjKABUTO_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C2E068,'size':72,'pad':0,'label':"__dt__14daObj_KabHIO_cFv",'name':"__dt__14daObj_KabHIO_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E0B0,'size':60,'pad':0,'label':"__sinit_d_a_obj_kabuto_cpp",'name':"__sinit_d_a_obj_kabuto_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E0EC,'size':8,'pad':0,'label':"func_80C2E0EC",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E0F4,'size':8,'pad':0,'label':"func_80C2E0F4",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2E0FC,'size':8,'pad':0,'label':"data_80C2E0FC",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E104,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E108,'size':8,'pad':0,'label':"pad_80C2E108",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E110,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':2,'section':2,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E114,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E118,'size':4,'pad':0,'label':"lit_3777",'name':"@3777",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E11C,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3781",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E15C,'size':4,'pad':0,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E160,'size':4,'pad':0,'label':"lit_3896",'name':"@3896",'lib':-1,'tu':2,'section':2,'r':[7,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E164,'size':4,'pad':0,'label':"lit_3933",'name':"@3933",'lib':-1,'tu':2,'section':2,'r':[12,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E168,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E16C,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E170,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':2,'section':2,'r':[7,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E174,'size':4,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E178,'size':4,'pad':4,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E180,'size':8,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E188,'size':8,'pad':0,'label':"lit_4011",'name':"@4011",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E190,'size':8,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':2,'section':2,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E198,'size':4,'pad':0,'label':"lit_4036",'name':"@4036",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E19C,'size':4,'pad':0,'label':"lit_4037",'name':"@4037",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1A0,'size':4,'pad':0,'label':"lit_4038",'name':"@4038",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1A4,'size':4,'pad':0,'label':"lit_4039",'name':"@4039",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1A8,'size':4,'pad':0,'label':"lit_4140",'name':"@4140",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1AC,'size':4,'pad':0,'label':"lit_4141",'name':"@4141",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1B0,'size':4,'pad':0,'label':"lit_4142",'name':"@4142",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1B4,'size':4,'pad':0,'label':"lit_4143",'name':"@4143",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1B8,'size':4,'pad':0,'label':"lit_4176",'name':"@4176",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1BC,'size':4,'pad':0,'label':"lit_4322",'name':"@4322",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1C0,'size':4,'pad':0,'label':"lit_4323",'name':"@4323",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1C4,'size':4,'pad':0,'label':"lit_4324",'name':"@4324",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1C8,'size':4,'pad':0,'label':"lit_4325",'name':"@4325",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1CC,'size':4,'pad':0,'label':"lit_4326",'name':"@4326",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1D0,'size':4,'pad':0,'label':"lit_4327",'name':"@4327",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1D4,'size':4,'pad':0,'label':"lit_4367",'name':"@4367",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1D8,'size':4,'pad':0,'label':"lit_4368",'name':"@4368",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1DC,'size':4,'pad':0,'label':"lit_4369",'name':"@4369",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1E0,'size':2,'pad':2,'label':"l_kab_itemno",'name':"l_kab_itemno",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1E4,'size':4,'pad':0,'label':"lit_4473",'name':"@4473",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1E8,'size':4,'pad':0,'label':"lit_4474",'name':"@4474",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1EC,'size':4,'pad':0,'label':"lit_4496",'name':"@4496",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1F0,'size':8,'pad':0,'label':"lit_4545",'name':"@4545",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E1F8,'size':4,'pad':0,'label':"lit_4684",'name':"@4684",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E1FC,'size':4,'pad':0,'label':"lit_4779",'name':"@4779",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E200,'size':4,'pad':0,'label':"l_musiya_num",'name':"l_musiya_num",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E204,'size':4,'pad':0,'label':"lit_5055",'name':"@5055",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E208,'size':4,'pad':0,'label':"lit_5056",'name':"@5056",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E20C,'size':4,'pad':0,'label':"lit_5057",'name':"@5057",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E210,'size':4,'pad':0,'label':"lit_5058",'name':"@5058",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E214,'size':4,'pad':0,'label':"lit_5059",'name':"@5059",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2E218,'size':14,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C2E228,'size':32,'pad':0,'label':"l_daObjKABUTO_Method",'name':"l_daObjKABUTO_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E248,'size':48,'pad':0,'label':"g_profile_Obj_Kabuto",'name':"g_profile_Obj_Kabuto",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E278,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E29C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2A8,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2B4,'size':12,'pad':0,'label':"__vt__13daObjKABUTO_c",'name':"__vt__13daObjKABUTO_c",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2C0,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[5,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2CC,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2D8,'size':12,'pad':0,'label':"__vt__14daObj_KabHIO_c",'name':"__vt__14daObj_KabHIO_c",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2E2E8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E2F0,'size':4,'pad':0,'label':"data_80C2E2F0",'name':None,'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E2F4,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2E300,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_KabHIO_cFv":5,
	"InitCcSph__13daObjKABUTO_cFv":6,
	"SetCcSph__13daObjKABUTO_cFv":7,
	"useHeapInit__FP10fopAc_ac_c":8,
	"CreateHeap__13daObjKABUTO_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"daObjKABUTO_Create__FP10fopAc_ac_c":11,
	"daObjKABUTO_Delete__FP13daObjKABUTO_c":12,
	"ShopWaitAction__13daObjKABUTO_cFv":13,
	"WaitAction__13daObjKABUTO_cFv":14,
	"WallCheck__13daObjKABUTO_cFv":15,
	"__dt__8cM3dGPlaFv":16,
	"SpeedSet__13daObjKABUTO_cFv":17,
	"WallWalk__13daObjKABUTO_cFv":18,
	"WalkAction__13daObjKABUTO_cFv":19,
	"MoveAction__13daObjKABUTO_cFv":20,
	"Z_BufferChk__13daObjKABUTO_cFv":21,
	"Action__13daObjKABUTO_cFv":22,
	"ShopAction__13daObjKABUTO_cFv":23,
	"Insect_Release__13daObjKABUTO_cFv":24,
	"ParticleSet__13daObjKABUTO_cFv":25,
	"Execute__13daObjKABUTO_cFv":26,
	"ObjHit__13daObjKABUTO_cFv":27,
	"Delete__13daObjKABUTO_cFv":28,
	"setBaseMtx__13daObjKABUTO_cFv":29,
	"daObjKABUTO_Draw__FP13daObjKABUTO_c":30,
	"daObjKABUTO_Execute__FP13daObjKABUTO_c":31,
	"CreateChk__13daObjKABUTO_cFv":32,
	"create__13daObjKABUTO_cFv":33,
	"__dt__12dBgS_ObjAcchFv":34,
	"__dt__8cM3dGSphFv":35,
	"__dt__8cM3dGAabFv":36,
	"daObjKABUTO_IsDelete__FP13daObjKABUTO_c":37,
	"__dt__14daObj_KabHIO_cFv":38,
	"__sinit_d_a_obj_kabuto_cpp":39,
	"func_80C2E0EC":40,
	"func_80C2E0F4":41,
	"data_80C2E0FC":42,
	"__destroy_global_chain_reference":43,
	"pad_80C2E108":44,
	"lit_3775":45,
	"lit_3776":46,
	"lit_3777":47,
	"ccSphSrc":48,
	"lit_3790":49,
	"lit_3896":50,
	"lit_3933":51,
	"lit_3934":52,
	"lit_3935":53,
	"lit_3936":54,
	"lit_3937":55,
	"lit_3957":56,
	"lit_4010":57,
	"lit_4011":58,
	"lit_4012":59,
	"lit_4036":60,
	"lit_4037":61,
	"lit_4038":62,
	"lit_4039":63,
	"lit_4140":64,
	"lit_4141":65,
	"lit_4142":66,
	"lit_4143":67,
	"lit_4176":68,
	"lit_4322":69,
	"lit_4323":70,
	"lit_4324":71,
	"lit_4325":72,
	"lit_4326":73,
	"lit_4327":74,
	"lit_4367":75,
	"lit_4368":76,
	"lit_4369":77,
	"l_kab_itemno":78,
	"lit_4473":79,
	"lit_4474":80,
	"lit_4496":81,
	"lit_4545":82,
	"lit_4684":83,
	"lit_4779":84,
	"l_musiya_num":85,
	"lit_5055":86,
	"lit_5056":87,
	"lit_5057":88,
	"lit_5058":89,
	"lit_5059":90,
	"stringBase0":91,
	"l_daObjKABUTO_Method":92,
	"g_profile_Obj_Kabuto":93,
	"__vt__12dBgS_ObjAcch":94,
	"__vt__8cM3dGSph":95,
	"__vt__8cM3dGAab":96,
	"__vt__13daObjKABUTO_c":97,
	"__vt__8cM3dGPla":98,
	"__vt__12J3DFrameCtrl":99,
	"__vt__14daObj_KabHIO_c":100,
	"__global_destructor_chain":101,
	"data_80C2E2F0":102,
	"lit_3770":103,
	"l_HIO":104,
}

