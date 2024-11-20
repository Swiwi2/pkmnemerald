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
	msgbox Woodholme_PC_EventScript_Wally_Text_0
# 32 "data/maps/Woodholme_PC/scripts.pory"
	release
	return


Woodholme_PC_Nurse_Text_0:
# 14 "data/maps/Woodholme_PC/scripts.pory"
	.string "Welcome to Woodholme City PokéCenter.\n"
	.string "Please come back when you have a\l"
	.string "Pokémon you.$"

Woodholme_PC_EventScript_Wally_Text_0:
# 31 "data/maps/Woodholme_PC/scripts.pory"
	.string "Hello!$"
