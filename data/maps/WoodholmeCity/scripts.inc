WoodholmeCity_MapScripts::
# 2 "data/maps/WoodholmeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WoodholmeCity_OnTransition
	.byte 0


WoodholmeCity_OnTransition::
# 6 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_VISITED_WOODHOLMECITY
# 7 "data/maps/WoodholmeCity/scripts.pory"
	call WoodholmeCity_EventScript_SetupRivalBattle
	return


WoodholmeCity_EventScript_SetupRivalBattle::
# 17 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, WoodholmeCity_EventScript_SetupRivalBattle_4
WoodholmeCity_EventScript_SetupRivalBattle_3:
# 22 "data/maps/WoodholmeCity/scripts.pory"
	compare VAR_WOODHOLME_STATE, 1
	goto_if_eq WoodholmeCity_EventScript_SetupRivalBattle_9
WoodholmeCity_EventScript_SetupRivalBattle_1:
	return

WoodholmeCity_EventScript_SetupRivalBattle_2:
# 18 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 19 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 0
	goto WoodholmeCity_EventScript_SetupRivalBattle_1

WoodholmeCity_EventScript_SetupRivalBattle_4:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, WoodholmeCity_EventScript_SetupRivalBattle_6
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_6:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, WoodholmeCity_EventScript_SetupRivalBattle_2
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_9:
# 23 "data/maps/WoodholmeCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE1
	goto WoodholmeCity_EventScript_SetupRivalBattle_1


WoodholmeCity_EventScript_TriggerRivalBattle1::
# 30 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 31 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayEnter1
# 32 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/WoodholmeCity/scripts.pory"
	switch VAR_STARTER_MON
# 34 "data/maps/WoodholmeCity/scripts.pory"
	case 0, WoodholmeCity_EventScript_TriggerRivalBattle1_3
# 36 "data/maps/WoodholmeCity/scripts.pory"
	case 1, WoodholmeCity_EventScript_TriggerRivalBattle1_4
# 38 "data/maps/WoodholmeCity/scripts.pory"
	case 2, WoodholmeCity_EventScript_TriggerRivalBattle1_5
WoodholmeCity_EventScript_TriggerRivalBattle1_1:
# 41 "data/maps/WoodholmeCity/scripts.pory"
	call RivalBattleOver
# 42 "data/maps/WoodholmeCity/scripts.pory"
	release
	end

WoodholmeCity_EventScript_TriggerRivalBattle1_3:
# 35 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle1
	goto WoodholmeCity_EventScript_TriggerRivalBattle1_1

WoodholmeCity_EventScript_TriggerRivalBattle1_4:
# 37 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle2
	goto WoodholmeCity_EventScript_TriggerRivalBattle1_1

WoodholmeCity_EventScript_TriggerRivalBattle1_5:
# 39 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle3
	goto WoodholmeCity_EventScript_TriggerRivalBattle1_1


WoodholmeCity_EventScript_TriggerRivalBattle2::
# 47 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 48 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayEnter2
# 49 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/WoodholmeCity/scripts.pory"
	switch VAR_STARTER_MON
# 51 "data/maps/WoodholmeCity/scripts.pory"
	case 0, WoodholmeCity_EventScript_TriggerRivalBattle2_3
# 53 "data/maps/WoodholmeCity/scripts.pory"
	case 1, WoodholmeCity_EventScript_TriggerRivalBattle2_4
# 55 "data/maps/WoodholmeCity/scripts.pory"
	case 2, WoodholmeCity_EventScript_TriggerRivalBattle2_5
WoodholmeCity_EventScript_TriggerRivalBattle2_1:
# 58 "data/maps/WoodholmeCity/scripts.pory"
	call RivalBattleOver
# 59 "data/maps/WoodholmeCity/scripts.pory"
	release
	end

WoodholmeCity_EventScript_TriggerRivalBattle2_3:
# 52 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle1
	goto WoodholmeCity_EventScript_TriggerRivalBattle2_1

WoodholmeCity_EventScript_TriggerRivalBattle2_4:
# 54 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle2
	goto WoodholmeCity_EventScript_TriggerRivalBattle2_1

WoodholmeCity_EventScript_TriggerRivalBattle2_5:
# 56 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_RivalBattle3
	goto WoodholmeCity_EventScript_TriggerRivalBattle2_1


# 64 "data/maps/WoodholmeCity/scripts.pory"
MayEnter1:
# 65 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
# 65 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
# 65 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
	step_end

# 68 "data/maps/WoodholmeCity/scripts.pory"
MayEnter2:
# 69 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
# 70 "data/maps/WoodholmeCity/scripts.pory"
	face_left
# 71 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
# 71 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
# 71 "data/maps/WoodholmeCity/scripts.pory"
	walk_left
	step_end

WoodholmeCity_EventScript_RivalBattle1::
# 75 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_double TRAINER_MAY_ROUTE_103_MUDKIP, May_Intro, May_Outro, May_NotEnoughPokemon, RivalBattleOver
	end


