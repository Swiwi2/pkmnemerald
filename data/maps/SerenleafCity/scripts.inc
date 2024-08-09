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
	faceplayer
# 79 "data/maps/SerenleafCity/scripts.pory"
	goto_if_set FLAG_THERRY_TRADE_COMPLETED, SerenleafCity_EventScript_NPC_Girl_2
# 84 "data/maps/SerenleafCity/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ONIX
# 85 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 86 "data/maps/SerenleafCity/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 87 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_Text_WantToTrade, MSGBOX_YESNO
# 89 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_6
SerenleafCity_EventScript_NPC_Girl_5:
# 118 "data/maps/SerenleafCity/scripts.pory"
	release
SerenleafCity_EventScript_NPC_Girl_1:
# 120 "data/maps/SerenleafCity/scripts.pory"
	release
	return

SerenleafCity_EventScript_NPC_Girl_2:
# 80 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_Text_TradeCompleted
	goto SerenleafCity_EventScript_NPC_Girl_1

SerenleafCity_EventScript_NPC_Girl_6:
# 90 "data/maps/SerenleafCity/scripts.pory"
	special ChoosePartyMon
# 91 "data/maps/SerenleafCity/scripts.pory"
	waitstate
# 93 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_9
# 98 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 99 "data/maps/SerenleafCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 100 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_13
# 105 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 106 "data/maps/SerenleafCity/scripts.pory"
	special CreateInGameTradePokemon
# 107 "data/maps/SerenleafCity/scripts.pory"
	special DoInGameTradeScene
# 108 "data/maps/SerenleafCity/scripts.pory"
	waitstate
# 109 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_2
# 110 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_THERRY_TRADE_COMPLETED
# 111 "data/maps/SerenleafCity/scripts.pory"
	release
	end

SerenleafCity_EventScript_NPC_Girl_8:
# 116 "data/maps/SerenleafCity/scripts.pory"
	release
	goto SerenleafCity_EventScript_NPC_Girl_5

SerenleafCity_EventScript_NPC_Girl_9:
# 94 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_0
	goto SerenleafCity_EventScript_NPC_Girl_8

SerenleafCity_EventScript_NPC_Girl_12:
# 114 "data/maps/SerenleafCity/scripts.pory"
	release
	goto SerenleafCity_EventScript_NPC_Girl_8

SerenleafCity_EventScript_NPC_Girl_13:
# 101 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_1
	goto SerenleafCity_EventScript_NPC_Girl_12


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

SerenleafCity_EventScript_NPC_Girl_Text_0:
# 94 "data/maps/SerenleafCity/scripts.pory"
	.string "Declined trade.$"

SerenleafCity_EventScript_NPC_Girl_Text_1:
# 101 "data/maps/SerenleafCity/scripts.pory"
	.string "Wrong Pokémon.$"

SerenleafCity_EventScript_NPC_Girl_Text_2:
# 109 "data/maps/SerenleafCity/scripts.pory"
	.string "Thx!$"

SerenleafCity_Text_TradeCompleted::
# 123 "data/maps/SerenleafCity/scripts.pory"
	.string "Thank you! Take good care of SNAKEY!$"

SerenleafCity_Text_WantToTrade::
# 127 "data/maps/SerenleafCity/scripts.pory"
	.string "Do you want my Onix?$"
