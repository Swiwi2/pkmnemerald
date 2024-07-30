Woodholme_CondoLeft_PlayerHouse_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_PlayerHouse_OnTransition
	.byte 0


Woodholme_CondoLeft_PlayerHouse_OnTransition::
	end


Woodholme_CondoLeft_PlayerHouse_EventScript_Mom::
# 11 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	lock
# 12 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0
# 14 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	release
	return


Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0:
# 13 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Hi honey.$"
