EnimerosCity_MapScripts::
# 2 "data/maps/EnimerosCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EnimerosCity_OnTransition
	.byte 0


EnimerosCity_OnTransition::
	return


EnimerosCity_EventScript_Sign_FairyCircle::
# 10 "data/maps/EnimerosCity/scripts.pory"
	lock
# 11 "data/maps/EnimerosCity/scripts.pory"
	msgbox EnimerosCity_EventScript_Sign_FairyCircle_Text_0
# 12 "data/maps/EnimerosCity/scripts.pory"
	release
	return


EnimerosCity_EventScript_Sign_FairyCircle_Text_0:
# 11 "data/maps/EnimerosCity/scripts.pory"
	.string "ANCIENT FAIRY MAGIC AHEAD: STEP ON\n"
	.string "THE FLOWERBED TO BE TRANSPORTED TO\l"
	.string "THE FAIRY CIRCLE.$"
