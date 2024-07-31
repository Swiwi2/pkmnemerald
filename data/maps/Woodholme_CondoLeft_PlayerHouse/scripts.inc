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
	message Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0
# 14 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	multichoice 25, 5, MULTI_CHOICE_MOM, 0
# 15 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	closemessage
# 16 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_2
# 19 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_3
# 22 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_4
Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1:
# 25 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	release
	return

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_2:
# 17 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption1
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_3:
# 20 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption2
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1

Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_4:
# 23 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	msgbox MomDialogueOption3
	goto Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_1


Woodholme_CondoLeft_PlayerHouse_EventScript_Mom_Text_0:
# 13 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "What would you like to ask?$"

MomDialogueOption1::
# 29 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Option 1$"

MomDialogueOption2::
# 34 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Option 2$"

MomDialogueOption3::
# 39 "data/maps/Woodholme_CondoLeft_PlayerHouse/scripts.pory"
	.string "Option 3$"
