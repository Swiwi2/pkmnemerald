Woodholme_CondoLeft_Apt2_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_Apt2_OnTransition
	.byte 0


Woodholme_CondoLeft_Apt2_OnTransition::
	end


Woodholme_CondoLeft_Apt2_EventScript_Woman::
# 11 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	lock
# 12 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	msgbox Woodholme_CondoLeft_Apt2_EventScript_Woman_Text_0
# 14 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	release
	return


Woodholme_CondoLeft_Apt2_EventScript_Woman_Text_0:
# 13 "data/maps/Woodholme_CondoLeft_Apt2/scripts.pory"
	.string "Placeholder text$"
