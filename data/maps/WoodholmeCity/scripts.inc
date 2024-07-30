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
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
# 44 "data/maps/WoodholmeCity/scripts.pory"
	walk_right
	step_end

WoodholmeCity_Trigger_BlockPath::
# 56 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 57 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_Trigger_BlockPath_Text_0
# 58 "data/maps/WoodholmeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 59 "data/maps/WoodholmeCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


# 63 "data/maps/WoodholmeCity/scripts.pory"
StopPlayer:
# 64 "data/maps/WoodholmeCity/scripts.pory"
	walk_down
	step_end

WoodholmeCity_EventScript_SignLeavingTown::
# 68 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 69 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignLeavingTown_Text_0
# 70 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignGym::
# 74 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 75 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignGym_Text_0
# 76 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoTopRight::
# 80 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 81 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoTopRight_Text_0
# 82 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoLeft::
# 86 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 87 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoLeft_Text_0
# 88 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignCondoRight::
# 92 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 93 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignCondoRight_Text_0
# 94 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_EventScript_SignRedsLab::
# 98 "data/maps/WoodholmeCity/scripts.pory"
	lock
# 99 "data/maps/WoodholmeCity/scripts.pory"
	msgbox WoodholmeCity_EventScript_SignRedsLab_Text_0
# 100 "data/maps/WoodholmeCity/scripts.pory"
	release
	return


WoodholmeCity_Trigger_BlockPath_Text_0:
# 57 "data/maps/WoodholmeCity/scripts.pory"
	.string "Hmm. I'd better visit RED before I\n"
	.string "venture out into the grass.$"

WoodholmeCity_EventScript_SignLeavingTown_Text_0:
# 69 "data/maps/WoodholmeCity/scripts.pory"
	.string "BEWARE: WILD POKÉMON LIVE IN TALL\n"
	.string "GRASS.$"

WoodholmeCity_EventScript_SignGym_Text_0:
# 75 "data/maps/WoodholmeCity/scripts.pory"
	.string "STELLA'S POKÉMON GYM$"

WoodholmeCity_EventScript_SignCondoTopRight_Text_0:
# 81 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Cheap\n"
	.string "accommodation options available!$"

WoodholmeCity_EventScript_SignCondoLeft_Text_0:
# 87 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Luxury condos\n"
	.string "for your Pokémon friends!$"

WoodholmeCity_EventScript_SignCondoRight_Text_0:
# 93 "data/maps/WoodholmeCity/scripts.pory"
	.string "Woodholme Realty Inc: Condos with the\n"
	.string "best view in Woodholme!$"

WoodholmeCity_EventScript_SignRedsLab_Text_0:
# 99 "data/maps/WoodholmeCity/scripts.pory"
	.string "RED'S LAB: New trainers welcome!$"

May_Intro::
# 47 "data/maps/WoodholmeCity/scripts.pory"
	.string "Okay, let's see if we can figure this\n"
	.string "battle thing out...$"

May_Outro::
# 51 "data/maps/WoodholmeCity/scripts.pory"
	.string "Oh wow, that was really fun. I'm going to\n"
	.string "train my Pokémon by battling other\l"
	.string "trainers to prepare for the gym\l"
	.string "challenge!$"
