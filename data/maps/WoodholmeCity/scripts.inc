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
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, WoodholmeCity_EventScript_SetupRivalBattle_4
WoodholmeCity_EventScript_SetupRivalBattle_3:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	compare VAR_WOODHOLME_STATE, 1
	goto_if_eq WoodholmeCity_EventScript_SetupRivalBattle_9
WoodholmeCity_EventScript_SetupRivalBattle_1:
	return

WoodholmeCity_EventScript_SetupRivalBattle_2:
# 13 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 14 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 0
	goto WoodholmeCity_EventScript_SetupRivalBattle_1

WoodholmeCity_EventScript_SetupRivalBattle_4:
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, WoodholmeCity_EventScript_SetupRivalBattle_6
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_6:
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, WoodholmeCity_EventScript_SetupRivalBattle_2
	goto WoodholmeCity_EventScript_SetupRivalBattle_3

WoodholmeCity_EventScript_SetupRivalBattle_9:
# 18 "data/maps/WoodholmeCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE1
	goto WoodholmeCity_EventScript_SetupRivalBattle_1


WoodholmeCity_EventScript_RivalBattle1::
# 26 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro, RivalBattleOver
	end


RivalBattleOver::
# 32 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 33 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayLeave
# 34 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 1
# 35 "data/maps/WoodholmeCity/scripts.pory"
	removeobject 1
# 36 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 37 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 2
# 38 "data/maps/WoodholmeCity/scripts.pory"
	waitmessage
# 39 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 42 "data/maps/WoodholmeCity/scripts.pory"
MayLeave:
# 43 "data/maps/WoodholmeCity/scripts.pory"
	face_down
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
# 45 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 46 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 46 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 47 "data/maps/WoodholmeCity/scripts.pory"
	face_up
# 48 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 49 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 50 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 51 "data/maps/WoodholmeCity/scripts.pory"
	face_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
# 52 "data/maps/WoodholmeCity/scripts.pory"
	walk_up
	step_end

WoodholmeCity_Trigger_BlockPath::
# 64 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 65 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_Trigger_BlockPath_Text_0
# 66 "data/maps/WoodholmeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 67 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_BlockCondo::
# 72 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 73 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_BlockCondo_Text_0
# 74 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 77 "data/maps/WoodholmeCity/scripts.pory"
StopPlayer:
# 78 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
	step_end

WoodholmeCity_EventScript_SignLeavingTown::
# 83 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 84 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 85 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 89 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 90 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 91 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 95 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 96 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 97 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 101 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 102 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 103 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 107 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 108 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 109 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 113 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 114 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 115 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_Trigger_BlockPath_Text_0:
# 65 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. I'd better visit RED before I\n"
	.string "venture out into the grass.$"

WoodholmeCity_EventScript_BlockCondo_Text_0:
# 73 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm, it appears to be locked from the\n"
	.string "inside.$"

WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 84 "data/maps/WoodholmeCity/scripts.pory"
	.string "BEWARE: WILD POKÉMON AHEAD. DO NOT\n"
	.string "PROCEED WITHOUT POKÉMON FOR\l"
	.string "PROTECTION.$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 90 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S POKÉMON GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 96 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Cheap\n"
	.string "accommodation options available!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 102 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Luxury condos\n"
	.string "for your Pokémon friends!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 108 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Condos with the\n"
	.string "best view in Woodholme!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 114 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB: Helping new trainers learn\n"
	.string "about Pokémon.$"

May_Intro::
# 55 "data/maps/WoodholmeCity/scripts.pory"
	.string "Okay, RED said that in order to make our\n"
	.string "Pokémon stronger we need to battle\l"
	.string "them. Let's see if we can figure out how\l"
	.string "to battle... I'll take you on!$"

May_Outro::
# 59 "data/maps/WoodholmeCity/scripts.pory"
	.string "Oh wow, that was really fun! Except for\n"
	.string "the losing part... That wasn't very fun.\l"
	.string "I'm going to go train my Pokémon by\l"
	.string "battling other trainers! Next time we\l"
	.string "meet I'll be a lot stronger!$"
