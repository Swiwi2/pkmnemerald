IndoorRoute1Cottage_MapScripts::
# 2 "data/maps/IndoorRoute1Cottage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndoorRoute1Cottage_OnTransition
	.byte 0


IndoorRoute1Cottage_OnTransition::
	return


IndoorRoute1Cottage_EventScript_Man::
# 11 "data/maps/IndoorRoute1Cottage/scripts.pory"
	lock
# 12 "data/maps/IndoorRoute1Cottage/scripts.pory"
	msgbox IndoorRoute1Cottage_EventScript_Man_Text_0, MSGBOX_NPC
# 13 "data/maps/IndoorRoute1Cottage/scripts.pory"
	release
	return


IndoorRoute1Cottage_EventScript_Man_Text_0:
# 12 "data/maps/IndoorRoute1Cottage/scripts.pory"
	.string "Hello young trainer.$"
