Woodholme_PC_MapScripts::
# 2 "data/maps/Woodholme_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woodholme_PC_OnTransition
# 3 "data/maps/Woodholme_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Woodholme_PC_OnTransition::
# 7 "data/maps/Woodholme_PC/scripts.pory"
	setrespawn HEAL_LOCATION_WOODHOLME_CITY
	end


Woodholme_PC_Nurse::
# 12 "data/maps/Woodholme_PC/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/Woodholme_PC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Woodholme_PC/scripts.pory"
	waitmessage
# 15 "data/maps/Woodholme_PC/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Woodholme_PC/scripts.pory"
	release
	end

