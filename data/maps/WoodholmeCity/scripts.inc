WoodholmeCity_MapScripts::
# 2 "data/maps/WoodholmeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WoodholmeCity_EventScript_Transition
	.byte 0


WoodholmeCity_EventScript_Transition::
# 6 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_UNUSED_0x40F8, 0
	return


WoodholmeCity_EventScript_SignLeavingTown::
# 10 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 11 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 12 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 16 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 17 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 18 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 22 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 23 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 24 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 28 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 29 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 30 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 34 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 35 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 36 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 40 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 41 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 42 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 11 "data/maps/WoodholmeCity/scripts.pory"
	.string "HEADING NORTH TO ROUTE 1$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 23 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc.\n Cheap accommodation options available!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 29 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc.\n Luxury condos for your Pokémon friends!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 35 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc\n Condos with the best view in Woodholme!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 41 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB \n New trainers welcome!$"
