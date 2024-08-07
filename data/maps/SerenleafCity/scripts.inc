SerenleafCity_MapScripts::
# 2 "data/maps/SerenleafCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerenleafCity_OnTransition
	.byte 0


SerenleafCity_OnTransition::
# 6 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_VISITED_SERENLEAFCITY
	return


SerenleafCity_EventScript_Sign_South::
# 10 "data/maps/SerenleafCity/scripts.pory"
	lock
# 11 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_South_Text_0
# 12 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_West::
# 16 "data/maps/SerenleafCity/scripts.pory"
	lock
# 17 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_West_Text_0
# 18 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_East::
# 22 "data/maps/SerenleafCity/scripts.pory"
	lock
# 23 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_East_Text_0
# 24 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Gym::
# 28 "data/maps/SerenleafCity/scripts.pory"
	lock
# 29 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Gym_Text_0
# 30 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_PokeCorner::
# 34 "data/maps/SerenleafCity/scripts.pory"
	lock
# 35 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_PokeCorner_Text_0
# 36 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_BikeShop::
# 40 "data/maps/SerenleafCity/scripts.pory"
	lock
# 41 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_BikeShop_Text_0
# 42 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_LockedHome1::
# 46 "data/maps/SerenleafCity/scripts.pory"
	lock
# 47 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_LockedHome1_Text_0
# 48 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_LockedHome2::
# 52 "data/maps/SerenleafCity/scripts.pory"
	lock
# 53 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_LockedHome1_Text_0
# 54 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Bike1::
# 58 "data/maps/SerenleafCity/scripts.pory"
	lock
# 59 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Bike1_Text_0
# 60 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Bike2::
# 64 "data/maps/SerenleafCity/scripts.pory"
	lock
# 65 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Bike1_Text_0
# 66 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_NPC_Man::
# 70 "data/maps/SerenleafCity/scripts.pory"
	lock
# 71 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Man_Text_0, MSGBOX_NPC
# 72 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_NPC_Girl::
# 76 "data/maps/SerenleafCity/scripts.pory"
	lock
# 77 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Man_Text_0, MSGBOX_NPC
# 78 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_South_Text_0:
# 11 "data/maps/SerenleafCity/scripts.pory"
	.string "NORTH: SERENLEAF CITY, SOUTH: ROUTE 2$"

SerenleafCity_EventScript_Sign_West_Text_0:
# 17 "data/maps/SerenleafCity/scripts.pory"
	.string "EAST: SERENLEAF CITY, WEST: ROUTE XX$"

SerenleafCity_EventScript_Sign_East_Text_0:
# 23 "data/maps/SerenleafCity/scripts.pory"
	.string "WEST: SERENLEAF CITY, EAST: ROUTE 3$"

SerenleafCity_EventScript_Sign_Gym_Text_0:
# 29 "data/maps/SerenleafCity/scripts.pory"
	.string "XX'S GYM!$"

SerenleafCity_EventScript_Sign_PokeCorner_Text_0:
# 35 "data/maps/SerenleafCity/scripts.pory"
	.string "POKÉMON TRADING CLUB: TRADE YOUR\n"
	.string "FAVORITE POKÉMON HERE!$"

SerenleafCity_EventScript_Sign_BikeShop_Text_0:
# 41 "data/maps/SerenleafCity/scripts.pory"
	.string "SERENLEAF BIKE SHOP$"

SerenleafCity_EventScript_Sign_LockedHome1_Text_0:
# 47 "data/maps/SerenleafCity/scripts.pory"
	.string "It's locked from the inside. This is\n"
	.string "someone's home!$"

SerenleafCity_EventScript_Sign_Bike1_Text_0:
# 59 "data/maps/SerenleafCity/scripts.pory"
	.string "It's a bicycle!$"

SerenleafCity_EventScript_NPC_Man_Text_0:
# 71 "data/maps/SerenleafCity/scripts.pory"
	.string "Hello.$"
