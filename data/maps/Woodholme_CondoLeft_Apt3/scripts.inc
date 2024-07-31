Woodholme_CondoLeft_Apt3_MapScripts::
# 2 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_CondoLeft_Apt3_OnTransition
	.byte 0


Woodholme_CondoLeft_Apt3_OnTransition::
	end


Woodholme_CondoLeft_Apt3_EventScript_Woman::
# 11 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	lock
# 12 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	faceplayer
# 13 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	msgbox Woodholme_CondoLeft_Apt3_EventScript_Woman_Text_0
# 14 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	release
	return


Woodholme_CondoLeft_Apt3_EventScript_Woman_Text_0:
# 13 "data/maps/Woodholme_CondoLeft_Apt3/scripts.pory"
	.string "Hello. Are you a Pokémon trainer? I wish\n"
	.string "I had a Pokémon of my own to cuddle and\l"
	.string "snuggle with....$"
