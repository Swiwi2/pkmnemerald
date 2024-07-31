Woodholme_CondoLeft_Apt1_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_Apt1_OnTransition
	.byte 0


Woodholme_CondoLeft_Apt1_OnTransition::
	end


Woodholme_CondoLeft_Apt1_EventScript_Woman::
# 11 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	lock
# 12 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	msgbox Woodholme_CondoLeft_Apt1_EventScript_Woman_Text_0
# 14 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	release
	return


Woodholme_CondoLeft_Apt1_EventScript_Woman_Text_0:
# 13 "data/maps/Woodholme_CondoLeft_Apt1/scripts.pory"
	.string "You must be our new neighbors! Welcome\n"
	.string "to the vibrant city of Woodholme. My\l"
	.string "husband and I have lived here all our\l"
	.string "lives. In fact, I've never even been\l"
	.string "outside of Woodholme....$"
