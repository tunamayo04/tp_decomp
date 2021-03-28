#
# Generate By: dol2asm
# Module: 21
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_swpush",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_swpush",
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
	{'addr':0x80482C60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482C8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482CB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482CD8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482CF4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482D4C,'size':48,'pad':0,'label':"prmZ_init__Q211daObjSwpush5Act_cFv",'name':"prmZ_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482D7C,'size':72,'pad':0,'label':"is_switch2__Q211daObjSwpush5Act_cCFv",'name':"is_switch2__Q211daObjSwpush5Act_cCFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482DC4,'size':36,'pad':0,'label':"solidHeapCB__Q211daObjSwpush5Act_cFP10fopAc_ac_c",'name':"solidHeapCB__Q211daObjSwpush5Act_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482DE8,'size':512,'pad':0,'label':"create_heap__Q211daObjSwpush5Act_cFv",'name':"create_heap__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80482FE8,'size':80,'pad':0,'label':"create_res_load__Q211daObjSwpush5Act_cFv",'name':"create_res_load__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483038,'size':1048,'pad':0,'label':"Mthd_Create__Q211daObjSwpush5Act_cFv",'name':"Mthd_Create__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483450,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048348C,'size':92,'pad':0,'label':"Mthd_Delete__Q211daObjSwpush5Act_cFv",'name':"Mthd_Delete__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804834E8,'size':76,'pad':0,'label':"set_mtx__Q211daObjSwpush5Act_cFv",'name':"set_mtx__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483534,'size':60,'pad':0,'label':"init_mtx__Q211daObjSwpush5Act_cFv",'name':"init_mtx__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483570,'size':4,'pad':0,'label':"set_btp_frame__Q211daObjSwpush5Act_cFv",'name':"set_btp_frame__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80483574,'size':924,'pad':0,'label':"rideCB__Q211daObjSwpush5Act_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCB__Q211daObjSwpush5Act_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483910,'size':92,'pad':0,'label':"__dt__8cM3dGTriFv",'name':"__dt__8cM3dGTriFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048396C,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804839B4,'size':168,'pad':0,'label':"jnodeCB__Q211daObjSwpush5Act_cFP8J3DJointi",'name':"jnodeCB__Q211daObjSwpush5Act_cFP8J3DJointi",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483A5C,'size':276,'pad':0,'label':"calc_top_pos__Q211daObjSwpush5Act_cFv",'name':"calc_top_pos__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483B70,'size':12,'pad':0,'label':"top_bg_aim_req__Q211daObjSwpush5Act_cFfs",'name':"top_bg_aim_req__Q211daObjSwpush5Act_cFfs",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483B7C,'size':400,'pad':0,'label':"set_push_flag__Q211daObjSwpush5Act_cFv",'name':"set_push_flag__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483D0C,'size':32,'pad':0,'label':"mode_upper_init__Q211daObjSwpush5Act_cFv",'name':"mode_upper_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483D2C,'size':636,'pad':0,'label':"mode_upper__Q211daObjSwpush5Act_cFv",'name':"mode_upper__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80483FA8,'size':96,'pad':0,'label':"mode_u_l_init__Q211daObjSwpush5Act_cFv",'name':"mode_u_l_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484008,'size':460,'pad':0,'label':"mode_u_l__Q211daObjSwpush5Act_cFv",'name':"mode_u_l__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804841D4,'size':32,'pad':0,'label':"mode_lower_init__Q211daObjSwpush5Act_cFv",'name':"mode_lower_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804841F4,'size':404,'pad':0,'label':"mode_lower__Q211daObjSwpush5Act_cFv",'name':"mode_lower__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484388,'size':56,'pad':0,'label':"mode_l_u_init__Q211daObjSwpush5Act_cFv",'name':"mode_l_u_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804843C0,'size':432,'pad':0,'label':"mode_l_u__Q211daObjSwpush5Act_cFv",'name':"mode_l_u__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484570,'size':12,'pad':0,'label':"demo_non_init__Q211daObjSwpush5Act_cFv",'name':"demo_non_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048457C,'size':4,'pad':0,'label':"demo_non__Q211daObjSwpush5Act_cFv",'name':"demo_non__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80484580,'size':88,'pad':0,'label':"demo_reqPause_init__Q211daObjSwpush5Act_cFv",'name':"demo_reqPause_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804845D8,'size':52,'pad':0,'label':"demo_reqPause__Q211daObjSwpush5Act_cFv",'name':"demo_reqPause__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048460C,'size':64,'pad':0,'label':"demo_runPause_init__Q211daObjSwpush5Act_cFv",'name':"demo_runPause_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048464C,'size':104,'pad':0,'label':"demo_runPause__Q211daObjSwpush5Act_cFv",'name':"demo_runPause__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804846B4,'size':84,'pad':0,'label':"demo_stop_puase__Q211daObjSwpush5Act_cFv",'name':"demo_stop_puase__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484708,'size':172,'pad':0,'label':"demo_reqSw_init__Q211daObjSwpush5Act_cFv",'name':"demo_reqSw_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804847B4,'size':116,'pad':0,'label':"demo_reqSw__Q211daObjSwpush5Act_cFv",'name':"demo_reqSw__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484828,'size':12,'pad':0,'label':"demo_runSw_init__Q211daObjSwpush5Act_cFv",'name':"demo_runSw_init__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484834,'size':92,'pad':0,'label':"demo_runSw__Q211daObjSwpush5Act_cFv",'name':"demo_runSw__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484890,'size':72,'pad':0,'label':"check_ride_couple__Q211daObjSwpush5Act_cFs",'name':"check_ride_couple__Q211daObjSwpush5Act_cFs",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804848D8,'size':48,'pad':0,'label':"nr_ride_people__Q211daObjSwpush5Act_cFc",'name':"nr_ride_people__Q211daObjSwpush5Act_cFc",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484908,'size':688,'pad':0,'label':"Mthd_Execute__Q211daObjSwpush5Act_cFv",'name':"Mthd_Execute__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484BB8,'size':164,'pad':0,'label':"Mthd_Draw__Q211daObjSwpush5Act_cFv",'name':"Mthd_Draw__Q211daObjSwpush5Act_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484C5C,'size':32,'pad':0,'label':"func_80484C5C",'name':"Mthd_Create__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484C7C,'size':32,'pad':0,'label':"func_80484C7C",'name':"Mthd_Delete__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484C9C,'size':32,'pad':0,'label':"func_80484C9C",'name':"Mthd_Execute__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484CBC,'size':32,'pad':0,'label':"func_80484CBC",'name':"Mthd_Draw__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484CDC,'size':8,'pad':0,'label':"func_80484CDC",'name':"Mthd_IsDelete__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@FPv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80484CE4,'size':28,'pad':0,'label':"func_80484CE4",'name':"PrmAbstract<Q311daObjSwpush5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwpush5Act_c5Prm_eQ311daObjSwpush5Act_c5Prm_e",'lib':-1,'tu':2,'section':0,'r':[8,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80484D00,'size':4,'pad':0,'label':"data_80484D00",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484D04,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484D08,'size':8,'pad':0,'label':"pad_80484D08",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484D10,'size':6,'pad':2,'label':"M_bmd__Q211daObjSwpush5Act_c",'name':"M_bmd__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':2,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484D18,'size':6,'pad':2,'label':"M_dzb__Q211daObjSwpush5Act_c",'name':"M_dzb__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484D20,'size':12,'pad':0,'label':"M_heap_size__Q211daObjSwpush5Act_c",'name':"M_heap_size__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484D2C,'size':220,'pad':0,'label':"M_attr__Q211daObjSwpush5Act_c",'name':"M_attr__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484E08,'size':4,'pad':0,'label':"M_op_vtx__Q211daObjSwpush5Act_c",'name':"M_op_vtx__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E0C,'size':4,'pad':0,'label':"lit_3872",'name':"@3872",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E10,'size':4,'pad':0,'label':"lit_3873",'name':"@3873",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E14,'size':4,'pad':0,'label':"lit_3874",'name':"@3874",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E18,'size':4,'pad':0,'label':"lit_3875",'name':"@3875",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E1C,'size':4,'pad':0,'label':"lit_3876",'name':"@3876",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E20,'size':4,'pad':0,'label':"lit_3877",'name':"@3877",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E24,'size':4,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E28,'size':4,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':2,'section':2,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484E2C,'size':4,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'r':[8,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E30,'size':4,'pad':0,'label':"lit_3881",'name':"@3881",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E34,'size':6,'pad':2,'label':"tri_id",'name':"tri_id$3921",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484E3C,'size':4,'pad':0,'label':"lit_4028",'name':"@4028",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E40,'size':4,'pad':0,'label':"lit_4097",'name':"@4097",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E44,'size':4,'pad':0,'label':"lit_4214",'name':"@4214",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E48,'size':4,'pad':0,'label':"lit_4554",'name':"@4554",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484E4C,'size':56,'pad':0,'label':"struct_80484E4C",'name':None,'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80484E84,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484E90,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80484EA4,'size':12,'pad':0,'label':"M_arcname__Q211daObjSwpush5Act_c",'name':"M_arcname__Q211daObjSwpush5Act_c",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484EB0,'size':12,'pad':0,'label':"lit_4518",'name':"@4518",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484EBC,'size':12,'pad':0,'label':"lit_4519",'name':"@4519",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484EC8,'size':12,'pad':0,'label':"lit_4520",'name':"@4520",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484ED4,'size':12,'pad':0,'label':"lit_4521",'name':"@4521",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484EE0,'size':12,'pad':0,'label':"lit_4522",'name':"@4522",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484EEC,'size':60,'pad':0,'label':"demo_proc",'name':"demo_proc$4517",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484F28,'size':12,'pad':0,'label':"lit_4526",'name':"@4526",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484F34,'size':12,'pad':0,'label':"lit_4527",'name':"@4527",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484F40,'size':12,'pad':0,'label':"lit_4528",'name':"@4528",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484F4C,'size':12,'pad':0,'label':"lit_4529",'name':"@4529",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484F58,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$4525",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484F88,'size':32,'pad':0,'label':"data_80484F88",'name':"Mthd_Table__Q211daObjSwpush28@unnamed@d_a_obj_swpush_cpp@",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484FA8,'size':48,'pad':0,'label':"g_profile_Obj_Swpush",'name':"g_profile_Obj_Swpush",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484FD8,'size':12,'pad':0,'label':"__vt__8cM3dGTri",'name':"__vt__8cM3dGTri",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484FE4,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80484FF0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484FF8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80484FFC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485000,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485004,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485008,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048500C,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485010,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485014,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485018,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048501C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485020,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485024,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485028,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048502C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485030,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485034,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485038,'size':12,'pad':4,'label':"lit_3915",'name':"@3915",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485048,'size':12,'pad':0,'label':"lit_3918",'name':"@3918",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485054,'size':12,'pad':0,'label':"lit_3919",'name':"@3919",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485060,'size':12,'pad':0,'label':"lit_3920",'name':"@3920",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048506C,'size':48,'pad':0,'label':"no_push_vec",'name':"no_push_vec$3914",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048509C,'size':4,'pad':0,'label':"struct_8048509C",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x804850A0,'size':4,'pad':0,'label':"data_804850A0",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850A4,'size':4,'pad':0,'label':"data_804850A4",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850A8,'size':4,'pad':0,'label':"data_804850A8",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850AC,'size':4,'pad':0,'label':"data_804850AC",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850B0,'size':4,'pad':0,'label':"data_804850B0",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850B4,'size':4,'pad':0,'label':"data_804850B4",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850B8,'size':4,'pad':0,'label':"data_804850B8",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850BC,'size':4,'pad':0,'label':"data_804850BC",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850C0,'size':4,'pad':0,'label':"data_804850C0",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850C4,'size':4,'pad':0,'label':"data_804850C4",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850C8,'size':4,'pad':0,'label':"data_804850C8",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850CC,'size':4,'pad':0,'label':"data_804850CC",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850D0,'size':4,'pad':0,'label':"data_804850D0",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850D4,'size':4,'pad':0,'label':"data_804850D4",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850D8,'size':4,'pad':0,'label':"data_804850D8",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850DC,'size':4,'pad':0,'label':"data_804850DC",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850E0,'size':4,'pad':0,'label':"data_804850E0",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850E4,'size':4,'pad':0,'label':"data_804850E4",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850E8,'size':4,'pad':0,'label':"data_804850E8",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850EC,'size':4,'pad':0,'label':"data_804850EC",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850F0,'size':4,'pad':0,'label':"data_804850F0",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850F4,'size':4,'pad':0,'label':"data_804850F4",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850F8,'size':4,'pad':0,'label':"data_804850F8",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804850FC,'size':4,'pad':0,'label':"data_804850FC",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80485100,'size':4,'pad':0,'label':"data_80485100",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"prmZ_init__Q211daObjSwpush5Act_cFv":5,
	"is_switch2__Q211daObjSwpush5Act_cCFv":6,
	"solidHeapCB__Q211daObjSwpush5Act_cFP10fopAc_ac_c":7,
	"create_heap__Q211daObjSwpush5Act_cFv":8,
	"create_res_load__Q211daObjSwpush5Act_cFv":9,
	"Mthd_Create__Q211daObjSwpush5Act_cFv":10,
	"__dt__4cXyzFv":11,
	"Mthd_Delete__Q211daObjSwpush5Act_cFv":12,
	"set_mtx__Q211daObjSwpush5Act_cFv":13,
	"init_mtx__Q211daObjSwpush5Act_cFv":14,
	"set_btp_frame__Q211daObjSwpush5Act_cFv":15,
	"rideCB__Q211daObjSwpush5Act_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":16,
	"__dt__8cM3dGTriFv":17,
	"__dt__8cM3dGPlaFv":18,
	"jnodeCB__Q211daObjSwpush5Act_cFP8J3DJointi":19,
	"calc_top_pos__Q211daObjSwpush5Act_cFv":20,
	"top_bg_aim_req__Q211daObjSwpush5Act_cFfs":21,
	"set_push_flag__Q211daObjSwpush5Act_cFv":22,
	"mode_upper_init__Q211daObjSwpush5Act_cFv":23,
	"mode_upper__Q211daObjSwpush5Act_cFv":24,
	"mode_u_l_init__Q211daObjSwpush5Act_cFv":25,
	"mode_u_l__Q211daObjSwpush5Act_cFv":26,
	"mode_lower_init__Q211daObjSwpush5Act_cFv":27,
	"mode_lower__Q211daObjSwpush5Act_cFv":28,
	"mode_l_u_init__Q211daObjSwpush5Act_cFv":29,
	"mode_l_u__Q211daObjSwpush5Act_cFv":30,
	"demo_non_init__Q211daObjSwpush5Act_cFv":31,
	"demo_non__Q211daObjSwpush5Act_cFv":32,
	"demo_reqPause_init__Q211daObjSwpush5Act_cFv":33,
	"demo_reqPause__Q211daObjSwpush5Act_cFv":34,
	"demo_runPause_init__Q211daObjSwpush5Act_cFv":35,
	"demo_runPause__Q211daObjSwpush5Act_cFv":36,
	"demo_stop_puase__Q211daObjSwpush5Act_cFv":37,
	"demo_reqSw_init__Q211daObjSwpush5Act_cFv":38,
	"demo_reqSw__Q211daObjSwpush5Act_cFv":39,
	"demo_runSw_init__Q211daObjSwpush5Act_cFv":40,
	"demo_runSw__Q211daObjSwpush5Act_cFv":41,
	"check_ride_couple__Q211daObjSwpush5Act_cFs":42,
	"nr_ride_people__Q211daObjSwpush5Act_cFc":43,
	"Mthd_Execute__Q211daObjSwpush5Act_cFv":44,
	"Mthd_Draw__Q211daObjSwpush5Act_cFv":45,
	"func_80484C5C":46,
	"func_80484C7C":47,
	"func_80484C9C":48,
	"func_80484CBC":49,
	"func_80484CDC":50,
	"func_80484CE4":51,
	"data_80484D00":52,
	"__destroy_global_chain_reference":53,
	"pad_80484D08":54,
	"M_bmd__Q211daObjSwpush5Act_c":55,
	"M_dzb__Q211daObjSwpush5Act_c":56,
	"M_heap_size__Q211daObjSwpush5Act_c":57,
	"M_attr__Q211daObjSwpush5Act_c":58,
	"M_op_vtx__Q211daObjSwpush5Act_c":59,
	"lit_3872":60,
	"lit_3873":61,
	"lit_3874":62,
	"lit_3875":63,
	"lit_3876":64,
	"lit_3877":65,
	"lit_3878":66,
	"lit_3879":67,
	"lit_3880":68,
	"lit_3881":69,
	"tri_id":70,
	"lit_4028":71,
	"lit_4097":72,
	"lit_4214":73,
	"lit_4554":74,
	"struct_80484E4C":75,
	"cNullVec__6Z2Calc":76,
	"lit_1787":77,
	"M_arcname__Q211daObjSwpush5Act_c":78,
	"lit_4518":79,
	"lit_4519":80,
	"lit_4520":81,
	"lit_4521":82,
	"lit_4522":83,
	"demo_proc":84,
	"lit_4526":85,
	"lit_4527":86,
	"lit_4528":87,
	"lit_4529":88,
	"mode_proc":89,
	"data_80484F88":90,
	"g_profile_Obj_Swpush":91,
	"__vt__8cM3dGTri":92,
	"__vt__8cM3dGPla":93,
	"__global_destructor_chain":94,
	"lit_1109":95,
	"lit_1107":96,
	"lit_1105":97,
	"lit_1104":98,
	"lit_1099":99,
	"lit_1097":100,
	"lit_1095":101,
	"lit_1094":102,
	"lit_1057":103,
	"lit_1055":104,
	"lit_1053":105,
	"lit_1052":106,
	"lit_1014":107,
	"lit_1012":108,
	"lit_1010":109,
	"lit_1009":110,
	"lit_3915":111,
	"lit_3918":112,
	"lit_3919":113,
	"lit_3920":114,
	"no_push_vec":115,
	"struct_8048509C":116,
	"data_804850A0":117,
	"data_804850A4":118,
	"data_804850A8":119,
	"data_804850AC":120,
	"data_804850B0":121,
	"data_804850B4":122,
	"data_804850B8":123,
	"data_804850BC":124,
	"data_804850C0":125,
	"data_804850C4":126,
	"data_804850C8":127,
	"data_804850CC":128,
	"data_804850D0":129,
	"data_804850D4":130,
	"data_804850D8":131,
	"data_804850DC":132,
	"data_804850E0":133,
	"data_804850E4":134,
	"data_804850E8":135,
	"data_804850EC":136,
	"data_804850F0":137,
	"data_804850F4":138,
	"data_804850F8":139,
	"data_804850FC":140,
	"data_80485100":141,
}

