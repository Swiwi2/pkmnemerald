PakkasjarvenGym_MapScripts::
# 2 "data/maps/PakkasjarvenGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PakkasjarvenGym_OnTransition
	.byte 0


PakkasjarvenGym_OnTransition::
# 12 "data/maps/PakkasjarvenGym/scripts.pory"
	call PakkasjarvenGym_EventScript_SetupGymBattle
	return


PakkasjarvenGym_EventScript_SetupGymBattle::
# 17 "data/maps/PakkasjarvenGym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PakkasjarvenGym_EventScript_SetupGymBattle_1
# 21 "data/maps/PakkasjarvenGym/scripts.pory"
	setvar VAR_PAKKASJARVEN_GYM_STATE, 1
	return

PakkasjarvenGym_EventScript_SetupGymBattle_1:
# 18 "data/maps/PakkasjarvenGym/scripts.pory"
	setvar VAR_PAKKASJARVEN_GYM_STATE, 0
	return


PakkasjarvenGym_EventScript_Leader::
# 26 "data/maps/PakkasjarvenGym/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, PakkasjarvenGym_LeaderIntro, PakkasjarvenGym_LeaderOutro, PakkasjarvenGym_EventScript_Battle1Over
# 27 "data/maps/PakkasjarvenGym/scripts.pory"
	msgbox PakkasjarvenGym_LeaderDialogue_State1
# 28 "data/maps/PakkasjarvenGym/scripts.pory"
	release
	end


PakkasjarvenGym_EventScript_Battle1Over::
# 33 "data/maps/PakkasjarvenGym/scripts.pory"
	lock
# 34 "data/maps/PakkasjarvenGym/scripts.pory"
	msgbox PakkasjarvenGym_Heretakethis
# 35 "data/maps/PakkasjarvenGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 36 "data/maps/PakkasjarvenGym/scripts.pory"
	message PakkasjarvenGym_EventScript_Battle1Over_Text_0
# 37 "data/maps/PakkasjarvenGym/scripts.pory"
	waitfanfare
# 38 "data/maps/PakkasjarvenGym/scripts.pory"
	closemessage
# 39 "data/maps/PakkasjarvenGym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 40 "data/maps/PakkasjarvenGym/scripts.pory"
	setvar VAR_PAKKASJARVEN_GYM_STATE, 1
# 41 "data/maps/PakkasjarvenGym/scripts.pory"
	goto PakkasjarvenGym_EventScript_GiveSurf
# 42 "data/maps/PakkasjarvenGym/scripts.pory"
	release
	end


PakkasjarvenGym_EventScript_GiveSurf::
# 47 "data/maps/PakkasjarvenGym/scripts.pory"
	lock
# 48 "data/maps/PakkasjarvenGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/PakkasjarvenGym/scripts.pory"
	giveitem ITEM_HM03
# 50 "data/maps/PakkasjarvenGym/scripts.pory"
	waitfanfare
# 51 "data/maps/PakkasjarvenGym/scripts.pory"
	closemessage
# 52 "data/maps/PakkasjarvenGym/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 53 "data/maps/PakkasjarvenGym/scripts.pory"
	msgbox PakkasjarvenGym_ExplainSurf
# 54 "data/maps/PakkasjarvenGym/scripts.pory"
	release
	return


PakkasjarvenGym_EventScript_Battle1Over_Text_0:
# 36 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "{PLAYER} received the FIFTH BADGE!$"

PakkasjarvenGym_ExplainSurf::
# 58 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "This is Surf!$"

PakkasjarvenGym_LeaderIntro::
# 62 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "Heya!$"

PakkasjarvenGym_LeaderOutro::
# 66 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "Nice.$"

PakkasjarvenGym_LeaderDialogue_State1::
# 70 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "Well done.$"

PakkasjarvenGym_Heretakethis::
# 74 "data/maps/PakkasjarvenGym/scripts.pory"
	.string "Here's your badge!$"
