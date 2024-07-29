Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_EventScript_Transition
	.byte 0


Route1_EventScript_Transition::
# 6 "data/maps/Route1/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
	return


Route1_EventScript_SignCottage::
# 10 "data/maps/Route1/scripts.pory"
	lock
# 11 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_SignCottage_Text_0
# 12 "data/maps/Route1/scripts.pory"
	release
	return


Route1_EventScript_SignCottage_Text_0:
# 11 "data/maps/Route1/scripts.pory"
	.string "Hello!$"
