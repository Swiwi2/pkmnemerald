Woodholme_CondoLeft_Corr_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_Corr_OnTransition
	.byte 0


Woodholme_CondoLeft_Corr_OnTransition::
	return


Woodholme_CondoLeft_Corr_EventScript_TestNPC::
# 10 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	lock
# 11 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	faceplayer
# 12 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	msgbox Woodholme_CondoLeft_Corr_EventScript_TestNPC_Text_0
# 13 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	release
	return


Woodholme_CondoLeft_Corr_EventScript_TestNPC_Text_0:
# 12 "data/maps/Woodholme_CondoLeft_Corr/scripts.pory"
	.string "Hello.$"
