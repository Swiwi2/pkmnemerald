AmbervilleCity_MapScripts::
# 2 "data/maps/AmbervilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AmbervilleCity_OnTransition
	.byte 0


AmbervilleCity_OnTransition::
	return


AmbervilleCity_EventScript_Sign_FairyCircle::
# 10 "data/maps/AmbervilleCity/scripts.pory"
	lock
# 11 "data/maps/AmbervilleCity/scripts.pory"
	msgbox AmbervilleCity_EventScript_Sign_FairyCircle_Text_0
# 12 "data/maps/AmbervilleCity/scripts.pory"
	release
	return


AmbervilleCity_EventScript_Sign_FairyCircle_Text_0:
# 11 "data/maps/AmbervilleCity/scripts.pory"
	.string "ANCIENT FAIRY MAGIC AHEAD: STEP ON\n"
	.string "THE FLOWERBED TO BE TRANSPORTED TO\l"
	.string "THE FAIRY CIRCLE.$"
