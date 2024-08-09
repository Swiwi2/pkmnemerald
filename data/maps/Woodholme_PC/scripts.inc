Woodholme_PC_MapScripts::
# 2 "data/maps/Woodholme_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_PC_OnTransition
# 3 "data/maps/Woodholme_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Woodholme_PC_OnTransition::
	return


Woodholme_PC_Nurse::
# 11 "data/maps/Woodholme_PC/scripts.pory"
	lock
# 13 "data/maps/Woodholme_PC/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq Woodholme_PC_Nurse_2
# 18 "data/maps/Woodholme_PC/scripts.pory"
	setvar VAR_0x800B, 1
# 19 "data/maps/Woodholme_PC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 20 "data/maps/Woodholme_PC/scripts.pory"
	setrespawn HEAL_LOCATION_WOODHOLME_CITY
# 21 "data/maps/Woodholme_PC/scripts.pory"
	waitmessage
# 22 "data/maps/Woodholme_PC/scripts.pory"
	waitbuttonpress
# 23 "data/maps/Woodholme_PC/scripts.pory"
	release
	end

Woodholme_PC_Nurse_1:
# 26 "data/maps/Woodholme_PC/scripts.pory"
	release
	return

Woodholme_PC_Nurse_2:
# 14 "data/maps/Woodholme_PC/scripts.pory"
	msgbox Woodholme_PC_Nurse_Text_0
	goto Woodholme_PC_Nurse_1


Woodholme_PC_EventScript_Wally::
# 30 "data/maps/Woodholme_PC/scripts.pory"
	lock
# 31 "data/maps/Woodholme_PC/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 32 "data/maps/Woodholme_PC/scripts.pory"
	setflag FLAG_QUEST_MENU_ACTIVE
# 35 "data/maps/Woodholme_PC/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq Woodholme_PC_EventScript_Wally_2
# 42 "data/maps/Woodholme_PC/scripts.pory"
	msgbox Woodholme_PC_Wally_Dialogue, MSGBOX_YESNO
# 44 "data/maps/Woodholme_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Woodholme_PC_EventScript_Wally_5
# 51 "data/maps/Woodholme_PC/scripts.pory"
	msgbox Woodholme_PC_EventScript_Wally_Text_1
# 52 "data/maps/Woodholme_PC/scripts.pory"
	release
Woodholme_PC_EventScript_Wally_1:
# 57 "data/maps/Woodholme_PC/scripts.pory"
	release
	return

Woodholme_PC_EventScript_Wally_2:
# 36 "data/maps/Woodholme_PC/scripts.pory"
	msgbox Woodholme_PC_EventScript_Wally_Text_0
# 37 "data/maps/Woodholme_PC/scripts.pory"
	release
	goto Woodholme_PC_EventScript_Wally_1

Woodholme_PC_EventScript_Wally_5:
# 45 "data/maps/Woodholme_PC/scripts.pory"
	waitmessage
# 46 "data/maps/Woodholme_PC/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST, 1
# 47 "data/maps/Woodholme_PC/scripts.pory"
	release
	goto Woodholme_PC_EventScript_Wally_1


Woodholme_PC_Nurse_Text_0:
# 14 "data/maps/Woodholme_PC/scripts.pory"
	.string "Welcome to Woodholme City PokéCenter.\n"
	.string "Please come back when you have a\l"
	.string "Pokémon you.$"

Woodholme_PC_EventScript_Wally_Text_0:
# 36 "data/maps/Woodholme_PC/scripts.pory"
	.string "Hello. Are you a Pokémon trainer? Please\n"
	.string "come back when you have a Pokémon.$"

Woodholme_PC_EventScript_Wally_Text_1:
# 51 "data/maps/Woodholme_PC/scripts.pory"
	.string "No problem, I'll find a different trainer\n"
	.string "to help me!$"

Woodholme_PC_Wally_Dialogue::
# 60 "data/maps/Woodholme_PC/scripts.pory"
	.string "Hello! My name is Wally. My brothers and\n"
	.string "I work at the PokéCenters around the\l"
	.string "world handing out quests to Pokémon\l"
	.string "trainers. These quests are tasks that\l"
	.string "people want help with. It could be a\l"
	.string "non-trainer looking to get a Pokémon\l"
	.string "for comfort, or that someone has\l"
	.string "stumbled across a problem they need\l"
	.string "help with solving. They come to me and\l"
	.string "my brothers, and we make sure a fit and\l"
	.string "able trainer can help them with their\l"
	.string "problem. To make it worth the trainer's\l"
	.string "time, we of course make sure you are\l"
	.string "compensated for your efforts! I have\l"
	.string "unlocked the QUESTS menu for you.\l"
	.string "There, you can see your active QUEST\l"
	.string "and which one of the Wally Brothers\l"
	.string "that gave you the quest. For the first\l"
	.string "quest, a kid asked me to find them a\l"
	.string "Rattata. Do you think you could do that\l"
	.string "for me?$"
