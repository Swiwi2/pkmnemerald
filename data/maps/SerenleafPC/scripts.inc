SerenleafPC_MapScripts::
# 2 "data/maps/SerenleafPC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerenleafPC_OnTransition
# 3 "data/maps/SerenleafPC/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SerenleafPC_OnTransition::
	return


SerenleafPC_Nurse::
# 11 "data/maps/SerenleafPC/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/SerenleafPC/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/SerenleafPC/scripts.pory"
	setrespawn HEAL_LOCATION_SERENLEAF_CITY
# 14 "data/maps/SerenleafPC/scripts.pory"
	waitmessage
# 15 "data/maps/SerenleafPC/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SerenleafPC/scripts.pory"
	release
	end

