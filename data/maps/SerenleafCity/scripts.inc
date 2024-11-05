SerenleafCity_MapScripts::
# 2 "data/maps/SerenleafCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SerenleafCity_OnTransition
	.byte 0


SerenleafCity_OnTransition::
# 6 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_VISITED_SERENLEAFCITY
# 7 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_SERENLEAF_GYM_STATE, 1
	goto_if_eq SerenleafCity_OnTransition_3
SerenleafCity_OnTransition_2:
# 11 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE2
	return

SerenleafCity_OnTransition_1:
# 8 "data/maps/SerenleafCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE2
	return

SerenleafCity_OnTransition_3:
# 7 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_RIVAL_BATTLE_STATE, 1
	goto_if_eq SerenleafCity_OnTransition_1
	goto SerenleafCity_OnTransition_2


SerenleafCity_EventScript_RivalBattle2::
# 16 "data/maps/SerenleafCity/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, SerenleafCity_RivalIntro, SerenleafCity_RivalOutro, SerenleafCity_EventScript_RivalBattleOver
	end


SerenleafCity_EventScript_RivalBattleOver::
# 29 "data/maps/SerenleafCity/scripts.pory"
	lock
# 30 "data/maps/SerenleafCity/scripts.pory"
	applymovement 3, SerenleafCity_RivalLeave
# 31 "data/maps/SerenleafCity/scripts.pory"
	waitmovement 3
# 32 "data/maps/SerenleafCity/scripts.pory"
	removeobject 3
# 33 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE2
# 34 "data/maps/SerenleafCity/scripts.pory"
	setvar VAR_RIVAL_BATTLE_STATE, 2
# 35 "data/maps/SerenleafCity/scripts.pory"
	waitmessage
# 36 "data/maps/SerenleafCity/scripts.pory"
	release
	return


# 39 "data/maps/SerenleafCity/scripts.pory"
SerenleafCity_RivalLeave:
# 40 "data/maps/SerenleafCity/scripts.pory"
	face_up
# 41 "data/maps/SerenleafCity/scripts.pory"
	walk_up
# 41 "data/maps/SerenleafCity/scripts.pory"
	walk_up
# 41 "data/maps/SerenleafCity/scripts.pory"
	walk_up
# 42 "data/maps/SerenleafCity/scripts.pory"
	face_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
# 43 "data/maps/SerenleafCity/scripts.pory"
	walk_left
	step_end

SerenleafCity_EventScript_Sign_South::
# 47 "data/maps/SerenleafCity/scripts.pory"
	lock
# 48 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_South_Text_0
# 49 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_West::
# 53 "data/maps/SerenleafCity/scripts.pory"
	lock
# 54 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_West_Text_0
# 55 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_FairyCircle::
# 59 "data/maps/SerenleafCity/scripts.pory"
	lock
# 60 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_FairyCircle_Text_0
# 61 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_East::
# 65 "data/maps/SerenleafCity/scripts.pory"
	lock
# 66 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_East_Text_0
# 67 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Gym::
# 71 "data/maps/SerenleafCity/scripts.pory"
	lock
# 72 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Gym_Text_0
# 73 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_PokeCorner::
# 77 "data/maps/SerenleafCity/scripts.pory"
	lock
# 78 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_PokeCorner_Text_0
# 79 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_BikeShop::
# 83 "data/maps/SerenleafCity/scripts.pory"
	lock
# 84 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_BikeShop_Text_0
# 85 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_LockedHome1::
# 89 "data/maps/SerenleafCity/scripts.pory"
	lock
# 90 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_LockedHome1_Text_0
# 91 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_LockedHome2::
# 95 "data/maps/SerenleafCity/scripts.pory"
	lock
# 96 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_LockedHome1_Text_0
# 97 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Bike1::
# 101 "data/maps/SerenleafCity/scripts.pory"
	lock
# 102 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Bike1_Text_0
# 103 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_Sign_Bike2::
# 107 "data/maps/SerenleafCity/scripts.pory"
	lock
# 108 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_Sign_Bike1_Text_0
# 109 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_NPC_Man::
# 113 "data/maps/SerenleafCity/scripts.pory"
	lock
# 114 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Man_Text_0, MSGBOX_NPC
# 115 "data/maps/SerenleafCity/scripts.pory"
	release
	return


SerenleafCity_EventScript_NPC_Girl::
# 119 "data/maps/SerenleafCity/scripts.pory"
	lock
# 120 "data/maps/SerenleafCity/scripts.pory"
	faceplayer
# 122 "data/maps/SerenleafCity/scripts.pory"
	goto_if_set FLAG_THERRY_TRADE_COMPLETED, SerenleafCity_EventScript_NPC_Girl_2
# 127 "data/maps/SerenleafCity/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ONIX
# 128 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 129 "data/maps/SerenleafCity/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 130 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_Text_WantToTrade, MSGBOX_YESNO
# 132 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_6
SerenleafCity_EventScript_NPC_Girl_5:
# 161 "data/maps/SerenleafCity/scripts.pory"
	release
SerenleafCity_EventScript_NPC_Girl_1:
# 163 "data/maps/SerenleafCity/scripts.pory"
	release
	return

SerenleafCity_EventScript_NPC_Girl_2:
# 123 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_Text_TradeCompleted
	goto SerenleafCity_EventScript_NPC_Girl_1

