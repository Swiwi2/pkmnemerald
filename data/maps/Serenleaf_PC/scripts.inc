Serenleaf_PC_MapScripts::
# 2 "data/maps/Serenleaf_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Serenleaf_PC_OnTransition
# 3 "data/maps/Serenleaf_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Serenleaf_PC_OnTransition::
	return


Serenleaf_PC_Nurse::
# 11 "data/maps/Serenleaf_PC/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/Serenleaf_PC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/Serenleaf_PC/scripts.pory"
	setrespawn HEAL_LOCATION_SERENLEAF_CITY
# 14 "data/maps/Serenleaf_PC/scripts.pory"
	waitmessage
# 15 "data/maps/Serenleaf_PC/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Serenleaf_PC/scripts.pory"
	release
	end

