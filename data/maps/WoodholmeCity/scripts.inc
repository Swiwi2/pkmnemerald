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
# 16 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, WoodholmeCity_EventScript_SetupRivalBattle_4
WoodholmeCity_EventScript_SetupRivalBattle_3:
# 21 "data/maps/WoodholmeCity/scripts.pory"
	compare VAR_WOODHOLME_STATE, 1
	goto_if_eq WoodholmeCity_EventScript_SetupRivalBattle_9
WoodholmeCity_EventScript_SetupRivalBattle_1:
	return

WoodholmeCity_EventScript_SetupRivalBattle_2:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 18 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 0
	goto WoodholmeCity_EventScript_SetupRivalBattle_1

WoodholmeCity_EventScript_SetupRivalBattle_4:
# 16 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, WoodholmeCity_EventScript_SetupRivalBattle_6
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_6:
# 16 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, WoodholmeCity_EventScript_SetupRivalBattle_2
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_9:
# 22 "data/maps/WoodholmeCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE1
	goto WoodholmeCity_EventScript_SetupRivalBattle_1


WoodholmeCity_EventScript_RivalBattle1::
# 29 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro, RivalBattleOver
	end


RivalBattleOver::
# 34 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 35 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayLeave
# 36 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 1
# 37 "data/maps/WoodholmeCity/scripts.pory"
	removeobject 1
# 38 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 39 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 2
# 40 "data/maps/WoodholmeCity/scripts.pory"
	waitmessage
# 41 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 44 "data/maps/WoodholmeCity/scripts.pory"
MayLeave:
# 45 "data/maps/WoodholmeCity/scripts.pory"
	face_down
# 46 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
# 47 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 48 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 48 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 49 "data/maps/WoodholmeCity/scripts.pory"
	face_up
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 51 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 53 "data/maps/WoodholmeCity/scripts.pory"
	face_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 54 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
	step_end

WoodholmeCity_EventScript_NPC_Fat_Man::
# 66 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 67 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_NPC_Fat_Man_Text_0, MSGBOX_NPC
# 68 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_NPC_Girl3::
# 72 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 73 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_NPC_Fat_Man_Text_0, MSGBOX_NPC
# 74 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_Trigger_BlockPath::
# 78 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 79 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_Trigger_BlockPath_Text_0
# 80 "data/maps/WoodholmeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 81 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_BlockCondo::
# 86 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 87 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_BlockCondo_Text_0
# 88 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 91 "data/maps/WoodholmeCity/scripts.pory"
StopPlayer:
# 92 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
	step_end

WoodholmeCity_EventScript_SignLeavingTown::
# 97 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 98 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 99 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 103 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 104 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 105 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 109 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 110 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 111 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 115 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 116 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 117 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 121 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 122 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 123 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 127 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 128 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 129 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_NPC_Fat_Man_Text_0:
# 67 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hello.$"

WoodholmeCity_Trigger_BlockPath_Text_0:
# 79 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. I'd better visit RED before I\n"
	.string "venture out into the grass.$"

WoodholmeCity_EventScript_BlockCondo_Text_0:
# 87 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. It appears to be locked from the\n"
	.string "inside.$"

WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 98 "data/maps/WoodholmeCity/scripts.pory"
	.string "ROUTE 1 TO SERENLEAF CITY. BEWARE:\n"
	.string "WILD POKÉMON AHEAD.$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 104 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S POKÉMON GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 110 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. CHEAP\n"
	.string "ACCOMMODATION OPTIONS AVAILABLE!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 116 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. LUXURY CONDOS\n"
	.string "FOR YOU AND YOUR POKÉMON!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 122 "data/maps/WoodholmeCity/scripts.pory"
	.string "WOODHOLME REALTY INC. CONDOS WITH THE\n"
	.string "BEST VIEW IN WOODHOLME!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 128 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB: HELPING NEW TRAINERS LEARN\n"
	.string "ABOUT POKÉMON.$"

May_Intro::
# 57 "data/maps/WoodholmeCity/scripts.pory"
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
# 61 "data/maps/WoodholmeCity/scripts.pory"
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