SerenleafCity_EventScript_NPC_Girl_6:
# 133 "data/maps/SerenleafCity/scripts.pory"
	special ChoosePartyMon
# 134 "data/maps/SerenleafCity/scripts.pory"
	waitstate
# 136 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_9
# 141 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 142 "data/maps/SerenleafCity/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 143 "data/maps/SerenleafCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SerenleafCity_EventScript_NPC_Girl_13
# 148 "data/maps/SerenleafCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 149 "data/maps/SerenleafCity/scripts.pory"
	special CreateInGameTradePokemon
# 150 "data/maps/SerenleafCity/scripts.pory"
	special DoInGameTradeScene
# 151 "data/maps/SerenleafCity/scripts.pory"
	waitstate
# 152 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_2
# 153 "data/maps/SerenleafCity/scripts.pory"
	setflag FLAG_THERRY_TRADE_COMPLETED
# 154 "data/maps/SerenleafCity/scripts.pory"
	release
	end

SerenleafCity_EventScript_NPC_Girl_8:
# 159 "data/maps/SerenleafCity/scripts.pory"
	release
	goto SerenleafCity_EventScript_NPC_Girl_5

SerenleafCity_EventScript_NPC_Girl_9:
# 137 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_0
	goto SerenleafCity_EventScript_NPC_Girl_8

SerenleafCity_EventScript_NPC_Girl_12:
# 157 "data/maps/SerenleafCity/scripts.pory"
	release
	goto SerenleafCity_EventScript_NPC_Girl_8

SerenleafCity_EventScript_NPC_Girl_13:
# 144 "data/maps/SerenleafCity/scripts.pory"
	msgbox SerenleafCity_EventScript_NPC_Girl_Text_1
	goto SerenleafCity_EventScript_NPC_Girl_12


SerenleafCity_EventScript_Sign_South_Text_0:
# 48 "data/maps/SerenleafCity/scripts.pory"
	.string "NORTH: SERENLEAF CITY, SOUTH: ROUTE 2$"

SerenleafCity_EventScript_Sign_West_Text_0:
# 54 "data/maps/SerenleafCity/scripts.pory"
	.string "EAST: SERENLEAF CITY, WEST: ROUTE XX$"

SerenleafCity_EventScript_Sign_FairyCircle_Text_0:
# 60 "data/maps/SerenleafCity/scripts.pory"
	.string "ANCIENT FAIRY MAGIC AHEAD: STEP ON\n"
	.string "THE FLOWERBED TO BE TRANSPORTED TO\l"
	.string "THE FAIRY CIRCLE.$"

SerenleafCity_EventScript_Sign_East_Text_0:
# 66 "data/maps/SerenleafCity/scripts.pory"
	.string "WEST: SERENLEAF CITY, EAST: ROUTE 3$"

SerenleafCity_EventScript_Sign_Gym_Text_0:
# 72 "data/maps/SerenleafCity/scripts.pory"
	.string "XX'S GYM!$"

SerenleafCity_EventScript_Sign_PokeCorner_Text_0:
# 78 "data/maps/SerenleafCity/scripts.pory"
	.string "POKÉMON TRADING CLUB: TRADE YOUR\n"
	.string "FAVORITE POKÉMON HERE!$"

SerenleafCity_EventScript_Sign_BikeShop_Text_0:
# 84 "data/maps/SerenleafCity/scripts.pory"
	.string "SERENLEAF BIKE SHOP$"

SerenleafCity_EventScript_Sign_LockedHome1_Text_0:
# 90 "data/maps/SerenleafCity/scripts.pory"
	.string "It's locked from the inside. This is\n"
	.string "someone's home!$"

SerenleafCity_EventScript_Sign_Bike1_Text_0:
# 102 "data/maps/SerenleafCity/scripts.pory"
	.string "It's a bicycle!$"

SerenleafCity_EventScript_NPC_Man_Text_0:
# 114 "data/maps/SerenleafCity/scripts.pory"
	.string "Hello.$"

SerenleafCity_EventScript_NPC_Girl_Text_0:
# 137 "data/maps/SerenleafCity/scripts.pory"
	.string "Declined trade.$"

SerenleafCity_EventScript_NPC_Girl_Text_1:
# 144 "data/maps/SerenleafCity/scripts.pory"
	.string "Wrong Pokémon.$"

SerenleafCity_EventScript_NPC_Girl_Text_2:
# 152 "data/maps/SerenleafCity/scripts.pory"
	.string "Thx!$"

SerenleafCity_RivalIntro::
# 20 "data/maps/SerenleafCity/scripts.pory"
	.string "Hey {PLAYER}! I hope you've been\n"
	.string "training your Pokémon. I sure have. How\l"
	.string "about you give me another shot at\l"
	.string "battling? I won't lose this time!$"

SerenleafCity_RivalOutro::
# 24 "data/maps/SerenleafCity/scripts.pory"
	.string "Oh darn! I lost again. I swore this\n"
	.string "wouldn't happen again! I'll have to\l"
	.string "train even harder to beat you. I'll see\l"
	.string "you around!$"

SerenleafCity_Text_TradeCompleted::
# 166 "data/maps/SerenleafCity/scripts.pory"
	.string "Thank you! Take good care of SNAKEY!$"

SerenleafCity_Text_WantToTrade::
# 170 "data/maps/SerenleafCity/scripts.pory"
	.string "Do you want my Onix?$"
