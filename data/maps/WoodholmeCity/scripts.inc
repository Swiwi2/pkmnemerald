WoodholmeCity_MapScripts::
# 2 "data/maps/WoodholmeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WoodholmeCity_EventScript_SetupRivalBattle
	.byte 0


WoodholmeCity_EventScript_SetupRivalBattle::
# 6 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, WoodholmeCity_EventScript_SetupRivalBattle_3
WoodholmeCity_EventScript_SetupRivalBattle_2:
# 10 "data/maps/WoodholmeCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE1
	return

WoodholmeCity_EventScript_SetupRivalBattle_1:
# 7 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
	return

WoodholmeCity_EventScript_SetupRivalBattle_3:
# 6 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, WoodholmeCity_EventScript_SetupRivalBattle_5
	goto WoodholmeCity_EventScript_SetupRivalBattle_2

WoodholmeCity_EventScript_SetupRivalBattle_5:
# 6 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, WoodholmeCity_EventScript_SetupRivalBattle_1
	goto WoodholmeCity_EventScript_SetupRivalBattle_2


WoodholmeCity_EventScript_RivalBattle1::
# 15 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro
# 16 "data/maps/WoodholmeCity/scripts.pory"
	msgbox May_PostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/WoodholmeCity/scripts.pory"
	waitmessage
	end


WoodholmeCity_EventScript_SignLeavingTown::
# 34 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 35 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 36 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 40 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 41 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 42 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 46 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 47 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 48 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 52 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 53 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 54 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 58 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 59 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 60 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 64 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 65 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 66 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 35 "data/maps/WoodholmeCity/scripts.pory"
	.string "HEADING NORTH TO ROUTE 1$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 41 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 47 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc.\n Cheap accommodation options available!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 53 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc.\n Luxury condos for your Pokémon friends!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 59 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc\n Condos with the best view in Woodholme!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 65 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB \n New trainers welcome!$"

May_Intro::
# 21 "data/maps/WoodholmeCity/scripts.pory"
	.string "You'll never win!$"

May_Outro::
# 25 "data/maps/WoodholmeCity/scripts.pory"
	.string "Wtf lol$"

May_PostBattle::
# 29 "data/maps/WoodholmeCity/scripts.pory"
	.string "I'll get you next time$"
