EnimerosGym_MapScripts::
# 2 "data/maps/EnimerosGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EnimerosGym_OnTransition
	.byte 0


EnimerosGym_OnTransition::
# 11 "data/maps/EnimerosGym/scripts.pory"
	call EnimerosGym_EventScript_SetupGymBattle
	return


EnimerosGym_EventScript_SetupGymBattle::
# 16 "data/maps/EnimerosGym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EnimerosGym_EventScript_SetupGymBattle_1
# 20 "data/maps/EnimerosGym/scripts.pory"
	setvar VAR_ENIMEROS_GYM_STATE, 1
	return

EnimerosGym_EventScript_SetupGymBattle_1:
# 17 "data/maps/EnimerosGym/scripts.pory"
	setvar VAR_ENIMEROS_GYM_STATE, 0
	return


EnimerosGym_EventScript_Leader::
# 25 "data/maps/EnimerosGym/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_1, EnimerosGym_LeaderIntro, EnimerosGym_LeaderOutro, EnimerosGym_EventScript_Battle1Over
# 26 "data/maps/EnimerosGym/scripts.pory"
	msgbox EnimerosGym_LeaderDialogue_State1
# 27 "data/maps/EnimerosGym/scripts.pory"
	release
	end


EnimerosGym_EventScript_Battle1Over::
# 32 "data/maps/EnimerosGym/scripts.pory"
	lock
# 33 "data/maps/EnimerosGym/scripts.pory"
	msgbox EnimerosGym_Heretakethis
# 34 "data/maps/EnimerosGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 35 "data/maps/EnimerosGym/scripts.pory"
	message EnimerosGym_EventScript_Battle1Over_Text_0
# 36 "data/maps/EnimerosGym/scripts.pory"
	waitfanfare
# 37 "data/maps/EnimerosGym/scripts.pory"
	closemessage
# 38 "data/maps/EnimerosGym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 39 "data/maps/EnimerosGym/scripts.pory"
	setvar VAR_ENIMEROS_GYM_STATE, 1
# 40 "data/maps/EnimerosGym/scripts.pory"
	release
	end


EnimerosGym_EventScript_Battle1Over_Text_0:
# 35 "data/maps/EnimerosGym/scripts.pory"
	.string "{PLAYER} received the FOURTH BADGE!$"

EnimerosGym_LeaderIntro::
# 44 "data/maps/EnimerosGym/scripts.pory"
	.string "Yoyo..$"

EnimerosGym_LeaderOutro::
# 48 "data/maps/EnimerosGym/scripts.pory"
	.string "YIKES!$"

EnimerosGym_LeaderDialogue_State1::
# 52 "data/maps/EnimerosGym/scripts.pory"
	.string "Well done!$"

EnimerosGym_Heretakethis::
# 56 "data/maps/EnimerosGym/scripts.pory"
	.string "Here's the badge! You're on fire! HEHE.$"
