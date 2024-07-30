WoodholmeCity_MapScripts::
# 2 "data/maps/WoodholmeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WoodholmeCity_OnTransition
	.byte 0


WoodholmeCity_OnTransition::
# 6 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_VISITED_WOODHOLMECITY
# 7 "data/maps/WoodholmeCity/scripts.pory"
	goto WoodholmeCity_EventScript_SetupRivalBattle
	return


WoodholmeCity_EventScript_SetupRivalBattle::
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_BULBASAUR, WoodholmeCity_EventScript_SetupRivalBattle_3
WoodholmeCity_EventScript_SetupRivalBattle_2:
# 17 "data/maps/WoodholmeCity/scripts.pory"
	compare VAR_WOODHOLME_STATE, 0
	goto_if_eq WoodholmeCity_EventScript_SetupRivalBattle_8
	return

WoodholmeCity_EventScript_SetupRivalBattle_1:
# 13 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 14 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 0
	return

WoodholmeCity_EventScript_SetupRivalBattle_3:
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_CHARMANDER, WoodholmeCity_EventScript_SetupRivalBattle_5
	goto WoodholmeCity_EventScript_SetupRivalBattle_2

WoodholmeCity_EventScript_SetupRivalBattle_5:
# 12 "data/maps/WoodholmeCity/scripts.pory"
	goto_if_unset FLAG_STARTER_SQUIRTLE, WoodholmeCity_EventScript_SetupRivalBattle_1
	goto WoodholmeCity_EventScript_SetupRivalBattle_2

WoodholmeCity_EventScript_SetupRivalBattle_8:
# 18 "data/maps/WoodholmeCity/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE1
	return


WoodholmeCity_EventScript_RivalBattle1::
# 25 "data/maps/WoodholmeCity/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, May_Intro, May_Outro, RivalBattleOver
	end


RivalBattleOver::
# 31 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 32 "data/maps/WoodholmeCity/scripts.pory"
	applymovement 1, MayLeave
# 33 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/WoodholmeCity/scripts.pory"
	removeobject 1
# 35 "data/maps/WoodholmeCity/scripts.pory"
	setflag FLAG_RIVAL_BATTLE1
# 36 "data/maps/WoodholmeCity/scripts.pory"
	setvar VAR_WOODHOLME_STATE, 1
# 37 "data/maps/WoodholmeCity/scripts.pory"
	waitmessage
# 38 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 41 "data/maps/WoodholmeCity/scripts.pory"
MayLeave:
# 42 "data/maps/WoodholmeCity/scripts.pory"
	face_down
# 43 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
# 44 "data/maps/WoodholmeCity/scripts.pory"
	face_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 45 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
	step_end

WoodholmeCity_Trigger_BlockPath::
# 57 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 58 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_Trigger_BlockPath_Text_0
# 59 "data/maps/WoodholmeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 60 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_BlockCondo::
# 65 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 66 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_BlockCondo_Text_0
# 67 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 70 "data/maps/WoodholmeCity/scripts.pory"
StopPlayer:
# 71 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
	step_end

WoodholmeCity_EventScript_SignLeavingTown::
# 76 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 77 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 78 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 82 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 83 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 84 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 88 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 89 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 90 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 94 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 95 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 96 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 100 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 101 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 102 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 106 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 107 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 108 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_Trigger_BlockPath_Text_0:
# 58 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. I'd better visit RED before I\n"
	.string "venture out into the grass.$"

WoodholmeCity_EventScript_BlockCondo_Text_0:
# 66 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm, it appears to be locked from the\n"
	.string "inside.$"

WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 77 "data/maps/WoodholmeCity/scripts.pory"
	.string "BEWARE: WILD POKÉMON AHEAD. DO NOT\n"
	.string "PROCEED WITHOUT POKÉMON FOR\l"
	.string "PROTECTION.$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 83 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S POKÉMON GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 89 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Cheap\n"
	.string "accommodation options available!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 95 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Luxury condos\n"
	.string "for your Pokémon friends!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 101 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Condos with the\n"
	.string "best view in Woodholme!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 107 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB: Helping new trainers learn\n"
	.string "about Pokémon.$"

May_Intro::
# 48 "data/maps/WoodholmeCity/scripts.pory"
	.string "Okay, RED said that in order to make our\n"
	.string "Pokémon stronger we need to battle\l"
	.string "them. Let's see if we can figure out how\l"
	.string "to battle... I'll take you on!$"

May_Outro::
# 52 "data/maps/WoodholmeCity/scripts.pory"
	.string "Oh wow, that was really fun! Except for\n"
	.string "the losing part... That wasn't very fun.\l"
	.string "I'm going to go train my Pokémon by\l"
	.string "battling other trainers! Next time we\l"
	.string "meet I'll be a lot stronger!$"
