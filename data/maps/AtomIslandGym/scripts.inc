AtomIslandGym_MapScripts::
# 2 "data/maps/AtomIslandGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AtomIslandGym_OnTransition
	.byte 0


AtomIslandGym_OnTransition::
# 11 "data/maps/AtomIslandGym/scripts.pory"
	call AtomIslandGym_EventScript_SetupGymBattle
	return


AtomIslandGym_EventScript_SetupGymBattle::
# 16 "data/maps/AtomIslandGym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, AtomIslandGym_EventScript_SetupGymBattle_1
# 20 "data/maps/AtomIslandGym/scripts.pory"
	setvar VAR_ATOM_ISLAND_GYM_STATE, 1
	return

AtomIslandGym_EventScript_SetupGymBattle_1:
# 17 "data/maps/AtomIslandGym/scripts.pory"
	setvar VAR_ATOM_ISLAND_GYM_STATE, 0
	return


AtomIslandGym_EventScript_Leader::
# 25 "data/maps/AtomIslandGym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, AtomIslandGym_LeaderIntro, AtomIslandGym_LeaderOutro, AtomIslandGym_EventScript_Battle1Over
# 26 "data/maps/AtomIslandGym/scripts.pory"
	msgbox AtomIslandGym_LeaderDialogue_State1
# 27 "data/maps/AtomIslandGym/scripts.pory"
	release
	end


AtomIslandGym_EventScript_Battle1Over::
# 32 "data/maps/AtomIslandGym/scripts.pory"
	lock
# 33 "data/maps/AtomIslandGym/scripts.pory"
	msgbox AtomIslandGym_Heretakethis
# 34 "data/maps/AtomIslandGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 35 "data/maps/AtomIslandGym/scripts.pory"
	message AtomIslandGym_EventScript_Battle1Over_Text_0
# 36 "data/maps/AtomIslandGym/scripts.pory"
	waitfanfare
# 37 "data/maps/AtomIslandGym/scripts.pory"
	closemessage
# 38 "data/maps/AtomIslandGym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 39 "data/maps/AtomIslandGym/scripts.pory"
	setvar VAR_ATOM_ISLAND_GYM_STATE, 1
# 40 "data/maps/AtomIslandGym/scripts.pory"
	goto AtomIslandGym_EventScript_GiveStrength
# 41 "data/maps/AtomIslandGym/scripts.pory"
	release
	end


AtomIslandGym_EventScript_GiveStrength::
# 46 "data/maps/AtomIslandGym/scripts.pory"
	lock
# 47 "data/maps/AtomIslandGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/AtomIslandGym/scripts.pory"
	giveitem ITEM_HM04
# 49 "data/maps/AtomIslandGym/scripts.pory"
	waitfanfare
# 50 "data/maps/AtomIslandGym/scripts.pory"
	closemessage
# 51 "data/maps/AtomIslandGym/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 52 "data/maps/AtomIslandGym/scripts.pory"
	msgbox AtomIslandGym_ExplainStrength
# 53 "data/maps/AtomIslandGym/scripts.pory"
	release
	return


AtomIslandGym_EventScript_Battle1Over_Text_0:
# 35 "data/maps/AtomIslandGym/scripts.pory"
	.string "{PLAYER} received the SIXTH BADGE!$"

AtomIslandGym_ExplainStrength::
# 57 "data/maps/AtomIslandGym/scripts.pory"
	.string "This is Strength!$"

AtomIslandGym_LeaderIntro::
# 61 "data/maps/AtomIslandGym/scripts.pory"
	.string "Heya.$"

AtomIslandGym_LeaderOutro::
# 65 "data/maps/AtomIslandGym/scripts.pory"
	.string "Well done.$"

AtomIslandGym_LeaderDialogue_State1::
# 69 "data/maps/AtomIslandGym/scripts.pory"
	.string "Nice!!$"

AtomIslandGym_Heretakethis::
# 73 "data/maps/AtomIslandGym/scripts.pory"
	.string "Here ya go.$"