WoodholmeCity_EventScript_RivalBattle2::
# 79 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_double TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro, May_NotEnoughPokemon, RivalBattleOver
	end


WoodholmeCity_EventScript_RivalBattle3::
# 83 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_double TRAINER_MAY_ROUTE_103_TREECKO, May_Intro, May_Outro, May_NotEnoughPokemon, RivalBattleOver
	end


RivalBattleOver::
# 88 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 89 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayLeave
# 90 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 1
# 91 "data/maps/WoodholmeCity/scripts.pory"
	removeobject 1
# 92 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 93 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE2
# 94 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 2
# 95 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_RIVAL_BATTLE_STATE, 1
# 96 "data/maps/WoodholmeCity/scripts.pory"
	waitmessage
# 97 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 100 "data/maps/WoodholmeCity/scripts.pory"
MayLeave:
# 101 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 102 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 102 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 102 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 102 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 102 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 103 "data/maps/WoodholmeCity/scripts.pory"
	face_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 104 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
	step_end

WoodholmeCity_EventScript_NPC_Fat_Man::
# 120 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 121 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_NPC_Fat_Man_Text_0, MSGBOX_NPC
# 122 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_NPC_Girl3::
# 126 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 127 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_NPC_Fat_Man_Text_0, MSGBOX_NPC
# 128 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_Sign_FairyCircle::
# 132 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 133 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_Sign_FairyCircle_Text_0
# 134 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_Trigger_BlockPath::
# 138 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 139 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_Trigger_BlockPath_Text_0
# 140 "data/maps/WoodholmeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 141 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_BlockCondo::
# 146 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 147 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_BlockCondo_Text_0
# 148 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 151 "data/maps/WoodholmeCity/scripts.pory"
StopPlayer:
# 152 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
	step_end

WoodholmeCity_EventScript_SignLeavingTown::
# 157 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 158 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 159 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 163 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 164 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 165 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 169 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 170 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 171 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 175 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 176 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 177 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 181 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 182 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 183 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 187 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 188 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 189 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_NPC_Fat_Man_Text_0:
# 121 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hello.$"

WoodholmeCity_EventScript_Sign_FairyCircle_Text_0:
# 133 "data/maps/WoodholmeCity/scripts.pory"
	.string "ANCIENT FAIRY MAGIC AHEAD: STEP ON\n"
	.string "THE FLOWERBED TO BE TRANSPORTED TO\l"
	.string "THE FAIRY CIRCLE.$"

WoodholmeCity_Trigger_BlockPath_Text_0:
# 139 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. I'd better visit RED before I\n"
	.string "venture out into the grass.$"

WoodholmeCity_EventScript_BlockCondo_Text_0:
# 147 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. It appears to be locked from the\n"
	.string "inside.$"

WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 158 "data/maps/WoodholmeCity/scripts.pory"
	.string "ROUTE 1 TO SERENLEAF CITY. BEWARE:\n"
	.string "WILD POKÉMON AHEAD.$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 164 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S POKÉMON GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 170 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. CHEAP\n"
	.string "ACCOMMODATION OPTIONS AVAILABLE!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 176 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. LUXURY CONDOS\n"
	.string "FOR YOU AND YOUR POKÉMON!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 182 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. CONDOS WITH THE\n"
	.string "BEST VIEW IN WOODHOLME!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 188 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB: HELPING NEW TRAINERS LEARN\n"
	.string "ABOUT POKÉMON.$"

May_Intro::
# 107 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hello! My name is May and I just got a\n"
	.string "really cute Pokémon from RED! He said\l"
	.string "that apparently you and I are going to\l"
	.string "be RIVALS! Whatever that means... But\l"
	.string "okay, RED said that in order to make our\l"
	.string "Pokémon stronger we need to battle\l"
	.string "them. Let's see if we can figure out how\l"
	.string "to do this battle thing... I'll take you\l"
	.string "on!$"

May_Outro::
# 111 "data/maps/WoodholmeCity/scripts.pory"
	.string "Oh wow, cool! That was really fun!\n"
	.string "Except for the losing part... That\l"
	.string "wasn't very fun. That's it. That was the\l"
	.string "last time I lose a Pokémon battle! I'm\l"
	.string "going to go train my Pokémon by\l"
	.string "battling other trainers! RED said that\l"
	.string "the next step for us is to take on the\l"
	.string "Gym Challenge. I'm going to go buy some\l"
	.string "PokéBalls at the PokéMart and then\l"
	.string "head up to Route 1 to try and find some\l"
	.string "more Pokémon for my team. Next time we\l"
	.string "meet I'll be a lot stronger, I promise!\l"
	.string "See you later!$"

May_NotEnoughPokemon::
# 115 "data/maps/WoodholmeCity/scripts.pory"
	.string "You don't have two Pokémon?$"
